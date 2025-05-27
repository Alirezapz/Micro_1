----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date: 05/05/2025 09:09:09 PM
-- Design Name: 
-- Module Name: Wrapper_tb - Behavioral
-- Project Name: 
-- Target Devices: 
-- Tool Versions: 
-- Description: 
-- 
-- Dependencies: 
-- 
-- Revision:
-- Revision 0.01 - File Created
-- Additional Comments:
-- 
----------------------------------------------------------------------------------


library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.NUMERIC_STD.ALL;
library UNISIM;
use UNISIM.VComponents.all;

entity Wrapper_tb is
--  Port ( );
end Wrapper_tb;


architecture Behavioral of Wrapper_tb is

component MicroBlazee_wrapper is
  port (
    clk_in1_0   : in STD_LOGIC;
    gpio_io_o_0 : out STD_LOGIC_VECTOR ( 31 downto 0 );
    gpio_io_o_1 : out STD_LOGIC_VECTOR ( 0 to 0 );
    gpio_io_o_2 : out STD_LOGIC_VECTOR ( 0 to 0 );
    gpio_io_o_3 : out STD_LOGIC_VECTOR ( 7 downto 0 );
    gpio_io_o_4 : out STD_LOGIC_VECTOR ( 0 to 0 );
    reset       : in STD_LOGIC;
    rx_0        : in STD_LOGIC;
    tx_0        : out STD_LOGIC
  );
end component;

signal clk : std_logic;
signal reset : std_logic;
signal gpio0 : std_logic_vector(31 downto 0);
signal gpio1 : std_logic_vector(0 to 0);
signal gpio2 : std_logic_vector(0 to 0);
signal gpio3 : std_logic_vector(7 downto 0);
signal gpio4 : std_logic_vector(0 to 0);
signal rx : std_logic := '1';
signal tx : std_logic;


  constant clk_period : time := 10 ns;
  type data_array is array (natural range <>) of std_logic_vector(7 downto 0);
  signal data : data_array(0 to 6) := ( "00111011",
                                        "11111111",
                                        "10000010",
                                        "10000011",
                                        "10000100",
                                        "00000001",
                                        "10001001");
                                       
                                        
begin

bb1 : MicroBlazee_wrapper
port map(
         clk_in1_0 => clk,
         reset => reset,
         gpio_io_o_0 => gpio0,
         gpio_io_o_1 => gpio1,
         gpio_io_o_2 => gpio2,
         gpio_io_o_3 => gpio3,
         gpio_io_o_4 => gpio4,
         rx_0 => rx,
         tx_0 => tx
         );


clk_process : process 
              begin
              clk <= '0';
              wait for clk_period/2;
              clk <= '1';
              wait for clk_period/2;
              end process;

delay_process : process 
                begin
                reset <= '1';
                wait for 500 * clk_period;
                reset <= '0';
                wait for 500 * clk_period;
    
                for i in 0 to 6 loop
                   rx <= '0';
                   wait for 868 * clk_period;
                   
                   for j in 0 to 7 loop 
                       rx <= data(i)(j);
                       wait for 868 * clk_period;
                   end loop;
                   
                   rx <= '1';
                   wait for  868 * clk_period;
                
                end loop;
                
                wait;
                end process;   
                


end Behavioral;