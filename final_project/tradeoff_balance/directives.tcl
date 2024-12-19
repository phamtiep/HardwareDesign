############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
############################################################
set_directive_array_partition -type complete -dim 1 "matrix_conv" a
set_directive_array_partition -type complete -dim 1 "matrix_conv" b
set_directive_array_partition -type complete -dim 1 "matrix_conv" res
set_directive_pipeline "matrix_conv/OUTPUT_ROW"
set_directive_unroll "matrix_conv/OUTPUT_COL"
set_directive_unroll "matrix_conv/KERNEL_ROW"
set_directive_unroll "matrix_conv/KERNEL_COL"
