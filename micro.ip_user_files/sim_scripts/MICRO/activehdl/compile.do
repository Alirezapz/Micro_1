vlib work
vlib activehdl

vlib activehdl/xil_defaultlib
vlib activehdl/xpm
vlib activehdl/microblaze_v11_0_1
vlib activehdl/lmb_v10_v3_0_9
vlib activehdl/lmb_bram_if_cntlr_v4_0_16
vlib activehdl/axi_lite_ipif_v3_0_4
vlib activehdl/mdm_v3_2_16
vlib activehdl/lib_cdc_v1_0_2
vlib activehdl/proc_sys_reset_v5_0_13
vlib activehdl/interrupt_control_v3_1_4
vlib activehdl/axi_gpio_v2_0_21
vlib activehdl/lib_pkg_v1_0_2
vlib activehdl/lib_srl_fifo_v1_0_2
vlib activehdl/axi_uartlite_v2_0_23
vlib activehdl/xbip_utils_v3_0_10
vlib activehdl/axi_utils_v2_0_6
vlib activehdl/xbip_pipe_v3_0_6
vlib activehdl/xbip_dsp48_wrapper_v3_0_4
vlib activehdl/xbip_dsp48_addsub_v3_0_6
vlib activehdl/xbip_dsp48_multadd_v3_0_6
vlib activehdl/xbip_bram18k_v3_0_6
vlib activehdl/mult_gen_v12_0_15
vlib activehdl/floating_point_v7_1_8

vmap xil_defaultlib activehdl/xil_defaultlib
vmap xpm activehdl/xpm
vmap microblaze_v11_0_1 activehdl/microblaze_v11_0_1
vmap lmb_v10_v3_0_9 activehdl/lmb_v10_v3_0_9
vmap lmb_bram_if_cntlr_v4_0_16 activehdl/lmb_bram_if_cntlr_v4_0_16
vmap axi_lite_ipif_v3_0_4 activehdl/axi_lite_ipif_v3_0_4
vmap mdm_v3_2_16 activehdl/mdm_v3_2_16
vmap lib_cdc_v1_0_2 activehdl/lib_cdc_v1_0_2
vmap proc_sys_reset_v5_0_13 activehdl/proc_sys_reset_v5_0_13
vmap interrupt_control_v3_1_4 activehdl/interrupt_control_v3_1_4
vmap axi_gpio_v2_0_21 activehdl/axi_gpio_v2_0_21
vmap lib_pkg_v1_0_2 activehdl/lib_pkg_v1_0_2
vmap lib_srl_fifo_v1_0_2 activehdl/lib_srl_fifo_v1_0_2
vmap axi_uartlite_v2_0_23 activehdl/axi_uartlite_v2_0_23
vmap xbip_utils_v3_0_10 activehdl/xbip_utils_v3_0_10
vmap axi_utils_v2_0_6 activehdl/axi_utils_v2_0_6
vmap xbip_pipe_v3_0_6 activehdl/xbip_pipe_v3_0_6
vmap xbip_dsp48_wrapper_v3_0_4 activehdl/xbip_dsp48_wrapper_v3_0_4
vmap xbip_dsp48_addsub_v3_0_6 activehdl/xbip_dsp48_addsub_v3_0_6
vmap xbip_dsp48_multadd_v3_0_6 activehdl/xbip_dsp48_multadd_v3_0_6
vmap xbip_bram18k_v3_0_6 activehdl/xbip_bram18k_v3_0_6
vmap mult_gen_v12_0_15 activehdl/mult_gen_v12_0_15
vmap floating_point_v7_1_8 activehdl/floating_point_v7_1_8

vlog -work xil_defaultlib  -sv2k12 "+incdir+../../../../micro.srcs/sources_1/bd/MICRO/ipshared/c923" "+incdir+../../../../micro.srcs/sources_1/bd/MICRO/ipshared/ec67/hdl" \
"C:/Games/xilinx/Vivado/2019.1/data/ip/xpm/xpm_cdc/hdl/xpm_cdc.sv" \
"C:/Games/xilinx/Vivado/2019.1/data/ip/xpm/xpm_memory/hdl/xpm_memory.sv" \

vcom -work xpm -93 \
"C:/Games/xilinx/Vivado/2019.1/data/ip/xpm/xpm_VCOMP.vhd" \

vcom -work microblaze_v11_0_1 -93 \
"../../../../micro.srcs/sources_1/bd/MICRO/ipshared/f8c3/hdl/microblaze_v11_0_vh_rfs.vhd" \

