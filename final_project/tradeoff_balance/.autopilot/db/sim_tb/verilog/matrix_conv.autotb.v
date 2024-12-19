// ==============================================================
// File generated on Thu Dec 19 05:31:42 +0700 2024
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2018.3 (64-bit)
// SW Build 2405991 on Thu Dec  6 23:38:27 MST 2018
// IP Build 2404404 on Fri Dec  7 01:43:56 MST 2018
// Copyright 1986-2018 Xilinx, Inc. All Rights Reserved.
// ==============================================================
 `timescale 1ns/1ps


`define AUTOTB_DUT      matrix_conv
`define AUTOTB_DUT_INST AESL_inst_matrix_conv
`define AUTOTB_TOP      apatb_matrix_conv_top
`define AUTOTB_LAT_RESULT_FILE "matrix_conv.result.lat.rb"
`define AUTOTB_PER_RESULT_TRANS_FILE "matrix_conv.performance.result.transaction.xml"
`define AUTOTB_TOP_INST AESL_inst_apatb_matrix_conv_top
`define AUTOTB_MAX_ALLOW_LATENCY  15000000
`define AUTOTB_CLOCK_PERIOD_DIV2 5.00

`define AESL_MEM_a_0 AESL_automem_a_0
`define AESL_MEM_INST_a_0 mem_inst_a_0
`define AESL_MEM_a_1 AESL_automem_a_1
`define AESL_MEM_INST_a_1 mem_inst_a_1
`define AESL_MEM_a_2 AESL_automem_a_2
`define AESL_MEM_INST_a_2 mem_inst_a_2
`define AESL_MEM_a_3 AESL_automem_a_3
`define AESL_MEM_INST_a_3 mem_inst_a_3
`define AESL_MEM_a_4 AESL_automem_a_4
`define AESL_MEM_INST_a_4 mem_inst_a_4
`define AESL_MEM_a_5 AESL_automem_a_5
`define AESL_MEM_INST_a_5 mem_inst_a_5
`define AESL_MEM_a_6 AESL_automem_a_6
`define AESL_MEM_INST_a_6 mem_inst_a_6
`define AESL_MEM_a_7 AESL_automem_a_7
`define AESL_MEM_INST_a_7 mem_inst_a_7
`define AESL_MEM_a_8 AESL_automem_a_8
`define AESL_MEM_INST_a_8 mem_inst_a_8
`define AESL_MEM_a_9 AESL_automem_a_9
`define AESL_MEM_INST_a_9 mem_inst_a_9
`define AESL_MEM_b_0 AESL_automem_b_0
`define AESL_MEM_INST_b_0 mem_inst_b_0
`define AESL_MEM_b_1 AESL_automem_b_1
`define AESL_MEM_INST_b_1 mem_inst_b_1
`define AESL_MEM_b_2 AESL_automem_b_2
`define AESL_MEM_INST_b_2 mem_inst_b_2
`define AESL_MEM_res_0 AESL_automem_res_0
`define AESL_MEM_INST_res_0 mem_inst_res_0
`define AESL_MEM_res_1 AESL_automem_res_1
`define AESL_MEM_INST_res_1 mem_inst_res_1
`define AESL_MEM_res_2 AESL_automem_res_2
`define AESL_MEM_INST_res_2 mem_inst_res_2
`define AESL_MEM_res_3 AESL_automem_res_3
`define AESL_MEM_INST_res_3 mem_inst_res_3
`define AESL_MEM_res_4 AESL_automem_res_4
`define AESL_MEM_INST_res_4 mem_inst_res_4
`define AESL_MEM_res_5 AESL_automem_res_5
`define AESL_MEM_INST_res_5 mem_inst_res_5
`define AESL_MEM_res_6 AESL_automem_res_6
`define AESL_MEM_INST_res_6 mem_inst_res_6
`define AESL_MEM_res_7 AESL_automem_res_7
`define AESL_MEM_INST_res_7 mem_inst_res_7
`define AUTOTB_TVIN_a_0  "./c.matrix_conv.autotvin_a_0.dat"
`define AUTOTB_TVIN_a_1  "./c.matrix_conv.autotvin_a_1.dat"
`define AUTOTB_TVIN_a_2  "./c.matrix_conv.autotvin_a_2.dat"
`define AUTOTB_TVIN_a_3  "./c.matrix_conv.autotvin_a_3.dat"
`define AUTOTB_TVIN_a_4  "./c.matrix_conv.autotvin_a_4.dat"
`define AUTOTB_TVIN_a_5  "./c.matrix_conv.autotvin_a_5.dat"
`define AUTOTB_TVIN_a_6  "./c.matrix_conv.autotvin_a_6.dat"
`define AUTOTB_TVIN_a_7  "./c.matrix_conv.autotvin_a_7.dat"
`define AUTOTB_TVIN_a_8  "./c.matrix_conv.autotvin_a_8.dat"
`define AUTOTB_TVIN_a_9  "./c.matrix_conv.autotvin_a_9.dat"
`define AUTOTB_TVIN_b_0  "./c.matrix_conv.autotvin_b_0.dat"
`define AUTOTB_TVIN_b_1  "./c.matrix_conv.autotvin_b_1.dat"
`define AUTOTB_TVIN_b_2  "./c.matrix_conv.autotvin_b_2.dat"
`define AUTOTB_TVIN_res_0  "./c.matrix_conv.autotvin_res_0.dat"
`define AUTOTB_TVIN_res_1  "./c.matrix_conv.autotvin_res_1.dat"
`define AUTOTB_TVIN_res_2  "./c.matrix_conv.autotvin_res_2.dat"
`define AUTOTB_TVIN_res_3  "./c.matrix_conv.autotvin_res_3.dat"
`define AUTOTB_TVIN_res_4  "./c.matrix_conv.autotvin_res_4.dat"
`define AUTOTB_TVIN_res_5  "./c.matrix_conv.autotvin_res_5.dat"
`define AUTOTB_TVIN_res_6  "./c.matrix_conv.autotvin_res_6.dat"
`define AUTOTB_TVIN_res_7  "./c.matrix_conv.autotvin_res_7.dat"
`define AUTOTB_TVIN_a_0_out_wrapc  "./rtl.matrix_conv.autotvin_a_0.dat"
`define AUTOTB_TVIN_a_1_out_wrapc  "./rtl.matrix_conv.autotvin_a_1.dat"
`define AUTOTB_TVIN_a_2_out_wrapc  "./rtl.matrix_conv.autotvin_a_2.dat"
`define AUTOTB_TVIN_a_3_out_wrapc  "./rtl.matrix_conv.autotvin_a_3.dat"
`define AUTOTB_TVIN_a_4_out_wrapc  "./rtl.matrix_conv.autotvin_a_4.dat"
`define AUTOTB_TVIN_a_5_out_wrapc  "./rtl.matrix_conv.autotvin_a_5.dat"
`define AUTOTB_TVIN_a_6_out_wrapc  "./rtl.matrix_conv.autotvin_a_6.dat"
`define AUTOTB_TVIN_a_7_out_wrapc  "./rtl.matrix_conv.autotvin_a_7.dat"
`define AUTOTB_TVIN_a_8_out_wrapc  "./rtl.matrix_conv.autotvin_a_8.dat"
`define AUTOTB_TVIN_a_9_out_wrapc  "./rtl.matrix_conv.autotvin_a_9.dat"
`define AUTOTB_TVIN_b_0_out_wrapc  "./rtl.matrix_conv.autotvin_b_0.dat"
`define AUTOTB_TVIN_b_1_out_wrapc  "./rtl.matrix_conv.autotvin_b_1.dat"
`define AUTOTB_TVIN_b_2_out_wrapc  "./rtl.matrix_conv.autotvin_b_2.dat"
`define AUTOTB_TVIN_res_0_out_wrapc  "./rtl.matrix_conv.autotvin_res_0.dat"
`define AUTOTB_TVIN_res_1_out_wrapc  "./rtl.matrix_conv.autotvin_res_1.dat"
`define AUTOTB_TVIN_res_2_out_wrapc  "./rtl.matrix_conv.autotvin_res_2.dat"
`define AUTOTB_TVIN_res_3_out_wrapc  "./rtl.matrix_conv.autotvin_res_3.dat"
`define AUTOTB_TVIN_res_4_out_wrapc  "./rtl.matrix_conv.autotvin_res_4.dat"
`define AUTOTB_TVIN_res_5_out_wrapc  "./rtl.matrix_conv.autotvin_res_5.dat"
`define AUTOTB_TVIN_res_6_out_wrapc  "./rtl.matrix_conv.autotvin_res_6.dat"
`define AUTOTB_TVIN_res_7_out_wrapc  "./rtl.matrix_conv.autotvin_res_7.dat"
`define AUTOTB_TVOUT_res_0  "./c.matrix_conv.autotvout_res_0.dat"
`define AUTOTB_TVOUT_res_1  "./c.matrix_conv.autotvout_res_1.dat"
`define AUTOTB_TVOUT_res_2  "./c.matrix_conv.autotvout_res_2.dat"
`define AUTOTB_TVOUT_res_3  "./c.matrix_conv.autotvout_res_3.dat"
`define AUTOTB_TVOUT_res_4  "./c.matrix_conv.autotvout_res_4.dat"
`define AUTOTB_TVOUT_res_5  "./c.matrix_conv.autotvout_res_5.dat"
`define AUTOTB_TVOUT_res_6  "./c.matrix_conv.autotvout_res_6.dat"
`define AUTOTB_TVOUT_res_7  "./c.matrix_conv.autotvout_res_7.dat"
`define AUTOTB_TVOUT_res_0_out_wrapc  "./impl_rtl.matrix_conv.autotvout_res_0.dat"
`define AUTOTB_TVOUT_res_1_out_wrapc  "./impl_rtl.matrix_conv.autotvout_res_1.dat"
`define AUTOTB_TVOUT_res_2_out_wrapc  "./impl_rtl.matrix_conv.autotvout_res_2.dat"
`define AUTOTB_TVOUT_res_3_out_wrapc  "./impl_rtl.matrix_conv.autotvout_res_3.dat"
`define AUTOTB_TVOUT_res_4_out_wrapc  "./impl_rtl.matrix_conv.autotvout_res_4.dat"
`define AUTOTB_TVOUT_res_5_out_wrapc  "./impl_rtl.matrix_conv.autotvout_res_5.dat"
`define AUTOTB_TVOUT_res_6_out_wrapc  "./impl_rtl.matrix_conv.autotvout_res_6.dat"
`define AUTOTB_TVOUT_res_7_out_wrapc  "./impl_rtl.matrix_conv.autotvout_res_7.dat"
module `AUTOTB_TOP;

