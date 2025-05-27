--Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
----------------------------------------------------------------------------------
--Tool Version: Vivado v.2019.1 (win64) Build 2552052 Fri May 24 14:49:42 MDT 2019
--Date        : Wed May  7 23:14:16 2025
--Host        : DESKTOP-KGM263H running 64-bit major release  (build 9200)
--Command     : generate_target MICRO_wrapper.bd
--Design      : MICRO_wrapper
--Purpose     : IP block netlist
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
library UNISIM;
use UNISIM.VCOMPONENTS.ALL;
entity MICRO_wrapper is
  port (
    clk_100MHz : in STD_LOGIC;
    gpio_io_o_0 : out STD_LOGIC_VECTOR ( 31 downto 0 );
    gpio_io_o_1 : out STD_LOGIC_VECTOR ( 7 downto 0 );
    gpio_io_o_2 : out STD_LOGIC_VECTOR ( 0 to 0 );
    gpio_io_o_3 : out STD_LOGIC_VECTOR ( 0 to 0 );
    gpio_io_o_4 : out STD_LOGIC_VECTOR ( 0 to 0 );
    reset_rtl : in STD_LOGIC;
    rx_0 : in STD_LOGIC;
    tx_0 : out STD_LOGIC
  );
end MICRO_wrapper;

architecture STRUCTURE of MICRO_wrapper is
  component MICRO is
  port (
    reset_rtl : in STD_LOGIC;
    rx_0 : in STD_LOGIC;
    tx_0 : out STD_LOGIC;
    gpio_io_o_0 : out STD_LOGIC_VECTOR ( 31 downto 0 );
    gpio_io_o_1 : out STD_LOGIC_VECTOR ( 7 downto 0 );
    gpio_io_o_2 : out STD_LOGIC_VECTOR ( 0 to 0 );
    gpio_io_o_3 : out STD_LOGIC_VECTOR ( 0 to 0 );
    gpio_io_o_4 : out STD_LOGIC_VECTOR ( 0 to 0 );
    clk_100MHz : in STD_LOGIC
  );
  end component MICRO;
begin
MICRO_i: component MICRO
     port map (
      clk_100MHz => clk_100MHz,
      gpio_io_o_0(31 downto 0) => gpio_io_o_0(31 downto 0),
      gpio_io_o_1(7 downto 0) => gpio_io_o_1(7 downto 0),
      gpio_io_o_2(0) => gpio_io_o_2(0),
      gpio_io_o_3(0) => gpio_io_o_3(0),
      gpio_io_o_4(0) => gpio_io_o_4(0),
      reset_rtl => reset_rtl,
      rx_0 => rx_0,
      tx_0 => tx_0
    );
end STRUCTURE;
