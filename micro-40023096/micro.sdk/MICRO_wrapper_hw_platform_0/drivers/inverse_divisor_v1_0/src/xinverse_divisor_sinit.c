// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.1 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __linux__

#include "xstatus.h"
#include "xparameters.h"
#include "xinverse_divisor.h"

extern XInverse_divisor_Config XInverse_divisor_ConfigTable[];

XInverse_divisor_Config *XInverse_divisor_LookupConfig(u16 DeviceId) {
	XInverse_divisor_Config *ConfigPtr = NULL;

	int Index;

	for (Index = 0; Index < XPAR_XINVERSE_DIVISOR_NUM_INSTANCES; Index++) {
		if (XInverse_divisor_ConfigTable[Index].DeviceId == DeviceId) {
			ConfigPtr = &XInverse_divisor_ConfigTable[Index];
			break;
		}
	}

	return ConfigPtr;
}

int XInverse_divisor_Initialize(XInverse_divisor *InstancePtr, u16 DeviceId) {
	XInverse_divisor_Config *ConfigPtr;

	Xil_AssertNonvoid(InstancePtr != NULL);

	ConfigPtr = XInverse_divisor_LookupConfig(DeviceId);
	if (ConfigPtr == NULL) {
		InstancePtr->IsReady = 0;
		return (XST_DEVICE_NOT_FOUND);
	}

	return XInverse_divisor_CfgInitialize(InstancePtr, ConfigPtr);
}

#endif