parameter AUTOTB_TRANSACTION_NUM = 1;
parameter PROGRESS_TIMEOUT = 10000000;
parameter LATENCY_ESTIMATION = 100;
parameter LENGTH_a_0 = 10;
parameter LENGTH_a_1 = 10;
parameter LENGTH_a_2 = 10;
parameter LENGTH_a_3 = 10;
parameter LENGTH_a_4 = 10;
parameter LENGTH_a_5 = 10;
parameter LENGTH_a_6 = 10;
parameter LENGTH_a_7 = 10;
parameter LENGTH_a_8 = 10;
parameter LENGTH_a_9 = 10;
parameter LENGTH_b_0 = 3;
parameter LENGTH_b_1 = 3;
parameter LENGTH_b_2 = 3;
parameter LENGTH_res_0 = 8;
parameter LENGTH_res_1 = 8;
parameter LENGTH_res_2 = 8;
parameter LENGTH_res_3 = 8;
parameter LENGTH_res_4 = 8;
parameter LENGTH_res_5 = 8;
parameter LENGTH_res_6 = 8;
parameter LENGTH_res_7 = 8;

task read_token;
    input integer fp;
    output reg [135 : 0] token;
    integer ret;
    begin
        token = "";
        ret = 0;
        ret = $fscanf(fp,"%s",token);
    end
endtask

task post_check;
    input integer fp1;
    input integer fp2;
    reg [135 : 0] token1;
    reg [135 : 0] token2;
    reg [135 : 0] golden;
    reg [135 : 0] result;
    integer ret;
    begin
        read_token(fp1, token1);
        read_token(fp2, token2);
        if (token1 != "[[[runtime]]]" || token2 != "[[[runtime]]]") begin
            $display("ERROR: Simulation using HLS TB failed.");
            $finish;
        end
        read_token(fp1, token1);
        read_token(fp2, token2);
        while (token1 != "[[[/runtime]]]" && token2 != "[[[/runtime]]]") begin
            if (token1 != "[[transaction]]" || token2 != "[[transaction]]") begin
                $display("ERROR: Simulation using HLS TB failed.");
                  $finish;
            end
            read_token(fp1, token1);  // skip transaction number
            read_token(fp2, token2);  // skip transaction number
              read_token(fp1, token1);
              read_token(fp2, token2);
            while(token1 != "[[/transaction]]" && token2 != "[[/transaction]]") begin
                ret = $sscanf(token1, "0x%x", golden);
                  if (ret != 1) begin
                      $display("Failed to parse token!");
                    $display("ERROR: Simulation using HLS TB failed.");
                      $finish;
                  end
                ret = $sscanf(token2, "0x%x", result);
                  if (ret != 1) begin
                      $display("Failed to parse token!");
                    $display("ERROR: Simulation using HLS TB failed.");
                      $finish;
                  end
                if(golden != result) begin
                      $display("%x (expected) vs. %x (actual) - mismatch", golden, result);
                    $display("ERROR: Simulation using HLS TB failed.");
                      $finish;
                end
                  read_token(fp1, token1);
                  read_token(fp2, token2);
            end
              read_token(fp1, token1);
              read_token(fp2, token2);
        end
    end
endtask

reg AESL_clock;
reg rst;
reg start;
reg ce;
reg tb_continue;
wire AESL_start;
wire AESL_reset;
wire AESL_ce;
wire AESL_ready;
wire AESL_idle;
wire AESL_continue;
wire AESL_done;
reg AESL_done_delay = 0;
reg AESL_done_delay2 = 0;
reg AESL_ready_delay = 0;
wire ready;
wire ready_wire;
wire ap_start;
wire ap_done;
wire ap_idle;
wire ap_ready;
wire [3 : 0] a_0_address0;
wire  a_0_ce0;
wire [7 : 0] a_0_q0;
wire [3 : 0] a_0_address1;
wire  a_0_ce1;
wire [7 : 0] a_0_q1;
wire [3 : 0] a_1_address0;
wire  a_1_ce0;
wire [7 : 0] a_1_q0;
wire [3 : 0] a_1_address1;
wire  a_1_ce1;
wire [7 : 0] a_1_q1;
wire [3 : 0] a_2_address0;
wire  a_2_ce0;
wire [7 : 0] a_2_q0;
wire [3 : 0] a_2_address1;
wire  a_2_ce1;
wire [7 : 0] a_2_q1;
wire [3 : 0] a_3_address0;
wire  a_3_ce0;
wire [7 : 0] a_3_q0;
wire [3 : 0] a_3_address1;
wire  a_3_ce1;
wire [7 : 0] a_3_q1;
wire [3 : 0] a_4_address0;
wire  a_4_ce0;
wire [7 : 0] a_4_q0;
wire [3 : 0] a_4_address1;
wire  a_4_ce1;
wire [7 : 0] a_4_q1;
wire [3 : 0] a_5_address0;
wire  a_5_ce0;
wire [7 : 0] a_5_q0;
wire [3 : 0] a_5_address1;
wire  a_5_ce1;
wire [7 : 0] a_5_q1;
wire [3 : 0] a_6_address0;
wire  a_6_ce0;
wire [7 : 0] a_6_q0;
wire [3 : 0] a_6_address1;
wire  a_6_ce1;
wire [7 : 0] a_6_q1;
wire [3 : 0] a_7_address0;
wire  a_7_ce0;
wire [7 : 0] a_7_q0;
wire [3 : 0] a_7_address1;
wire  a_7_ce1;
wire [7 : 0] a_7_q1;
wire [3 : 0] a_8_address0;
wire  a_8_ce0;
wire [7 : 0] a_8_q0;
wire [3 : 0] a_8_address1;
wire  a_8_ce1;
wire [7 : 0] a_8_q1;
wire [3 : 0] a_9_address0;
wire  a_9_ce0;
wire [7 : 0] a_9_q0;
wire [3 : 0] a_9_address1;
wire  a_9_ce1;
wire [7 : 0] a_9_q1;
wire [1 : 0] b_0_address0;
wire  b_0_ce0;
wire [7 : 0] b_0_q0;
wire [1 : 0] b_0_address1;
wire  b_0_ce1;
wire [7 : 0] b_0_q1;
wire [1 : 0] b_1_address0;
wire  b_1_ce0;
wire [7 : 0] b_1_q0;
wire [1 : 0] b_1_address1;
wire  b_1_ce1;
wire [7 : 0] b_1_q1;
wire [1 : 0] b_2_address0;
wire  b_2_ce0;
wire [7 : 0] b_2_q0;
wire [1 : 0] b_2_address1;
wire  b_2_ce1;
wire [7 : 0] b_2_q1;
wire [2 : 0] res_0_address0;
wire  res_0_ce0;
wire  res_0_we0;
wire [15 : 0] res_0_d0;
wire [2 : 0] res_1_address0;
wire  res_1_ce0;
wire  res_1_we0;
wire [15 : 0] res_1_d0;
wire [2 : 0] res_2_address0;
wire  res_2_ce0;
wire  res_2_we0;
wire [15 : 0] res_2_d0;
wire [2 : 0] res_3_address0;
wire  res_3_ce0;
wire  res_3_we0;
wire [15 : 0] res_3_d0;
wire [2 : 0] res_4_address0;
wire  res_4_ce0;
wire  res_4_we0;
wire [15 : 0] res_4_d0;
wire [2 : 0] res_5_address0;
wire  res_5_ce0;
wire  res_5_we0;
wire [15 : 0] res_5_d0;
wire [2 : 0] res_6_address0;
wire  res_6_ce0;
wire  res_6_we0;
wire [15 : 0] res_6_d0;
wire [2 : 0] res_7_address0;
wire  res_7_ce0;
wire  res_7_we0;
wire [15 : 0] res_7_d0;
integer done_cnt = 0;
integer AESL_ready_cnt = 0;
integer ready_cnt = 0;
reg ready_initial;
reg ready_initial_n;
reg ready_last_n;
reg ready_delay_last_n;
reg done_delay_last_n;
reg interface_done = 0;

wire ap_clk;
wire ap_rst;
wire ap_rst_n;

`AUTOTB_DUT `AUTOTB_DUT_INST(
    .ap_clk(ap_clk),
    .ap_rst(ap_rst),
    .ap_start(ap_start),
    .ap_done(ap_done),
    .ap_idle(ap_idle),
    .ap_ready(ap_ready),
    .a_0_address0(a_0_address0),
    .a_0_ce0(a_0_ce0),
    .a_0_q0(a_0_q0),
    .a_0_address1(a_0_address1),
    .a_0_ce1(a_0_ce1),
    .a_0_q1(a_0_q1),
    .a_1_address0(a_1_address0),
    .a_1_ce0(a_1_ce0),
    .a_1_q0(a_1_q0),
    .a_1_address1(a_1_address1),
    .a_1_ce1(a_1_ce1),
    .a_1_q1(a_1_q1),
    .a_2_address0(a_2_address0),
    .a_2_ce0(a_2_ce0),
    .a_2_q0(a_2_q0),
    .a_2_address1(a_2_address1),
    .a_2_ce1(a_2_ce1),
    .a_2_q1(a_2_q1),
    .a_3_address0(a_3_address0),
    .a_3_ce0(a_3_ce0),
    .a_3_q0(a_3_q0),
    .a_3_address1(a_3_address1),
    .a_3_ce1(a_3_ce1),
    .a_3_q1(a_3_q1),
    .a_4_address0(a_4_address0),
    .a_4_ce0(a_4_ce0),
    .a_4_q0(a_4_q0),
    .a_4_address1(a_4_address1),
    .a_4_ce1(a_4_ce1),
    .a_4_q1(a_4_q1),
    .a_5_address0(a_5_address0),
    .a_5_ce0(a_5_ce0),
    .a_5_q0(a_5_q0),
    .a_5_address1(a_5_address1),
    .a_5_ce1(a_5_ce1),
    .a_5_q1(a_5_q1),
    .a_6_address0(a_6_address0),
    .a_6_ce0(a_6_ce0),
    .a_6_q0(a_6_q0),
    .a_6_address1(a_6_address1),
    .a_6_ce1(a_6_ce1),
    .a_6_q1(a_6_q1),
    .a_7_address0(a_7_address0),
    .a_7_ce0(a_7_ce0),
    .a_7_q0(a_7_q0),
    .a_7_address1(a_7_address1),
    .a_7_ce1(a_7_ce1),
    .a_7_q1(a_7_q1),
    .a_8_address0(a_8_address0),
    .a_8_ce0(a_8_ce0),
    .a_8_q0(a_8_q0),
    .a_8_address1(a_8_address1),
    .a_8_ce1(a_8_ce1),
    .a_8_q1(a_8_q1),
    .a_9_address0(a_9_address0),
    .a_9_ce0(a_9_ce0),
    .a_9_q0(a_9_q0),
    .a_9_address1(a_9_address1),
    .a_9_ce1(a_9_ce1),
    .a_9_q1(a_9_q1),
    .b_0_address0(b_0_address0),
    .b_0_ce0(b_0_ce0),
    .b_0_q0(b_0_q0),
    .b_0_address1(b_0_address1),
    .b_0_ce1(b_0_ce1),
    .b_0_q1(b_0_q1),
    .b_1_address0(b_1_address0),
    .b_1_ce0(b_1_ce0),
    .b_1_q0(b_1_q0),
    .b_1_address1(b_1_address1),
    .b_1_ce1(b_1_ce1),
    .b_1_q1(b_1_q1),
    .b_2_address0(b_2_address0),
    .b_2_ce0(b_2_ce0),
    .b_2_q0(b_2_q0),
    .b_2_address1(b_2_address1),
    .b_2_ce1(b_2_ce1),
    .b_2_q1(b_2_q1),
    .res_0_address0(res_0_address0),
    .res_0_ce0(res_0_ce0),
    .res_0_we0(res_0_we0),
    .res_0_d0(res_0_d0),
    .res_1_address0(res_1_address0),
    .res_1_ce0(res_1_ce0),
    .res_1_we0(res_1_we0),
    .res_1_d0(res_1_d0),
    .res_2_address0(res_2_address0),
    .res_2_ce0(res_2_ce0),
    .res_2_we0(res_2_we0),
    .res_2_d0(res_2_d0),
    .res_3_address0(res_3_address0),
    .res_3_ce0(res_3_ce0),
    .res_3_we0(res_3_we0),
    .res_3_d0(res_3_d0),
    .res_4_address0(res_4_address0),
    .res_4_ce0(res_4_ce0),
    .res_4_we0(res_4_we0),
    .res_4_d0(res_4_d0),
    .res_5_address0(res_5_address0),
    .res_5_ce0(res_5_ce0),
    .res_5_we0(res_5_we0),
    .res_5_d0(res_5_d0),
    .res_6_address0(res_6_address0),
    .res_6_ce0(res_6_ce0),
    .res_6_we0(res_6_we0),
    .res_6_d0(res_6_d0),
    .res_7_address0(res_7_address0),
    .res_7_ce0(res_7_ce0),
    .res_7_we0(res_7_we0),
    .res_7_d0(res_7_d0));