vcom -work xil_defaultlib -93 \
"../../../bd/MICRO/ip/MICRO_microblaze_0_0/sim/MICRO_microblaze_0_0.vhd" \

vcom -work lmb_v10_v3_0_9 -93 \
"../../../../micro.srcs/sources_1/bd/MICRO/ipshared/78eb/hdl/lmb_v10_v3_0_vh_rfs.vhd" \

vcom -work xil_defaultlib -93 \
"../../../bd/MICRO/ip/MICRO_dlmb_v10_0/sim/MICRO_dlmb_v10_0.vhd" \
"../../../bd/MICRO/ip/MICRO_ilmb_v10_0/sim/MICRO_ilmb_v10_0.vhd" \

vcom -work lmb_bram_if_cntlr_v4_0_16 -93 \
"../../../../micro.srcs/sources_1/bd/MICRO/ipshared/6335/hdl/lmb_bram_if_cntlr_v4_0_vh_rfs.vhd" \

vcom -work xil_defaultlib -93 \
"../../../bd/MICRO/ip/MICRO_dlmb_bram_if_cntlr_0/sim/MICRO_dlmb_bram_if_cntlr_0.vhd" \
"../../../bd/MICRO/ip/MICRO_ilmb_bram_if_cntlr_0/sim/MICRO_ilmb_bram_if_cntlr_0.vhd" \
"c:/Users/Alireza/kos/micro.srcs/sources_1/bd/MICRO/ip/MICRO_lmb_bram_0/MICRO_lmb_bram_0_sim_netlist.vhdl" \

vcom -work axi_lite_ipif_v3_0_4 -93 \
"../../../../micro.srcs/sources_1/bd/MICRO/ipshared/66ea/hdl/axi_lite_ipif_v3_0_vh_rfs.vhd" \

vcom -work mdm_v3_2_16 -93 \
"../../../../micro.srcs/sources_1/bd/MICRO/ipshared/550e/hdl/mdm_v3_2_vh_rfs.vhd" \

vcom -work xil_defaultlib -93 \
"../../../bd/MICRO/ip/MICRO_mdm_1_0/sim/MICRO_mdm_1_0.vhd" \
"c:/Users/Alireza/kos/micro.srcs/sources_1/bd/MICRO/ip/MICRO_clk_wiz_1_0/MICRO_clk_wiz_1_0_sim_netlist.vhdl" \

vcom -work lib_cdc_v1_0_2 -93 \
"../../../../micro.srcs/sources_1/bd/MICRO/ipshared/ef1e/hdl/lib_cdc_v1_0_rfs.vhd" \

vcom -work proc_sys_reset_v5_0_13 -93 \
"../../../../micro.srcs/sources_1/bd/MICRO/ipshared/8842/hdl/proc_sys_reset_v5_0_vh_rfs.vhd" \

vcom -work xil_defaultlib -93 \
"../../../bd/MICRO/ip/MICRO_rst_clk_wiz_1_100M_0/sim/MICRO_rst_clk_wiz_1_100M_0.vhd" \

vcom -work interrupt_control_v3_1_4 -93 \
"../../../../micro.srcs/sources_1/bd/MICRO/ipshared/a040/hdl/interrupt_control_v3_1_vh_rfs.vhd" \

vcom -work axi_gpio_v2_0_21 -93 \
"../../../../micro.srcs/sources_1/bd/MICRO/ipshared/9c6e/hdl/axi_gpio_v2_0_vh_rfs.vhd" \

vcom -work xil_defaultlib -93 \
"../../../bd/MICRO/ip/MICRO_axi_gpio_0_0/sim/MICRO_axi_gpio_0_0.vhd" \
"../../../bd/MICRO/ip/MICRO_axi_gpio_1_0/sim/MICRO_axi_gpio_1_0.vhd" \
"../../../bd/MICRO/ip/MICRO_axi_gpio_2_0/sim/MICRO_axi_gpio_2_0.vhd" \
"../../../bd/MICRO/ip/MICRO_axi_gpio_3_0/sim/MICRO_axi_gpio_3_0.vhd" \
"../../../bd/MICRO/ip/MICRO_axi_gpio_4_0/sim/MICRO_axi_gpio_4_0.vhd" \
"c:/Users/Alireza/kos/micro.srcs/sources_1/bd/MICRO/ip/MICRO_xbar_1/MICRO_xbar_1_sim_netlist.vhdl" \

vcom -work lib_pkg_v1_0_2 -93 \
"../../../../micro.srcs/sources_1/bd/MICRO/ipshared/0513/hdl/lib_pkg_v1_0_rfs.vhd" \

