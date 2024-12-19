// Copyright 1986-2018 Xilinx, Inc. All Rights Reserved.
// --------------------------------------------------------------------------------
// Tool Version: Vivado v.2018.3 (win64) Build 2405991 Thu Dec  6 23:38:27 MST 2018
// Date        : Thu Dec 19 00:05:21 2024
// Host        : 05252zas running 64-bit major release  (build 9200)
// Command     : write_verilog -force -mode synth_stub -rename_top decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix -prefix
//               decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_ system_matrix_conv_0_0_stub.v
// Design      : system_matrix_conv_0_0
// Purpose     : Stub declaration of top-level module interface
// Device      : xc7z020clg484-1
// --------------------------------------------------------------------------------

// This empty module with port declaration file causes synthesis tools to infer a black box for IP.
// The synthesis directives are for Synopsys Synplify support to prevent IO buffer insertion.
// Please paste the declaration into a Verilog source file or add the file as an additional source.
(* X_CORE_INFO = "matrix_conv,Vivado 2018.3" *)
module decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix(a_ce0, b_ce0, res_ce0, res_we0, ap_clk, ap_rst, 
  ap_start, ap_done, ap_idle, ap_ready, a_address0, a_q0, b_address0, b_q0, res_address0, res_d0)
/* synthesis syn_black_box black_box_pad_pin="a_ce0,b_ce0,res_ce0,res_we0,ap_clk,ap_rst,ap_start,ap_done,ap_idle,ap_ready,a_address0[6:0],a_q0[7:0],b_address0[3:0],b_q0[7:0],res_address0[5:0],res_d0[15:0]" */;
  output a_ce0;
  output b_ce0;
  output res_ce0;
  output res_we0;
  input ap_clk;
  input ap_rst;
  input ap_start;
  output ap_done;
  output ap_idle;
  output ap_ready;
  output [6:0]a_address0;
  input [7:0]a_q0;
  output [3:0]b_address0;
  input [7:0]b_q0;
  output [5:0]res_address0;
  output [15:0]res_d0;
endmodule