// Assignment for control signal
assign ap_clk = AESL_clock;
assign ap_rst = AESL_reset;
assign ap_rst_n = ~AESL_reset;
assign AESL_reset = rst;
assign ap_start = AESL_start;
assign AESL_start = start;
assign AESL_done = ap_done;
assign AESL_idle = ap_idle;
assign AESL_ready = ap_ready;
assign AESL_ce = ce;
assign AESL_continue = tb_continue;
    always @(posedge AESL_clock) begin
        if (AESL_reset) begin
        end else begin
            if (AESL_done !== 1 && AESL_done !== 0) begin
                $display("ERROR: Control signal AESL_done is invalid!");
                $finish;
            end
        end
    end
    always @(posedge AESL_clock) begin
        if (AESL_reset) begin
        end else begin
            if (AESL_ready !== 1 && AESL_ready !== 0) begin
                $display("ERROR: Control signal AESL_ready is invalid!");
                $finish;
            end
        end
    end
//------------------------arraya_0 Instantiation--------------

// The input and output of arraya_0
wire    arraya_0_ce0, arraya_0_ce1;
wire    arraya_0_we0, arraya_0_we1;
wire    [3 : 0]    arraya_0_address0, arraya_0_address1;
wire    [7 : 0]    arraya_0_din0, arraya_0_din1;
wire    [7 : 0]    arraya_0_dout0, arraya_0_dout1;
wire    arraya_0_ready;
wire    arraya_0_done;

`AESL_MEM_a_0 `AESL_MEM_INST_a_0(
    .clk        (AESL_clock),
    .rst        (AESL_reset),
    .ce0        (arraya_0_ce0),
    .we0        (arraya_0_we0),
    .address0   (arraya_0_address0),
    .din0       (arraya_0_din0),
    .dout0      (arraya_0_dout0),
    .ce1        (arraya_0_ce1),
    .we1        (arraya_0_we1),
    .address1   (arraya_0_address1),
    .din1       (arraya_0_din1),
    .dout1      (arraya_0_dout1),
    .ready      (arraya_0_ready),
    .done    (arraya_0_done)
);

// Assignment between dut and arraya_0
assign arraya_0_address0 = a_0_address0;
assign arraya_0_ce0 = a_0_ce0;
assign a_0_q0 = arraya_0_dout0;
assign arraya_0_we0 = 0;
assign arraya_0_din0 = 0;
assign arraya_0_address1 = a_0_address1;
assign arraya_0_ce1 = a_0_ce1;
assign a_0_q1 = arraya_0_dout1;
assign arraya_0_we1 = 0;
assign arraya_0_din1 = 0;
assign arraya_0_ready=    ready;
assign arraya_0_done = 0;


//------------------------arraya_1 Instantiation--------------

// The input and output of arraya_1
wire    arraya_1_ce0, arraya_1_ce1;
wire    arraya_1_we0, arraya_1_we1;
wire    [3 : 0]    arraya_1_address0, arraya_1_address1;
wire    [7 : 0]    arraya_1_din0, arraya_1_din1;
wire    [7 : 0]    arraya_1_dout0, arraya_1_dout1;
wire    arraya_1_ready;
wire    arraya_1_done;

`AESL_MEM_a_1 `AESL_MEM_INST_a_1(
    .clk        (AESL_clock),
    .rst        (AESL_reset),
    .ce0        (arraya_1_ce0),
    .we0        (arraya_1_we0),
    .address0   (arraya_1_address0),
    .din0       (arraya_1_din0),
    .dout0      (arraya_1_dout0),
    .ce1        (arraya_1_ce1),
    .we1        (arraya_1_we1),
    .address1   (arraya_1_address1),
    .din1       (arraya_1_din1),
    .dout1      (arraya_1_dout1),
    .ready      (arraya_1_ready),
    .done    (arraya_1_done)
);

// Assignment between dut and arraya_1
assign arraya_1_address0 = a_1_address0;
assign arraya_1_ce0 = a_1_ce0;
assign a_1_q0 = arraya_1_dout0;
assign arraya_1_we0 = 0;
assign arraya_1_din0 = 0;
assign arraya_1_address1 = a_1_address1;
assign arraya_1_ce1 = a_1_ce1;
assign a_1_q1 = arraya_1_dout1;
assign arraya_1_we1 = 0;
assign arraya_1_din1 = 0;
assign arraya_1_ready=    ready;
assign arraya_1_done = 0;


//------------------------arraya_2 Instantiation--------------

// The input and output of arraya_2
wire    arraya_2_ce0, arraya_2_ce1;
wire    arraya_2_we0, arraya_2_we1;
wire    [3 : 0]    arraya_2_address0, arraya_2_address1;
wire    [7 : 0]    arraya_2_din0, arraya_2_din1;
wire    [7 : 0]    arraya_2_dout0, arraya_2_dout1;
wire    arraya_2_ready;
wire    arraya_2_done;

`AESL_MEM_a_2 `AESL_MEM_INST_a_2(
    .clk        (AESL_clock),
    .rst        (AESL_reset),
    .ce0        (arraya_2_ce0),
    .we0        (arraya_2_we0),
    .address0   (arraya_2_address0),
    .din0       (arraya_2_din0),
    .dout0      (arraya_2_dout0),
    .ce1        (arraya_2_ce1),
    .we1        (arraya_2_we1),
    .address1   (arraya_2_address1),
    .din1       (arraya_2_din1),
    .dout1      (arraya_2_dout1),
    .ready      (arraya_2_ready),
    .done    (arraya_2_done)
);

// Assignment between dut and arraya_2
assign arraya_2_address0 = a_2_address0;
assign arraya_2_ce0 = a_2_ce0;
assign a_2_q0 = arraya_2_dout0;
assign arraya_2_we0 = 0;
assign arraya_2_din0 = 0;
assign arraya_2_address1 = a_2_address1;
assign arraya_2_ce1 = a_2_ce1;
assign a_2_q1 = arraya_2_dout1;
assign arraya_2_we1 = 0;
assign arraya_2_din1 = 0;
assign arraya_2_ready=    ready;
assign arraya_2_done = 0;


//------------------------arraya_3 Instantiation--------------

// The input and output of arraya_3
wire    arraya_3_ce0, arraya_3_ce1;
wire    arraya_3_we0, arraya_3_we1;
wire    [3 : 0]    arraya_3_address0, arraya_3_address1;
wire    [7 : 0]    arraya_3_din0, arraya_3_din1;
wire    [7 : 0]    arraya_3_dout0, arraya_3_dout1;
wire    arraya_3_ready;
wire    arraya_3_done;

`AESL_MEM_a_3 `AESL_MEM_INST_a_3(
    .clk        (AESL_clock),
    .rst        (AESL_reset),
    .ce0        (arraya_3_ce0),
    .we0        (arraya_3_we0),
    .address0   (arraya_3_address0),
    .din0       (arraya_3_din0),
    .dout0      (arraya_3_dout0),
    .ce1        (arraya_3_ce1),
    .we1        (arraya_3_we1),
    .address1   (arraya_3_address1),
    .din1       (arraya_3_din1),
    .dout1      (arraya_3_dout1),
    .ready      (arraya_3_ready),
    .done    (arraya_3_done)
);

// Assignment between dut and arraya_3
assign arraya_3_address0 = a_3_address0;
assign arraya_3_ce0 = a_3_ce0;
assign a_3_q0 = arraya_3_dout0;
assign arraya_3_we0 = 0;
assign arraya_3_din0 = 0;
assign arraya_3_address1 = a_3_address1;
assign arraya_3_ce1 = a_3_ce1;
assign a_3_q1 = arraya_3_dout1;
assign arraya_3_we1 = 0;
assign arraya_3_din1 = 0;
assign arraya_3_ready=    ready;
assign arraya_3_done = 0;


//------------------------arraya_4 Instantiation--------------

// The input and output of arraya_4
wire    arraya_4_ce0, arraya_4_ce1;
wire    arraya_4_we0, arraya_4_we1;
wire    [3 : 0]    arraya_4_address0, arraya_4_address1;
wire    [7 : 0]    arraya_4_din0, arraya_4_din1;
wire    [7 : 0]    arraya_4_dout0, arraya_4_dout1;
wire    arraya_4_ready;
wire    arraya_4_done;

`AESL_MEM_a_4 `AESL_MEM_INST_a_4(
    .clk        (AESL_clock),
    .rst        (AESL_reset),
    .ce0        (arraya_4_ce0),
    .we0        (arraya_4_we0),
    .address0   (arraya_4_address0),
    .din0       (arraya_4_din0),
    .dout0      (arraya_4_dout0),
    .ce1        (arraya_4_ce1),
    .we1        (arraya_4_we1),
    .address1   (arraya_4_address1),
    .din1       (arraya_4_din1),
    .dout1      (arraya_4_dout1),
    .ready      (arraya_4_ready),
    .done    (arraya_4_done)
);

// Assignment between dut and arraya_4
assign arraya_4_address0 = a_4_address0;
assign arraya_4_ce0 = a_4_ce0;
assign a_4_q0 = arraya_4_dout0;
assign arraya_4_we0 = 0;
assign arraya_4_din0 = 0;
assign arraya_4_address1 = a_4_address1;
assign arraya_4_ce1 = a_4_ce1;
assign a_4_q1 = arraya_4_dout1;
assign arraya_4_we1 = 0;
assign arraya_4_din1 = 0;
assign arraya_4_ready=    ready;
assign arraya_4_done = 0;


