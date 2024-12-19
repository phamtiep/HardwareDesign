-- Copyright 1986-2018 Xilinx, Inc. All Rights Reserved.
-- --------------------------------------------------------------------------------
-- Tool Version: Vivado v.2018.3 (win64) Build 2405991 Thu Dec  6 23:38:27 MST 2018
-- Date        : Thu Dec 19 00:05:21 2024
-- Host        : 05252zas running 64-bit major release  (build 9200)
-- Command     : write_vhdl -force -mode synth_stub
--               E:/laptrinh/vivado/final_project/convolution_mat/convolution_mat.srcs/sources_1/bd/system/ip/system_matrix_conv_0_0/system_matrix_conv_0_0_stub.vhdl
-- Design      : system_matrix_conv_0_0
-- Purpose     : Stub declaration of top-level module interface
-- Device      : xc7z020clg484-1
-- --------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity system_matrix_conv_0_0 is
  Port ( 
    a_ce0 : out STD_LOGIC;
    b_ce0 : out STD_LOGIC;
    res_ce0 : out STD_LOGIC;
    res_we0 : out STD_LOGIC;
    ap_clk : in STD_LOGIC;
    ap_rst : in STD_LOGIC;
    ap_start : in STD_LOGIC;
    ap_done : out STD_LOGIC;
    ap_idle : out STD_LOGIC;
    ap_ready : out STD_LOGIC;
    a_address0 : out STD_LOGIC_VECTOR ( 6 downto 0 );
    a_q0 : in STD_LOGIC_VECTOR ( 7 downto 0 );
    b_address0 : out STD_LOGIC_VECTOR ( 3 downto 0 );
    b_q0 : in STD_LOGIC_VECTOR ( 7 downto 0 );
    res_address0 : out STD_LOGIC_VECTOR ( 5 downto 0 );
    res_d0 : out STD_LOGIC_VECTOR ( 15 downto 0 )
  );

end system_matrix_conv_0_0;

architecture stub of system_matrix_conv_0_0 is
attribute syn_black_box : boolean;
attribute black_box_pad_pin : string;
attribute syn_black_box of stub : architecture is true;
attribute black_box_pad_pin of stub : architecture is "a_ce0,b_ce0,res_ce0,res_we0,ap_clk,ap_rst,ap_start,ap_done,ap_idle,ap_ready,a_address0[6:0],a_q0[7:0],b_address0[3:0],b_q0[7:0],res_address0[5:0],res_d0[15:0]";
attribute X_CORE_INFO : string;
attribute X_CORE_INFO of stub : architecture is "matrix_conv,Vivado 2018.3";
begin
end;
