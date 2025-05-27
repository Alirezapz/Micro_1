// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.1 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
// CTRL_BUS
// 0x00 : Control signals
//        bit 0  - ap_start (Read/Write/COH)
//        bit 1  - ap_done (Read/COR)
//        bit 2  - ap_idle (Read)
//        bit 3  - ap_ready (Read)
//        bit 7  - auto_restart (Read/Write)
//        others - reserved
// 0x04 : Global Interrupt Enable Register
//        bit 0  - Global Interrupt Enable (Read/Write)
//        others - reserved
// 0x08 : IP Interrupt Enable Register (Read/Write)
//        bit 0  - Channel 0 (ap_done)
//        bit 1  - Channel 1 (ap_ready)
//        others - reserved
// 0x0c : IP Interrupt Status Register (Read/TOW)
//        bit 0  - Channel 0 (ap_done)
//        bit 1  - Channel 1 (ap_ready)
//        others - reserved
// 0x10 : Data signal of ap_return
//        bit 31~0 - ap_return[31:0] (Read)
// 0x18 : Data signal of c0
//        bit 7~0 - c0[7:0] (Read/Write)
//        others  - reserved
// 0x1c : reserved
// 0x20 : Data signal of c1
//        bit 7~0 - c1[7:0] (Read/Write)
//        others  - reserved
// 0x24 : reserved
// 0x28 : Data signal of c2
//        bit 7~0 - c2[7:0] (Read/Write)
//        others  - reserved
// 0x2c : reserved
// 0x30 : Data signal of c3
//        bit 7~0 - c3[7:0] (Read/Write)
//        others  - reserved
// 0x34 : reserved
// 0x38 : Data signal of c4
//        bit 7~0 - c4[7:0] (Read/Write)
//        others  - reserved
// 0x3c : reserved
// 0x40 : Data signal of c5
//        bit 7~0 - c5[7:0] (Read/Write)
//        others  - reserved
// 0x44 : reserved
// 0x48 : Data signal of c6
//        bit 7~0 - c6[7:0] (Read/Write)
//        others  - reserved
// 0x4c : reserved
// 0x50 : Data signal of c7
//        bit 7~0 - c7[7:0] (Read/Write)
//        others  - reserved
// 0x54 : reserved
// 0x58 : Data signal of c8
//        bit 7~0 - c8[7:0] (Read/Write)
//        others  - reserved
// 0x5c : reserved
// (SC = Self Clear, COR = Clear on Read, TOW = Toggle on Write, COH = Clear on Handshake)

#define XINVERSE_DIVISOR_CTRL_BUS_ADDR_AP_CTRL   0x00
#define XINVERSE_DIVISOR_CTRL_BUS_ADDR_GIE       0x04
#define XINVERSE_DIVISOR_CTRL_BUS_ADDR_IER       0x08
#define XINVERSE_DIVISOR_CTRL_BUS_ADDR_ISR       0x0c
#define XINVERSE_DIVISOR_CTRL_BUS_ADDR_AP_RETURN 0x10
#define XINVERSE_DIVISOR_CTRL_BUS_BITS_AP_RETURN 32
#define XINVERSE_DIVISOR_CTRL_BUS_ADDR_C0_DATA   0x18
#define XINVERSE_DIVISOR_CTRL_BUS_BITS_C0_DATA   8
#define XINVERSE_DIVISOR_CTRL_BUS_ADDR_C1_DATA   0x20
#define XINVERSE_DIVISOR_CTRL_BUS_BITS_C1_DATA   8
#define XINVERSE_DIVISOR_CTRL_BUS_ADDR_C2_DATA   0x28
#define XINVERSE_DIVISOR_CTRL_BUS_BITS_C2_DATA   8
#define XINVERSE_DIVISOR_CTRL_BUS_ADDR_C3_DATA   0x30
#define XINVERSE_DIVISOR_CTRL_BUS_BITS_C3_DATA   8
#define XINVERSE_DIVISOR_CTRL_BUS_ADDR_C4_DATA   0x38
#define XINVERSE_DIVISOR_CTRL_BUS_BITS_C4_DATA   8
#define XINVERSE_DIVISOR_CTRL_BUS_ADDR_C5_DATA   0x40
#define XINVERSE_DIVISOR_CTRL_BUS_BITS_C5_DATA   8
#define XINVERSE_DIVISOR_CTRL_BUS_ADDR_C6_DATA   0x48
#define XINVERSE_DIVISOR_CTRL_BUS_BITS_C6_DATA   8
#define XINVERSE_DIVISOR_CTRL_BUS_ADDR_C7_DATA   0x50
#define XINVERSE_DIVISOR_CTRL_BUS_BITS_C7_DATA   8
#define XINVERSE_DIVISOR_CTRL_BUS_ADDR_C8_DATA   0x58
#define XINVERSE_DIVISOR_CTRL_BUS_BITS_C8_DATA   8