//------------------------arraya_5 Instantiation--------------

// The input and output of arraya_5
wire    arraya_5_ce0, arraya_5_ce1;
wire    arraya_5_we0, arraya_5_we1;
wire    [3 : 0]    arraya_5_address0, arraya_5_address1;
wire    [7 : 0]    arraya_5_din0, arraya_5_din1;
wire    [7 : 0]    arraya_5_dout0, arraya_5_dout1;
wire    arraya_5_ready;
wire    arraya_5_done;

`AESL_MEM_a_5 `AESL_MEM_INST_a_5(
    .clk        (AESL_clock),
    .rst        (AESL_reset),
    .ce0        (arraya_5_ce0),
    .we0        (arraya_5_we0),
    .address0   (arraya_5_address0),
    .din0       (arraya_5_din0),
    .dout0      (arraya_5_dout0),
    .ce1        (arraya_5_ce1),
    .we1        (arraya_5_we1),
    .address1   (arraya_5_address1),
    .din1       (arraya_5_din1),
    .dout1      (arraya_5_dout1),
    .ready      (arraya_5_ready),
    .done    (arraya_5_done)
);

// Assignment between dut and arraya_5
assign arraya_5_address0 = a_5_address0;
assign arraya_5_ce0 = a_5_ce0;
assign a_5_q0 = arraya_5_dout0;
assign arraya_5_we0 = 0;
assign arraya_5_din0 = 0;
assign arraya_5_address1 = a_5_address1;
assign arraya_5_ce1 = a_5_ce1;
assign a_5_q1 = arraya_5_dout1;
assign arraya_5_we1 = 0;
assign arraya_5_din1 = 0;
assign arraya_5_ready=    ready;
assign arraya_5_done = 0;


//------------------------arraya_6 Instantiation--------------

// The input and output of arraya_6
wire    arraya_6_ce0, arraya_6_ce1;
wire    arraya_6_we0, arraya_6_we1;
wire    [3 : 0]    arraya_6_address0, arraya_6_address1;
wire    [7 : 0]    arraya_6_din0, arraya_6_din1;
wire    [7 : 0]    arraya_6_dout0, arraya_6_dout1;
wire    arraya_6_ready;
wire    arraya_6_done;

`AESL_MEM_a_6 `AESL_MEM_INST_a_6(
    .clk        (AESL_clock),
    .rst        (AESL_reset),
    .ce0        (arraya_6_ce0),
    .we0        (arraya_6_we0),
    .address0   (arraya_6_address0),
    .din0       (arraya_6_din0),
    .dout0      (arraya_6_dout0),
    .ce1        (arraya_6_ce1),
    .we1        (arraya_6_we1),
    .address1   (arraya_6_address1),
    .din1       (arraya_6_din1),
    .dout1      (arraya_6_dout1),
    .ready      (arraya_6_ready),
    .done    (arraya_6_done)
);

// Assignment between dut and arraya_6
assign arraya_6_address0 = a_6_address0;
assign arraya_6_ce0 = a_6_ce0;
assign a_6_q0 = arraya_6_dout0;
assign arraya_6_we0 = 0;
assign arraya_6_din0 = 0;
assign arraya_6_address1 = a_6_address1;
assign arraya_6_ce1 = a_6_ce1;
assign a_6_q1 = arraya_6_dout1;
assign arraya_6_we1 = 0;
assign arraya_6_din1 = 0;
assign arraya_6_ready=    ready;
assign arraya_6_done = 0;


//------------------------arraya_7 Instantiation--------------

// The input and output of arraya_7
wire    arraya_7_ce0, arraya_7_ce1;
wire    arraya_7_we0, arraya_7_we1;
wire    [3 : 0]    arraya_7_address0, arraya_7_address1;
wire    [7 : 0]    arraya_7_din0, arraya_7_din1;
wire    [7 : 0]    arraya_7_dout0, arraya_7_dout1;
wire    arraya_7_ready;
wire    arraya_7_done;

`AESL_MEM_a_7 `AESL_MEM_INST_a_7(
    .clk        (AESL_clock),
    .rst        (AESL_reset),
    .ce0        (arraya_7_ce0),
    .we0        (arraya_7_we0),
    .address0   (arraya_7_address0),
    .din0       (arraya_7_din0),
    .dout0      (arraya_7_dout0),
    .ce1        (arraya_7_ce1),
    .we1        (arraya_7_we1),
    .address1   (arraya_7_address1),
    .din1       (arraya_7_din1),
    .dout1      (arraya_7_dout1),
    .ready      (arraya_7_ready),
    .done    (arraya_7_done)
);

// Assignment between dut and arraya_7
assign arraya_7_address0 = a_7_address0;
assign arraya_7_ce0 = a_7_ce0;
assign a_7_q0 = arraya_7_dout0;
assign arraya_7_we0 = 0;
assign arraya_7_din0 = 0;
assign arraya_7_address1 = a_7_address1;
assign arraya_7_ce1 = a_7_ce1;
assign a_7_q1 = arraya_7_dout1;
assign arraya_7_we1 = 0;
assign arraya_7_din1 = 0;
assign arraya_7_ready=    ready;
assign arraya_7_done = 0;


//------------------------arraya_8 Instantiation--------------

// The input and output of arraya_8
wire    arraya_8_ce0, arraya_8_ce1;
wire    arraya_8_we0, arraya_8_we1;
wire    [3 : 0]    arraya_8_address0, arraya_8_address1;
wire    [7 : 0]    arraya_8_din0, arraya_8_din1;
wire    [7 : 0]    arraya_8_dout0, arraya_8_dout1;
wire    arraya_8_ready;
wire    arraya_8_done;

`AESL_MEM_a_8 `AESL_MEM_INST_a_8(
    .clk        (AESL_clock),
    .rst        (AESL_reset),
    .ce0        (arraya_8_ce0),
    .we0        (arraya_8_we0),
    .address0   (arraya_8_address0),
    .din0       (arraya_8_din0),
    .dout0      (arraya_8_dout0),
    .ce1        (arraya_8_ce1),
    .we1        (arraya_8_we1),
    .address1   (arraya_8_address1),
    .din1       (arraya_8_din1),
    .dout1      (arraya_8_dout1),
    .ready      (arraya_8_ready),
    .done    (arraya_8_done)
);

// Assignment between dut and arraya_8
assign arraya_8_address0 = a_8_address0;
assign arraya_8_ce0 = a_8_ce0;
assign a_8_q0 = arraya_8_dout0;
assign arraya_8_we0 = 0;
assign arraya_8_din0 = 0;
assign arraya_8_address1 = a_8_address1;
assign arraya_8_ce1 = a_8_ce1;
assign a_8_q1 = arraya_8_dout1;
assign arraya_8_we1 = 0;
assign arraya_8_din1 = 0;
assign arraya_8_ready=    ready;
assign arraya_8_done = 0;


//------------------------arraya_9 Instantiation--------------

// The input and output of arraya_9
wire    arraya_9_ce0, arraya_9_ce1;
wire    arraya_9_we0, arraya_9_we1;
wire    [3 : 0]    arraya_9_address0, arraya_9_address1;
wire    [7 : 0]    arraya_9_din0, arraya_9_din1;
wire    [7 : 0]    arraya_9_dout0, arraya_9_dout1;
wire    arraya_9_ready;
wire    arraya_9_done;

`AESL_MEM_a_9 `AESL_MEM_INST_a_9(
    .clk        (AESL_clock),
    .rst        (AESL_reset),
    .ce0        (arraya_9_ce0),
    .we0        (arraya_9_we0),
    .address0   (arraya_9_address0),
    .din0       (arraya_9_din0),
    .dout0      (arraya_9_dout0),
    .ce1        (arraya_9_ce1),
    .we1        (arraya_9_we1),
    .address1   (arraya_9_address1),
    .din1       (arraya_9_din1),
    .dout1      (arraya_9_dout1),
    .ready      (arraya_9_ready),
    .done    (arraya_9_done)
);

// Assignment between dut and arraya_9
assign arraya_9_address0 = a_9_address0;
assign arraya_9_ce0 = a_9_ce0;
assign a_9_q0 = arraya_9_dout0;
assign arraya_9_we0 = 0;
assign arraya_9_din0 = 0;
assign arraya_9_address1 = a_9_address1;
assign arraya_9_ce1 = a_9_ce1;
assign a_9_q1 = arraya_9_dout1;
assign arraya_9_we1 = 0;
assign arraya_9_din1 = 0;
assign arraya_9_ready=    ready;
assign arraya_9_done = 0;


//------------------------arrayb_0 Instantiation--------------

// The input and output of arrayb_0
wire    arrayb_0_ce0, arrayb_0_ce1;
wire    arrayb_0_we0, arrayb_0_we1;
wire    [1 : 0]    arrayb_0_address0, arrayb_0_address1;
wire    [7 : 0]    arrayb_0_din0, arrayb_0_din1;
wire    [7 : 0]    arrayb_0_dout0, arrayb_0_dout1;
wire    arrayb_0_ready;
wire    arrayb_0_done;

`AESL_MEM_b_0 `AESL_MEM_INST_b_0(
    .clk        (AESL_clock),
    .rst        (AESL_reset),
    .ce0        (arrayb_0_ce0),
    .we0        (arrayb_0_we0),
    .address0   (arrayb_0_address0),
    .din0       (arrayb_0_din0),
    .dout0      (arrayb_0_dout0),
    .ce1        (arrayb_0_ce1),
    .we1        (arrayb_0_we1),
    .address1   (arrayb_0_address1),
    .din1       (arrayb_0_din1),
    .dout1      (arrayb_0_dout1),
    .ready      (arrayb_0_ready),
    .done    (arrayb_0_done)
);

// Assignment between dut and arrayb_0
assign arrayb_0_address0 = b_0_address0;
assign arrayb_0_ce0 = b_0_ce0;
assign b_0_q0 = arrayb_0_dout0;
assign arrayb_0_we0 = 0;
assign arrayb_0_din0 = 0;
assign arrayb_0_address1 = b_0_address1;
assign arrayb_0_ce1 = b_0_ce1;
assign b_0_q1 = arrayb_0_dout1;
assign arrayb_0_we1 = 0;
assign arrayb_0_din1 = 0;
assign arrayb_0_ready=    ready;
assign arrayb_0_done = 0;


//------------------------arrayb_1 Instantiation--------------

// The input and output of arrayb_1
wire    arrayb_1_ce0, arrayb_1_ce1;
wire    arrayb_1_we0, arrayb_1_we1;
wire    [1 : 0]    arrayb_1_address0, arrayb_1_address1;
wire    [7 : 0]    arrayb_1_din0, arrayb_1_din1;
wire    [7 : 0]    arrayb_1_dout0, arrayb_1_dout1;
wire    arrayb_1_ready;
wire    arrayb_1_done;

