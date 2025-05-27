// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.1 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef XINVERSE_DIVISOR_H
#define XINVERSE_DIVISOR_H

#ifdef __cplusplus
extern "C" {
#endif

/***************************** Include Files *********************************/
#ifndef __linux__
#include "xil_types.h"
#include "xil_assert.h"
#include "xstatus.h"
#include "xil_io.h"
#else
#include <stdint.h>
#include <assert.h>
#include <dirent.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/mman.h>
#include <unistd.h>
#include <stddef.h>
#endif
#include "xinverse_divisor_hw.h"

/**************************** Type Definitions ******************************/
#ifdef __linux__
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
#else
typedef struct {
    u16 DeviceId;
    u32 Ctrl_bus_BaseAddress;
} XInverse_divisor_Config;
#endif

typedef struct {
    u32 Ctrl_bus_BaseAddress;
    u32 IsReady;
} XInverse_divisor;

/***************** Macros (Inline Functions) Definitions *********************/
#ifndef __linux__
#define XInverse_divisor_WriteReg(BaseAddress, RegOffset, Data) \
    Xil_Out32((BaseAddress) + (RegOffset), (u32)(Data))
#define XInverse_divisor_ReadReg(BaseAddress, RegOffset) \
    Xil_In32((BaseAddress) + (RegOffset))
#else
#define XInverse_divisor_WriteReg(BaseAddress, RegOffset, Data) \
    *(volatile u32*)((BaseAddress) + (RegOffset)) = (u32)(Data)
#define XInverse_divisor_ReadReg(BaseAddress, RegOffset) \
    *(volatile u32*)((BaseAddress) + (RegOffset))

#define Xil_AssertVoid(expr)    assert(expr)
#define Xil_AssertNonvoid(expr) assert(expr)

#define XST_SUCCESS             0
#define XST_DEVICE_NOT_FOUND    2
#define XST_OPEN_DEVICE_FAILED  3
#define XIL_COMPONENT_IS_READY  1
#endif

/************************** Function Prototypes *****************************/
#ifndef __linux__
int XInverse_divisor_Initialize(XInverse_divisor *InstancePtr, u16 DeviceId);
XInverse_divisor_Config* XInverse_divisor_LookupConfig(u16 DeviceId);
int XInverse_divisor_CfgInitialize(XInverse_divisor *InstancePtr, XInverse_divisor_Config *ConfigPtr);
#else
int XInverse_divisor_Initialize(XInverse_divisor *InstancePtr, const char* InstanceName);
int XInverse_divisor_Release(XInverse_divisor *InstancePtr);
#endif

void XInverse_divisor_Start(XInverse_divisor *InstancePtr);
u32 XInverse_divisor_IsDone(XInverse_divisor *InstancePtr);
u32 XInverse_divisor_IsIdle(XInverse_divisor *InstancePtr);
u32 XInverse_divisor_IsReady(XInverse_divisor *InstancePtr);
void XInverse_divisor_EnableAutoRestart(XInverse_divisor *InstancePtr);
void XInverse_divisor_DisableAutoRestart(XInverse_divisor *InstancePtr);
u32 XInverse_divisor_Get_return(XInverse_divisor *InstancePtr);

void XInverse_divisor_Set_c0(XInverse_divisor *InstancePtr, u32 Data);
u32 XInverse_divisor_Get_c0(XInverse_divisor *InstancePtr);
void XInverse_divisor_Set_c1(XInverse_divisor *InstancePtr, u32 Data);
u32 XInverse_divisor_Get_c1(XInverse_divisor *InstancePtr);
void XInverse_divisor_Set_c2(XInverse_divisor *InstancePtr, u32 Data);
u32 XInverse_divisor_Get_c2(XInverse_divisor *InstancePtr);
void XInverse_divisor_Set_c3(XInverse_divisor *InstancePtr, u32 Data);
u32 XInverse_divisor_Get_c3(XInverse_divisor *InstancePtr);
void XInverse_divisor_Set_c4(XInverse_divisor *InstancePtr, u32 Data);
u32 XInverse_divisor_Get_c4(XInverse_divisor *InstancePtr);
void XInverse_divisor_Set_c5(XInverse_divisor *InstancePtr, u32 Data);
u32 XInverse_divisor_Get_c5(XInverse_divisor *InstancePtr);
void XInverse_divisor_Set_c6(XInverse_divisor *InstancePtr, u32 Data);
u32 XInverse_divisor_Get_c6(XInverse_divisor *InstancePtr);
void XInverse_divisor_Set_c7(XInverse_divisor *InstancePtr, u32 Data);
u32 XInverse_divisor_Get_c7(XInverse_divisor *InstancePtr);
void XInverse_divisor_Set_c8(XInverse_divisor *InstancePtr, u32 Data);
u32 XInverse_divisor_Get_c8(XInverse_divisor *InstancePtr);

void XInverse_divisor_InterruptGlobalEnable(XInverse_divisor *InstancePtr);
void XInverse_divisor_InterruptGlobalDisable(XInverse_divisor *InstancePtr);
void XInverse_divisor_InterruptEnable(XInverse_divisor *InstancePtr, u32 Mask);
void XInverse_divisor_InterruptDisable(XInverse_divisor *InstancePtr, u32 Mask);
void XInverse_divisor_InterruptClear(XInverse_divisor *InstancePtr, u32 Mask);
u32 XInverse_divisor_InterruptGetEnabled(XInverse_divisor *InstancePtr);
u32 XInverse_divisor_InterruptGetStatus(XInverse_divisor *InstancePtr);

#ifdef __cplusplus
}
#endif

#endif
