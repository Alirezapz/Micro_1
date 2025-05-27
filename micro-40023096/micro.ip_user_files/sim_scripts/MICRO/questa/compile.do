vlib questa_lib/work
vlib questa_lib/msim

vlib questa_lib/msim/xil_defaultlib
vlib questa_lib/msim/xpm
vlib questa_lib/msim/microblaze_v11_0_1
vlib questa_lib/msim/lmb_v10_v3_0_9
vlib questa_lib/msim/lmb_bram_if_cntlr_v4_0_16
vlib questa_lib/msim/axi_lite_ipif_v3_0_4
vlib questa_lib/msim/mdm_v3_2_16
vlib questa_lib/msim/lib_cdc_v1_0_2
vlib questa_lib/msim/proc_sys_reset_v5_0_13
vlib questa_lib/msim/interrupt_control_v3_1_4
vlib questa_lib/msim/axi_gpio_v2_0_21
vlib questa_lib/msim/lib_pkg_v1_0_2
vlib questa_lib/msim/lib_srl_fifo_v1_0_2
vlib questa_lib/msim/axi_uartlite_v2_0_23
vlib questa_lib/msim/xbip_utils_v3_0_10
vlib questa_lib/msim/axi_utils_v2_0_6
vlib questa_lib/msim/xbip_pipe_v3_0_6
vlib questa_lib/msim/xbip_dsp48_wrapper_v3_0_4
vlib questa_lib/msim/xbip_dsp48_addsub_v3_0_6
vlib questa_lib/msim/xbip_dsp48_multadd_v3_0_6
vlib questa_lib/msim/xbip_bram18k_v3_0_6
vlib questa_lib/msim/mult_gen_v12_0_15
vlib questa_lib/msim/floating_point_v7_1_8

vmap xil_defaultlib questa_lib/msim/xil_defaultlib
vmap xpm questa_lib/msim/xpm
vmap microblaze_v11_0_1 questa_lib/msim/microblaze_v11_0_1
vmap lmb_v10_v3_0_9 questa_lib/msim/lmb_v10_v3_0_9
vmap lmb_bram_if_cntlr_v4_0_16 questa_lib/msim/lmb_bram_if_cntlr_v4_0_16
vmap axi_lite_ipif_v3_0_4 questa_lib/msim/axi_lite_ipif_v3_0_4
vmap mdm_v3_2_16 questa_lib/msim/mdm_v3_2_16
vmap lib_cdc_v1_0_2 questa_lib/msim/lib_cdc_v1_0_2
vmap proc_sys_reset_v5_0_13 questa_lib/msim/proc_sys_reset_v5_0_13
vmap interrupt_control_v3_1_4 questa_lib/msim/interrupt_control_v3_1_4
vmap axi_gpio_v2_0_21 questa_lib/msim/axi_gpio_v2_0_21
vmap lib_pkg_v1_0_2 questa_lib/msim/lib_pkg_v1_0_2
vmap lib_srl_fifo_v1_0_2 questa_lib/msim/lib_srl_fifo_v1_0_2
vmap axi_uartlite_v2_0_23 questa_lib/msim/axi_uartlite_v2_0_23
vmap xbip_utils_v3_0_10 questa_lib/msim/xbip_utils_v3_0_10
vmap axi_utils_v2_0_6 questa_lib/msim/axi_utils_v2_0_6
vmap xbip_pipe_v3_0_6 questa_lib/msim/xbip_pipe_v3_0_6
vmap xbip_dsp48_wrapper_v3_0_4 questa_lib/msim/xbip_dsp48_wrapper_v3_0_4
vmap xbip_dsp48_addsub_v3_0_6 questa_lib/msim/xbip_dsp48_addsub_v3_0_6
vmap xbip_dsp48_multadd_v3_0_6 questa_lib/msim/xbip_dsp48_multadd_v3_0_6
vmap xbip_bram18k_v3_0_6 questa_lib/msim/xbip_bram18k_v3_0_6
vmap mult_gen_v12_0_15 questa_lib/msim/mult_gen_v12_0_15
vmap floating_point_v7_1_8 questa_lib/msim/floating_point_v7_1_8