`AESL_MEM_b_1 `AESL_MEM_INST_b_1(
    .clk        (AESL_clock),
    .rst        (AESL_reset),
    .ce0        (arrayb_1_ce0),
    .we0        (arrayb_1_we0),
    .address0   (arrayb_1_address0),
    .din0       (arrayb_1_din0),
    .dout0      (arrayb_1_dout0),
    .ce1        (arrayb_1_ce1),
    .we1        (arrayb_1_we1),
    .address1   (arrayb_1_address1),
    .din1       (arrayb_1_din1),
    .dout1      (arrayb_1_dout1),
    .ready      (arrayb_1_ready),
    .done    (arrayb_1_done)
);

// Assignment between dut and arrayb_1
assign arrayb_1_address0 = b_1_address0;
assign arrayb_1_ce0 = b_1_ce0;
assign b_1_q0 = arrayb_1_dout0;
assign arrayb_1_we0 = 0;
assign arrayb_1_din0 = 0;
assign arrayb_1_address1 = b_1_address1;
assign arrayb_1_ce1 = b_1_ce1;
assign b_1_q1 = arrayb_1_dout1;
assign arrayb_1_we1 = 0;
assign arrayb_1_din1 = 0;
assign arrayb_1_ready=    ready;
assign arrayb_1_done = 0;


//------------------------arrayb_2 Instantiation--------------

// The input and output of arrayb_2
wire    arrayb_2_ce0, arrayb_2_ce1;
wire    arrayb_2_we0, arrayb_2_we1;
wire    [1 : 0]    arrayb_2_address0, arrayb_2_address1;
wire    [7 : 0]    arrayb_2_din0, arrayb_2_din1;
wire    [7 : 0]    arrayb_2_dout0, arrayb_2_dout1;
wire    arrayb_2_ready;
wire    arrayb_2_done;

`AESL_MEM_b_2 `AESL_MEM_INST_b_2(
    .clk        (AESL_clock),
    .rst        (AESL_reset),
    .ce0        (arrayb_2_ce0),
    .we0        (arrayb_2_we0),
    .address0   (arrayb_2_address0),
    .din0       (arrayb_2_din0),
    .dout0      (arrayb_2_dout0),
    .ce1        (arrayb_2_ce1),
    .we1        (arrayb_2_we1),
    .address1   (arrayb_2_address1),
    .din1       (arrayb_2_din1),
    .dout1      (arrayb_2_dout1),
    .ready      (arrayb_2_ready),
    .done    (arrayb_2_done)
);

// Assignment between dut and arrayb_2
assign arrayb_2_address0 = b_2_address0;
assign arrayb_2_ce0 = b_2_ce0;
assign b_2_q0 = arrayb_2_dout0;
assign arrayb_2_we0 = 0;
assign arrayb_2_din0 = 0;
assign arrayb_2_address1 = b_2_address1;
assign arrayb_2_ce1 = b_2_ce1;
assign b_2_q1 = arrayb_2_dout1;
assign arrayb_2_we1 = 0;
assign arrayb_2_din1 = 0;
assign arrayb_2_ready=    ready;
assign arrayb_2_done = 0;


//------------------------arrayres_0 Instantiation--------------

// The input and output of arrayres_0
wire    arrayres_0_ce0, arrayres_0_ce1;
wire    arrayres_0_we0, arrayres_0_we1;
wire    [2 : 0]    arrayres_0_address0, arrayres_0_address1;
wire    [15 : 0]    arrayres_0_din0, arrayres_0_din1;
wire    [15 : 0]    arrayres_0_dout0, arrayres_0_dout1;
wire    arrayres_0_ready;
wire    arrayres_0_done;

`AESL_MEM_res_0 `AESL_MEM_INST_res_0(
    .clk        (AESL_clock),
    .rst        (AESL_reset),
    .ce0        (arrayres_0_ce0),
    .we0        (arrayres_0_we0),
    .address0   (arrayres_0_address0),
    .din0       (arrayres_0_din0),
    .dout0      (arrayres_0_dout0),
    .ce1        (arrayres_0_ce1),
    .we1        (arrayres_0_we1),
    .address1   (arrayres_0_address1),
    .din1       (arrayres_0_din1),
    .dout1      (arrayres_0_dout1),
    .ready      (arrayres_0_ready),
    .done    (arrayres_0_done)
);

// Assignment between dut and arrayres_0
assign arrayres_0_address0 = res_0_address0;
assign arrayres_0_ce0 = res_0_ce0;
assign arrayres_0_we0 = res_0_we0;
assign arrayres_0_din0 = res_0_d0;
assign arrayres_0_we1 = 0;
assign arrayres_0_din1 = 0;
assign arrayres_0_ready= ready_initial | arrayres_0_done;
assign arrayres_0_done =    AESL_done_delay;


//------------------------arrayres_1 Instantiation--------------

// The input and output of arrayres_1
wire    arrayres_1_ce0, arrayres_1_ce1;
wire    arrayres_1_we0, arrayres_1_we1;
wire    [2 : 0]    arrayres_1_address0, arrayres_1_address1;
wire    [15 : 0]    arrayres_1_din0, arrayres_1_din1;
wire    [15 : 0]    arrayres_1_dout0, arrayres_1_dout1;
wire    arrayres_1_ready;
wire    arrayres_1_done;

`AESL_MEM_res_1 `AESL_MEM_INST_res_1(
    .clk        (AESL_clock),
    .rst        (AESL_reset),
    .ce0        (arrayres_1_ce0),
    .we0        (arrayres_1_we0),
    .address0   (arrayres_1_address0),
    .din0       (arrayres_1_din0),
    .dout0      (arrayres_1_dout0),
    .ce1        (arrayres_1_ce1),
    .we1        (arrayres_1_we1),
    .address1   (arrayres_1_address1),
    .din1       (arrayres_1_din1),
    .dout1      (arrayres_1_dout1),
    .ready      (arrayres_1_ready),
    .done    (arrayres_1_done)
);

// Assignment between dut and arrayres_1
assign arrayres_1_address0 = res_1_address0;
assign arrayres_1_ce0 = res_1_ce0;
assign arrayres_1_we0 = res_1_we0;
assign arrayres_1_din0 = res_1_d0;
assign arrayres_1_we1 = 0;
assign arrayres_1_din1 = 0;
assign arrayres_1_ready= ready_initial | arrayres_1_done;
assign arrayres_1_done =    AESL_done_delay;


//------------------------arrayres_2 Instantiation--------------

// The input and output of arrayres_2
wire    arrayres_2_ce0, arrayres_2_ce1;
wire    arrayres_2_we0, arrayres_2_we1;
wire    [2 : 0]    arrayres_2_address0, arrayres_2_address1;
wire    [15 : 0]    arrayres_2_din0, arrayres_2_din1;
wire    [15 : 0]    arrayres_2_dout0, arrayres_2_dout1;
wire    arrayres_2_ready;
wire    arrayres_2_done;

`AESL_MEM_res_2 `AESL_MEM_INST_res_2(
    .clk        (AESL_clock),
    .rst        (AESL_reset),
    .ce0        (arrayres_2_ce0),
    .we0        (arrayres_2_we0),
    .address0   (arrayres_2_address0),
    .din0       (arrayres_2_din0),
    .dout0      (arrayres_2_dout0),
    .ce1        (arrayres_2_ce1),
    .we1        (arrayres_2_we1),
    .address1   (arrayres_2_address1),
    .din1       (arrayres_2_din1),
    .dout1      (arrayres_2_dout1),
    .ready      (arrayres_2_ready),
    .done    (arrayres_2_done)
);

// Assignment between dut and arrayres_2
assign arrayres_2_address0 = res_2_address0;
assign arrayres_2_ce0 = res_2_ce0;
assign arrayres_2_we0 = res_2_we0;
assign arrayres_2_din0 = res_2_d0;
assign arrayres_2_we1 = 0;
assign arrayres_2_din1 = 0;
assign arrayres_2_ready= ready_initial | arrayres_2_done;
assign arrayres_2_done =    AESL_done_delay;


//------------------------arrayres_3 Instantiation--------------

// The input and output of arrayres_3
wire    arrayres_3_ce0, arrayres_3_ce1;
wire    arrayres_3_we0, arrayres_3_we1;
wire    [2 : 0]    arrayres_3_address0, arrayres_3_address1;
wire    [15 : 0]    arrayres_3_din0, arrayres_3_din1;
wire    [15 : 0]    arrayres_3_dout0, arrayres_3_dout1;
wire    arrayres_3_ready;
wire    arrayres_3_done;

`AESL_MEM_res_3 `AESL_MEM_INST_res_3(
    .clk        (AESL_clock),
    .rst        (AESL_reset),
    .ce0        (arrayres_3_ce0),
    .we0        (arrayres_3_we0),
    .address0   (arrayres_3_address0),
    .din0       (arrayres_3_din0),
    .dout0      (arrayres_3_dout0),
    .ce1        (arrayres_3_ce1),
    .we1        (arrayres_3_we1),
    .address1   (arrayres_3_address1),
    .din1       (arrayres_3_din1),
    .dout1      (arrayres_3_dout1),
    .ready      (arrayres_3_ready),
    .done    (arrayres_3_done)
);

// Assignment between dut and arrayres_3
assign arrayres_3_address0 = res_3_address0;
assign arrayres_3_ce0 = res_3_ce0;
assign arrayres_3_we0 = res_3_we0;
assign arrayres_3_din0 = res_3_d0;
assign arrayres_3_we1 = 0;
assign arrayres_3_din1 = 0;
assign arrayres_3_ready= ready_initial | arrayres_3_done;
assign arrayres_3_done =    AESL_done_delay;


//------------------------arrayres_4 Instantiation--------------

// The input and output of arrayres_4
wire    arrayres_4_ce0, arrayres_4_ce1;
wire    arrayres_4_we0, arrayres_4_we1;
wire    [2 : 0]    arrayres_4_address0, arrayres_4_address1;
wire    [15 : 0]    arrayres_4_din0, arrayres_4_din1;
wire    [15 : 0]    arrayres_4_dout0, arrayres_4_dout1;
wire    arrayres_4_ready;
wire    arrayres_4_done;

`AESL_MEM_res_4 `AESL_MEM_INST_res_4(
    .clk        (AESL_clock),
    .rst        (AESL_reset),
    .ce0        (arrayres_4_ce0),
    .we0        (arrayres_4_we0),
    .address0   (arrayres_4_address0),
    .din0       (arrayres_4_din0),
    .dout0      (arrayres_4_dout0),
    .ce1        (arrayres_4_ce1),
    .we1        (arrayres_4_we1),
    .address1   (arrayres_4_address1),
    .din1       (arrayres_4_din1),
    .dout1      (arrayres_4_dout1),
    .ready      (arrayres_4_ready),
    .done    (arrayres_4_done)
);

// Assignment between dut and arrayres_4
assign arrayres_4_address0 = res_4_address0;
assign arrayres_4_ce0 = res_4_ce0;
assign arrayres_4_we0 = res_4_we0;
assign arrayres_4_din0 = res_4_d0;
assign arrayres_4_we1 = 0;
assign arrayres_4_din1 = 0;
assign arrayres_4_ready= ready_initial | arrayres_4_done;
assign arrayres_4_done =    AESL_done_delay;


