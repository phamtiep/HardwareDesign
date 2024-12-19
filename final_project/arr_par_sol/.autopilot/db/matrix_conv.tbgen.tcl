set moduleName matrix_conv
set isTaskLevelControl 1
set isCombinational 0
set isDatapathOnly 0
set isPipelined 0
set pipeline_type none
set FunctionProtocol ap_ctrl_hs
set isOneStateSeq 0
set ProfileFlag 0
set StallSigGenFlag 0
set isEnableWaveformDebug 1
set C_modelName {matrix_conv}
set C_modelType { void 0 }
set C_modelArgList {
	{ a_0 int 8 regular {array 10 { 1 3 } 1 1 }  }
	{ a_1 int 8 regular {array 10 { 1 3 } 1 1 }  }
	{ a_2 int 8 regular {array 10 { 1 3 } 1 1 }  }
	{ a_3 int 8 regular {array 10 { 1 3 } 1 1 }  }
	{ a_4 int 8 regular {array 10 { 1 3 } 1 1 }  }
	{ a_5 int 8 regular {array 10 { 1 3 } 1 1 }  }
	{ a_6 int 8 regular {array 10 { 1 3 } 1 1 }  }
	{ a_7 int 8 regular {array 10 { 1 3 } 1 1 }  }
	{ a_8 int 8 regular {array 10 { 1 3 } 1 1 }  }
	{ a_9 int 8 regular {array 10 { 1 3 } 1 1 }  }
	{ b_0 int 8 regular {array 3 { 1 3 } 1 1 }  }
	{ b_1 int 8 regular {array 3 { 1 3 } 1 1 }  }
	{ b_2 int 8 regular {array 3 { 1 3 } 1 1 }  }
	{ res_0 int 16 regular {array 8 { 0 3 } 0 1 }  }
	{ res_1 int 16 regular {array 8 { 0 3 } 0 1 }  }
	{ res_2 int 16 regular {array 8 { 0 3 } 0 1 }  }
	{ res_3 int 16 regular {array 8 { 0 3 } 0 1 }  }
	{ res_4 int 16 regular {array 8 { 0 3 } 0 1 }  }
	{ res_5 int 16 regular {array 8 { 0 3 } 0 1 }  }
	{ res_6 int 16 regular {array 8 { 0 3 } 0 1 }  }
	{ res_7 int 16 regular {array 8 { 0 3 } 0 1 }  }
}
set C_modelArgMapList {[ 
	{ "Name" : "a_0", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "a","cData": "char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 2},{"low" : 0,"up" : 9,"step" : 1}]}]}]} , 
 	{ "Name" : "a_1", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "a","cData": "char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 1,"up" : 1,"step" : 2},{"low" : 0,"up" : 9,"step" : 1}]}]}]} , 
 	{ "Name" : "a_2", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "a","cData": "char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 2,"up" : 2,"step" : 2},{"low" : 0,"up" : 9,"step" : 1}]}]}]} , 
 	{ "Name" : "a_3", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "a","cData": "char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 3,"up" : 3,"step" : 2},{"low" : 0,"up" : 9,"step" : 1}]}]}]} , 
 	{ "Name" : "a_4", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "a","cData": "char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 4,"up" : 4,"step" : 2},{"low" : 0,"up" : 9,"step" : 1}]}]}]} , 
 	{ "Name" : "a_5", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "a","cData": "char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 5,"up" : 5,"step" : 2},{"low" : 0,"up" : 9,"step" : 1}]}]}]} , 
 	{ "Name" : "a_6", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "a","cData": "char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 6,"up" : 6,"step" : 2},{"low" : 0,"up" : 9,"step" : 1}]}]}]} , 
 	{ "Name" : "a_7", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "a","cData": "char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 7,"up" : 7,"step" : 2},{"low" : 0,"up" : 9,"step" : 1}]}]}]} , 
 	{ "Name" : "a_8", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "a","cData": "char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 8,"up" : 8,"step" : 2},{"low" : 0,"up" : 9,"step" : 1}]}]}]} , 
 	{ "Name" : "a_9", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "a","cData": "char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 9,"up" : 9,"step" : 2},{"low" : 0,"up" : 9,"step" : 1}]}]}]} , 
 	{ "Name" : "b_0", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "b","cData": "char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 2},{"low" : 0,"up" : 2,"step" : 1}]}]}]} , 
 	{ "Name" : "b_1", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "b","cData": "char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 1,"up" : 1,"step" : 2},{"low" : 0,"up" : 2,"step" : 1}]}]}]} , 
 	{ "Name" : "b_2", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "b","cData": "char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 2,"up" : 2,"step" : 2},{"low" : 0,"up" : 2,"step" : 1}]}]}]} , 
 	{ "Name" : "res_0", "interface" : "memory", "bitwidth" : 16, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "res","cData": "short","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 0,"up" : 0,"step" : 2},{"low" : 0,"up" : 7,"step" : 1}]}]}]} , 
 	{ "Name" : "res_1", "interface" : "memory", "bitwidth" : 16, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "res","cData": "short","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 1,"up" : 1,"step" : 2},{"low" : 0,"up" : 7,"step" : 1}]}]}]} , 
 	{ "Name" : "res_2", "interface" : "memory", "bitwidth" : 16, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "res","cData": "short","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 2,"up" : 2,"step" : 2},{"low" : 0,"up" : 7,"step" : 1}]}]}]} , 
 	{ "Name" : "res_3", "interface" : "memory", "bitwidth" : 16, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "res","cData": "short","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 3,"up" : 3,"step" : 2},{"low" : 0,"up" : 7,"step" : 1}]}]}]} , 
 	{ "Name" : "res_4", "interface" : "memory", "bitwidth" : 16, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "res","cData": "short","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 4,"up" : 4,"step" : 2},{"low" : 0,"up" : 7,"step" : 1}]}]}]} , 
 	{ "Name" : "res_5", "interface" : "memory", "bitwidth" : 16, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "res","cData": "short","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 5,"up" : 5,"step" : 2},{"low" : 0,"up" : 7,"step" : 1}]}]}]} , 
 	{ "Name" : "res_6", "interface" : "memory", "bitwidth" : 16, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "res","cData": "short","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 6,"up" : 6,"step" : 2},{"low" : 0,"up" : 7,"step" : 1}]}]}]} , 
 	{ "Name" : "res_7", "interface" : "memory", "bitwidth" : 16, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "res","cData": "short","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 7,"up" : 7,"step" : 2},{"low" : 0,"up" : 7,"step" : 1}]}]}]} ]}
# RTL Port declarations: 
set portNum 77
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ a_0_address0 sc_out sc_lv 4 signal 0 } 
	{ a_0_ce0 sc_out sc_logic 1 signal 0 } 
	{ a_0_q0 sc_in sc_lv 8 signal 0 } 
	{ a_1_address0 sc_out sc_lv 4 signal 1 } 
	{ a_1_ce0 sc_out sc_logic 1 signal 1 } 
	{ a_1_q0 sc_in sc_lv 8 signal 1 } 
	{ a_2_address0 sc_out sc_lv 4 signal 2 } 
	{ a_2_ce0 sc_out sc_logic 1 signal 2 } 
	{ a_2_q0 sc_in sc_lv 8 signal 2 } 
	{ a_3_address0 sc_out sc_lv 4 signal 3 } 
	{ a_3_ce0 sc_out sc_logic 1 signal 3 } 
	{ a_3_q0 sc_in sc_lv 8 signal 3 } 
	{ a_4_address0 sc_out sc_lv 4 signal 4 } 
	{ a_4_ce0 sc_out sc_logic 1 signal 4 } 
	{ a_4_q0 sc_in sc_lv 8 signal 4 } 
	{ a_5_address0 sc_out sc_lv 4 signal 5 } 
	{ a_5_ce0 sc_out sc_logic 1 signal 5 } 
	{ a_5_q0 sc_in sc_lv 8 signal 5 } 
	{ a_6_address0 sc_out sc_lv 4 signal 6 } 
	{ a_6_ce0 sc_out sc_logic 1 signal 6 } 
	{ a_6_q0 sc_in sc_lv 8 signal 6 } 
	{ a_7_address0 sc_out sc_lv 4 signal 7 } 
	{ a_7_ce0 sc_out sc_logic 1 signal 7 } 
	{ a_7_q0 sc_in sc_lv 8 signal 7 } 
	{ a_8_address0 sc_out sc_lv 4 signal 8 } 
	{ a_8_ce0 sc_out sc_logic 1 signal 8 } 
	{ a_8_q0 sc_in sc_lv 8 signal 8 } 
	{ a_9_address0 sc_out sc_lv 4 signal 9 } 
	{ a_9_ce0 sc_out sc_logic 1 signal 9 } 
	{ a_9_q0 sc_in sc_lv 8 signal 9 } 
	{ b_0_address0 sc_out sc_lv 2 signal 10 } 
	{ b_0_ce0 sc_out sc_logic 1 signal 10 } 
	{ b_0_q0 sc_in sc_lv 8 signal 10 } 
	{ b_1_address0 sc_out sc_lv 2 signal 11 } 
	{ b_1_ce0 sc_out sc_logic 1 signal 11 } 
	{ b_1_q0 sc_in sc_lv 8 signal 11 } 
	{ b_2_address0 sc_out sc_lv 2 signal 12 } 
	{ b_2_ce0 sc_out sc_logic 1 signal 12 } 
	{ b_2_q0 sc_in sc_lv 8 signal 12 } 
	{ res_0_address0 sc_out sc_lv 3 signal 13 } 
	{ res_0_ce0 sc_out sc_logic 1 signal 13 } 
	{ res_0_we0 sc_out sc_logic 1 signal 13 } 
	{ res_0_d0 sc_out sc_lv 16 signal 13 } 
	{ res_1_address0 sc_out sc_lv 3 signal 14 } 
	{ res_1_ce0 sc_out sc_logic 1 signal 14 } 
	{ res_1_we0 sc_out sc_logic 1 signal 14 } 
	{ res_1_d0 sc_out sc_lv 16 signal 14 } 
	{ res_2_address0 sc_out sc_lv 3 signal 15 } 
	{ res_2_ce0 sc_out sc_logic 1 signal 15 } 
	{ res_2_we0 sc_out sc_logic 1 signal 15 } 
	{ res_2_d0 sc_out sc_lv 16 signal 15 } 
	{ res_3_address0 sc_out sc_lv 3 signal 16 } 
	{ res_3_ce0 sc_out sc_logic 1 signal 16 } 
	{ res_3_we0 sc_out sc_logic 1 signal 16 } 
	{ res_3_d0 sc_out sc_lv 16 signal 16 } 
	{ res_4_address0 sc_out sc_lv 3 signal 17 } 
	{ res_4_ce0 sc_out sc_logic 1 signal 17 } 
	{ res_4_we0 sc_out sc_logic 1 signal 17 } 
	{ res_4_d0 sc_out sc_lv 16 signal 17 } 
	{ res_5_address0 sc_out sc_lv 3 signal 18 } 
	{ res_5_ce0 sc_out sc_logic 1 signal 18 } 
	{ res_5_we0 sc_out sc_logic 1 signal 18 } 
	{ res_5_d0 sc_out sc_lv 16 signal 18 } 
	{ res_6_address0 sc_out sc_lv 3 signal 19 } 
	{ res_6_ce0 sc_out sc_logic 1 signal 19 } 
	{ res_6_we0 sc_out sc_logic 1 signal 19 } 
	{ res_6_d0 sc_out sc_lv 16 signal 19 } 
	{ res_7_address0 sc_out sc_lv 3 signal 20 } 
	{ res_7_ce0 sc_out sc_logic 1 signal 20 } 
	{ res_7_we0 sc_out sc_logic 1 signal 20 } 
	{ res_7_d0 sc_out sc_lv 16 signal 20 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "a_0_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "a_0", "role": "address0" }} , 
 	{ "name": "a_0_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "a_0", "role": "ce0" }} , 
 	{ "name": "a_0_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "a_0", "role": "q0" }} , 
 	{ "name": "a_1_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "a_1", "role": "address0" }} , 
 	{ "name": "a_1_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "a_1", "role": "ce0" }} , 
 	{ "name": "a_1_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "a_1", "role": "q0" }} , 
 	{ "name": "a_2_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "a_2", "role": "address0" }} , 
 	{ "name": "a_2_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "a_2", "role": "ce0" }} , 
 	{ "name": "a_2_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "a_2", "role": "q0" }} , 
 	{ "name": "a_3_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "a_3", "role": "address0" }} , 
 	{ "name": "a_3_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "a_3", "role": "ce0" }} , 
 	{ "name": "a_3_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "a_3", "role": "q0" }} , 
 	{ "name": "a_4_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "a_4", "role": "address0" }} , 
 	{ "name": "a_4_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "a_4", "role": "ce0" }} , 
 	{ "name": "a_4_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "a_4", "role": "q0" }} , 
 	{ "name": "a_5_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "a_5", "role": "address0" }} , 
 	{ "name": "a_5_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "a_5", "role": "ce0" }} , 
 	{ "name": "a_5_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "a_5", "role": "q0" }} , 
 	{ "name": "a_6_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "a_6", "role": "address0" }} , 
 	{ "name": "a_6_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "a_6", "role": "ce0" }} , 
 	{ "name": "a_6_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "a_6", "role": "q0" }} , 
 	{ "name": "a_7_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "a_7", "role": "address0" }} , 
 	{ "name": "a_7_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "a_7", "role": "ce0" }} , 
 	{ "name": "a_7_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "a_7", "role": "q0" }} , 
 	{ "name": "a_8_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "a_8", "role": "address0" }} , 
 	{ "name": "a_8_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "a_8", "role": "ce0" }} , 
 	{ "name": "a_8_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "a_8", "role": "q0" }} , 
 	{ "name": "a_9_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "a_9", "role": "address0" }} , 
 	{ "name": "a_9_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "a_9", "role": "ce0" }} , 
 	{ "name": "a_9_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "a_9", "role": "q0" }} , 
 	{ "name": "b_0_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "b_0", "role": "address0" }} , 
 	{ "name": "b_0_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "b_0", "role": "ce0" }} , 
 	{ "name": "b_0_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "b_0", "role": "q0" }} , 
 	{ "name": "b_1_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "b_1", "role": "address0" }} , 
 	{ "name": "b_1_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "b_1", "role": "ce0" }} , 
 	{ "name": "b_1_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "b_1", "role": "q0" }} , 
 	{ "name": "b_2_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "b_2", "role": "address0" }} , 
 	{ "name": "b_2_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "b_2", "role": "ce0" }} , 
 	{ "name": "b_2_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "b_2", "role": "q0" }} , 
 	{ "name": "res_0_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "res_0", "role": "address0" }} , 
 	{ "name": "res_0_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_0", "role": "ce0" }} , 
 	{ "name": "res_0_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_0", "role": "we0" }} , 
 	{ "name": "res_0_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "res_0", "role": "d0" }} , 
 	{ "name": "res_1_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "res_1", "role": "address0" }} , 
 	{ "name": "res_1_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_1", "role": "ce0" }} , 
 	{ "name": "res_1_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_1", "role": "we0" }} , 
 	{ "name": "res_1_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "res_1", "role": "d0" }} , 
 	{ "name": "res_2_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "res_2", "role": "address0" }} , 
 	{ "name": "res_2_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_2", "role": "ce0" }} , 
 	{ "name": "res_2_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_2", "role": "we0" }} , 
 	{ "name": "res_2_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "res_2", "role": "d0" }} , 
 	{ "name": "res_3_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "res_3", "role": "address0" }} , 
 	{ "name": "res_3_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_3", "role": "ce0" }} , 
 	{ "name": "res_3_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_3", "role": "we0" }} , 
 	{ "name": "res_3_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "res_3", "role": "d0" }} , 
 	{ "name": "res_4_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "res_4", "role": "address0" }} , 
 	{ "name": "res_4_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_4", "role": "ce0" }} , 
 	{ "name": "res_4_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_4", "role": "we0" }} , 
 	{ "name": "res_4_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "res_4", "role": "d0" }} , 
 	{ "name": "res_5_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "res_5", "role": "address0" }} , 
 	{ "name": "res_5_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_5", "role": "ce0" }} , 
 	{ "name": "res_5_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_5", "role": "we0" }} , 
 	{ "name": "res_5_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "res_5", "role": "d0" }} , 
 	{ "name": "res_6_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "res_6", "role": "address0" }} , 
 	{ "name": "res_6_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_6", "role": "ce0" }} , 
 	{ "name": "res_6_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_6", "role": "we0" }} , 
 	{ "name": "res_6_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "res_6", "role": "d0" }} , 
 	{ "name": "res_7_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "res_7", "role": "address0" }} , 
 	{ "name": "res_7_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_7", "role": "ce0" }} , 
 	{ "name": "res_7_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_7", "role": "we0" }} , 
 	{ "name": "res_7_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "res_7", "role": "d0" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2", "3"],
		"CDFG" : "matrix_conv",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "2321", "EstimateLatencyMax" : "2321",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "a_0", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "a_1", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "a_2", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "a_3", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "a_4", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "a_5", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "a_6", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "a_7", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "a_8", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "a_9", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "b_0", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "b_1", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "b_2", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "res_0", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "res_1", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "res_2", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "res_3", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "res_4", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "res_5", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "res_6", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "res_7", "Type" : "Memory", "Direction" : "O"}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.matrix_conv_mux_1bkb_U1", "Parent" : "0"},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.matrix_conv_mux_3cud_U2", "Parent" : "0"},
	{"ID" : "3", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.matrix_conv_mac_mdEe_U3", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	matrix_conv {
		a_0 {Type I LastRead 4 FirstWrite -1}
		a_1 {Type I LastRead 4 FirstWrite -1}
		a_2 {Type I LastRead 4 FirstWrite -1}
		a_3 {Type I LastRead 4 FirstWrite -1}
		a_4 {Type I LastRead 4 FirstWrite -1}
		a_5 {Type I LastRead 4 FirstWrite -1}
		a_6 {Type I LastRead 4 FirstWrite -1}
		a_7 {Type I LastRead 4 FirstWrite -1}
		a_8 {Type I LastRead 4 FirstWrite -1}
		a_9 {Type I LastRead 4 FirstWrite -1}
		b_0 {Type I LastRead 4 FirstWrite -1}
		b_1 {Type I LastRead 4 FirstWrite -1}
		b_2 {Type I LastRead 4 FirstWrite -1}
		res_0 {Type O LastRead -1 FirstWrite 3}
		res_1 {Type O LastRead -1 FirstWrite 3}
		res_2 {Type O LastRead -1 FirstWrite 3}
		res_3 {Type O LastRead -1 FirstWrite 3}
		res_4 {Type O LastRead -1 FirstWrite 3}
		res_5 {Type O LastRead -1 FirstWrite 3}
		res_6 {Type O LastRead -1 FirstWrite 3}
		res_7 {Type O LastRead -1 FirstWrite 3}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "2321", "Max" : "2321"}
	, {"Name" : "Interval", "Min" : "2322", "Max" : "2322"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	a_0 { ap_memory {  { a_0_address0 mem_address 1 4 }  { a_0_ce0 mem_ce 1 1 }  { a_0_q0 mem_dout 0 8 } } }
	a_1 { ap_memory {  { a_1_address0 mem_address 1 4 }  { a_1_ce0 mem_ce 1 1 }  { a_1_q0 mem_dout 0 8 } } }
	a_2 { ap_memory {  { a_2_address0 mem_address 1 4 }  { a_2_ce0 mem_ce 1 1 }  { a_2_q0 mem_dout 0 8 } } }
	a_3 { ap_memory {  { a_3_address0 mem_address 1 4 }  { a_3_ce0 mem_ce 1 1 }  { a_3_q0 mem_dout 0 8 } } }
	a_4 { ap_memory {  { a_4_address0 mem_address 1 4 }  { a_4_ce0 mem_ce 1 1 }  { a_4_q0 mem_dout 0 8 } } }
	a_5 { ap_memory {  { a_5_address0 mem_address 1 4 }  { a_5_ce0 mem_ce 1 1 }  { a_5_q0 mem_dout 0 8 } } }
	a_6 { ap_memory {  { a_6_address0 mem_address 1 4 }  { a_6_ce0 mem_ce 1 1 }  { a_6_q0 mem_dout 0 8 } } }
	a_7 { ap_memory {  { a_7_address0 mem_address 1 4 }  { a_7_ce0 mem_ce 1 1 }  { a_7_q0 mem_dout 0 8 } } }
	a_8 { ap_memory {  { a_8_address0 mem_address 1 4 }  { a_8_ce0 mem_ce 1 1 }  { a_8_q0 mem_dout 0 8 } } }
	a_9 { ap_memory {  { a_9_address0 mem_address 1 4 }  { a_9_ce0 mem_ce 1 1 }  { a_9_q0 mem_dout 0 8 } } }
	b_0 { ap_memory {  { b_0_address0 mem_address 1 2 }  { b_0_ce0 mem_ce 1 1 }  { b_0_q0 mem_dout 0 8 } } }
	b_1 { ap_memory {  { b_1_address0 mem_address 1 2 }  { b_1_ce0 mem_ce 1 1 }  { b_1_q0 mem_dout 0 8 } } }
	b_2 { ap_memory {  { b_2_address0 mem_address 1 2 }  { b_2_ce0 mem_ce 1 1 }  { b_2_q0 mem_dout 0 8 } } }
	res_0 { ap_memory {  { res_0_address0 mem_address 1 3 }  { res_0_ce0 mem_ce 1 1 }  { res_0_we0 mem_we 1 1 }  { res_0_d0 mem_din 1 16 } } }
	res_1 { ap_memory {  { res_1_address0 mem_address 1 3 }  { res_1_ce0 mem_ce 1 1 }  { res_1_we0 mem_we 1 1 }  { res_1_d0 mem_din 1 16 } } }
	res_2 { ap_memory {  { res_2_address0 mem_address 1 3 }  { res_2_ce0 mem_ce 1 1 }  { res_2_we0 mem_we 1 1 }  { res_2_d0 mem_din 1 16 } } }
	res_3 { ap_memory {  { res_3_address0 mem_address 1 3 }  { res_3_ce0 mem_ce 1 1 }  { res_3_we0 mem_we 1 1 }  { res_3_d0 mem_din 1 16 } } }
	res_4 { ap_memory {  { res_4_address0 mem_address 1 3 }  { res_4_ce0 mem_ce 1 1 }  { res_4_we0 mem_we 1 1 }  { res_4_d0 mem_din 1 16 } } }
	res_5 { ap_memory {  { res_5_address0 mem_address 1 3 }  { res_5_ce0 mem_ce 1 1 }  { res_5_we0 mem_we 1 1 }  { res_5_d0 mem_din 1 16 } } }
	res_6 { ap_memory {  { res_6_address0 mem_address 1 3 }  { res_6_ce0 mem_ce 1 1 }  { res_6_we0 mem_we 1 1 }  { res_6_d0 mem_din 1 16 } } }
	res_7 { ap_memory {  { res_7_address0 mem_address 1 3 }  { res_7_ce0 mem_ce 1 1 }  { res_7_we0 mem_we 1 1 }  { res_7_d0 mem_din 1 16 } } }
}

set busDeadlockParameterList { 
}

# RTL port scheduling information:
set fifoSchedulingInfoList { 
}

# RTL bus port read request latency information:
set busReadReqLatencyList { 
}

# RTL bus port write response latency information:
set busWriteResLatencyList { 
}

# RTL array port load latency information:
set memoryLoadLatencyList { 
}