vcom -work lib_srl_fifo_v1_0_2 -93 \
"../../../../micro.srcs/sources_1/bd/MICRO/ipshared/51ce/hdl/lib_srl_fifo_v1_0_rfs.vhd" \

vcom -work axi_uartlite_v2_0_23 -93 \
"../../../../micro.srcs/sources_1/bd/MICRO/ipshared/0315/hdl/axi_uartlite_v2_0_vh_rfs.vhd" \

vcom -work xil_defaultlib -93 \
"../../../bd/MICRO/ip/MICRO_axi_uartlite_0_0/sim/MICRO_axi_uartlite_0_0.vhd" \

vcom -work xbip_utils_v3_0_10 -93 \
"../../../../micro.srcs/sources_1/bd/MICRO/ipshared/1123/hdl/xbip_utils_v3_0_vh_rfs.vhd" \

vcom -work axi_utils_v2_0_6 -93 \
"../../../../micro.srcs/sources_1/bd/MICRO/ipshared/1971/hdl/axi_utils_v2_0_vh_rfs.vhd" \

vcom -work xbip_pipe_v3_0_6 -93 \
"../../../../micro.srcs/sources_1/bd/MICRO/ipshared/7468/hdl/xbip_pipe_v3_0_vh_rfs.vhd" \

vcom -work xbip_dsp48_wrapper_v3_0_4 -93 \
"../../../../micro.srcs/sources_1/bd/MICRO/ipshared/cdbf/hdl/xbip_dsp48_wrapper_v3_0_vh_rfs.vhd" \

vcom -work xbip_dsp48_addsub_v3_0_6 -93 \
"../../../../micro.srcs/sources_1/bd/MICRO/ipshared/910d/hdl/xbip_dsp48_addsub_v3_0_vh_rfs.vhd" \

vcom -work xbip_dsp48_multadd_v3_0_6 -93 \
"../../../../micro.srcs/sources_1/bd/MICRO/ipshared/b0ac/hdl/xbip_dsp48_multadd_v3_0_vh_rfs.vhd" \

vcom -work xbip_bram18k_v3_0_6 -93 \
"../../../../micro.srcs/sources_1/bd/MICRO/ipshared/d367/hdl/xbip_bram18k_v3_0_vh_rfs.vhd" \

vcom -work mult_gen_v12_0_15 -93 \
"../../../../micro.srcs/sources_1/bd/MICRO/ipshared/d4d2/hdl/mult_gen_v12_0_vh_rfs.vhd" \

vcom -work floating_point_v7_1_8 -93 \
"../../../../micro.srcs/sources_1/bd/MICRO/ipshared/83a3/hdl/floating_point_v7_1_vh_rfs.vhd" \

vcom -work xil_defaultlib -93 \
"../../../../micro.srcs/sources_1/bd/MICRO/ipshared/5ab7/hdl/vhdl/inverse_divisor_CTRL_BUS_s_axi.vhd" \
"../../../../micro.srcs/sources_1/bd/MICRO/ipshared/5ab7/hdl/vhdl/inverse_divisor_ddEe.vhd" \
"../../../../micro.srcs/sources_1/bd/MICRO/ipshared/5ab7/hdl/vhdl/inverse_divisor_deOg.vhd" \
"../../../../micro.srcs/sources_1/bd/MICRO/ipshared/5ab7/hdl/vhdl/inverse_divisor_mbkb.vhd" \
"../../../../micro.srcs/sources_1/bd/MICRO/ipshared/5ab7/hdl/vhdl/inverse_divisor_ocud.vhd" \
"../../../../micro.srcs/sources_1/bd/MICRO/ipshared/5ab7/hdl/vhdl/inverse_divisor_ufYi.vhd" \
"../../../../micro.srcs/sources_1/bd/MICRO/ipshared/5ab7/hdl/vhdl/inverse_divisor.vhd" \
"../../../../micro.srcs/sources_1/bd/MICRO/ipshared/5ab7/hdl/ip/inverse_divisor_ap_ddiv_29_no_dsp_64.vhd" \
"../../../../micro.srcs/sources_1/bd/MICRO/ipshared/5ab7/hdl/ip/inverse_divisor_ap_dmul_3_max_dsp_64.vhd" \
"../../../../micro.srcs/sources_1/bd/MICRO/ipshared/5ab7/hdl/ip/inverse_divisor_ap_uitodp_3_no_dsp_32.vhd" \
"../../../bd/MICRO/ip/MICRO_inverse_divisor_0_0/sim/MICRO_inverse_divisor_0_0.vhd" \
"../../../bd/MICRO/sim/MICRO.vhd" \

vlog -work xil_defaultlib \
"glbl.v"