//------------------------arrayres_5 Instantiation--------------

// The input and output of arrayres_5
wire    arrayres_5_ce0, arrayres_5_ce1;
wire    arrayres_5_we0, arrayres_5_we1;
wire    [2 : 0]    arrayres_5_address0, arrayres_5_address1;
wire    [15 : 0]    arrayres_5_din0, arrayres_5_din1;
wire    [15 : 0]    arrayres_5_dout0, arrayres_5_dout1;
wire    arrayres_5_ready;
wire    arrayres_5_done;

`AESL_MEM_res_5 `AESL_MEM_INST_res_5(
    .clk        (AESL_clock),
    .rst        (AESL_reset),
    .ce0        (arrayres_5_ce0),
    .we0        (arrayres_5_we0),
    .address0   (arrayres_5_address0),
    .din0       (arrayres_5_din0),
    .dout0      (arrayres_5_dout0),
    .ce1        (arrayres_5_ce1),
    .we1        (arrayres_5_we1),
    .address1   (arrayres_5_address1),
    .din1       (arrayres_5_din1),
    .dout1      (arrayres_5_dout1),
    .ready      (arrayres_5_ready),
    .done    (arrayres_5_done)
);

// Assignment between dut and arrayres_5
assign arrayres_5_address0 = res_5_address0;
assign arrayres_5_ce0 = res_5_ce0;
assign arrayres_5_we0 = res_5_we0;
assign arrayres_5_din0 = res_5_d0;
assign arrayres_5_we1 = 0;
assign arrayres_5_din1 = 0;
assign arrayres_5_ready= ready_initial | arrayres_5_done;
assign arrayres_5_done =    AESL_done_delay;


//------------------------arrayres_6 Instantiation--------------

// The input and output of arrayres_6
wire    arrayres_6_ce0, arrayres_6_ce1;
wire    arrayres_6_we0, arrayres_6_we1;
wire    [2 : 0]    arrayres_6_address0, arrayres_6_address1;
wire    [15 : 0]    arrayres_6_din0, arrayres_6_din1;
wire    [15 : 0]    arrayres_6_dout0, arrayres_6_dout1;
wire    arrayres_6_ready;
wire    arrayres_6_done;

`AESL_MEM_res_6 `AESL_MEM_INST_res_6(
    .clk        (AESL_clock),
    .rst        (AESL_reset),
    .ce0        (arrayres_6_ce0),
    .we0        (arrayres_6_we0),
    .address0   (arrayres_6_address0),
    .din0       (arrayres_6_din0),
    .dout0      (arrayres_6_dout0),
    .ce1        (arrayres_6_ce1),
    .we1        (arrayres_6_we1),
    .address1   (arrayres_6_address1),
    .din1       (arrayres_6_din1),
    .dout1      (arrayres_6_dout1),
    .ready      (arrayres_6_ready),
    .done    (arrayres_6_done)
);

// Assignment between dut and arrayres_6
assign arrayres_6_address0 = res_6_address0;
assign arrayres_6_ce0 = res_6_ce0;
assign arrayres_6_we0 = res_6_we0;
assign arrayres_6_din0 = res_6_d0;
assign arrayres_6_we1 = 0;
assign arrayres_6_din1 = 0;
assign arrayres_6_ready= ready_initial | arrayres_6_done;
assign arrayres_6_done =    AESL_done_delay;


//------------------------arrayres_7 Instantiation--------------

// The input and output of arrayres_7
wire    arrayres_7_ce0, arrayres_7_ce1;
wire    arrayres_7_we0, arrayres_7_we1;
wire    [2 : 0]    arrayres_7_address0, arrayres_7_address1;
wire    [15 : 0]    arrayres_7_din0, arrayres_7_din1;
wire    [15 : 0]    arrayres_7_dout0, arrayres_7_dout1;
wire    arrayres_7_ready;
wire    arrayres_7_done;

`AESL_MEM_res_7 `AESL_MEM_INST_res_7(
    .clk        (AESL_clock),
    .rst        (AESL_reset),
    .ce0        (arrayres_7_ce0),
    .we0        (arrayres_7_we0),
    .address0   (arrayres_7_address0),
    .din0       (arrayres_7_din0),
    .dout0      (arrayres_7_dout0),
    .ce1        (arrayres_7_ce1),
    .we1        (arrayres_7_we1),
    .address1   (arrayres_7_address1),
    .din1       (arrayres_7_din1),
    .dout1      (arrayres_7_dout1),
    .ready      (arrayres_7_ready),
    .done    (arrayres_7_done)
);

// Assignment between dut and arrayres_7
assign arrayres_7_address0 = res_7_address0;
assign arrayres_7_ce0 = res_7_ce0;
assign arrayres_7_we0 = res_7_we0;
assign arrayres_7_din0 = res_7_d0;
assign arrayres_7_we1 = 0;
assign arrayres_7_din1 = 0;
assign arrayres_7_ready= ready_initial | arrayres_7_done;
assign arrayres_7_done =    AESL_done_delay;


initial begin : generate_AESL_ready_cnt_proc
    AESL_ready_cnt = 0;
    wait(AESL_reset === 0);
    while(AESL_ready_cnt != AUTOTB_TRANSACTION_NUM) begin
        while(AESL_ready !== 1) begin
            @(posedge AESL_clock);
            # 0.4;
        end
        @(negedge AESL_clock);
        AESL_ready_cnt = AESL_ready_cnt + 1;
        @(posedge AESL_clock);
        # 0.4;
    end
end

    event next_trigger_ready_cnt;
    
    initial begin : gen_ready_cnt
        ready_cnt = 0;
        wait (AESL_reset === 0);
        forever begin
            @ (posedge AESL_clock);
            if (ready == 1) begin
                if (ready_cnt < AUTOTB_TRANSACTION_NUM) begin
                    ready_cnt = ready_cnt + 1;
                end
            end
            -> next_trigger_ready_cnt;
        end
    end
    
    wire all_finish = (done_cnt == AUTOTB_TRANSACTION_NUM);
    
    // done_cnt
    always @ (posedge AESL_clock) begin
        if (AESL_reset) begin
            done_cnt <= 0;
        end else begin
            if (AESL_done == 1) begin
                if (done_cnt < AUTOTB_TRANSACTION_NUM) begin
                    done_cnt <= done_cnt + 1;
                end
            end
        end
    end
    
    initial begin : finish_simulation
        integer fp1;
        integer fp2;
        wait (all_finish == 1);
        // last transaction is saved at negedge right after last done
        @ (posedge AESL_clock);
        @ (posedge AESL_clock);
        @ (posedge AESL_clock);
        @ (posedge AESL_clock);
    fp1 = $fopen("./rtl.matrix_conv.autotvout_res_0.dat", "r");
    fp2 = $fopen("./impl_rtl.matrix_conv.autotvout_res_0.dat", "r");
    if(fp1 == 0)        // Failed to open file
        $display("Failed to open file \"./rtl.matrix_conv.autotvout_res_0.dat\"!");
    else if(fp2 == 0)
        $display("Failed to open file \"./impl_rtl.matrix_conv.autotvout_res_0.dat\"!");
    else begin
        $display("Comparing rtl.matrix_conv.autotvout_res_0.dat with impl_rtl.matrix_conv.autotvout_res_0.dat");
        post_check(fp1, fp2);
    end
    $fclose(fp1);
    $fclose(fp2);
    fp1 = $fopen("./rtl.matrix_conv.autotvout_res_1.dat", "r");
    fp2 = $fopen("./impl_rtl.matrix_conv.autotvout_res_1.dat", "r");
    if(fp1 == 0)        // Failed to open file
        $display("Failed to open file \"./rtl.matrix_conv.autotvout_res_1.dat\"!");
    else if(fp2 == 0)
        $display("Failed to open file \"./impl_rtl.matrix_conv.autotvout_res_1.dat\"!");
    else begin
        $display("Comparing rtl.matrix_conv.autotvout_res_1.dat with impl_rtl.matrix_conv.autotvout_res_1.dat");
        post_check(fp1, fp2);
    end
    $fclose(fp1);
    $fclose(fp2);
    fp1 = $fopen("./rtl.matrix_conv.autotvout_res_2.dat", "r");
    fp2 = $fopen("./impl_rtl.matrix_conv.autotvout_res_2.dat", "r");
    if(fp1 == 0)        // Failed to open file
        $display("Failed to open file \"./rtl.matrix_conv.autotvout_res_2.dat\"!");
    else if(fp2 == 0)
        $display("Failed to open file \"./impl_rtl.matrix_conv.autotvout_res_2.dat\"!");
    else begin
        $display("Comparing rtl.matrix_conv.autotvout_res_2.dat with impl_rtl.matrix_conv.autotvout_res_2.dat");
        post_check(fp1, fp2);
    end
    $fclose(fp1);
    $fclose(fp2);
    fp1 = $fopen("./rtl.matrix_conv.autotvout_res_3.dat", "r");
    fp2 = $fopen("./impl_rtl.matrix_conv.autotvout_res_3.dat", "r");
    if(fp1 == 0)        // Failed to open file
        $display("Failed to open file \"./rtl.matrix_conv.autotvout_res_3.dat\"!");
    else if(fp2 == 0)
        $display("Failed to open file \"./impl_rtl.matrix_conv.autotvout_res_3.dat\"!");
    else begin
        $display("Comparing rtl.matrix_conv.autotvout_res_3.dat with impl_rtl.matrix_conv.autotvout_res_3.dat");
        post_check(fp1, fp2);
    end
    $fclose(fp1);
    $fclose(fp2);
    fp1 = $fopen("./rtl.matrix_conv.autotvout_res_4.dat", "r");
    fp2 = $fopen("./impl_rtl.matrix_conv.autotvout_res_4.dat", "r");
    if(fp1 == 0)        // Failed to open file
        $display("Failed to open file \"./rtl.matrix_conv.autotvout_res_4.dat\"!");
    else if(fp2 == 0)
        $display("Failed to open file \"./impl_rtl.matrix_conv.autotvout_res_4.dat\"!");
    else begin
        $display("Comparing rtl.matrix_conv.autotvout_res_4.dat with impl_rtl.matrix_conv.autotvout_res_4.dat");
        post_check(fp1, fp2);
    end
    $fclose(fp1);
    $fclose(fp2);
    fp1 = $fopen("./rtl.matrix_conv.autotvout_res_5.dat", "r");
    fp2 = $fopen("./impl_rtl.matrix_conv.autotvout_res_5.dat", "r");
    if(fp1 == 0)        // Failed to open file
        $display("Failed to open file \"./rtl.matrix_conv.autotvout_res_5.dat\"!");
    else if(fp2 == 0)
        $display("Failed to open file \"./impl_rtl.matrix_conv.autotvout_res_5.dat\"!");
    else begin
        $display("Comparing rtl.matrix_conv.autotvout_res_5.dat with impl_rtl.matrix_conv.autotvout_res_5.dat");
        post_check(fp1, fp2);
    end
    $fclose(fp1);
    $fclose(fp2);
    fp1 = $fopen("./rtl.matrix_conv.autotvout_res_6.dat", "r");
    fp2 = $fopen("./impl_rtl.matrix_conv.autotvout_res_6.dat", "r");
    if(fp1 == 0)        // Failed to open file
        $display("Failed to open file \"./rtl.matrix_conv.autotvout_res_6.dat\"!");
    else if(fp2 == 0)
        $display("Failed to open file \"./impl_rtl.matrix_conv.autotvout_res_6.dat\"!");
    else begin
        $display("Comparing rtl.matrix_conv.autotvout_res_6.dat with impl_rtl.matrix_conv.autotvout_res_6.dat");
        post_check(fp1, fp2);
    end
    $fclose(fp1);
    $fclose(fp2);
    fp1 = $fopen("./rtl.matrix_conv.autotvout_res_7.dat", "r");
    fp2 = $fopen("./impl_rtl.matrix_conv.autotvout_res_7.dat", "r");
    if(fp1 == 0)        // Failed to open file
        $display("Failed to open file \"./rtl.matrix_conv.autotvout_res_7.dat\"!");
    else if(fp2 == 0)
        $display("Failed to open file \"./impl_rtl.matrix_conv.autotvout_res_7.dat\"!");
    else begin
        $display("Comparing rtl.matrix_conv.autotvout_res_7.dat with impl_rtl.matrix_conv.autotvout_res_7.dat");
        post_check(fp1, fp2);
    end
    $fclose(fp1);
    $fclose(fp2);
        $display("Simulation Passed.");
        $finish;
    end
    
