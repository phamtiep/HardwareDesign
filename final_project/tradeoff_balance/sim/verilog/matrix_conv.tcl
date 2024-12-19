
log_wave -r /
set designtopgroup [add_wave_group "Design Top Signals"]
set coutputgroup [add_wave_group "C Outputs" -into $designtopgroup]
set res_group [add_wave_group res(memory) -into $coutputgroup]
add_wave /apatb_matrix_conv_top/AESL_inst_matrix_conv/res_7_d0 -into $res_group -radix hex
add_wave /apatb_matrix_conv_top/AESL_inst_matrix_conv/res_7_we0 -into $res_group -color #ffff00 -radix hex
add_wave /apatb_matrix_conv_top/AESL_inst_matrix_conv/res_7_ce0 -into $res_group -color #ffff00 -radix hex
add_wave /apatb_matrix_conv_top/AESL_inst_matrix_conv/res_7_address0 -into $res_group -radix hex
add_wave /apatb_matrix_conv_top/AESL_inst_matrix_conv/res_6_d0 -into $res_group -radix hex
add_wave /apatb_matrix_conv_top/AESL_inst_matrix_conv/res_6_we0 -into $res_group -color #ffff00 -radix hex
add_wave /apatb_matrix_conv_top/AESL_inst_matrix_conv/res_6_ce0 -into $res_group -color #ffff00 -radix hex
add_wave /apatb_matrix_conv_top/AESL_inst_matrix_conv/res_6_address0 -into $res_group -radix hex
add_wave /apatb_matrix_conv_top/AESL_inst_matrix_conv/res_5_d0 -into $res_group -radix hex
add_wave /apatb_matrix_conv_top/AESL_inst_matrix_conv/res_5_we0 -into $res_group -color #ffff00 -radix hex
add_wave /apatb_matrix_conv_top/AESL_inst_matrix_conv/res_5_ce0 -into $res_group -color #ffff00 -radix hex
add_wave /apatb_matrix_conv_top/AESL_inst_matrix_conv/res_5_address0 -into $res_group -radix hex
add_wave /apatb_matrix_conv_top/AESL_inst_matrix_conv/res_4_d0 -into $res_group -radix hex
add_wave /apatb_matrix_conv_top/AESL_inst_matrix_conv/res_4_we0 -into $res_group -color #ffff00 -radix hex
add_wave /apatb_matrix_conv_top/AESL_inst_matrix_conv/res_4_ce0 -into $res_group -color #ffff00 -radix hex
add_wave /apatb_matrix_conv_top/AESL_inst_matrix_conv/res_4_address0 -into $res_group -radix hex
add_wave /apatb_matrix_conv_top/AESL_inst_matrix_conv/res_3_d0 -into $res_group -radix hex
add_wave /apatb_matrix_conv_top/AESL_inst_matrix_conv/res_3_we0 -into $res_group -color #ffff00 -radix hex
add_wave /apatb_matrix_conv_top/AESL_inst_matrix_conv/res_3_ce0 -into $res_group -color #ffff00 -radix hex
add_wave /apatb_matrix_conv_top/AESL_inst_matrix_conv/res_3_address0 -into $res_group -radix hex
add_wave /apatb_matrix_conv_top/AESL_inst_matrix_conv/res_2_d0 -into $res_group -radix hex
add_wave /apatb_matrix_conv_top/AESL_inst_matrix_conv/res_2_we0 -into $res_group -color #ffff00 -radix hex
add_wave /apatb_matrix_conv_top/AESL_inst_matrix_conv/res_2_ce0 -into $res_group -color #ffff00 -radix hex
add_wave /apatb_matrix_conv_top/AESL_inst_matrix_conv/res_2_address0 -into $res_group -radix hex
add_wave /apatb_matrix_conv_top/AESL_inst_matrix_conv/res_1_d0 -into $res_group -radix hex
add_wave /apatb_matrix_conv_top/AESL_inst_matrix_conv/res_1_we0 -into $res_group -color #ffff00 -radix hex
add_wave /apatb_matrix_conv_top/AESL_inst_matrix_conv/res_1_ce0 -into $res_group -color #ffff00 -radix hex
add_wave /apatb_matrix_conv_top/AESL_inst_matrix_conv/res_1_address0 -into $res_group -radix hex
add_wave /apatb_matrix_conv_top/AESL_inst_matrix_conv/res_0_d0 -into $res_group -radix hex
add_wave /apatb_matrix_conv_top/AESL_inst_matrix_conv/res_0_we0 -into $res_group -color #ffff00 -radix hex
add_wave /apatb_matrix_conv_top/AESL_inst_matrix_conv/res_0_ce0 -into $res_group -color #ffff00 -radix hex
add_wave /apatb_matrix_conv_top/AESL_inst_matrix_conv/res_0_address0 -into $res_group -radix hex
set cinputgroup [add_wave_group "C Inputs" -into $designtopgroup]
set b_group [add_wave_group b(memory) -into $cinputgroup]
add_wave /apatb_matrix_conv_top/AESL_inst_matrix_conv/b_2_q1 -into $b_group -radix hex
add_wave /apatb_matrix_conv_top/AESL_inst_matrix_conv/b_2_ce1 -into $b_group -color #ffff00 -radix hex
add_wave /apatb_matrix_conv_top/AESL_inst_matrix_conv/b_2_address1 -into $b_group -radix hex
add_wave /apatb_matrix_conv_top/AESL_inst_matrix_conv/b_2_q0 -into $b_group -radix hex
add_wave /apatb_matrix_conv_top/AESL_inst_matrix_conv/b_2_ce0 -into $b_group -color #ffff00 -radix hex
add_wave /apatb_matrix_conv_top/AESL_inst_matrix_conv/b_2_address0 -into $b_group -radix hex
add_wave /apatb_matrix_conv_top/AESL_inst_matrix_conv/b_1_q1 -into $b_group -radix hex
add_wave /apatb_matrix_conv_top/AESL_inst_matrix_conv/b_1_ce1 -into $b_group -color #ffff00 -radix hex
add_wave /apatb_matrix_conv_top/AESL_inst_matrix_conv/b_1_address1 -into $b_group -radix hex
add_wave /apatb_matrix_conv_top/AESL_inst_matrix_conv/b_1_q0 -into $b_group -radix hex
add_wave /apatb_matrix_conv_top/AESL_inst_matrix_conv/b_1_ce0 -into $b_group -color #ffff00 -radix hex
add_wave /apatb_matrix_conv_top/AESL_inst_matrix_conv/b_1_address0 -into $b_group -radix hex
add_wave /apatb_matrix_conv_top/AESL_inst_matrix_conv/b_0_q1 -into $b_group -radix hex
add_wave /apatb_matrix_conv_top/AESL_inst_matrix_conv/b_0_ce1 -into $b_group -color #ffff00 -radix hex
add_wave /apatb_matrix_conv_top/AESL_inst_matrix_conv/b_0_address1 -into $b_group -radix hex
add_wave /apatb_matrix_conv_top/AESL_inst_matrix_conv/b_0_q0 -into $b_group -radix hex
add_wave /apatb_matrix_conv_top/AESL_inst_matrix_conv/b_0_ce0 -into $b_group -color #ffff00 -radix hex
add_wave /apatb_matrix_conv_top/AESL_inst_matrix_conv/b_0_address0 -into $b_group -radix hex
set a_group [add_wave_group a(memory) -into $cinputgroup]
add_wave /apatb_matrix_conv_top/AESL_inst_matrix_conv/a_9_q1 -into $a_group -radix hex
add_wave /apatb_matrix_conv_top/AESL_inst_matrix_conv/a_9_ce1 -into $a_group -color #ffff00 -radix hex
add_wave /apatb_matrix_conv_top/AESL_inst_matrix_conv/a_9_address1 -into $a_group -radix hex
add_wave /apatb_matrix_conv_top/AESL_inst_matrix_conv/a_9_q0 -into $a_group -radix hex
add_wave /apatb_matrix_conv_top/AESL_inst_matrix_conv/a_9_ce0 -into $a_group -color #ffff00 -radix hex
add_wave /apatb_matrix_conv_top/AESL_inst_matrix_conv/a_9_address0 -into $a_group -radix hex
add_wave /apatb_matrix_conv_top/AESL_inst_matrix_conv/a_8_q1 -into $a_group -radix hex
add_wave /apatb_matrix_conv_top/AESL_inst_matrix_conv/a_8_ce1 -into $a_group -color #ffff00 -radix hex
add_wave /apatb_matrix_conv_top/AESL_inst_matrix_conv/a_8_address1 -into $a_group -radix hex
add_wave /apatb_matrix_conv_top/AESL_inst_matrix_conv/a_8_q0 -into $a_group -radix hex
add_wave /apatb_matrix_conv_top/AESL_inst_matrix_conv/a_8_ce0 -into $a_group -color #ffff00 -radix hex
add_wave /apatb_matrix_conv_top/AESL_inst_matrix_conv/a_8_address0 -into $a_group -radix hex
add_wave /apatb_matrix_conv_top/AESL_inst_matrix_conv/a_7_q1 -into $a_group -radix hex
add_wave /apatb_matrix_conv_top/AESL_inst_matrix_conv/a_7_ce1 -into $a_group -color #ffff00 -radix hex
add_wave /apatb_matrix_conv_top/AESL_inst_matrix_conv/a_7_address1 -into $a_group -radix hex
add_wave /apatb_matrix_conv_top/AESL_inst_matrix_conv/a_7_q0 -into $a_group -radix hex
add_wave /apatb_matrix_conv_top/AESL_inst_matrix_conv/a_7_ce0 -into $a_group -color #ffff00 -radix hex
add_wave /apatb_matrix_conv_top/AESL_inst_matrix_conv/a_7_address0 -into $a_group -radix hex
add_wave /apatb_matrix_conv_top/AESL_inst_matrix_conv/a_6_q1 -into $a_group -radix hex
add_wave /apatb_matrix_conv_top/AESL_inst_matrix_conv/a_6_ce1 -into $a_group -color #ffff00 -radix hex
add_wave /apatb_matrix_conv_top/AESL_inst_matrix_conv/a_6_address1 -into $a_group -radix hex
add_wave /apatb_matrix_conv_top/AESL_inst_matrix_conv/a_6_q0 -into $a_group -radix hex
add_wave /apatb_matrix_conv_top/AESL_inst_matrix_conv/a_6_ce0 -into $a_group -color #ffff00 -radix hex
add_wave /apatb_matrix_conv_top/AESL_inst_matrix_conv/a_6_address0 -into $a_group -radix hex
add_wave /apatb_matrix_conv_top/AESL_inst_matrix_conv/a_5_q1 -into $a_group -radix hex
add_wave /apatb_matrix_conv_top/AESL_inst_matrix_conv/a_5_ce1 -into $a_group -color #ffff00 -radix hex
add_wave /apatb_matrix_conv_top/AESL_inst_matrix_conv/a_5_address1 -into $a_group -radix hex
add_wave /apatb_matrix_conv_top/AESL_inst_matrix_conv/a_5_q0 -into $a_group -radix hex
add_wave /apatb_matrix_conv_top/AESL_inst_matrix_conv/a_5_ce0 -into $a_group -color #ffff00 -radix hex
add_wave /apatb_matrix_conv_top/AESL_inst_matrix_conv/a_5_address0 -into $a_group -radix hex
add_wave /apatb_matrix_conv_top/AESL_inst_matrix_conv/a_4_q1 -into $a_group -radix hex
add_wave /apatb_matrix_conv_top/AESL_inst_matrix_conv/a_4_ce1 -into $a_group -color #ffff00 -radix hex
add_wave /apatb_matrix_conv_top/AESL_inst_matrix_conv/a_4_address1 -into $a_group -radix hex
add_wave /apatb_matrix_conv_top/AESL_inst_matrix_conv/a_4_q0 -into $a_group -radix hex
add_wave /apatb_matrix_conv_top/AESL_inst_matrix_conv/a_4_ce0 -into $a_group -color #ffff00 -radix hex
add_wave /apatb_matrix_conv_top/AESL_inst_matrix_conv/a_4_address0 -into $a_group -radix hex
add_wave /apatb_matrix_conv_top/AESL_inst_matrix_conv/a_3_q1 -into $a_group -radix hex
add_wave /apatb_matrix_conv_top/AESL_inst_matrix_conv/a_3_ce1 -into $a_group -color #ffff00 -radix hex
add_wave /apatb_matrix_conv_top/AESL_inst_matrix_conv/a_3_address1 -into $a_group -radix hex
add_wave /apatb_matrix_conv_top/AESL_inst_matrix_conv/a_3_q0 -into $a_group -radix hex
add_wave /apatb_matrix_conv_top/AESL_inst_matrix_conv/a_3_ce0 -into $a_group -color #ffff00 -radix hex
add_wave /apatb_matrix_conv_top/AESL_inst_matrix_conv/a_3_address0 -into $a_group -radix hex
add_wave /apatb_matrix_conv_top/AESL_inst_matrix_conv/a_2_q1 -into $a_group -radix hex
add_wave /apatb_matrix_conv_top/AESL_inst_matrix_conv/a_2_ce1 -into $a_group -color #ffff00 -radix hex
add_wave /apatb_matrix_conv_top/AESL_inst_matrix_conv/a_2_address1 -into $a_group -radix hex
add_wave /apatb_matrix_conv_top/AESL_inst_matrix_conv/a_2_q0 -into $a_group -radix hex
add_wave /apatb_matrix_conv_top/AESL_inst_matrix_conv/a_2_ce0 -into $a_group -color #ffff00 -radix hex
add_wave /apatb_matrix_conv_top/AESL_inst_matrix_conv/a_2_address0 -into $a_group -radix hex
add_wave /apatb_matrix_conv_top/AESL_inst_matrix_conv/a_1_q1 -into $a_group -radix hex
add_wave /apatb_matrix_conv_top/AESL_inst_matrix_conv/a_1_ce1 -into $a_group -color #ffff00 -radix hex
add_wave /apatb_matrix_conv_top/AESL_inst_matrix_conv/a_1_address1 -into $a_group -radix hex
add_wave /apatb_matrix_conv_top/AESL_inst_matrix_conv/a_1_q0 -into $a_group -radix hex
add_wave /apatb_matrix_conv_top/AESL_inst_matrix_conv/a_1_ce0 -into $a_group -color #ffff00 -radix hex
add_wave /apatb_matrix_conv_top/AESL_inst_matrix_conv/a_1_address0 -into $a_group -radix hex
add_wave /apatb_matrix_conv_top/AESL_inst_matrix_conv/a_0_q1 -into $a_group -radix hex
add_wave /apatb_matrix_conv_top/AESL_inst_matrix_conv/a_0_ce1 -into $a_group -color #ffff00 -radix hex
add_wave /apatb_matrix_conv_top/AESL_inst_matrix_conv/a_0_address1 -into $a_group -radix hex
add_wave /apatb_matrix_conv_top/AESL_inst_matrix_conv/a_0_q0 -into $a_group -radix hex
add_wave /apatb_matrix_conv_top/AESL_inst_matrix_conv/a_0_ce0 -into $a_group -color #ffff00 -radix hex
add_wave /apatb_matrix_conv_top/AESL_inst_matrix_conv/a_0_address0 -into $a_group -radix hex
set blocksiggroup [add_wave_group "Block-level IO Handshake" -into $designtopgroup]
add_wave /apatb_matrix_conv_top/AESL_inst_matrix_conv/ap_start -into $blocksiggroup
add_wave /apatb_matrix_conv_top/AESL_inst_matrix_conv/ap_done -into $blocksiggroup
add_wave /apatb_matrix_conv_top/AESL_inst_matrix_conv/ap_idle -into $blocksiggroup
add_wave /apatb_matrix_conv_top/AESL_inst_matrix_conv/ap_ready -into $blocksiggroup
set resetgroup [add_wave_group "Reset" -into $designtopgroup]
add_wave /apatb_matrix_conv_top/AESL_inst_matrix_conv/ap_rst -into $resetgroup
set clockgroup [add_wave_group "Clock" -into $designtopgroup]
add_wave /apatb_matrix_conv_top/AESL_inst_matrix_conv/ap_clk -into $clockgroup
set testbenchgroup [add_wave_group "Test Bench Signals"]
set tbinternalsiggroup [add_wave_group "Internal Signals" -into $testbenchgroup]
set tb_simstatus_group [add_wave_group "Simulation Status" -into $tbinternalsiggroup]
set tb_portdepth_group [add_wave_group "Port Depth" -into $tbinternalsiggroup]
add_wave /apatb_matrix_conv_top/AUTOTB_TRANSACTION_NUM -into $tb_simstatus_group -radix hex
add_wave /apatb_matrix_conv_top/ready_cnt -into $tb_simstatus_group -radix hex
add_wave /apatb_matrix_conv_top/done_cnt -into $tb_simstatus_group -radix hex
add_wave /apatb_matrix_conv_top/LENGTH_a_0 -into $tb_portdepth_group -radix hex
add_wave /apatb_matrix_conv_top/LENGTH_a_1 -into $tb_portdepth_group -radix hex
add_wave /apatb_matrix_conv_top/LENGTH_a_2 -into $tb_portdepth_group -radix hex
add_wave /apatb_matrix_conv_top/LENGTH_a_3 -into $tb_portdepth_group -radix hex
add_wave /apatb_matrix_conv_top/LENGTH_a_4 -into $tb_portdepth_group -radix hex
add_wave /apatb_matrix_conv_top/LENGTH_a_5 -into $tb_portdepth_group -radix hex
add_wave /apatb_matrix_conv_top/LENGTH_a_6 -into $tb_portdepth_group -radix hex
add_wave /apatb_matrix_conv_top/LENGTH_a_7 -into $tb_portdepth_group -radix hex
add_wave /apatb_matrix_conv_top/LENGTH_a_8 -into $tb_portdepth_group -radix hex
add_wave /apatb_matrix_conv_top/LENGTH_a_9 -into $tb_portdepth_group -radix hex
add_wave /apatb_matrix_conv_top/LENGTH_b_0 -into $tb_portdepth_group -radix hex
add_wave /apatb_matrix_conv_top/LENGTH_b_1 -into $tb_portdepth_group -radix hex
add_wave /apatb_matrix_conv_top/LENGTH_b_2 -into $tb_portdepth_group -radix hex
add_wave /apatb_matrix_conv_top/LENGTH_res_0 -into $tb_portdepth_group -radix hex
add_wave /apatb_matrix_conv_top/LENGTH_res_1 -into $tb_portdepth_group -radix hex
add_wave /apatb_matrix_conv_top/LENGTH_res_2 -into $tb_portdepth_group -radix hex
add_wave /apatb_matrix_conv_top/LENGTH_res_3 -into $tb_portdepth_group -radix hex
add_wave /apatb_matrix_conv_top/LENGTH_res_4 -into $tb_portdepth_group -radix hex
add_wave /apatb_matrix_conv_top/LENGTH_res_5 -into $tb_portdepth_group -radix hex
add_wave /apatb_matrix_conv_top/LENGTH_res_6 -into $tb_portdepth_group -radix hex
add_wave /apatb_matrix_conv_top/LENGTH_res_7 -into $tb_portdepth_group -radix hex
set tbcoutputgroup [add_wave_group "C Outputs" -into $testbenchgroup]
set tb_res_group [add_wave_group res(memory) -into $tbcoutputgroup]
add_wave /apatb_matrix_conv_top/res_7_d0 -into $tb_res_group -radix hex
add_wave /apatb_matrix_conv_top/res_7_we0 -into $tb_res_group -color #ffff00 -radix hex
add_wave /apatb_matrix_conv_top/res_7_ce0 -into $tb_res_group -color #ffff00 -radix hex
add_wave /apatb_matrix_conv_top/res_7_address0 -into $tb_res_group -radix hex
add_wave /apatb_matrix_conv_top/res_6_d0 -into $tb_res_group -radix hex
add_wave /apatb_matrix_conv_top/res_6_we0 -into $tb_res_group -color #ffff00 -radix hex
add_wave /apatb_matrix_conv_top/res_6_ce0 -into $tb_res_group -color #ffff00 -radix hex
add_wave /apatb_matrix_conv_top/res_6_address0 -into $tb_res_group -radix hex
add_wave /apatb_matrix_conv_top/res_5_d0 -into $tb_res_group -radix hex
add_wave /apatb_matrix_conv_top/res_5_we0 -into $tb_res_group -color #ffff00 -radix hex
add_wave /apatb_matrix_conv_top/res_5_ce0 -into $tb_res_group -color #ffff00 -radix hex
add_wave /apatb_matrix_conv_top/res_5_address0 -into $tb_res_group -radix hex
add_wave /apatb_matrix_conv_top/res_4_d0 -into $tb_res_group -radix hex
add_wave /apatb_matrix_conv_top/res_4_we0 -into $tb_res_group -color #ffff00 -radix hex
add_wave /apatb_matrix_conv_top/res_4_ce0 -into $tb_res_group -color #ffff00 -radix hex
add_wave /apatb_matrix_conv_top/res_4_address0 -into $tb_res_group -radix hex
add_wave /apatb_matrix_conv_top/res_3_d0 -into $tb_res_group -radix hex
add_wave /apatb_matrix_conv_top/res_3_we0 -into $tb_res_group -color #ffff00 -radix hex
add_wave /apatb_matrix_conv_top/res_3_ce0 -into $tb_res_group -color #ffff00 -radix hex
add_wave /apatb_matrix_conv_top/res_3_address0 -into $tb_res_group -radix hex
add_wave /apatb_matrix_conv_top/res_2_d0 -into $tb_res_group -radix hex
add_wave /apatb_matrix_conv_top/res_2_we0 -into $tb_res_group -color #ffff00 -radix hex
add_wave /apatb_matrix_conv_top/res_2_ce0 -into $tb_res_group -color #ffff00 -radix hex
add_wave /apatb_matrix_conv_top/res_2_address0 -into $tb_res_group -radix hex
add_wave /apatb_matrix_conv_top/res_1_d0 -into $tb_res_group -radix hex
add_wave /apatb_matrix_conv_top/res_1_we0 -into $tb_res_group -color #ffff00 -radix hex
add_wave /apatb_matrix_conv_top/res_1_ce0 -into $tb_res_group -color #ffff00 -radix hex
add_wave /apatb_matrix_conv_top/res_1_address0 -into $tb_res_group -radix hex
add_wave /apatb_matrix_conv_top/res_0_d0 -into $tb_res_group -radix hex
add_wave /apatb_matrix_conv_top/res_0_we0 -into $tb_res_group -color #ffff00 -radix hex
add_wave /apatb_matrix_conv_top/res_0_ce0 -into $tb_res_group -color #ffff00 -radix hex
add_wave /apatb_matrix_conv_top/res_0_address0 -into $tb_res_group -radix hex
set tbcinputgroup [add_wave_group "C Inputs" -into $testbenchgroup]
set tb_b_group [add_wave_group b(memory) -into $tbcinputgroup]
add_wave /apatb_matrix_conv_top/b_2_q1 -into $tb_b_group -radix hex
add_wave /apatb_matrix_conv_top/b_2_ce1 -into $tb_b_group -color #ffff00 -radix hex
add_wave /apatb_matrix_conv_top/b_2_address1 -into $tb_b_group -radix hex
add_wave /apatb_matrix_conv_top/b_2_q0 -into $tb_b_group -radix hex
add_wave /apatb_matrix_conv_top/b_2_ce0 -into $tb_b_group -color #ffff00 -radix hex
add_wave /apatb_matrix_conv_top/b_2_address0 -into $tb_b_group -radix hex
add_wave /apatb_matrix_conv_top/b_1_q1 -into $tb_b_group -radix hex
add_wave /apatb_matrix_conv_top/b_1_ce1 -into $tb_b_group -color #ffff00 -radix hex
add_wave /apatb_matrix_conv_top/b_1_address1 -into $tb_b_group -radix hex
add_wave /apatb_matrix_conv_top/b_1_q0 -into $tb_b_group -radix hex
add_wave /apatb_matrix_conv_top/b_1_ce0 -into $tb_b_group -color #ffff00 -radix hex
add_wave /apatb_matrix_conv_top/b_1_address0 -into $tb_b_group -radix hex
add_wave /apatb_matrix_conv_top/b_0_q1 -into $tb_b_group -radix hex
add_wave /apatb_matrix_conv_top/b_0_ce1 -into $tb_b_group -color #ffff00 -radix hex
add_wave /apatb_matrix_conv_top/b_0_address1 -into $tb_b_group -radix hex
add_wave /apatb_matrix_conv_top/b_0_q0 -into $tb_b_group -radix hex
add_wave /apatb_matrix_conv_top/b_0_ce0 -into $tb_b_group -color #ffff00 -radix hex
add_wave /apatb_matrix_conv_top/b_0_address0 -into $tb_b_group -radix hex
set tb_a_group [add_wave_group a(memory) -into $tbcinputgroup]
add_wave /apatb_matrix_conv_top/a_9_q1 -into $tb_a_group -radix hex
add_wave /apatb_matrix_conv_top/a_9_ce1 -into $tb_a_group -color #ffff00 -radix hex
add_wave /apatb_matrix_conv_top/a_9_address1 -into $tb_a_group -radix hex
add_wave /apatb_matrix_conv_top/a_9_q0 -into $tb_a_group -radix hex
add_wave /apatb_matrix_conv_top/a_9_ce0 -into $tb_a_group -color #ffff00 -radix hex
add_wave /apatb_matrix_conv_top/a_9_address0 -into $tb_a_group -radix hex
add_wave /apatb_matrix_conv_top/a_8_q1 -into $tb_a_group -radix hex
add_wave /apatb_matrix_conv_top/a_8_ce1 -into $tb_a_group -color #ffff00 -radix hex
add_wave /apatb_matrix_conv_top/a_8_address1 -into $tb_a_group -radix hex
add_wave /apatb_matrix_conv_top/a_8_q0 -into $tb_a_group -radix hex
add_wave /apatb_matrix_conv_top/a_8_ce0 -into $tb_a_group -color #ffff00 -radix hex
add_wave /apatb_matrix_conv_top/a_8_address0 -into $tb_a_group -radix hex
add_wave /apatb_matrix_conv_top/a_7_q1 -into $tb_a_group -radix hex
add_wave /apatb_matrix_conv_top/a_7_ce1 -into $tb_a_group -color #ffff00 -radix hex
add_wave /apatb_matrix_conv_top/a_7_address1 -into $tb_a_group -radix hex
add_wave /apatb_matrix_conv_top/a_7_q0 -into $tb_a_group -radix hex
add_wave /apatb_matrix_conv_top/a_7_ce0 -into $tb_a_group -color #ffff00 -radix hex
add_wave /apatb_matrix_conv_top/a_7_address0 -into $tb_a_group -radix hex
add_wave /apatb_matrix_conv_top/a_6_q1 -into $tb_a_group -radix hex
add_wave /apatb_matrix_conv_top/a_6_ce1 -into $tb_a_group -color #ffff00 -radix hex
add_wave /apatb_matrix_conv_top/a_6_address1 -into $tb_a_group -radix hex
add_wave /apatb_matrix_conv_top/a_6_q0 -into $tb_a_group -radix hex
add_wave /apatb_matrix_conv_top/a_6_ce0 -into $tb_a_group -color #ffff00 -radix hex
add_wave /apatb_matrix_conv_top/a_6_address0 -into $tb_a_group -radix hex
add_wave /apatb_matrix_conv_top/a_5_q1 -into $tb_a_group -radix hex
add_wave /apatb_matrix_conv_top/a_5_ce1 -into $tb_a_group -color #ffff00 -radix hex
add_wave /apatb_matrix_conv_top/a_5_address1 -into $tb_a_group -radix hex
add_wave /apatb_matrix_conv_top/a_5_q0 -into $tb_a_group -radix hex
add_wave /apatb_matrix_conv_top/a_5_ce0 -into $tb_a_group -color #ffff00 -radix hex
add_wave /apatb_matrix_conv_top/a_5_address0 -into $tb_a_group -radix hex
add_wave /apatb_matrix_conv_top/a_4_q1 -into $tb_a_group -radix hex
add_wave /apatb_matrix_conv_top/a_4_ce1 -into $tb_a_group -color #ffff00 -radix hex
add_wave /apatb_matrix_conv_top/a_4_address1 -into $tb_a_group -radix hex
add_wave /apatb_matrix_conv_top/a_4_q0 -into $tb_a_group -radix hex
add_wave /apatb_matrix_conv_top/a_4_ce0 -into $tb_a_group -color #ffff00 -radix hex
add_wave /apatb_matrix_conv_top/a_4_address0 -into $tb_a_group -radix hex
add_wave /apatb_matrix_conv_top/a_3_q1 -into $tb_a_group -radix hex
add_wave /apatb_matrix_conv_top/a_3_ce1 -into $tb_a_group -color #ffff00 -radix hex
add_wave /apatb_matrix_conv_top/a_3_address1 -into $tb_a_group -radix hex
add_wave /apatb_matrix_conv_top/a_3_q0 -into $tb_a_group -radix hex
add_wave /apatb_matrix_conv_top/a_3_ce0 -into $tb_a_group -color #ffff00 -radix hex
add_wave /apatb_matrix_conv_top/a_3_address0 -into $tb_a_group -radix hex
add_wave /apatb_matrix_conv_top/a_2_q1 -into $tb_a_group -radix hex
add_wave /apatb_matrix_conv_top/a_2_ce1 -into $tb_a_group -color #ffff00 -radix hex
add_wave /apatb_matrix_conv_top/a_2_address1 -into $tb_a_group -radix hex
add_wave /apatb_matrix_conv_top/a_2_q0 -into $tb_a_group -radix hex
add_wave /apatb_matrix_conv_top/a_2_ce0 -into $tb_a_group -color #ffff00 -radix hex
add_wave /apatb_matrix_conv_top/a_2_address0 -into $tb_a_group -radix hex
add_wave /apatb_matrix_conv_top/a_1_q1 -into $tb_a_group -radix hex
add_wave /apatb_matrix_conv_top/a_1_ce1 -into $tb_a_group -color #ffff00 -radix hex
add_wave /apatb_matrix_conv_top/a_1_address1 -into $tb_a_group -radix hex
add_wave /apatb_matrix_conv_top/a_1_q0 -into $tb_a_group -radix hex
add_wave /apatb_matrix_conv_top/a_1_ce0 -into $tb_a_group -color #ffff00 -radix hex
add_wave /apatb_matrix_conv_top/a_1_address0 -into $tb_a_group -radix hex
add_wave /apatb_matrix_conv_top/a_0_q1 -into $tb_a_group -radix hex
add_wave /apatb_matrix_conv_top/a_0_ce1 -into $tb_a_group -color #ffff00 -radix hex
add_wave /apatb_matrix_conv_top/a_0_address1 -into $tb_a_group -radix hex
add_wave /apatb_matrix_conv_top/a_0_q0 -into $tb_a_group -radix hex
add_wave /apatb_matrix_conv_top/a_0_ce0 -into $tb_a_group -color #ffff00 -radix hex
add_wave /apatb_matrix_conv_top/a_0_address0 -into $tb_a_group -radix hex
save_wave_config matrix_conv.wcfg
run all
quit

