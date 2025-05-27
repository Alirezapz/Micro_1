// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.1 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
/***************************** Include Files *********************************/
#include "xinverse_divisor.h"

/************************** Function Implementation *************************/
#ifndef __linux__
int XInverse_divisor_CfgInitialize(XInverse_divisor *InstancePtr, XInverse_divisor_Config *ConfigPtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(ConfigPtr != NULL);

    InstancePtr->Ctrl_bus_BaseAddress = ConfigPtr->Ctrl_bus_BaseAddress;
    InstancePtr->IsReady = XIL_COMPONENT_IS_READY;

    return XST_SUCCESS;
}
#endif

void XInverse_divisor_Start(XInverse_divisor *InstancePtr) {
    u32 Data;

    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XInverse_divisor_ReadReg(InstancePtr->Ctrl_bus_BaseAddress, XINVERSE_DIVISOR_CTRL_BUS_ADDR_AP_CTRL) & 0x80;
    XInverse_divisor_WriteReg(InstancePtr->Ctrl_bus_BaseAddress, XINVERSE_DIVISOR_CTRL_BUS_ADDR_AP_CTRL, Data | 0x01);
}

u32 XInverse_divisor_IsDone(XInverse_divisor *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XInverse_divisor_ReadReg(InstancePtr->Ctrl_bus_BaseAddress, XINVERSE_DIVISOR_CTRL_BUS_ADDR_AP_CTRL);
    return (Data >> 1) & 0x1;
}

u32 XInverse_divisor_IsIdle(XInverse_divisor *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XInverse_divisor_ReadReg(InstancePtr->Ctrl_bus_BaseAddress, XINVERSE_DIVISOR_CTRL_BUS_ADDR_AP_CTRL);
    return (Data >> 2) & 0x1;
}

u32 XInverse_divisor_IsReady(XInverse_divisor *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XInverse_divisor_ReadReg(InstancePtr->Ctrl_bus_BaseAddress, XINVERSE_DIVISOR_CTRL_BUS_ADDR_AP_CTRL);
    // check ap_start to see if the pcore is ready for next input
    return !(Data & 0x1);
}

void XInverse_divisor_EnableAutoRestart(XInverse_divisor *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XInverse_divisor_WriteReg(InstancePtr->Ctrl_bus_BaseAddress, XINVERSE_DIVISOR_CTRL_BUS_ADDR_AP_CTRL, 0x80);
}

void XInverse_divisor_DisableAutoRestart(XInverse_divisor *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XInverse_divisor_WriteReg(InstancePtr->Ctrl_bus_BaseAddress, XINVERSE_DIVISOR_CTRL_BUS_ADDR_AP_CTRL, 0);
}

u32 XInverse_divisor_Get_return(XInverse_divisor *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XInverse_divisor_ReadReg(InstancePtr->Ctrl_bus_BaseAddress, XINVERSE_DIVISOR_CTRL_BUS_ADDR_AP_RETURN);
    return Data;
}
void XInverse_divisor_Set_c0(XInverse_divisor *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XInverse_divisor_WriteReg(InstancePtr->Ctrl_bus_BaseAddress, XINVERSE_DIVISOR_CTRL_BUS_ADDR_C0_DATA, Data);
}

u32 XInverse_divisor_Get_c0(XInverse_divisor *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XInverse_divisor_ReadReg(InstancePtr->Ctrl_bus_BaseAddress, XINVERSE_DIVISOR_CTRL_BUS_ADDR_C0_DATA);
    return Data;
}

void XInverse_divisor_Set_c1(XInverse_divisor *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XInverse_divisor_WriteReg(InstancePtr->Ctrl_bus_BaseAddress, XINVERSE_DIVISOR_CTRL_BUS_ADDR_C1_DATA, Data);
}

u32 XInverse_divisor_Get_c1(XInverse_divisor *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XInverse_divisor_ReadReg(InstancePtr->Ctrl_bus_BaseAddress, XINVERSE_DIVISOR_CTRL_BUS_ADDR_C1_DATA);
    return Data;
}

void XInverse_divisor_Set_c2(XInverse_divisor *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XInverse_divisor_WriteReg(InstancePtr->Ctrl_bus_BaseAddress, XINVERSE_DIVISOR_CTRL_BUS_ADDR_C2_DATA, Data);
}

u32 XInverse_divisor_Get_c2(XInverse_divisor *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XInverse_divisor_ReadReg(InstancePtr->Ctrl_bus_BaseAddress, XINVERSE_DIVISOR_CTRL_BUS_ADDR_C2_DATA);
    return Data;
}

void XInverse_divisor_Set_c3(XInverse_divisor *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XInverse_divisor_WriteReg(InstancePtr->Ctrl_bus_BaseAddress, XINVERSE_DIVISOR_CTRL_BUS_ADDR_C3_DATA, Data);
}

u32 XInverse_divisor_Get_c3(XInverse_divisor *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XInverse_divisor_ReadReg(InstancePtr->Ctrl_bus_BaseAddress, XINVERSE_DIVISOR_CTRL_BUS_ADDR_C3_DATA);
    return Data;
}

