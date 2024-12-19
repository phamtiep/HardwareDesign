//*****************************************************************************
// (c) Copyright 2009 - 2012 Xilinx, Inc. All rights reserved.
//
// This file contains confidential and proprietary information
// of Xilinx, Inc. and is protected under U.S. and
// international copyright and other intellectual property
// laws.
//
// DISCLAIMER
// This disclaimer is not a license and does not grant any
// rights to the materials distributed herewith. Except as
// otherwise provided in a valid license issued to you by
// Xilinx, and to the maximum extent permitted by applicable
// law: (1) THESE MATERIALS ARE MADE AVAILABLE "AS IS" AND
// WITH ALL FAULTS, AND XILINX HEREBY DISCLAIMS ALL WARRANTIES
// AND CONDITIONS, EXPRESS, IMPLIED, OR STATUTORY, INCLUDING
// BUT NOT LIMITED TO WARRANTIES OF MERCHANTABILITY, NON-
// INFRINGEMENT, OR FITNESS FOR ANY PARTICULAR PURPOSE; and
// (2) Xilinx shall not be liable (whether in contract or tort,

// liability) for any loss or damage of any kind or nature
// related to, arising under or in connection with these
// materials, including for any direct, or any indirect,
// special, incidental, or consequential loss or damage
// (including loss of data, profits, goodwill, or any type of
// loss or damage suffered as a result of any action brought
// by a third party) even if such damage or loss was
// reasonably foreseeable or Xilinx had been advised of the
// possibility of the same.
//
// CRITICAL APPLICATIONS
// Xilinx products are not designed or intended to be fail-
// safe, or for use in any application requiring fail-safe
// performance, such as life-support or safety devices or
// systems, Class III medical devices, nuclear facilities,
// applications related to the deployment of airbags, or any
// other applications that could lead to death, personal
// injury, or severe property or environmental damage
// (individually and collectively, "Critical
// Applications"). Customer assumes the sole risk and
// liability of any use of Xilinx products in Critical
// Applications, subject only to applicable laws and
// regulations governing limitations on product liability.
//
// THIS COPYRIGHT NOTICE AND DISCLAIMER MUST BE RETAINED AS
// PART OF THIS FILE AT ALL TIMES.
//
//*****************************************************************************
//   ____  ____
//  /   /\/   /
// /___/  \  /    Vendor: Xilinx
// \   \   \/     Version: %version
//  \   \         Application: AutoESL
//  /   /         Filename: matrixmul_test.cpp
// /___/   /\     Date Last Modified: $Date: 2012/3/30 18:53:07 $
// \   \  /  \    Date Created: Fri Mar 30 2012
//  \___\/\___\
//
//Device: All
//Design Name: maxtrixmul1
//Purpose:
//    This is the C++ test bench for the of a matrix multiplier example.
//Reference:
//Revision History:
//*****************************************************************************
#include <iostream>
#include "matrix_conv.h"

using namespace std;


int main(int argc, char **argv)
{
   mat_a_t in_mat_a[10][10] = {
		   {11, 12, 13, 14, 15, 16, 17, 18, 19, 20},
		         {21, 22, 23, 24, 25, 26, 27, 28, 29, 30},
		         {31, 32, 33, 34, 35, 36, 37, 38, 39, 40},
		         {41, 42, 43, 44, 45, 46, 47, 48, 49, 50},
		         {51, 52, 53, 54, 55, 56, 57, 58, 59, 60},
		         {61, 62, 63, 64, 65, 66, 67, 68, 69, 70},
		         {71, 72, 73, 74, 75, 76, 77, 78, 79, 80},
		         {81, 82, 83, 84, 85, 86, 87, 88, 89, 90},
		         {91, 92, 93, 94, 95, 96, 97, 98, 99, 100},
		         {101, 102, 103, 104, 105, 106, 107, 108, 109, 110}
   };
   mat_b_t in_mat_b[3][3] = {
      {21, 22, 23},
      {24, 25, 26},
      {27, 28, 29}
   };
   result_t hw_result[OUTPUT_ROWS][OUTPUT_COLS], sw_result[OUTPUT_ROWS][OUTPUT_COLS];
   int err_cnt = 0;

   for (int i = 0; i < OUTPUT_ROWS; i++) {
       for (int j = 0; j < OUTPUT_COLS; j++) {
           result_t sum = 0;

           for (int m = 0; m < KERNEL_ROWS; m++) {
               for (int n = 0; n < KERNEL_COLS; n++) {

                   sum += in_mat_a[i + m][j + n] * in_mat_b[m][n];
               }
           }

           sw_result[i][j] = sum;
       }
   }
#ifdef HW_COSIM

   matrix_conv(in_mat_a, in_mat_b, hw_result);
#endif

   // Print result matrix
   cout << "{" << endl;

   for (int i = 0; i < OUTPUT_ROWS; i++) {
      cout << "{";
      for (int j = 0; j < OUTPUT_COLS; j++) {
#ifdef HW_COSIM
         cout << hw_result[i][j];
         if (hw_result[i][j] != sw_result[i][j]) {
            err_cnt++;
            cout << "*";
         }
#else
         cout << sw_result[i][j];
#endif
         if (j == OUTPUT_ROWS - 1)
            cout << "}" << endl;
         else
            cout << ",";
      }
   }
   cout << "}" << endl;

#ifdef HW_COSIM
   if (err_cnt)
      cout << "ERROR: " << err_cnt << " mismatches detected!" << endl;
   else
      cout << "Test passed." << endl;
#endif
   return err_cnt;
}