vlog -work xil_defaultlib -64 -sv "+incdir+../../../../micro.srcs/sources_1/bd/MICRO/ipshared/c923" "+incdir+../../../../micro.srcs/sources_1/bd/MICRO/ipshared/ec67/hdl" \
"C:/Games/xilinx/Vivado/2019.1/data/ip/xpm/xpm_cdc/hdl/xpm_cdc.sv" \
"C:/Games/xilinx/Vivado/2019.1/data/ip/xpm/xpm_memory/hdl/xpm_memory.sv" \

vcom -work xpm -64 -93 \
"C:/Games/xilinx/Vivado/2019.1/data/ip/xpm/xpm_VCOMP.vhd" \

vcom -work microblaze_v11_0_1 -64 -93 \
"../../../../micro.srcs/sources_1/bd/MICRO/ipshared/f8c3/hdl/microblaze_v11_0_vh_rfs.vhd" \

vcom -work xil_defaultlib -64 -93 \
"../../../bd/MICRO/ip/MICRO_microblaze_0_0/sim/MICRO_microblaze_0_0.vhd" \

vcom -work lmb_v10_v3_0_9 -64 -93 \
"../../../../micro.srcs/sources_1/bd/MICRO/ipshared/78eb/hdl/lmb_v10_v3_0_vh_rfs.vhd" \

vcom -work xil_defaultlib -64 -93 \
"../../../bd/MICRO/ip/MICRO_dlmb_v10_0/sim/MICRO_dlmb_v10_0.vhd" \
"../../../bd/MICRO/ip/MICRO_ilmb_v10_0/sim/MICRO_ilmb_v10_0.vhd" \

vcom -work lmb_bram_if_cntlr_v4_0_16 -64 -93 \
"../../../../micro.srcs/sources_1/bd/MICRO/ipshared/6335/hdl/lmb_bram_if_cntlr_v4_0_vh_rfs.vhd" \

vcom -work xil_defaultlib -64 -93 \
"../../../bd/MICRO/ip/MICRO_dlmb_bram_if_cntlr_0/sim/MICRO_dlmb_bram_if_cntlr_0.vhd" \
"../../../bd/MICRO/ip/MICRO_ilmb_bram_if_cntlr_0/sim/MICRO_ilmb_bram_if_cntlr_0.vhd" \
"c:/Users/Alireza/kos/micro.srcs/sources_1/bd/MICRO/ip/MICRO_lmb_bram_0/MICRO_lmb_bram_0_sim_netlist.vhdl" \

vcom -work axi_lite_ipif_v3_0_4 -64 -93 \
"../../../../micro.srcs/sources_1/bd/MICRO/ipshared/66ea/hdl/axi_lite_ipif_v3_0_vh_rfs.vhd" \

vcom -work mdm_v3_2_16 -64 -93 \
"../../../../micro.srcs/sources_1/bd/MICRO/ipshared/550e/hdl/mdm_v3_2_vh_rfs.vhd" \

vcom -work xil_defaultlib -64 -93 \
"../../../bd/MICRO/ip/MICRO_mdm_1_0/sim/MICRO_mdm_1_0.vhd" \
"c:/Users/Alireza/kos/micro.srcs/sources_1/bd/MICRO/ip/MICRO_clk_wiz_1_0/MICRO_clk_wiz_1_0_sim_netlist.vhdl" \

vcom -work lib_cdc_v1_0_2 -64 -93 \
"../../../../micro.srcs/sources_1/bd/MICRO/ipshared/ef1e/hdl/lib_cdc_v1_0_rfs.vhd" \

vcom -work proc_sys_reset_v5_0_13 -64 -93 \
"../../../../micro.srcs/sources_1/bd/MICRO/ipshared/8842/hdl/proc_sys_reset_v5_0_vh_rfs.vhd" \

vcom -work xil_defaultlib -64 -93 \
"../../../bd/MICRO/ip/MICRO_rst_clk_wiz_1_100M_0/sim/MICRO_rst_clk_wiz_1_100M_0.vhd" \

vcom -work interrupt_control_v3_1_4 -64 -93 \
"../../../../micro.srcs/sources_1/bd/MICRO/ipshared/a040/hdl/interrupt_control_v3_1_vh_rfs.vhd" \

