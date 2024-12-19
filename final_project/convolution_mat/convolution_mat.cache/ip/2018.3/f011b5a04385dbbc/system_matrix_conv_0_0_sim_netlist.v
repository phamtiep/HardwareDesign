// Copyright 1986-2018 Xilinx, Inc. All Rights Reserved.
// --------------------------------------------------------------------------------
// Tool Version: Vivado v.2018.3 (win64) Build 2405991 Thu Dec  6 23:38:27 MST 2018
// Date        : Thu Dec 19 00:05:21 2024
// Host        : 05252zas running 64-bit major release  (build 9200)
// Command     : write_verilog -force -mode funcsim -rename_top decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix -prefix
//               decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_ system_matrix_conv_0_0_sim_netlist.v
// Design      : system_matrix_conv_0_0
// Purpose     : This verilog netlist is a functional simulation representation of the design and should not be modified
//               or synthesized. This netlist cannot be used for SDF annotated simulation.
// Device      : xc7z020clg484-1
// --------------------------------------------------------------------------------
`timescale 1 ps / 1 ps

(* ap_ST_fsm_state1 = "6'b000001" *) (* ap_ST_fsm_state2 = "6'b000010" *) (* ap_ST_fsm_state3 = "6'b000100" *) 
(* ap_ST_fsm_state4 = "6'b001000" *) (* ap_ST_fsm_state5 = "6'b010000" *) (* ap_ST_fsm_state6 = "6'b100000" *) 
(* hls_module = "yes" *) 
module decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_matrix_conv
   (ap_clk,
    ap_rst,
    ap_start,
    ap_done,
    ap_idle,
    ap_ready,
    a_address0,
    a_ce0,
    a_q0,
    b_address0,
    b_ce0,
    b_q0,
    res_address0,
    res_ce0,
    res_we0,
    res_d0);
  input ap_clk;
  input ap_rst;
  input ap_start;
  output ap_done;
  output ap_idle;
  output ap_ready;
  output [6:0]a_address0;
  output a_ce0;
  input [7:0]a_q0;
  output [3:0]b_address0;
  output b_ce0;
  input [7:0]b_q0;
  output [5:0]res_address0;
  output res_ce0;
  output res_we0;
  output [15:0]res_d0;

  wire [6:0]a_address0;
  wire \a_address0[2]_INST_0_i_1_n_2 ;
  wire \a_address0[6]_INST_0_i_1_n_2 ;
  wire [7:0]a_q0;
  wire \ap_CS_fsm[5]_i_1_n_2 ;
  wire \ap_CS_fsm_reg_n_2_[0] ;
  wire ap_CS_fsm_state2;
  wire ap_CS_fsm_state3;
  wire ap_CS_fsm_state6;
  wire [4:0]ap_NS_fsm;
  wire ap_NS_fsm1;
  wire ap_NS_fsm11_out;
  wire ap_clk;
  wire ap_idle;
  wire ap_ready;
  wire ap_rst;
  wire ap_start;
  wire [3:0]b_address0;
  wire b_ce0;
  wire [7:0]b_q0;
  wire [3:0]i_1_fu_174_p2;
  wire [3:0]i_1_reg_361;
  wire i_reg_97;
  wire [3:0]j_1_fu_198_p2;
  wire [3:0]j_1_reg_374;
  wire j_reg_109;
  wire \j_reg_109_reg_n_2_[3] ;
  wire [1:0]m_1_reg_382;
  wire \m_1_reg_382[0]_i_1_n_2 ;
  wire \m_1_reg_382[1]_i_1_n_2 ;
  wire m_reg_134;
  wire [1:0]n_1_reg_400;
  wire \n_1_reg_400[0]_i_1_n_2 ;
  wire \n_1_reg_400[1]_i_1_n_2 ;
  wire n_reg_1570;
  wire \n_reg_157[0]_i_1_n_2 ;
  wire \n_reg_157[1]_i_1_n_2 ;
  wire \n_reg_157_reg_n_2_[0] ;
  wire \n_reg_157_reg_n_2_[1] ;
  wire [5:2]p_0_in;
  wire [3:2]p_shl_cast_fu_268_p1;
  wire [5:0]res_address0;
  wire res_ce0;
  wire [15:0]res_d0;
  wire res_we0;
  wire [15:0]sum_1_reg_145_reg;
  wire [5:3]tmp_10_cast_reg_366;
  wire \tmp_10_cast_reg_366[3]_i_1_n_2 ;
  wire \tmp_10_cast_reg_366[4]_i_1_n_2 ;
  wire \tmp_10_cast_reg_366[5]_i_1_n_2 ;
  wire [6:1]tmp_11_reg_387;
  wire [3:0]tmp_13_reg_392;
  wire \tmp_13_reg_392[1]_i_1_n_2 ;
  wire \tmp_13_reg_392[2]_i_1_n_2 ;
  wire \tmp_13_reg_392[3]_i_1_n_2 ;
  wire [1:0]tmp_4_fu_220_p2;
  wire [3:3]tmp_9_cast_fu_314_p1;
  wire [6:3]tmp_fu_180_p3;

  assign a_ce0 = b_ce0;
  assign ap_done = ap_ready;
  (* SOFT_HLUTNM = "soft_lutpair14" *) 
  LUT2 #(
    .INIT(4'h6)) 
    \a_address0[0]_INST_0 
       (.I0(\n_reg_157_reg_n_2_[0] ),
        .I1(res_address0[0]),
        .O(a_address0[0]));
  (* SOFT_HLUTNM = "soft_lutpair2" *) 
  LUT5 #(
    .INIT(32'h69969696)) 
    \a_address0[1]_INST_0 
       (.I0(tmp_11_reg_387[1]),
        .I1(\n_reg_157_reg_n_2_[1] ),
        .I2(res_address0[1]),
        .I3(res_address0[0]),
        .I4(\n_reg_157_reg_n_2_[0] ),
        .O(a_address0[1]));
  LUT6 #(
    .INIT(64'h7EE8811781177EE8)) 
    \a_address0[2]_INST_0 
       (.I0(tmp_11_reg_387[1]),
        .I1(\a_address0[2]_INST_0_i_1_n_2 ),
        .I2(\n_reg_157_reg_n_2_[1] ),
        .I3(res_address0[1]),
        .I4(res_address0[2]),
        .I5(tmp_11_reg_387[2]),
        .O(a_address0[2]));
  (* SOFT_HLUTNM = "soft_lutpair14" *) 
  LUT2 #(
    .INIT(4'h8)) 
    \a_address0[2]_INST_0_i_1 
       (.I0(res_address0[0]),
        .I1(\n_reg_157_reg_n_2_[0] ),
        .O(\a_address0[2]_INST_0_i_1_n_2 ));
  LUT3 #(
    .INIT(8'h96)) 
    \a_address0[3]_INST_0 
       (.I0(\a_address0[6]_INST_0_i_1_n_2 ),
        .I1(tmp_9_cast_fu_314_p1),
        .I2(tmp_11_reg_387[3]),
        .O(a_address0[3]));
  (* SOFT_HLUTNM = "soft_lutpair4" *) 
  LUT4 #(
    .INIT(16'h17E8)) 
    \a_address0[4]_INST_0 
       (.I0(\a_address0[6]_INST_0_i_1_n_2 ),
        .I1(tmp_11_reg_387[3]),
        .I2(tmp_9_cast_fu_314_p1),
        .I3(tmp_11_reg_387[4]),
        .O(a_address0[4]));
  (* SOFT_HLUTNM = "soft_lutpair4" *) 
  LUT5 #(
    .INIT(32'h17FFE800)) 
    \a_address0[5]_INST_0 
       (.I0(tmp_9_cast_fu_314_p1),
        .I1(tmp_11_reg_387[3]),
        .I2(\a_address0[6]_INST_0_i_1_n_2 ),
        .I3(tmp_11_reg_387[4]),
        .I4(tmp_11_reg_387[5]),
        .O(a_address0[5]));
  LUT6 #(
    .INIT(64'h577FFFFFA8800000)) 
    \a_address0[6]_INST_0 
       (.I0(tmp_11_reg_387[4]),
        .I1(\a_address0[6]_INST_0_i_1_n_2 ),
        .I2(tmp_11_reg_387[3]),
        .I3(tmp_9_cast_fu_314_p1),
        .I4(tmp_11_reg_387[5]),
        .I5(tmp_11_reg_387[6]),
        .O(a_address0[6]));
  LUT6 #(
    .INIT(64'hD77E4228566A0000)) 
    \a_address0[6]_INST_0_i_1 
       (.I0(res_address0[2]),
        .I1(res_address0[1]),
        .I2(\n_reg_157_reg_n_2_[1] ),
        .I3(\a_address0[2]_INST_0_i_1_n_2 ),
        .I4(tmp_11_reg_387[2]),
        .I5(tmp_11_reg_387[1]),
        .O(\a_address0[6]_INST_0_i_1_n_2 ));
  LUT6 #(
    .INIT(64'h1777FFFFE8880000)) 
    \a_address0[6]_INST_0_i_2 
       (.I0(res_address0[1]),
        .I1(\n_reg_157_reg_n_2_[1] ),
        .I2(\n_reg_157_reg_n_2_[0] ),
        .I3(res_address0[0]),
        .I4(res_address0[2]),
        .I5(\j_reg_109_reg_n_2_[3] ),
        .O(tmp_9_cast_fu_314_p1));
  LUT4 #(
    .INIT(16'hF222)) 
    \ap_CS_fsm[0]_i_1 
       (.I0(\ap_CS_fsm_reg_n_2_[0] ),
        .I1(ap_start),
        .I2(ap_ready),
        .I3(ap_CS_fsm_state2),
        .O(ap_NS_fsm[0]));
  (* SOFT_HLUTNM = "soft_lutpair9" *) 
  LUT4 #(
    .INIT(16'hF888)) 
    \ap_CS_fsm[1]_i_1 
       (.I0(\ap_CS_fsm_reg_n_2_[0] ),
        .I1(ap_start),
        .I2(ap_NS_fsm11_out),
        .I3(ap_CS_fsm_state3),
        .O(ap_NS_fsm[1]));
  LUT5 #(
    .INIT(32'hF4444444)) 
    \ap_CS_fsm[2]_i_1 
       (.I0(ap_ready),
        .I1(ap_CS_fsm_state2),
        .I2(p_shl_cast_fu_268_p1[3]),
        .I3(p_shl_cast_fu_268_p1[2]),
        .I4(res_ce0),
        .O(ap_NS_fsm[2]));
  (* SOFT_HLUTNM = "soft_lutpair0" *) 
  LUT5 #(
    .INIT(32'hF4444444)) 
    \ap_CS_fsm[3]_i_1 
       (.I0(ap_NS_fsm11_out),
        .I1(ap_CS_fsm_state3),
        .I2(\n_reg_157_reg_n_2_[1] ),
        .I3(\n_reg_157_reg_n_2_[0] ),
        .I4(b_ce0),
        .O(ap_NS_fsm[3]));
  LUT4 #(
    .INIT(16'hFF70)) 
    \ap_CS_fsm[4]_i_1 
       (.I0(p_shl_cast_fu_268_p1[3]),
        .I1(p_shl_cast_fu_268_p1[2]),
        .I2(res_ce0),
        .I3(ap_CS_fsm_state6),
        .O(ap_NS_fsm[4]));
  (* SOFT_HLUTNM = "soft_lutpair0" *) 
  LUT3 #(
    .INIT(8'h2A)) 
    \ap_CS_fsm[5]_i_1 
       (.I0(b_ce0),
        .I1(\n_reg_157_reg_n_2_[0] ),
        .I2(\n_reg_157_reg_n_2_[1] ),
        .O(\ap_CS_fsm[5]_i_1_n_2 ));
  (* FSM_ENCODING = "none" *) 
  FDSE #(
    .INIT(1'b1)) 
    \ap_CS_fsm_reg[0] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(ap_NS_fsm[0]),
        .Q(\ap_CS_fsm_reg_n_2_[0] ),
        .S(ap_rst));
  (* FSM_ENCODING = "none" *) 
  FDRE #(
    .INIT(1'b0)) 
    \ap_CS_fsm_reg[1] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(ap_NS_fsm[1]),
        .Q(ap_CS_fsm_state2),
        .R(ap_rst));
  (* FSM_ENCODING = "none" *) 
  FDRE #(
    .INIT(1'b0)) 
    \ap_CS_fsm_reg[2] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(ap_NS_fsm[2]),
        .Q(ap_CS_fsm_state3),
        .R(ap_rst));
  (* FSM_ENCODING = "none" *) 
  FDRE #(
    .INIT(1'b0)) 
    \ap_CS_fsm_reg[3] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(ap_NS_fsm[3]),
        .Q(res_ce0),
        .R(ap_rst));
  (* FSM_ENCODING = "none" *) 
  FDRE #(
    .INIT(1'b0)) 
    \ap_CS_fsm_reg[4] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(ap_NS_fsm[4]),
        .Q(b_ce0),
        .R(ap_rst));
  (* FSM_ENCODING = "none" *) 
  FDRE #(
    .INIT(1'b0)) 
    \ap_CS_fsm_reg[5] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\ap_CS_fsm[5]_i_1_n_2 ),
        .Q(ap_CS_fsm_state6),
        .R(ap_rst));
  (* SOFT_HLUTNM = "soft_lutpair9" *) 
  LUT2 #(
    .INIT(4'h2)) 
    ap_idle_INST_0
       (.I0(\ap_CS_fsm_reg_n_2_[0] ),
        .I1(ap_start),
        .O(ap_idle));
  (* SOFT_HLUTNM = "soft_lutpair1" *) 
  LUT5 #(
    .INIT(32'h00040000)) 
    ap_ready_INST_0
       (.I0(tmp_fu_180_p3[3]),
        .I1(tmp_fu_180_p3[6]),
        .I2(tmp_fu_180_p3[4]),
        .I3(tmp_fu_180_p3[5]),
        .I4(ap_CS_fsm_state2),
        .O(ap_ready));
  LUT2 #(
    .INIT(4'h6)) 
    \b_address0[0]_INST_0 
       (.I0(tmp_13_reg_392[0]),
        .I1(\n_reg_157_reg_n_2_[0] ),
        .O(b_address0[0]));
  (* SOFT_HLUTNM = "soft_lutpair3" *) 
  LUT4 #(
    .INIT(16'h8778)) 
    \b_address0[1]_INST_0 
       (.I0(tmp_13_reg_392[0]),
        .I1(\n_reg_157_reg_n_2_[0] ),
        .I2(\n_reg_157_reg_n_2_[1] ),
        .I3(tmp_13_reg_392[1]),
        .O(b_address0[1]));
  (* SOFT_HLUTNM = "soft_lutpair3" *) 
  LUT5 #(
    .INIT(32'h077FF880)) 
    \b_address0[2]_INST_0 
       (.I0(\n_reg_157_reg_n_2_[0] ),
        .I1(tmp_13_reg_392[0]),
        .I2(tmp_13_reg_392[1]),
        .I3(\n_reg_157_reg_n_2_[1] ),
        .I4(tmp_13_reg_392[2]),
        .O(b_address0[2]));
  LUT6 #(
    .INIT(64'h1777FFFFE8880000)) 
    \b_address0[3]_INST_0 
       (.I0(\n_reg_157_reg_n_2_[1] ),
        .I1(tmp_13_reg_392[1]),
        .I2(tmp_13_reg_392[0]),
        .I3(\n_reg_157_reg_n_2_[0] ),
        .I4(tmp_13_reg_392[2]),
        .I5(tmp_13_reg_392[3]),
        .O(b_address0[3]));
  LUT1 #(
    .INIT(2'h1)) 
    \i_1_reg_361[0]_i_1 
       (.I0(tmp_fu_180_p3[3]),
        .O(i_1_fu_174_p2[0]));
  (* SOFT_HLUTNM = "soft_lutpair11" *) 
  LUT2 #(
    .INIT(4'h6)) 
    \i_1_reg_361[1]_i_1 
       (.I0(tmp_fu_180_p3[3]),
        .I1(tmp_fu_180_p3[4]),
        .O(i_1_fu_174_p2[1]));
  (* SOFT_HLUTNM = "soft_lutpair11" *) 
  LUT3 #(
    .INIT(8'h78)) 
    \i_1_reg_361[2]_i_1 
       (.I0(tmp_fu_180_p3[3]),
        .I1(tmp_fu_180_p3[4]),
        .I2(tmp_fu_180_p3[5]),
        .O(i_1_fu_174_p2[2]));
  (* SOFT_HLUTNM = "soft_lutpair1" *) 
  LUT4 #(
    .INIT(16'h7F80)) 
    \i_1_reg_361[3]_i_1 
       (.I0(tmp_fu_180_p3[4]),
        .I1(tmp_fu_180_p3[3]),
        .I2(tmp_fu_180_p3[5]),
        .I3(tmp_fu_180_p3[6]),
        .O(i_1_fu_174_p2[3]));
  FDRE \i_1_reg_361_reg[0] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state2),
        .D(i_1_fu_174_p2[0]),
        .Q(i_1_reg_361[0]),
        .R(1'b0));
  FDRE \i_1_reg_361_reg[1] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state2),
        .D(i_1_fu_174_p2[1]),
        .Q(i_1_reg_361[1]),
        .R(1'b0));
  FDRE \i_1_reg_361_reg[2] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state2),
        .D(i_1_fu_174_p2[2]),
        .Q(i_1_reg_361[2]),
        .R(1'b0));
  FDRE \i_1_reg_361_reg[3] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state2),
        .D(i_1_fu_174_p2[3]),
        .Q(i_1_reg_361[3]),
        .R(1'b0));
  LUT3 #(
    .INIT(8'h08)) 
    \i_reg_97[3]_i_1 
       (.I0(ap_start),
        .I1(\ap_CS_fsm_reg_n_2_[0] ),
        .I2(ap_NS_fsm11_out),
        .O(i_reg_97));
  LUT5 #(
    .INIT(32'h00000020)) 
    \i_reg_97[3]_i_2 
       (.I0(ap_CS_fsm_state3),
        .I1(res_address0[0]),
        .I2(\j_reg_109_reg_n_2_[3] ),
        .I3(res_address0[1]),
        .I4(res_address0[2]),
        .O(ap_NS_fsm11_out));
  FDRE \i_reg_97_reg[0] 
       (.C(ap_clk),
        .CE(ap_NS_fsm11_out),
        .D(i_1_reg_361[0]),
        .Q(tmp_fu_180_p3[3]),
        .R(i_reg_97));
  FDRE \i_reg_97_reg[1] 
       (.C(ap_clk),
        .CE(ap_NS_fsm11_out),
        .D(i_1_reg_361[1]),
        .Q(tmp_fu_180_p3[4]),
        .R(i_reg_97));
  FDRE \i_reg_97_reg[2] 
       (.C(ap_clk),
        .CE(ap_NS_fsm11_out),
        .D(i_1_reg_361[2]),
        .Q(tmp_fu_180_p3[5]),
        .R(i_reg_97));
  FDRE \i_reg_97_reg[3] 
       (.C(ap_clk),
        .CE(ap_NS_fsm11_out),
        .D(i_1_reg_361[3]),
        .Q(tmp_fu_180_p3[6]),
        .R(i_reg_97));
  LUT1 #(
    .INIT(2'h1)) 
    \j_1_reg_374[0]_i_1 
       (.I0(res_address0[0]),
        .O(j_1_fu_198_p2[0]));
  (* SOFT_HLUTNM = "soft_lutpair2" *) 
  LUT2 #(
    .INIT(4'h6)) 
    \j_1_reg_374[1]_i_1 
       (.I0(res_address0[0]),
        .I1(res_address0[1]),
        .O(j_1_fu_198_p2[1]));
  (* SOFT_HLUTNM = "soft_lutpair6" *) 
  LUT3 #(
    .INIT(8'h78)) 
    \j_1_reg_374[2]_i_1 
       (.I0(res_address0[0]),
        .I1(res_address0[1]),
        .I2(res_address0[2]),
        .O(j_1_fu_198_p2[2]));
  (* SOFT_HLUTNM = "soft_lutpair6" *) 
  LUT4 #(
    .INIT(16'h7F80)) 
    \j_1_reg_374[3]_i_1 
       (.I0(res_address0[1]),
        .I1(res_address0[0]),
        .I2(res_address0[2]),
        .I3(\j_reg_109_reg_n_2_[3] ),
        .O(j_1_fu_198_p2[3]));
  FDRE \j_1_reg_374_reg[0] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state3),
        .D(j_1_fu_198_p2[0]),
        .Q(j_1_reg_374[0]),
        .R(1'b0));
  FDRE \j_1_reg_374_reg[1] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state3),
        .D(j_1_fu_198_p2[1]),
        .Q(j_1_reg_374[1]),
        .R(1'b0));
  FDRE \j_1_reg_374_reg[2] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state3),
        .D(j_1_fu_198_p2[2]),
        .Q(j_1_reg_374[2]),
        .R(1'b0));
  FDRE \j_1_reg_374_reg[3] 
       (.C(ap_clk),
        .CE(ap_CS_fsm_state3),
        .D(j_1_fu_198_p2[3]),
        .Q(j_1_reg_374[3]),
        .R(1'b0));
  LUT6 #(
    .INIT(64'h00000000FFEF0000)) 
    \j_reg_109[2]_i_1 
       (.I0(tmp_fu_180_p3[5]),
        .I1(tmp_fu_180_p3[4]),
        .I2(tmp_fu_180_p3[6]),
        .I3(tmp_fu_180_p3[3]),
        .I4(ap_CS_fsm_state2),
        .I5(res_we0),
        .O(j_reg_109));
  FDRE \j_reg_109_reg[0] 
       (.C(ap_clk),
        .CE(res_we0),
        .D(j_1_reg_374[0]),
        .Q(res_address0[0]),
        .R(j_reg_109));
  FDRE \j_reg_109_reg[1] 
       (.C(ap_clk),
        .CE(res_we0),
        .D(j_1_reg_374[1]),
        .Q(res_address0[1]),
        .R(j_reg_109));
  FDRE \j_reg_109_reg[2] 
       (.C(ap_clk),
        .CE(res_we0),
        .D(j_1_reg_374[2]),
        .Q(res_address0[2]),
        .R(j_reg_109));
  FDRE \j_reg_109_reg[3] 
       (.C(ap_clk),
        .CE(res_we0),
        .D(j_1_reg_374[3]),
        .Q(\j_reg_109_reg_n_2_[3] ),
        .R(j_reg_109));
  (* SOFT_HLUTNM = "soft_lutpair7" *) 
  LUT3 #(
    .INIT(8'h74)) 
    \m_1_reg_382[0]_i_1 
       (.I0(p_shl_cast_fu_268_p1[2]),
        .I1(res_ce0),
        .I2(m_1_reg_382[0]),
        .O(\m_1_reg_382[0]_i_1_n_2 ));
  (* SOFT_HLUTNM = "soft_lutpair7" *) 
  LUT4 #(
    .INIT(16'h6F60)) 
    \m_1_reg_382[1]_i_1 
       (.I0(p_shl_cast_fu_268_p1[2]),
        .I1(p_shl_cast_fu_268_p1[3]),
        .I2(res_ce0),
        .I3(m_1_reg_382[1]),
        .O(\m_1_reg_382[1]_i_1_n_2 ));
  FDRE \m_1_reg_382_reg[0] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\m_1_reg_382[0]_i_1_n_2 ),
        .Q(m_1_reg_382[0]),
        .R(1'b0));
  FDRE \m_1_reg_382_reg[1] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\m_1_reg_382[1]_i_1_n_2 ),
        .Q(m_1_reg_382[1]),
        .R(1'b0));
  FDRE \m_reg_134_reg[0] 
       (.C(ap_clk),
        .CE(ap_NS_fsm1),
        .D(m_1_reg_382[0]),
        .Q(p_shl_cast_fu_268_p1[2]),
        .R(m_reg_134));
  FDRE \m_reg_134_reg[1] 
       (.C(ap_clk),
        .CE(ap_NS_fsm1),
        .D(m_1_reg_382[1]),
        .Q(p_shl_cast_fu_268_p1[3]),
        .R(m_reg_134));
  decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_matrix_conv_mac_mbkb matrix_conv_mac_mbkb_U1
       (.E(ap_NS_fsm1),
        .P(sum_1_reg_145_reg),
        .Q({ap_CS_fsm_state6,b_ce0,res_ce0,ap_CS_fsm_state3}),
        .SR(m_reg_134),
        .a_q0(a_q0),
        .ap_clk(ap_clk),
        .b_q0(b_q0),
        .p(p_shl_cast_fu_268_p1),
        .p_0({\j_reg_109_reg_n_2_[3] ,res_address0[2:0]}),
        .p_1(\n_reg_157_reg_n_2_[1] ),
        .p_2(\n_reg_157_reg_n_2_[0] ));
  (* SOFT_HLUTNM = "soft_lutpair8" *) 
  LUT3 #(
    .INIT(8'h74)) 
    \n_1_reg_400[0]_i_1 
       (.I0(\n_reg_157_reg_n_2_[0] ),
        .I1(b_ce0),
        .I2(n_1_reg_400[0]),
        .O(\n_1_reg_400[0]_i_1_n_2 ));
  (* SOFT_HLUTNM = "soft_lutpair8" *) 
  LUT4 #(
    .INIT(16'h6F60)) 
    \n_1_reg_400[1]_i_1 
       (.I0(\n_reg_157_reg_n_2_[0] ),
        .I1(\n_reg_157_reg_n_2_[1] ),
        .I2(b_ce0),
        .I3(n_1_reg_400[1]),
        .O(\n_1_reg_400[1]_i_1_n_2 ));
  FDRE \n_1_reg_400_reg[0] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\n_1_reg_400[0]_i_1_n_2 ),
        .Q(n_1_reg_400[0]),
        .R(1'b0));
  FDRE \n_1_reg_400_reg[1] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\n_1_reg_400[1]_i_1_n_2 ),
        .Q(n_1_reg_400[1]),
        .R(1'b0));
  LUT6 #(
    .INIT(64'hCACAC0CAC0CAC0CA)) 
    \n_reg_157[0]_i_1 
       (.I0(\n_reg_157_reg_n_2_[0] ),
        .I1(n_1_reg_400[0]),
        .I2(ap_CS_fsm_state6),
        .I3(res_ce0),
        .I4(p_shl_cast_fu_268_p1[3]),
        .I5(p_shl_cast_fu_268_p1[2]),
        .O(\n_reg_157[0]_i_1_n_2 ));
  LUT6 #(
    .INIT(64'hCACAC0CAC0CAC0CA)) 
    \n_reg_157[1]_i_1 
       (.I0(\n_reg_157_reg_n_2_[1] ),
        .I1(n_1_reg_400[1]),
        .I2(ap_CS_fsm_state6),
        .I3(res_ce0),
        .I4(p_shl_cast_fu_268_p1[3]),
        .I5(p_shl_cast_fu_268_p1[2]),
        .O(\n_reg_157[1]_i_1_n_2 ));
  FDRE \n_reg_157_reg[0] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\n_reg_157[0]_i_1_n_2 ),
        .Q(\n_reg_157_reg_n_2_[0] ),
        .R(1'b0));
  FDRE \n_reg_157_reg[1] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\n_reg_157[1]_i_1_n_2 ),
        .Q(\n_reg_157_reg_n_2_[1] ),
        .R(1'b0));
  LUT2 #(
    .INIT(4'h6)) 
    \res_address0[3]_INST_0 
       (.I0(tmp_10_cast_reg_366[3]),
        .I1(\j_reg_109_reg_n_2_[3] ),
        .O(res_address0[3]));
  (* SOFT_HLUTNM = "soft_lutpair10" *) 
  LUT3 #(
    .INIT(8'h78)) 
    \res_address0[4]_INST_0 
       (.I0(tmp_10_cast_reg_366[3]),
        .I1(\j_reg_109_reg_n_2_[3] ),
        .I2(tmp_10_cast_reg_366[4]),
        .O(res_address0[4]));
  (* SOFT_HLUTNM = "soft_lutpair10" *) 
  LUT4 #(
    .INIT(16'h7F80)) 
    \res_address0[5]_INST_0 
       (.I0(\j_reg_109_reg_n_2_[3] ),
        .I1(tmp_10_cast_reg_366[3]),
        .I2(tmp_10_cast_reg_366[4]),
        .I3(tmp_10_cast_reg_366[5]),
        .O(res_address0[5]));
  LUT3 #(
    .INIT(8'h80)) 
    res_we0_INST_0
       (.I0(p_shl_cast_fu_268_p1[3]),
        .I1(p_shl_cast_fu_268_p1[2]),
        .I2(res_ce0),
        .O(res_we0));
  FDRE \sum_reg_121_reg[0] 
       (.C(ap_clk),
        .CE(ap_NS_fsm1),
        .D(sum_1_reg_145_reg[0]),
        .Q(res_d0[0]),
        .R(m_reg_134));
  FDRE \sum_reg_121_reg[10] 
       (.C(ap_clk),
        .CE(ap_NS_fsm1),
        .D(sum_1_reg_145_reg[10]),
        .Q(res_d0[10]),
        .R(m_reg_134));
  FDRE \sum_reg_121_reg[11] 
       (.C(ap_clk),
        .CE(ap_NS_fsm1),
        .D(sum_1_reg_145_reg[11]),
        .Q(res_d0[11]),
        .R(m_reg_134));
  FDRE \sum_reg_121_reg[12] 
       (.C(ap_clk),
        .CE(ap_NS_fsm1),
        .D(sum_1_reg_145_reg[12]),
        .Q(res_d0[12]),
        .R(m_reg_134));
  FDRE \sum_reg_121_reg[13] 
       (.C(ap_clk),
        .CE(ap_NS_fsm1),
        .D(sum_1_reg_145_reg[13]),
        .Q(res_d0[13]),
        .R(m_reg_134));
  FDRE \sum_reg_121_reg[14] 
       (.C(ap_clk),
        .CE(ap_NS_fsm1),
        .D(sum_1_reg_145_reg[14]),
        .Q(res_d0[14]),
        .R(m_reg_134));
  FDRE \sum_reg_121_reg[15] 
       (.C(ap_clk),
        .CE(ap_NS_fsm1),
        .D(sum_1_reg_145_reg[15]),
        .Q(res_d0[15]),
        .R(m_reg_134));
  FDRE \sum_reg_121_reg[1] 
       (.C(ap_clk),
        .CE(ap_NS_fsm1),
        .D(sum_1_reg_145_reg[1]),
        .Q(res_d0[1]),
        .R(m_reg_134));
  FDRE \sum_reg_121_reg[2] 
       (.C(ap_clk),
        .CE(ap_NS_fsm1),
        .D(sum_1_reg_145_reg[2]),
        .Q(res_d0[2]),
        .R(m_reg_134));
  FDRE \sum_reg_121_reg[3] 
       (.C(ap_clk),
        .CE(ap_NS_fsm1),
        .D(sum_1_reg_145_reg[3]),
        .Q(res_d0[3]),
        .R(m_reg_134));
  FDRE \sum_reg_121_reg[4] 
       (.C(ap_clk),
        .CE(ap_NS_fsm1),
        .D(sum_1_reg_145_reg[4]),
        .Q(res_d0[4]),
        .R(m_reg_134));
  FDRE \sum_reg_121_reg[5] 
       (.C(ap_clk),
        .CE(ap_NS_fsm1),
        .D(sum_1_reg_145_reg[5]),
        .Q(res_d0[5]),
        .R(m_reg_134));
  FDRE \sum_reg_121_reg[6] 
       (.C(ap_clk),
        .CE(ap_NS_fsm1),
        .D(sum_1_reg_145_reg[6]),
        .Q(res_d0[6]),
        .R(m_reg_134));
  FDRE \sum_reg_121_reg[7] 
       (.C(ap_clk),
        .CE(ap_NS_fsm1),
        .D(sum_1_reg_145_reg[7]),
        .Q(res_d0[7]),
        .R(m_reg_134));
  FDRE \sum_reg_121_reg[8] 
       (.C(ap_clk),
        .CE(ap_NS_fsm1),
        .D(sum_1_reg_145_reg[8]),
        .Q(res_d0[8]),
        .R(m_reg_134));
  FDRE \sum_reg_121_reg[9] 
       (.C(ap_clk),
        .CE(ap_NS_fsm1),
        .D(sum_1_reg_145_reg[9]),
        .Q(res_d0[9]),
        .R(m_reg_134));
  LUT6 #(
    .INIT(64'hDDDDDDFD88888888)) 
    \tmp_10_cast_reg_366[3]_i_1 
       (.I0(ap_CS_fsm_state2),
        .I1(tmp_fu_180_p3[3]),
        .I2(tmp_fu_180_p3[6]),
        .I3(tmp_fu_180_p3[4]),
        .I4(tmp_fu_180_p3[5]),
        .I5(tmp_10_cast_reg_366[3]),
        .O(\tmp_10_cast_reg_366[3]_i_1_n_2 ));
  LUT6 #(
    .INIT(64'hFF55FF75AA00AA00)) 
    \tmp_10_cast_reg_366[4]_i_1 
       (.I0(ap_CS_fsm_state2),
        .I1(tmp_fu_180_p3[3]),
        .I2(tmp_fu_180_p3[6]),
        .I3(tmp_fu_180_p3[4]),
        .I4(tmp_fu_180_p3[5]),
        .I5(tmp_10_cast_reg_366[4]),
        .O(\tmp_10_cast_reg_366[4]_i_1_n_2 ));
  LUT6 #(
    .INIT(64'hFFFF5575AAAA0000)) 
    \tmp_10_cast_reg_366[5]_i_1 
       (.I0(ap_CS_fsm_state2),
        .I1(tmp_fu_180_p3[3]),
        .I2(tmp_fu_180_p3[6]),
        .I3(tmp_fu_180_p3[4]),
        .I4(tmp_fu_180_p3[5]),
        .I5(tmp_10_cast_reg_366[5]),
        .O(\tmp_10_cast_reg_366[5]_i_1_n_2 ));
  FDRE \tmp_10_cast_reg_366_reg[3] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\tmp_10_cast_reg_366[3]_i_1_n_2 ),
        .Q(tmp_10_cast_reg_366[3]),
        .R(1'b0));
  FDRE \tmp_10_cast_reg_366_reg[4] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\tmp_10_cast_reg_366[4]_i_1_n_2 ),
        .Q(tmp_10_cast_reg_366[4]),
        .R(1'b0));
  FDRE \tmp_10_cast_reg_366_reg[5] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\tmp_10_cast_reg_366[5]_i_1_n_2 ),
        .Q(tmp_10_cast_reg_366[5]),
        .R(1'b0));
  (* SOFT_HLUTNM = "soft_lutpair13" *) 
  LUT2 #(
    .INIT(4'h6)) 
    \tmp_11_reg_387[1]_i_1 
       (.I0(p_shl_cast_fu_268_p1[2]),
        .I1(tmp_fu_180_p3[3]),
        .O(tmp_4_fu_220_p2[0]));
  (* SOFT_HLUTNM = "soft_lutpair5" *) 
  LUT4 #(
    .INIT(16'h8778)) 
    \tmp_11_reg_387[2]_i_1 
       (.I0(p_shl_cast_fu_268_p1[2]),
        .I1(tmp_fu_180_p3[3]),
        .I2(tmp_fu_180_p3[4]),
        .I3(p_shl_cast_fu_268_p1[3]),
        .O(tmp_4_fu_220_p2[1]));
  (* SOFT_HLUTNM = "soft_lutpair5" *) 
  LUT5 #(
    .INIT(32'h5695956A)) 
    \tmp_11_reg_387[3]_i_1 
       (.I0(tmp_fu_180_p3[5]),
        .I1(tmp_fu_180_p3[4]),
        .I2(p_shl_cast_fu_268_p1[3]),
        .I3(tmp_fu_180_p3[3]),
        .I4(p_shl_cast_fu_268_p1[2]),
        .O(p_0_in[2]));
  LUT6 #(
    .INIT(64'h86611887799EE778)) 
    \tmp_11_reg_387[4]_i_1 
       (.I0(p_shl_cast_fu_268_p1[2]),
        .I1(tmp_fu_180_p3[3]),
        .I2(tmp_fu_180_p3[4]),
        .I3(p_shl_cast_fu_268_p1[3]),
        .I4(tmp_fu_180_p3[5]),
        .I5(tmp_fu_180_p3[6]),
        .O(p_0_in[3]));
  LUT6 #(
    .INIT(64'h533612241224366C)) 
    \tmp_11_reg_387[5]_i_1 
       (.I0(tmp_fu_180_p3[6]),
        .I1(tmp_fu_180_p3[5]),
        .I2(tmp_fu_180_p3[4]),
        .I3(p_shl_cast_fu_268_p1[3]),
        .I4(p_shl_cast_fu_268_p1[2]),
        .I5(tmp_fu_180_p3[3]),
        .O(p_0_in[4]));
  LUT3 #(
    .INIT(8'h2A)) 
    \tmp_11_reg_387[6]_i_1 
       (.I0(res_ce0),
        .I1(p_shl_cast_fu_268_p1[3]),
        .I2(p_shl_cast_fu_268_p1[2]),
        .O(n_reg_1570));
  LUT6 #(
    .INIT(64'h444666626662222A)) 
    \tmp_11_reg_387[6]_i_2 
       (.I0(tmp_fu_180_p3[6]),
        .I1(tmp_fu_180_p3[5]),
        .I2(tmp_fu_180_p3[3]),
        .I3(p_shl_cast_fu_268_p1[2]),
        .I4(p_shl_cast_fu_268_p1[3]),
        .I5(tmp_fu_180_p3[4]),
        .O(p_0_in[5]));
  FDRE \tmp_11_reg_387_reg[1] 
       (.C(ap_clk),
        .CE(n_reg_1570),
        .D(tmp_4_fu_220_p2[0]),
        .Q(tmp_11_reg_387[1]),
        .R(1'b0));
  FDRE \tmp_11_reg_387_reg[2] 
       (.C(ap_clk),
        .CE(n_reg_1570),
        .D(tmp_4_fu_220_p2[1]),
        .Q(tmp_11_reg_387[2]),
        .R(1'b0));
  FDRE \tmp_11_reg_387_reg[3] 
       (.C(ap_clk),
        .CE(n_reg_1570),
        .D(p_0_in[2]),
        .Q(tmp_11_reg_387[3]),
        .R(1'b0));
  FDRE \tmp_11_reg_387_reg[4] 
       (.C(ap_clk),
        .CE(n_reg_1570),
        .D(p_0_in[3]),
        .Q(tmp_11_reg_387[4]),
        .R(1'b0));
  FDRE \tmp_11_reg_387_reg[5] 
       (.C(ap_clk),
        .CE(n_reg_1570),
        .D(p_0_in[4]),
        .Q(tmp_11_reg_387[5]),
        .R(1'b0));
  FDRE \tmp_11_reg_387_reg[6] 
       (.C(ap_clk),
        .CE(n_reg_1570),
        .D(p_0_in[5]),
        .Q(tmp_11_reg_387[6]),
        .R(1'b0));
  (* SOFT_HLUTNM = "soft_lutpair12" *) 
  LUT2 #(
    .INIT(4'h6)) 
    \tmp_13_reg_392[1]_i_1 
       (.I0(p_shl_cast_fu_268_p1[2]),
        .I1(p_shl_cast_fu_268_p1[3]),
        .O(\tmp_13_reg_392[1]_i_1_n_2 ));
  (* SOFT_HLUTNM = "soft_lutpair13" *) 
  LUT2 #(
    .INIT(4'h2)) 
    \tmp_13_reg_392[2]_i_1 
       (.I0(p_shl_cast_fu_268_p1[3]),
        .I1(p_shl_cast_fu_268_p1[2]),
        .O(\tmp_13_reg_392[2]_i_1_n_2 ));
  (* SOFT_HLUTNM = "soft_lutpair12" *) 
  LUT2 #(
    .INIT(4'h8)) 
    \tmp_13_reg_392[3]_i_1 
       (.I0(p_shl_cast_fu_268_p1[2]),
        .I1(p_shl_cast_fu_268_p1[3]),
        .O(\tmp_13_reg_392[3]_i_1_n_2 ));
  FDRE \tmp_13_reg_392_reg[0] 
       (.C(ap_clk),
        .CE(n_reg_1570),
        .D(p_shl_cast_fu_268_p1[2]),
        .Q(tmp_13_reg_392[0]),
        .R(1'b0));
  FDRE \tmp_13_reg_392_reg[1] 
       (.C(ap_clk),
        .CE(n_reg_1570),
        .D(\tmp_13_reg_392[1]_i_1_n_2 ),
        .Q(tmp_13_reg_392[1]),
        .R(1'b0));
  FDRE \tmp_13_reg_392_reg[2] 
       (.C(ap_clk),
        .CE(n_reg_1570),
        .D(\tmp_13_reg_392[2]_i_1_n_2 ),
        .Q(tmp_13_reg_392[2]),
        .R(1'b0));
  FDRE \tmp_13_reg_392_reg[3] 
       (.C(ap_clk),
        .CE(n_reg_1570),
        .D(\tmp_13_reg_392[3]_i_1_n_2 ),
        .Q(tmp_13_reg_392[3]),
        .R(1'b0));
endmodule

module decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_matrix_conv_mac_mbkb
   (SR,
    E,
    P,
    Q,
    p,
    p_0,
    p_1,
    p_2,
    ap_clk,
    a_q0,
    b_q0);
  output [0:0]SR;
  output [0:0]E;
  output [15:0]P;
  input [3:0]Q;
  input [1:0]p;
  input [3:0]p_0;
  input p_1;
  input p_2;
  input ap_clk;
  input [7:0]a_q0;
  input [7:0]b_q0;

  wire [0:0]E;
  wire [15:0]P;
  wire [3:0]Q;
  wire [0:0]SR;
  wire [7:0]a_q0;
  wire ap_clk;
  wire [7:0]b_q0;
  wire [1:0]p;
  wire [3:0]p_0;
  wire p_1;
  wire p_2;

  decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_matrix_conv_mac_mbkb_DSP48_0 matrix_conv_mac_mbkb_DSP48_0_U
       (.E(E),
        .P(P),
        .Q(Q),
        .SR(SR),
        .a_q0(a_q0),
        .ap_clk(ap_clk),
        .b_q0(b_q0),
        .p_0(p),
        .p_1(p_0),
        .p_2(p_1),
        .p_3(p_2));
endmodule

module decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_matrix_conv_mac_mbkb_DSP48_0
   (SR,
    E,
    P,
    Q,
    p_0,
    p_1,
    p_2,
    p_3,
    ap_clk,
    a_q0,
    b_q0);
  output [0:0]SR;
  output [0:0]E;
  output [15:0]P;
  input [3:0]Q;
  input [1:0]p_0;
  input [3:0]p_1;
  input p_2;
  input p_3;
  input ap_clk;
  input [7:0]a_q0;
  input [7:0]b_q0;

  wire [0:0]E;
  wire [15:0]P;
  wire [3:0]Q;
  wire [0:0]SR;
  wire [7:0]a_q0;
  wire ap_clk;
  wire [7:0]b_q0;
  wire [1:0]p_0;
  wire [3:0]p_1;
  wire p_2;
  wire p_3;
  wire p_i_1_n_2;
  wire p_i_2_n_2;
  wire NLW_p_CARRYCASCOUT_UNCONNECTED;
  wire NLW_p_MULTSIGNOUT_UNCONNECTED;
  wire NLW_p_OVERFLOW_UNCONNECTED;
  wire NLW_p_PATTERNBDETECT_UNCONNECTED;
  wire NLW_p_PATTERNDETECT_UNCONNECTED;
  wire NLW_p_UNDERFLOW_UNCONNECTED;
  wire [29:0]NLW_p_ACOUT_UNCONNECTED;
  wire [17:0]NLW_p_BCOUT_UNCONNECTED;
  wire [3:0]NLW_p_CARRYOUT_UNCONNECTED;
  wire [47:16]NLW_p_P_UNCONNECTED;
  wire [47:0]NLW_p_PCOUT_UNCONNECTED;

  DSP48E1 #(
    .ACASCREG(0),
    .ADREG(1),
    .ALUMODEREG(0),
    .AREG(0),
    .AUTORESET_PATDET("NO_RESET"),
    .A_INPUT("DIRECT"),
    .BCASCREG(0),
    .BREG(0),
    .B_INPUT("DIRECT"),
    .CARRYINREG(0),
    .CARRYINSELREG(0),
    .CREG(1),
    .DREG(1),
    .INMODEREG(0),
    .MASK(48'h3FFFFFFFFFFF),
    .MREG(0),
    .OPMODEREG(0),
    .PATTERN(48'h000000000000),
    .PREG(1),
    .SEL_MASK("MASK"),
    .SEL_PATTERN("PATTERN"),
    .USE_DPORT("FALSE"),
    .USE_MULT("MULTIPLY"),
    .USE_PATTERN_DETECT("NO_PATDET"),
    .USE_SIMD("ONE48")) 
    p
       (.A({b_q0[7],b_q0[7],b_q0[7],b_q0[7],b_q0[7],b_q0[7],b_q0[7],b_q0[7],b_q0[7],b_q0[7],b_q0[7],b_q0[7],b_q0[7],b_q0[7],b_q0[7],b_q0[7],b_q0[7],b_q0[7],b_q0[7],b_q0[7],b_q0[7],b_q0[7],b_q0}),
        .ACIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .ACOUT(NLW_p_ACOUT_UNCONNECTED[29:0]),
        .ALUMODE({1'b0,1'b0,1'b0,1'b0}),
        .B({a_q0[7],a_q0[7],a_q0[7],a_q0[7],a_q0[7],a_q0[7],a_q0[7],a_q0[7],a_q0[7],a_q0[7],a_q0}),
        .BCIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .BCOUT(NLW_p_BCOUT_UNCONNECTED[17:0]),
        .C({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,P}),
        .CARRYCASCIN(1'b0),
        .CARRYCASCOUT(NLW_p_CARRYCASCOUT_UNCONNECTED),
        .CARRYIN(1'b0),
        .CARRYINSEL({1'b0,1'b0,1'b0}),
        .CARRYOUT(NLW_p_CARRYOUT_UNCONNECTED[3:0]),
        .CEA1(1'b0),
        .CEA2(1'b0),
        .CEAD(1'b0),
        .CEALUMODE(1'b0),
        .CEB1(1'b0),
        .CEB2(1'b0),
        .CEC(E),
        .CECARRYIN(1'b0),
        .CECTRL(1'b0),
        .CED(1'b0),
        .CEINMODE(1'b0),
        .CEM(1'b0),
        .CEP(p_i_1_n_2),
        .CLK(ap_clk),
        .D({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .INMODE({1'b0,1'b0,1'b0,1'b0,1'b0}),
        .MULTSIGNIN(1'b0),
        .MULTSIGNOUT(NLW_p_MULTSIGNOUT_UNCONNECTED),
        .OPMODE({1'b0,1'b1,p_i_2_n_2,1'b0,Q[3],1'b0,Q[3]}),
        .OVERFLOW(NLW_p_OVERFLOW_UNCONNECTED),
        .P({NLW_p_P_UNCONNECTED[47:16],P}),
        .PATTERNBDETECT(NLW_p_PATTERNBDETECT_UNCONNECTED),
        .PATTERNDETECT(NLW_p_PATTERNDETECT_UNCONNECTED),
        .PCIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .PCOUT(NLW_p_PCOUT_UNCONNECTED[47:0]),
        .RSTA(1'b0),
        .RSTALLCARRYIN(1'b0),
        .RSTALUMODE(1'b0),
        .RSTB(1'b0),
        .RSTC(SR),
        .RSTCTRL(1'b0),
        .RSTD(1'b0),
        .RSTINMODE(1'b0),
        .RSTM(1'b0),
        .RSTP(1'b0),
        .UNDERFLOW(NLW_p_UNDERFLOW_UNCONNECTED));
  LUT4 #(
    .INIT(16'hBFAA)) 
    p_i_1
       (.I0(Q[3]),
        .I1(p_0[0]),
        .I2(p_0[1]),
        .I3(Q[1]),
        .O(p_i_1_n_2));
  LUT1 #(
    .INIT(2'h1)) 
    p_i_2
       (.I0(Q[3]),
        .O(p_i_2_n_2));
  LUT6 #(
    .INIT(64'h00000000FFEF0000)) 
    \sum_reg_121[15]_i_1 
       (.I0(p_1[2]),
        .I1(p_1[1]),
        .I2(p_1[3]),
        .I3(p_1[0]),
        .I4(Q[0]),
        .I5(E),
        .O(SR));
  LUT3 #(
    .INIT(8'h80)) 
    \sum_reg_121[15]_i_2 
       (.I0(p_2),
        .I1(p_3),
        .I2(Q[2]),
        .O(E));
endmodule

(* CHECK_LICENSE_TYPE = "system_matrix_conv_0_0,matrix_conv,{}" *) (* DowngradeIPIdentifiedWarnings = "yes" *) (* IP_DEFINITION_SOURCE = "HLS" *) 
(* X_CORE_INFO = "matrix_conv,Vivado 2018.3" *) (* hls_module = "yes" *) 
(* NotValidForBitStream *)
module decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix
   (a_ce0,
    b_ce0,
    res_ce0,
    res_we0,
    ap_clk,
    ap_rst,
    ap_start,
    ap_done,
    ap_idle,
    ap_ready,
    a_address0,
    a_q0,
    b_address0,
    b_q0,
    res_address0,
    res_d0);
  output a_ce0;
  output b_ce0;
  output res_ce0;
  output res_we0;
  (* X_INTERFACE_INFO = "xilinx.com:signal:clock:1.0 ap_clk CLK" *) (* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME ap_clk, ASSOCIATED_RESET ap_rst, LAYERED_METADATA xilinx.com:interface:datatypes:1.0 {CLK {datatype {name {attribs {resolve_type immediate dependency {} format string minimum {} maximum {}} value {}} bitwidth {attribs {resolve_type immediate dependency {} format long minimum {} maximum {}} value 1} bitoffset {attribs {resolve_type immediate dependency {} format long minimum {} maximum {}} value 0}}}}, FREQ_HZ 100000000, PHASE 0.000, CLK_DOMAIN system_processing_system7_0_0_FCLK_CLK0, INSERT_VIP 0" *) input ap_clk;
  (* X_INTERFACE_INFO = "xilinx.com:signal:reset:1.0 ap_rst RST" *) (* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME ap_rst, POLARITY ACTIVE_HIGH, LAYERED_METADATA xilinx.com:interface:datatypes:1.0 {RST {datatype {name {attribs {resolve_type immediate dependency {} format string minimum {} maximum {}} value {}} bitwidth {attribs {resolve_type immediate dependency {} format long minimum {} maximum {}} value 1} bitoffset {attribs {resolve_type immediate dependency {} format long minimum {} maximum {}} value 0}}}}, INSERT_VIP 0" *) input ap_rst;
  (* X_INTERFACE_INFO = "xilinx.com:interface:acc_handshake:1.0 ap_ctrl start" *) input ap_start;
  (* X_INTERFACE_INFO = "xilinx.com:interface:acc_handshake:1.0 ap_ctrl done" *) output ap_done;
  (* X_INTERFACE_INFO = "xilinx.com:interface:acc_handshake:1.0 ap_ctrl idle" *) output ap_idle;
  (* X_INTERFACE_INFO = "xilinx.com:interface:acc_handshake:1.0 ap_ctrl ready" *) (* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME ap_ctrl, LAYERED_METADATA xilinx.com:interface:datatypes:1.0 {start {datatype {name {attribs {resolve_type immediate dependency {} format string minimum {} maximum {}} value {}} bitwidth {attribs {resolve_type immediate dependency {} format long minimum {} maximum {}} value 1} bitoffset {attribs {resolve_type immediate dependency {} format long minimum {} maximum {}} value 0}}} done {datatype {name {attribs {resolve_type immediate dependency {} format string minimum {} maximum {}} value {}} bitwidth {attribs {resolve_type immediate dependency {} format long minimum {} maximum {}} value 1} bitoffset {attribs {resolve_type immediate dependency {} format long minimum {} maximum {}} value 0}}} idle {datatype {name {attribs {resolve_type immediate dependency {} format string minimum {} maximum {}} value {}} bitwidth {attribs {resolve_type immediate dependency {} format long minimum {} maximum {}} value 1} bitoffset {attribs {resolve_type immediate dependency {} format long minimum {} maximum {}} value 0}}} ready {datatype {name {attribs {resolve_type immediate dependency {} format string minimum {} maximum {}} value {}} bitwidth {attribs {resolve_type immediate dependency {} format long minimum {} maximum {}} value 1} bitoffset {attribs {resolve_type immediate dependency {} format long minimum {} maximum {}} value 0}}}}" *) output ap_ready;
  (* X_INTERFACE_INFO = "xilinx.com:signal:data:1.0 a_address0 DATA" *) (* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME a_address0, LAYERED_METADATA xilinx.com:interface:datatypes:1.0 {DATA {datatype {name {attribs {resolve_type immediate dependency {} format string minimum {} maximum {}} value {}} bitwidth {attribs {resolve_type immediate dependency {} format long minimum {} maximum {}} value 7} bitoffset {attribs {resolve_type immediate dependency {} format long minimum {} maximum {}} value 0}}}}" *) output [6:0]a_address0;
  (* X_INTERFACE_INFO = "xilinx.com:signal:data:1.0 a_q0 DATA" *) (* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME a_q0, LAYERED_METADATA xilinx.com:interface:datatypes:1.0 {DATA {datatype {name {attribs {resolve_type immediate dependency {} format string minimum {} maximum {}} value {}} bitwidth {attribs {resolve_type immediate dependency {} format long minimum {} maximum {}} value 8} bitoffset {attribs {resolve_type immediate dependency {} format long minimum {} maximum {}} value 0} integer {signed {attribs {resolve_type immediate dependency {} format bool minimum {} maximum {}} value true}}}}}" *) input [7:0]a_q0;
  (* X_INTERFACE_INFO = "xilinx.com:signal:data:1.0 b_address0 DATA" *) (* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME b_address0, LAYERED_METADATA xilinx.com:interface:datatypes:1.0 {DATA {datatype {name {attribs {resolve_type immediate dependency {} format string minimum {} maximum {}} value {}} bitwidth {attribs {resolve_type immediate dependency {} format long minimum {} maximum {}} value 4} bitoffset {attribs {resolve_type immediate dependency {} format long minimum {} maximum {}} value 0}}}}" *) output [3:0]b_address0;
  (* X_INTERFACE_INFO = "xilinx.com:signal:data:1.0 b_q0 DATA" *) (* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME b_q0, LAYERED_METADATA xilinx.com:interface:datatypes:1.0 {DATA {datatype {name {attribs {resolve_type immediate dependency {} format string minimum {} maximum {}} value {}} bitwidth {attribs {resolve_type immediate dependency {} format long minimum {} maximum {}} value 8} bitoffset {attribs {resolve_type immediate dependency {} format long minimum {} maximum {}} value 0} integer {signed {attribs {resolve_type immediate dependency {} format bool minimum {} maximum {}} value true}}}}}" *) input [7:0]b_q0;
  (* X_INTERFACE_INFO = "xilinx.com:signal:data:1.0 res_address0 DATA" *) (* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME res_address0, LAYERED_METADATA xilinx.com:interface:datatypes:1.0 {DATA {datatype {name {attribs {resolve_type immediate dependency {} format string minimum {} maximum {}} value {}} bitwidth {attribs {resolve_type immediate dependency {} format long minimum {} maximum {}} value 6} bitoffset {attribs {resolve_type immediate dependency {} format long minimum {} maximum {}} value 0}}}}" *) output [5:0]res_address0;
  (* X_INTERFACE_INFO = "xilinx.com:signal:data:1.0 res_d0 DATA" *) (* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME res_d0, LAYERED_METADATA xilinx.com:interface:datatypes:1.0 {DATA {datatype {name {attribs {resolve_type immediate dependency {} format string minimum {} maximum {}} value {}} bitwidth {attribs {resolve_type immediate dependency {} format long minimum {} maximum {}} value 16} bitoffset {attribs {resolve_type immediate dependency {} format long minimum {} maximum {}} value 0} integer {signed {attribs {resolve_type immediate dependency {} format bool minimum {} maximum {}} value true}}}}}" *) output [15:0]res_d0;

  wire [6:0]a_address0;
  wire a_ce0;
  wire [7:0]a_q0;
  wire ap_clk;
  wire ap_done;
  wire ap_idle;
  wire ap_ready;
  wire ap_rst;
  wire ap_start;
  wire [3:0]b_address0;
  wire b_ce0;
  wire [7:0]b_q0;
  wire [5:0]res_address0;
  wire res_ce0;
  wire [15:0]res_d0;
  wire res_we0;

  (* ap_ST_fsm_state1 = "6'b000001" *) 
  (* ap_ST_fsm_state2 = "6'b000010" *) 
  (* ap_ST_fsm_state3 = "6'b000100" *) 
  (* ap_ST_fsm_state4 = "6'b001000" *) 
  (* ap_ST_fsm_state5 = "6'b010000" *) 
  (* ap_ST_fsm_state6 = "6'b100000" *) 
  decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_matrix_conv inst
       (.a_address0(a_address0),
        .a_ce0(a_ce0),
        .a_q0(a_q0),
        .ap_clk(ap_clk),
        .ap_done(ap_done),
        .ap_idle(ap_idle),
        .ap_ready(ap_ready),
        .ap_rst(ap_rst),
        .ap_start(ap_start),
        .b_address0(b_address0),
        .b_ce0(b_ce0),
        .b_q0(b_q0),
        .res_address0(res_address0),
        .res_ce0(res_ce0),
        .res_d0(res_d0),
        .res_we0(res_we0));
endmodule
`ifndef GLBL
`define GLBL
`timescale  1 ps / 1 ps