initial begin
    AESL_clock = 0;
    forever #`AUTOTB_CLOCK_PERIOD_DIV2 AESL_clock = ~AESL_clock;
end


reg end_a_0;
reg [31:0] size_a_0;
reg [31:0] size_a_0_backup;
reg end_a_1;
reg [31:0] size_a_1;
reg [31:0] size_a_1_backup;
reg end_a_2;
reg [31:0] size_a_2;
reg [31:0] size_a_2_backup;
reg end_a_3;
reg [31:0] size_a_3;
reg [31:0] size_a_3_backup;
reg end_a_4;
reg [31:0] size_a_4;
reg [31:0] size_a_4_backup;
reg end_a_5;
reg [31:0] size_a_5;
reg [31:0] size_a_5_backup;
reg end_a_6;
reg [31:0] size_a_6;
reg [31:0] size_a_6_backup;
reg end_a_7;
reg [31:0] size_a_7;
reg [31:0] size_a_7_backup;
reg end_a_8;
reg [31:0] size_a_8;
reg [31:0] size_a_8_backup;
reg end_a_9;
reg [31:0] size_a_9;
reg [31:0] size_a_9_backup;
reg end_b_0;
reg [31:0] size_b_0;
reg [31:0] size_b_0_backup;
reg end_b_1;
reg [31:0] size_b_1;
reg [31:0] size_b_1_backup;
reg end_b_2;
reg [31:0] size_b_2;
reg [31:0] size_b_2_backup;
reg end_res_0;
reg [31:0] size_res_0;
reg [31:0] size_res_0_backup;
reg end_res_1;
reg [31:0] size_res_1;
reg [31:0] size_res_1_backup;
reg end_res_2;
reg [31:0] size_res_2;
reg [31:0] size_res_2_backup;
reg end_res_3;
reg [31:0] size_res_3;
reg [31:0] size_res_3_backup;
reg end_res_4;
reg [31:0] size_res_4;
reg [31:0] size_res_4_backup;
reg end_res_5;
reg [31:0] size_res_5;
reg [31:0] size_res_5_backup;
reg end_res_6;
reg [31:0] size_res_6;
reg [31:0] size_res_6_backup;
reg end_res_7;
reg [31:0] size_res_7;
reg [31:0] size_res_7_backup;

initial begin : initial_process
    integer proc_rand;
    rst = 1;
    # 100;
    repeat(3) @ (posedge AESL_clock);
    rst = 0;
end
initial begin : start_process
    integer proc_rand;
    reg [31:0] start_cnt;
    ce = 1;
    start = 0;
    start_cnt = 0;
    wait (AESL_reset === 0);
    @ (posedge AESL_clock);
    #0 start = 1;
    start_cnt = start_cnt + 1;
    forever begin
        @ (posedge AESL_clock);
        if (start_cnt >= AUTOTB_TRANSACTION_NUM) begin
            // keep pushing garbage in
            #0 start = 1;
        end
        if (AESL_ready) begin
            start_cnt = start_cnt + 1;
        end
    end
end

always @(AESL_done)
begin
    tb_continue = AESL_done;
end

initial begin : ready_initial_process
    ready_initial = 0;
    wait (AESL_start === 1);
    ready_initial = 1;
    @(posedge AESL_clock);
    ready_initial = 0;
end

always @(posedge AESL_clock)
begin
    if(AESL_reset)
      AESL_ready_delay = 0;
  else
      AESL_ready_delay = AESL_ready;
end
initial begin : ready_last_n_process
  ready_last_n = 1;
  wait(ready_cnt == AUTOTB_TRANSACTION_NUM)
  @(posedge AESL_clock);
  ready_last_n <= 0;
end

always @(posedge AESL_clock)
begin
    if(AESL_reset)
      ready_delay_last_n = 0;
  else
      ready_delay_last_n <= ready_last_n;
end
assign ready = (ready_initial | AESL_ready_delay);
assign ready_wire = ready_initial | AESL_ready_delay;
initial begin : done_delay_last_n_process
  done_delay_last_n = 1;
  while(done_cnt < AUTOTB_TRANSACTION_NUM)
      @(posedge AESL_clock);
  # 0.1;
  done_delay_last_n = 0;
end

always @(posedge AESL_clock)
begin
    if(AESL_reset)
  begin
      AESL_done_delay <= 0;
      AESL_done_delay2 <= 0;
  end
  else begin
      AESL_done_delay <= AESL_done & done_delay_last_n;
      AESL_done_delay2 <= AESL_done_delay;
  end
end
always @(posedge AESL_clock)
begin
    if(AESL_reset)
      interface_done = 0;
  else begin
      # 0.01;
      if(ready === 1 && ready_cnt > 0 && ready_cnt < AUTOTB_TRANSACTION_NUM)
          interface_done = 1;
      else if(AESL_done_delay === 1 && done_cnt == AUTOTB_TRANSACTION_NUM)
          interface_done = 1;
      else
          interface_done = 0;
  end
end

reg dump_tvout_finish_res_0;

initial begin : dump_tvout_runtime_sign_res_0
    integer fp;
    dump_tvout_finish_res_0 = 0;
    fp = $fopen(`AUTOTB_TVOUT_res_0_out_wrapc, "w");
    if (fp == 0) begin
        $display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_res_0_out_wrapc);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    $fdisplay(fp,"[[[runtime]]]");
    $fclose(fp);
    wait (done_cnt == AUTOTB_TRANSACTION_NUM);
    // last transaction is saved at negedge right after last done
    @ (posedge AESL_clock);
    @ (posedge AESL_clock);
    @ (posedge AESL_clock);
    fp = $fopen(`AUTOTB_TVOUT_res_0_out_wrapc, "a");
    if (fp == 0) begin
        $display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_res_0_out_wrapc);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    $fdisplay(fp,"[[[/runtime]]]");
    $fclose(fp);
    dump_tvout_finish_res_0 = 1;
end


reg dump_tvout_finish_res_1;

initial begin : dump_tvout_runtime_sign_res_1
    integer fp;
    dump_tvout_finish_res_1 = 0;
    fp = $fopen(`AUTOTB_TVOUT_res_1_out_wrapc, "w");
    if (fp == 0) begin
        $display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_res_1_out_wrapc);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    $fdisplay(fp,"[[[runtime]]]");
    $fclose(fp);
    wait (done_cnt == AUTOTB_TRANSACTION_NUM);
    // last transaction is saved at negedge right after last done
    @ (posedge AESL_clock);
    @ (posedge AESL_clock);
    @ (posedge AESL_clock);
    fp = $fopen(`AUTOTB_TVOUT_res_1_out_wrapc, "a");
    if (fp == 0) begin
        $display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_res_1_out_wrapc);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    $fdisplay(fp,"[[[/runtime]]]");
    $fclose(fp);
    dump_tvout_finish_res_1 = 1;
end


reg dump_tvout_finish_res_2;

initial begin : dump_tvout_runtime_sign_res_2
    integer fp;
    dump_tvout_finish_res_2 = 0;
    fp = $fopen(`AUTOTB_TVOUT_res_2_out_wrapc, "w");
    if (fp == 0) begin
        $display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_res_2_out_wrapc);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    $fdisplay(fp,"[[[runtime]]]");
    $fclose(fp);
    wait (done_cnt == AUTOTB_TRANSACTION_NUM);
    // last transaction is saved at negedge right after last done
    @ (posedge AESL_clock);
    @ (posedge AESL_clock);
    @ (posedge AESL_clock);
    fp = $fopen(`AUTOTB_TVOUT_res_2_out_wrapc, "a");
    if (fp == 0) begin
        $display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_res_2_out_wrapc);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    $fdisplay(fp,"[[[/runtime]]]");
    $fclose(fp);
    dump_tvout_finish_res_2 = 1;
end


reg dump_tvout_finish_res_3;

initial begin : dump_tvout_runtime_sign_res_3
    integer fp;
    dump_tvout_finish_res_3 = 0;
    fp = $fopen(`AUTOTB_TVOUT_res_3_out_wrapc, "w");
    if (fp == 0) begin
        $display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_res_3_out_wrapc);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    $fdisplay(fp,"[[[runtime]]]");
    $fclose(fp);
    wait (done_cnt == AUTOTB_TRANSACTION_NUM);
    // last transaction is saved at negedge right after last done
    @ (posedge AESL_clock);
    @ (posedge AESL_clock);
    @ (posedge AESL_clock);
    fp = $fopen(`AUTOTB_TVOUT_res_3_out_wrapc, "a");
    if (fp == 0) begin
        $display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_res_3_out_wrapc);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    $fdisplay(fp,"[[[/runtime]]]");
    $fclose(fp);
    dump_tvout_finish_res_3 = 1;
end


reg dump_tvout_finish_res_4;

initial begin : dump_tvout_runtime_sign_res_4
    integer fp;
    dump_tvout_finish_res_4 = 0;
    fp = $fopen(`AUTOTB_TVOUT_res_4_out_wrapc, "w");
    if (fp == 0) begin
        $display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_res_4_out_wrapc);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    $fdisplay(fp,"[[[runtime]]]");
    $fclose(fp);
    wait (done_cnt == AUTOTB_TRANSACTION_NUM);
    // last transaction is saved at negedge right after last done
    @ (posedge AESL_clock);
    @ (posedge AESL_clock);
    @ (posedge AESL_clock);
    fp = $fopen(`AUTOTB_TVOUT_res_4_out_wrapc, "a");
    if (fp == 0) begin
        $display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_res_4_out_wrapc);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    $fdisplay(fp,"[[[/runtime]]]");
    $fclose(fp);
    dump_tvout_finish_res_4 = 1;