void XInverse_divisor_Set_c4(XInverse_divisor *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XInverse_divisor_WriteReg(InstancePtr->Ctrl_bus_BaseAddress, XINVERSE_DIVISOR_CTRL_BUS_ADDR_C4_DATA, Data);
}

u32 XInverse_divisor_Get_c4(XInverse_divisor *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XInverse_divisor_ReadReg(InstancePtr->Ctrl_bus_BaseAddress, XINVERSE_DIVISOR_CTRL_BUS_ADDR_C4_DATA);
    return Data;
}

void XInverse_divisor_Set_c5(XInverse_divisor *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XInverse_divisor_WriteReg(InstancePtr->Ctrl_bus_BaseAddress, XINVERSE_DIVISOR_CTRL_BUS_ADDR_C5_DATA, Data);
}

u32 XInverse_divisor_Get_c5(XInverse_divisor *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XInverse_divisor_ReadReg(InstancePtr->Ctrl_bus_BaseAddress, XINVERSE_DIVISOR_CTRL_BUS_ADDR_C5_DATA);
    return Data;
}

void XInverse_divisor_Set_c6(XInverse_divisor *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XInverse_divisor_WriteReg(InstancePtr->Ctrl_bus_BaseAddress, XINVERSE_DIVISOR_CTRL_BUS_ADDR_C6_DATA, Data);
}

u32 XInverse_divisor_Get_c6(XInverse_divisor *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XInverse_divisor_ReadReg(InstancePtr->Ctrl_bus_BaseAddress, XINVERSE_DIVISOR_CTRL_BUS_ADDR_C6_DATA);
    return Data;
}

void XInverse_divisor_Set_c7(XInverse_divisor *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XInverse_divisor_WriteReg(InstancePtr->Ctrl_bus_BaseAddress, XINVERSE_DIVISOR_CTRL_BUS_ADDR_C7_DATA, Data);
}

u32 XInverse_divisor_Get_c7(XInverse_divisor *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XInverse_divisor_ReadReg(InstancePtr->Ctrl_bus_BaseAddress, XINVERSE_DIVISOR_CTRL_BUS_ADDR_C7_DATA);
    return Data;
}

void XInverse_divisor_Set_c8(XInverse_divisor *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XInverse_divisor_WriteReg(InstancePtr->Ctrl_bus_BaseAddress, XINVERSE_DIVISOR_CTRL_BUS_ADDR_C8_DATA, Data);
}

u32 XInverse_divisor_Get_c8(XInverse_divisor *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XInverse_divisor_ReadReg(InstancePtr->Ctrl_bus_BaseAddress, XINVERSE_DIVISOR_CTRL_BUS_ADDR_C8_DATA);
    return Data;
}

void XInverse_divisor_InterruptGlobalEnable(XInverse_divisor *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XInverse_divisor_WriteReg(InstancePtr->Ctrl_bus_BaseAddress, XINVERSE_DIVISOR_CTRL_BUS_ADDR_GIE, 1);
}

void XInverse_divisor_InterruptGlobalDisable(XInverse_divisor *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XInverse_divisor_WriteReg(InstancePtr->Ctrl_bus_BaseAddress, XINVERSE_DIVISOR_CTRL_BUS_ADDR_GIE, 0);
}

void XInverse_divisor_InterruptEnable(XInverse_divisor *InstancePtr, u32 Mask) {
    u32 Register;

    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Register =  XInverse_divisor_ReadReg(InstancePtr->Ctrl_bus_BaseAddress, XINVERSE_DIVISOR_CTRL_BUS_ADDR_IER);
    XInverse_divisor_WriteReg(InstancePtr->Ctrl_bus_BaseAddress, XINVERSE_DIVISOR_CTRL_BUS_ADDR_IER, Register | Mask);
}

void XInverse_divisor_InterruptDisable(XInverse_divisor *InstancePtr, u32 Mask) {
    u32 Register;

    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Register =  XInverse_divisor_ReadReg(InstancePtr->Ctrl_bus_BaseAddress, XINVERSE_DIVISOR_CTRL_BUS_ADDR_IER);
    XInverse_divisor_WriteReg(InstancePtr->Ctrl_bus_BaseAddress, XINVERSE_DIVISOR_CTRL_BUS_ADDR_IER, Register & (~Mask));
}

void XInverse_divisor_InterruptClear(XInverse_divisor *InstancePtr, u32 Mask) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XInverse_divisor_WriteReg(InstancePtr->Ctrl_bus_BaseAddress, XINVERSE_DIVISOR_CTRL_BUS_ADDR_ISR, Mask);
}

u32 XInverse_divisor_InterruptGetEnabled(XInverse_divisor *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XInverse_divisor_ReadReg(InstancePtr->Ctrl_bus_BaseAddress, XINVERSE_DIVISOR_CTRL_BUS_ADDR_IER);
}

u32 XInverse_divisor_InterruptGetStatus(XInverse_divisor *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XInverse_divisor_ReadReg(InstancePtr->Ctrl_bus_BaseAddress, XINVERSE_DIVISOR_CTRL_BUS_ADDR_ISR);
}