vcom -work axi_gpio_v2_0_21 -64 -93 \
"../../../../micro.srcs/sources_1/bd/MICRO/ipshared/9c6e/hdl/axi_gpio_v2_0_vh_rfs.vhd" \

vcom -work xil_defaultlib -64 -93 \
"../../../bd/MICRO/ip/MICRO_axi_gpio_0_0/sim/MICRO_axi_gpio_0_0.vhd" \
"../../../bd/MICRO/ip/MICRO_axi_gpio_1_0/sim/MICRO_axi_gpio_1_0.vhd" \
"../../../bd/MICRO/ip/MICRO_axi_gpio_2_0/sim/MICRO_axi_gpio_2_0.vhd" \
"../../../bd/MICRO/ip/MICRO_axi_gpio_3_0/sim/MICRO_axi_gpio_3_0.vhd" \
"../../../bd/MICRO/ip/MICRO_axi_gpio_4_0/sim/MICRO_axi_gpio_4_0.vhd" \
"c:/Users/Alireza/kos/micro.srcs/sources_1/bd/MICRO/ip/MICRO_xbar_1/MICRO_xbar_1_sim_netlist.vhdl" \

vcom -work lib_pkg_v1_0_2 -64 -93 \
"../../../../micro.srcs/sources_1/bd/MICRO/ipshared/0513/hdl/lib_pkg_v1_0_rfs.vhd" \

vcom -work lib_srl_fifo_v1_0_2 -64 -93 \
"../../../../micro.srcs/sources_1/bd/MICRO/ipshared/51ce/hdl/lib_srl_fifo_v1_0_rfs.vhd" \

vcom -work axi_uartlite_v2_0_23 -64 -93 \
"../../../../micro.srcs/sources_1/bd/MICRO/ipshared/0315/hdl/axi_uartlite_v2_0_vh_rfs.vhd" \

vcom -work xil_defaultlib -64 -93 \
"../../../bd/MICRO/ip/MICRO_axi_uartlite_0_0/sim/MICRO_axi_uartlite_0_0.vhd" \

vcom -work xbip_utils_v3_0_10 -64 -93 \
"../../../../micro.srcs/sources_1/bd/MICRO/ipshared/1123/hdl/xbip_utils_v3_0_vh_rfs.vhd" \

vcom -work axi_utils_v2_0_6 -64 -93 \
"../../../../micro.srcs/sources_1/bd/MICRO/ipshared/1971/hdl/axi_utils_v2_0_vh_rfs.vhd" \

vcom -work xbip_pipe_v3_0_6 -64 -93 \
"../../../../micro.srcs/sources_1/bd/MICRO/ipshared/7468/hdl/xbip_pipe_v3_0_vh_rfs.vhd" \

vcom -work xbip_dsp48_wrapper_v3_0_4 -64 -93 \
"../../../../micro.srcs/sources_1/bd/MICRO/ipshared/cdbf/hdl/xbip_dsp48_wrapper_v3_0_vh_rfs.vhd" \

vcom -work xbip_dsp48_addsub_v3_0_6 -64 -93 \
"../../../../micro.srcs/sources_1/bd/MICRO/ipshared/910d/hdl/xbip_dsp48_addsub_v3_0_vh_rfs.vhd" \

vcom -work xbip_dsp48_multadd_v3_0_6 -64 -93 \
"../../../../micro.srcs/sources_1/bd/MICRO/ipshared/b0ac/hdl/xbip_dsp48_multadd_v3_0_vh_rfs.vhd" \

vcom -work xbip_bram18k_v3_0_6 -64 -93 \
"../../../../micro.srcs/sources_1/bd/MICRO/ipshared/d367/hdl/xbip_bram18k_v3_0_vh_rfs.vhd" \

vcom -work mult_gen_v12_0_15 -64 -93 \
"../../../../micro.srcs/sources_1/bd/MICRO/ipshared/d4d2/hdl/mult_gen_v12_0_vh_rfs.vhd" \

vcom -work floating_point_v7_1_8 -64 -93 \
"../../../../micro.srcs/sources_1/bd/MICRO/ipshared/83a3/hdl/floating_point_v7_1_vh_rfs.vhd" \

vcom -work xil_defaultlib -64 -93 \
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