end


reg dump_tvout_finish_res_5;

initial begin : dump_tvout_runtime_sign_res_5
    integer fp;
    dump_tvout_finish_res_5 = 0;
    fp = $fopen(`AUTOTB_TVOUT_res_5_out_wrapc, "w");
    if (fp == 0) begin
        $display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_res_5_out_wrapc);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    $fdisplay(fp,"[[[runtime]]]");
    $fclose(fp);
    wait (done_cnt == AUTOTB_TRANSACTION_NUM);
    // last transaction is saved at negedge right after last done
    @ (posedge AESL_clock);
    @ (posedge AESL_clock);
    @ (posedge AESL_clock);
    fp = $fopen(`AUTOTB_TVOUT_res_5_out_wrapc, "a");
    if (fp == 0) begin
        $display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_res_5_out_wrapc);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    $fdisplay(fp,"[[[/runtime]]]");
    $fclose(fp);
    dump_tvout_finish_res_5 = 1;
end


reg dump_tvout_finish_res_6;

initial begin : dump_tvout_runtime_sign_res_6
    integer fp;
    dump_tvout_finish_res_6 = 0;
    fp = $fopen(`AUTOTB_TVOUT_res_6_out_wrapc, "w");
    if (fp == 0) begin
        $display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_res_6_out_wrapc);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    $fdisplay(fp,"[[[runtime]]]");
    $fclose(fp);
    wait (done_cnt == AUTOTB_TRANSACTION_NUM);
    // last transaction is saved at negedge right after last done
    @ (posedge AESL_clock);
    @ (posedge AESL_clock);
    @ (posedge AESL_clock);
    fp = $fopen(`AUTOTB_TVOUT_res_6_out_wrapc, "a");
    if (fp == 0) begin
        $display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_res_6_out_wrapc);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    $fdisplay(fp,"[[[/runtime]]]");
    $fclose(fp);
    dump_tvout_finish_res_6 = 1;
end


reg dump_tvout_finish_res_7;

initial begin : dump_tvout_runtime_sign_res_7
    integer fp;
    dump_tvout_finish_res_7 = 0;
    fp = $fopen(`AUTOTB_TVOUT_res_7_out_wrapc, "w");
    if (fp == 0) begin
        $display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_res_7_out_wrapc);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    $fdisplay(fp,"[[[runtime]]]");
    $fclose(fp);
    wait (done_cnt == AUTOTB_TRANSACTION_NUM);
    // last transaction is saved at negedge right after last done
    @ (posedge AESL_clock);
    @ (posedge AESL_clock);
    @ (posedge AESL_clock);
    fp = $fopen(`AUTOTB_TVOUT_res_7_out_wrapc, "a");
    if (fp == 0) begin
        $display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_res_7_out_wrapc);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    $fdisplay(fp,"[[[/runtime]]]");
    $fclose(fp);
    dump_tvout_finish_res_7 = 1;
end


////////////////////////////////////////////
// progress and performance
////////////////////////////////////////////

task wait_start();
    while (~AESL_start) begin
        @ (posedge AESL_clock);
    end
endtask

reg [31:0] clk_cnt = 0;
reg AESL_ready_p1;
reg AESL_start_p1;

always @ (posedge AESL_clock) begin
    clk_cnt <= clk_cnt + 1;
    AESL_ready_p1 <= AESL_ready;
    AESL_start_p1 <= AESL_start;
end

reg [31:0] start_timestamp [0:AUTOTB_TRANSACTION_NUM - 1];
reg [31:0] start_cnt;
reg [31:0] ready_timestamp [0:AUTOTB_TRANSACTION_NUM - 1];
reg [31:0] ap_ready_cnt;
reg [31:0] finish_timestamp [0:AUTOTB_TRANSACTION_NUM - 1];
reg [31:0] finish_cnt;
event report_progress;

initial begin
    start_cnt = 0;
    finish_cnt = 0;
    ap_ready_cnt = 0;
    wait (AESL_reset == 0);
    wait_start();
    start_timestamp[start_cnt] = clk_cnt;
    start_cnt = start_cnt + 1;
    if (AESL_done) begin
        finish_timestamp[finish_cnt] = clk_cnt;
        finish_cnt = finish_cnt + 1;
    end
    -> report_progress;
    forever begin
        @ (posedge AESL_clock);
        if (start_cnt < AUTOTB_TRANSACTION_NUM) begin
            if ((AESL_start && AESL_ready_p1)||(AESL_start && ~AESL_start_p1)) begin
                start_timestamp[start_cnt] = clk_cnt;
                start_cnt = start_cnt + 1;
            end
        end
        if (ap_ready_cnt < AUTOTB_TRANSACTION_NUM) begin
            if (AESL_start_p1 && AESL_ready_p1) begin
                ready_timestamp[ap_ready_cnt] = clk_cnt;
                ap_ready_cnt = ap_ready_cnt + 1;
            end
        end
        if (finish_cnt < AUTOTB_TRANSACTION_NUM) begin
            if (AESL_done) begin
                finish_timestamp[finish_cnt] = clk_cnt;
                finish_cnt = finish_cnt + 1;
            end
        end
        -> report_progress;
    end
end

reg [31:0] progress_timeout;

initial begin : simulation_progress
    real intra_progress;
    wait (AESL_reset == 0);
    progress_timeout = PROGRESS_TIMEOUT;
    $display("////////////////////////////////////////////////////////////////////////////////////");
    $display("// Inter-Transaction Progress: Completed Transaction / Total Transaction");
    $display("// Intra-Transaction Progress: Measured Latency / Latency Estimation * 100%%");
    $display("//");
    $display("// RTL Simulation : \"Inter-Transaction Progress\" [\"Intra-Transaction Progress\"] @ \"Simulation Time\"");
    $display("////////////////////////////////////////////////////////////////////////////////////");
    print_progress();
    while (finish_cnt < AUTOTB_TRANSACTION_NUM) begin
        @ (report_progress);
        if (finish_cnt < AUTOTB_TRANSACTION_NUM) begin
            if (AESL_done) begin
                print_progress();
                progress_timeout = PROGRESS_TIMEOUT;
            end else begin
                if (progress_timeout == 0) begin
                    print_progress();
                    progress_timeout = PROGRESS_TIMEOUT;
                end else begin
                    progress_timeout = progress_timeout - 1;
                end
            end
        end
    end
    print_progress();
    $display("////////////////////////////////////////////////////////////////////////////////////");
    calculate_performance();
end

task get_intra_progress(output real intra_progress);
    begin
        if (start_cnt > finish_cnt) begin
            intra_progress = clk_cnt - start_timestamp[finish_cnt];
        end else if(finish_cnt > 0) begin
            intra_progress = LATENCY_ESTIMATION;
        end else begin
            intra_progress = 0;
        end
        intra_progress = intra_progress / LATENCY_ESTIMATION;
    end
endtask

task print_progress();
    real intra_progress;
    begin
        if (LATENCY_ESTIMATION > 0) begin
            get_intra_progress(intra_progress);
            $display("// RTL Simulation : %0d / %0d [%2.2f%%] @ \"%0t\"", finish_cnt, AUTOTB_TRANSACTION_NUM, intra_progress * 100, $time);
        end else begin
            $display("// RTL Simulation : %0d / %0d [n/a] @ \"%0t\"", finish_cnt, AUTOTB_TRANSACTION_NUM, $time);
        end
    end
endtask

task calculate_performance();
    integer i;
    integer fp;
    reg [31:0] latency [0:AUTOTB_TRANSACTION_NUM - 1];
    reg [31:0] latency_min;
    reg [31:0] latency_max;
    reg [31:0] latency_total;
    reg [31:0] latency_average;
    reg [31:0] interval [0:AUTOTB_TRANSACTION_NUM - 2];
    reg [31:0] interval_min;
    reg [31:0] interval_max;
    reg [31:0] interval_total;
    reg [31:0] interval_average;
    begin
        latency_min = -1;
        latency_max = 0;
        latency_total = 0;
        interval_min = -1;
        interval_max = 0;
        interval_total = 0;

        for (i = 0; i < AUTOTB_TRANSACTION_NUM; i = i + 1) begin
            // calculate latency
            latency[i] = finish_timestamp[i] - start_timestamp[i];
            if (latency[i] > latency_max) latency_max = latency[i];
            if (latency[i] < latency_min) latency_min = latency[i];
            latency_total = latency_total + latency[i];
            // calculate interval
            if (AUTOTB_TRANSACTION_NUM == 1) begin
                interval[i] = 0;
                interval_max = 0;
                interval_min = 0;
                interval_total = 0;
            end else if (i < AUTOTB_TRANSACTION_NUM - 1) begin
                interval[i] = finish_timestamp[i] - start_timestamp[i]+1;
                if (interval[i] > interval_max) interval_max = interval[i];
                if (interval[i] < interval_min) interval_min = interval[i];
                interval_total = interval_total + interval[i];
            end
        end

        latency_average = latency_total / AUTOTB_TRANSACTION_NUM;
        if (AUTOTB_TRANSACTION_NUM == 1) begin
            interval_average = 0;
        end else begin
            interval_average = interval_total / (AUTOTB_TRANSACTION_NUM - 1);
        end

        fp = $fopen(`AUTOTB_LAT_RESULT_FILE, "w");

        $fdisplay(fp, "$MAX_LATENCY = \"%0d\"", latency_max);
        $fdisplay(fp, "$MIN_LATENCY = \"%0d\"", latency_min);
        $fdisplay(fp, "$AVER_LATENCY = \"%0d\"", latency_average);
        $fdisplay(fp, "$MAX_THROUGHPUT = \"%0d\"", interval_max);
        $fdisplay(fp, "$MIN_THROUGHPUT = \"%0d\"", interval_min);
        $fdisplay(fp, "$AVER_THROUGHPUT = \"%0d\"", interval_average);

        $fclose(fp);

        fp = $fopen(`AUTOTB_PER_RESULT_TRANS_FILE, "w");

        $fdisplay(fp, "%20s%16s%16s", "", "latency", "interval");
        if (AUTOTB_TRANSACTION_NUM == 1) begin
            i = 0;
            $fdisplay(fp, "transaction%8d:%16d%16d", i, latency[i], interval[i]);
        end else begin
            for (i = 0; i < AUTOTB_TRANSACTION_NUM; i = i + 1) begin
                if (i < AUTOTB_TRANSACTION_NUM - 1) begin
                    $fdisplay(fp, "transaction%8d:%16d%16d", i, latency[i], interval[i]);
                end else begin
                    $fdisplay(fp, "transaction%8d:%16d               x", i, latency[i]);
                end
            end
        end

        $fclose(fp);
    end
endtask


////////////////////////////////////////////
// Dependence Check
////////////////////////////////////////////

`ifndef POST_SYN

`endif

endmodule