module glbl ();

    parameter ROC_WIDTH = 100000;
    parameter TOC_WIDTH = 0;

//--------   STARTUP Globals --------------
    wire GSR;
    wire GTS;
    wire GWE;
    wire PRLD;
    tri1 p_up_tmp;
    tri (weak1, strong0) PLL_LOCKG = p_up_tmp;

    wire PROGB_GLBL;
    wire CCLKO_GLBL;
    wire FCSBO_GLBL;
    wire [3:0] DO_GLBL;
    wire [3:0] DI_GLBL;
   
    reg GSR_int;
    reg GTS_int;
    reg PRLD_int;

//--------   JTAG Globals --------------
    wire JTAG_TDO_GLBL;
    wire JTAG_TCK_GLBL;
    wire JTAG_TDI_GLBL;
    wire JTAG_TMS_GLBL;
    wire JTAG_TRST_GLBL;

    reg JTAG_CAPTURE_GLBL;
    reg JTAG_RESET_GLBL;
    reg JTAG_SHIFT_GLBL;
    reg JTAG_UPDATE_GLBL;
    reg JTAG_RUNTEST_GLBL;

    reg JTAG_SEL1_GLBL = 0;
    reg JTAG_SEL2_GLBL = 0 ;
    reg JTAG_SEL3_GLBL = 0;
    reg JTAG_SEL4_GLBL = 0;

    reg JTAG_USER_TDO1_GLBL = 1'bz;
    reg JTAG_USER_TDO2_GLBL = 1'bz;
    reg JTAG_USER_TDO3_GLBL = 1'bz;
    reg JTAG_USER_TDO4_GLBL = 1'bz;

    assign (strong1, weak0) GSR = GSR_int;
    assign (strong1, weak0) GTS = GTS_int;
    assign (weak1, weak0) PRLD = PRLD_int;

    initial begin
	GSR_int = 1'b1;
	PRLD_int = 1'b1;
	#(ROC_WIDTH)
	GSR_int = 1'b0;
	PRLD_int = 1'b0;
    end

    initial begin
	GTS_int = 1'b1;
	#(TOC_WIDTH)
	GTS_int = 1'b0;
    end

endmodule
`endif
