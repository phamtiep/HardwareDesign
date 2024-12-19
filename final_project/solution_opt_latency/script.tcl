############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
############################################################
open_project final_project
set_top matrix_conv
add_files final_project/matrix_conv.cpp
add_files -tb final_project/matrix_conv_test.cpp -cflags "-DHW_COSIM -Wno-unknown-pragmas"
open_solution "solution_opt_latency"
set_part {xc7z020clg484-1}
create_clock -period 10 -name default
#source "./final_project/solution_opt_latency/directives.tcl"
csim_design
csynth_design
cosim_design
export_design -format ip_catalog
