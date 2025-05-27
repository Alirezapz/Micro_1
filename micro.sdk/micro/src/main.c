#include <stdio.h>
#include "xparameters.h"
#include "xuartlite.h"
#include "xgpio.h"
#include "xil_printf.h"
#include "xil_types.h"

// Global GPIO instances
XGpio dividerOut, dividerOutRdy, grayOut, grayOutRdy, errorOut;

// UART instance
XUartLite uartInstance;

// Device Addresses (update these with your actual values from xparameters.h)
#define UART_DEVICE_ID      XPAR_AXI_UARTLITE_0_DEVICE_ID
#define GPIO_0_DEVICE_ID    XPAR_AXI_GPIO_0_DEVICE_ID
#define GPIO_1_DEVICE_ID    XPAR_AXI_GPIO_1_DEVICE_ID
#define GPIO_2_DEVICE_ID    XPAR_AXI_GPIO_2_DEVICE_ID
#define GPIO_3_DEVICE_ID    XPAR_AXI_GPIO_3_DEVICE_ID
#define GPIO_4_DEVICE_ID    XPAR_AXI_GPIO_4_DEVICE_ID

// Command Definitions
#define HEADER          0x3B
#define DIVIDE_COMMAND  0x00
#define RGB_GRAY_COMM   0xFF

// Function prototypes
void processDivideCommand(u8* data);
void processRGBtoGrayCommand(u8* data);
u8 calculateChecksum(u8* data, u8 length);
void setError(u8 errorCode);

int main() {
    u8 receivedData[12];  // Buffer for received data
    u8 dataIndex = 0;
    u8 byteCount = 0;
    u8 currentByte;
    u8 checksum;
    u8 expectedChecksum;
    int status;

    // Initialize UART
    status = XUartLite_Initialize(&uartInstance, UART_DEVICE_ID);
    if (status != XST_SUCCESS) {
        xil_printf("UART Initialization Failed\r\n");
        return XST_FAILURE;
    }

    // Initialize GPIOs
    status  = XGpio_Initialize(&dividerOut, GPIO_0_DEVICE_ID);
    status |= XGpio_Initialize(&dividerOutRdy, GPIO_1_DEVICE_ID);
    status |= XGpio_Initialize(&grayOut, GPIO_2_DEVICE_ID);
    status |= XGpio_Initialize(&grayOutRdy, GPIO_3_DEVICE_ID);
    status |= XGpio_Initialize(&errorOut, GPIO_4_DEVICE_ID);

    if (status != XST_SUCCESS) {
        xil_printf("GPIO Initialization Failed\r\n");
        return XST_FAILURE;
    }

    // Set GPIO directions (1=input, 0=output)
    XGpio_SetDataDirection(&dividerOut, 1, 0x00000000);    // 32-bit output
    XGpio_SetDataDirection(&dividerOutRdy, 1, 0x0);        // 1-bit output
    XGpio_SetDataDirection(&grayOut, 1, 0x0);              // 1-bit output
    XGpio_SetDataDirection(&grayOutRdy, 1, 0x0);           // 1-bit output
    XGpio_SetDataDirection(&errorOut, 1, 0x0);             // 1-bit output

    // Initialize all outputs to zero
    XGpio_DiscreteWrite(&dividerOut, 1, 0x00000000);
    XGpio_DiscreteWrite(&dividerOutRdy, 1, 0x0);
    XGpio_DiscreteWrite(&grayOut, 1, 0x0);
    XGpio_DiscreteWrite(&grayOutRdy, 1, 0x0);
    XGpio_DiscreteWrite(&errorOut, 1, 0x0);

    xil_printf("System Initialization Complete\r\n");
    xil_printf("Waiting for commands...\r\n");

    while (1) {
        // Wait for and receive a byte
        while (XUartLite_Recv(&uartInstance, &currentByte, 1) == 0);

        // Check for header
        if (currentByte == HEADER && dataIndex == 0) {
            receivedData[dataIndex++] = currentByte;
            continue;
        }

        // If we have header, process command
        if (dataIndex > 0) {
            receivedData[dataIndex++] = currentByte;

            // First byte after header is command
            if (dataIndex == 2) {
                switch (currentByte) {
                    case DIVIDE_COMMAND:
                        byteCount = 9;  // Need 9 more bytes
                        break;
                    case RGB_GRAY_COMM:
                        byteCount = 3;  // Need 3 more bytes (R, G, B)
                        break;
                    default:
                        // Invalid command
                        setError(0x01);  // Invalid command error
                        dataIndex = 0;
                        xil_printf("Invalid Command Received\r\n");
                        break;
                }
            }

            // Check if we've received all expected data
            if (dataIndex == (byteCount + 2 + 1)) {  // +2 for header/command, +1 for checksum
                // Verify checksum (last byte)
                expectedChecksum = receivedData[dataIndex-1];
                checksum = calculateChecksum(receivedData, dataIndex-1);

                if (checksum != expectedChecksum) {
                    setError(0x02);  // Checksum error
                    xil_printf("Checksum Error\r\n");
                } else {
                    // Process command
                    switch (receivedData[1]) {  // Command byte
                        case DIVIDE_COMMAND:
                            processDivideCommand(receivedData);
                            xil_printf("Divide Command Processed\r\n");
                            break;
                        case RGB_GRAY_COMM:
                            processRGBtoGrayCommand(receivedData);
                            xil_printf("RGB to Gray Command Processed\r\n");
                            break;
                    }
                }

                // Reset for next command
                dataIndex = 0;
            }
        }
    }

    return 0;
}

void processDivideCommand(u8* data) {
    // Data starts at index 2 (after header and command)
    // 9 bytes of data expected

    u32 sum = 0;
    for (int i = 0; i < 9; i++) {
        sum += data[2 + i];
    }

    // Output to divider output GPIO
    XGpio_DiscreteWrite(&dividerOut, 1, sum);

    // Pulse ready signal
    XGpio_DiscreteWrite(&dividerOutRdy, 1, 1);
    for (volatile int i = 0; i < 1000; i++);  // Small delay
    XGpio_DiscreteWrite(&dividerOutRdy, 1, 0);
}

void processRGBtoGrayCommand(u8* data) {
    // Data starts at index 2 (after header and command)
    // 3 bytes: R, G, B

    u8 R = data[2];
    u8 G = data[3];
    u8 B = data[4];

    // Convert to grayscale using standard weights
    // Using fixed-point arithmetic for better performance
    u16 gray = (299 * R + 587 * G + 114 * B) / 1000;

    // Output to gray output GPIO
    XGpio_DiscreteWrite(&grayOut, 1, (u8)gray);

    // Pulse ready signal
    XGpio_DiscreteWrite(&grayOutRdy, 1, 1);
    for (volatile int i = 0; i < 1000; i++);  // Small delay
    XGpio_DiscreteWrite(&grayOutRdy, 1, 0);
}

u8 calculateChecksum(u8* data, u8 length) {
    u8 sum = 0;
    for (int i = 0; i < length; i++) {
        sum += data[i];
    }
    return sum;
}

void setError(u8 errorCode) {
    XGpio_DiscreteWrite(&errorOut, 1, 1);  // Set error signal high
    for (volatile int i = 0; i < 100000; i++);  // Longer delay for visibility
    XGpio_DiscreteWrite(&errorOut, 1, 0);  // Clear error signal
}
