// ==============================================================
// File generated on Thu Dec 19 05:31:38 +0700 2024
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2018.3 (64-bit)
// SW Build 2405991 on Thu Dec  6 23:38:27 MST 2018
// IP Build 2404404 on Fri Dec  7 01:43:56 MST 2018
// Copyright 1986-2018 Xilinx, Inc. All Rights Reserved.
// ==============================================================

#include <systemc>
#include <iostream>
#include <cstdlib>
#include <cstddef>
#include <stdint.h>
#include "SysCFileHandler.h"
#include "ap_int.h"
#include "ap_fixed.h"
#include <complex>
#include <stdbool.h>
#include "autopilot_cbe.h"
#include "hls_stream.h"
#include "hls_half.h"
#include "hls_signal_handler.h"

using namespace std;
using namespace sc_core;
using namespace sc_dt;


// [dump_struct_tree [build_nameSpaceTree] dumpedStructList] ---------->


// [dump_enumeration [get_enumeration_list]] ---------->


// wrapc file define: "a_0"
#define AUTOTB_TVIN_a_0  "../tv/cdatafile/c.matrix_conv.autotvin_a_0.dat"
// wrapc file define: "a_1"
#define AUTOTB_TVIN_a_1  "../tv/cdatafile/c.matrix_conv.autotvin_a_1.dat"
// wrapc file define: "a_2"
#define AUTOTB_TVIN_a_2  "../tv/cdatafile/c.matrix_conv.autotvin_a_2.dat"
// wrapc file define: "a_3"
#define AUTOTB_TVIN_a_3  "../tv/cdatafile/c.matrix_conv.autotvin_a_3.dat"
// wrapc file define: "a_4"
#define AUTOTB_TVIN_a_4  "../tv/cdatafile/c.matrix_conv.autotvin_a_4.dat"
// wrapc file define: "a_5"
#define AUTOTB_TVIN_a_5  "../tv/cdatafile/c.matrix_conv.autotvin_a_5.dat"
// wrapc file define: "a_6"
#define AUTOTB_TVIN_a_6  "../tv/cdatafile/c.matrix_conv.autotvin_a_6.dat"
// wrapc file define: "a_7"
#define AUTOTB_TVIN_a_7  "../tv/cdatafile/c.matrix_conv.autotvin_a_7.dat"
// wrapc file define: "a_8"
#define AUTOTB_TVIN_a_8  "../tv/cdatafile/c.matrix_conv.autotvin_a_8.dat"
// wrapc file define: "a_9"
#define AUTOTB_TVIN_a_9  "../tv/cdatafile/c.matrix_conv.autotvin_a_9.dat"
// wrapc file define: "b_0"
#define AUTOTB_TVIN_b_0  "../tv/cdatafile/c.matrix_conv.autotvin_b_0.dat"
// wrapc file define: "b_1"
#define AUTOTB_TVIN_b_1  "../tv/cdatafile/c.matrix_conv.autotvin_b_1.dat"
// wrapc file define: "b_2"
#define AUTOTB_TVIN_b_2  "../tv/cdatafile/c.matrix_conv.autotvin_b_2.dat"
// wrapc file define: "res_0"
#define AUTOTB_TVOUT_res_0  "../tv/cdatafile/c.matrix_conv.autotvout_res_0.dat"
#define AUTOTB_TVIN_res_0  "../tv/cdatafile/c.matrix_conv.autotvin_res_0.dat"
// wrapc file define: "res_1"
#define AUTOTB_TVOUT_res_1  "../tv/cdatafile/c.matrix_conv.autotvout_res_1.dat"
#define AUTOTB_TVIN_res_1  "../tv/cdatafile/c.matrix_conv.autotvin_res_1.dat"
// wrapc file define: "res_2"
#define AUTOTB_TVOUT_res_2  "../tv/cdatafile/c.matrix_conv.autotvout_res_2.dat"
#define AUTOTB_TVIN_res_2  "../tv/cdatafile/c.matrix_conv.autotvin_res_2.dat"
// wrapc file define: "res_3"
#define AUTOTB_TVOUT_res_3  "../tv/cdatafile/c.matrix_conv.autotvout_res_3.dat"
#define AUTOTB_TVIN_res_3  "../tv/cdatafile/c.matrix_conv.autotvin_res_3.dat"
// wrapc file define: "res_4"
#define AUTOTB_TVOUT_res_4  "../tv/cdatafile/c.matrix_conv.autotvout_res_4.dat"
#define AUTOTB_TVIN_res_4  "../tv/cdatafile/c.matrix_conv.autotvin_res_4.dat"
// wrapc file define: "res_5"
#define AUTOTB_TVOUT_res_5  "../tv/cdatafile/c.matrix_conv.autotvout_res_5.dat"
#define AUTOTB_TVIN_res_5  "../tv/cdatafile/c.matrix_conv.autotvin_res_5.dat"
// wrapc file define: "res_6"
#define AUTOTB_TVOUT_res_6  "../tv/cdatafile/c.matrix_conv.autotvout_res_6.dat"
#define AUTOTB_TVIN_res_6  "../tv/cdatafile/c.matrix_conv.autotvin_res_6.dat"
// wrapc file define: "res_7"
#define AUTOTB_TVOUT_res_7  "../tv/cdatafile/c.matrix_conv.autotvout_res_7.dat"
#define AUTOTB_TVIN_res_7  "../tv/cdatafile/c.matrix_conv.autotvin_res_7.dat"

#define INTER_TCL  "../tv/cdatafile/ref.tcl"

// tvout file define: "res_0"
#define AUTOTB_TVOUT_PC_res_0  "../tv/rtldatafile/rtl.matrix_conv.autotvout_res_0.dat"
// tvout file define: "res_1"
#define AUTOTB_TVOUT_PC_res_1  "../tv/rtldatafile/rtl.matrix_conv.autotvout_res_1.dat"
// tvout file define: "res_2"
#define AUTOTB_TVOUT_PC_res_2  "../tv/rtldatafile/rtl.matrix_conv.autotvout_res_2.dat"
// tvout file define: "res_3"
#define AUTOTB_TVOUT_PC_res_3  "../tv/rtldatafile/rtl.matrix_conv.autotvout_res_3.dat"
// tvout file define: "res_4"
#define AUTOTB_TVOUT_PC_res_4  "../tv/rtldatafile/rtl.matrix_conv.autotvout_res_4.dat"
// tvout file define: "res_5"
#define AUTOTB_TVOUT_PC_res_5  "../tv/rtldatafile/rtl.matrix_conv.autotvout_res_5.dat"
// tvout file define: "res_6"
#define AUTOTB_TVOUT_PC_res_6  "../tv/rtldatafile/rtl.matrix_conv.autotvout_res_6.dat"
// tvout file define: "res_7"
#define AUTOTB_TVOUT_PC_res_7  "../tv/rtldatafile/rtl.matrix_conv.autotvout_res_7.dat"

class INTER_TCL_FILE {
	public:
		INTER_TCL_FILE(const char* name) {
			mName = name;
			a_0_depth = 0;
			a_1_depth = 0;
			a_2_depth = 0;
			a_3_depth = 0;
			a_4_depth = 0;
			a_5_depth = 0;
			a_6_depth = 0;
			a_7_depth = 0;
			a_8_depth = 0;
			a_9_depth = 0;
			b_0_depth = 0;
			b_1_depth = 0;
			b_2_depth = 0;
			res_0_depth = 0;
			res_1_depth = 0;
			res_2_depth = 0;
			res_3_depth = 0;
			res_4_depth = 0;
			res_5_depth = 0;
			res_6_depth = 0;
			res_7_depth = 0;
			trans_num =0;
		}

		~INTER_TCL_FILE() {
			mFile.open(mName);
			if (!mFile.good()) {
				cout << "Failed to open file ref.tcl" << endl;
				exit (1);
			}
			string total_list = get_depth_list();
			mFile << "set depth_list {\n";
			mFile << total_list;
			mFile << "}\n";
			mFile << "set trans_num "<<trans_num<<endl;
			mFile.close();
		}

		string get_depth_list () {
			stringstream total_list;
			total_list << "{a_0 " << a_0_depth << "}\n";
			total_list << "{a_1 " << a_1_depth << "}\n";
			total_list << "{a_2 " << a_2_depth << "}\n";
			total_list << "{a_3 " << a_3_depth << "}\n";
			total_list << "{a_4 " << a_4_depth << "}\n";
			total_list << "{a_5 " << a_5_depth << "}\n";
			total_list << "{a_6 " << a_6_depth << "}\n";
			total_list << "{a_7 " << a_7_depth << "}\n";
			total_list << "{a_8 " << a_8_depth << "}\n";
			total_list << "{a_9 " << a_9_depth << "}\n";
			total_list << "{b_0 " << b_0_depth << "}\n";
			total_list << "{b_1 " << b_1_depth << "}\n";
			total_list << "{b_2 " << b_2_depth << "}\n";
			total_list << "{res_0 " << res_0_depth << "}\n";
			total_list << "{res_1 " << res_1_depth << "}\n";
			total_list << "{res_2 " << res_2_depth << "}\n";
			total_list << "{res_3 " << res_3_depth << "}\n";
			total_list << "{res_4 " << res_4_depth << "}\n";
			total_list << "{res_5 " << res_5_depth << "}\n";
			total_list << "{res_6 " << res_6_depth << "}\n";
			total_list << "{res_7 " << res_7_depth << "}\n";
			return total_list.str();
		}

		void set_num (int num , int* class_num) {
			(*class_num) = (*class_num) > num ? (*class_num) : num;
		}
	public:
		int a_0_depth;
		int a_1_depth;
		int a_2_depth;
		int a_3_depth;
		int a_4_depth;
		int a_5_depth;
		int a_6_depth;
		int a_7_depth;
		int a_8_depth;
		int a_9_depth;
		int b_0_depth;
		int b_1_depth;
		int b_2_depth;
		int res_0_depth;
		int res_1_depth;
		int res_2_depth;
		int res_3_depth;
		int res_4_depth;
		int res_5_depth;
		int res_6_depth;
		int res_7_depth;
		int trans_num;

	private:
		ofstream mFile;
		const char* mName;
};

extern void matrix_conv (
char a[10][10],
char b[3][3],
short res[8][8]);

void AESL_WRAP_matrix_conv (
char a[10][10],
char b[3][3],
short res[8][8])
{
	refine_signal_handler();
	fstream wrapc_switch_file_token;
	wrapc_switch_file_token.open(".hls_cosim_wrapc_switch.log");
	int AESL_i;
	if (wrapc_switch_file_token.good())
	{
		CodeState = ENTER_WRAPC_PC;
		static unsigned AESL_transaction_pc = 0;
		string AESL_token;
		string AESL_num;
		static AESL_FILE_HANDLER aesl_fh;


		// output port post check: "res_0"
		aesl_fh.read(AUTOTB_TVOUT_PC_res_0, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_res_0, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_res_0, AESL_token); // data

			sc_bv<16> *res_0_pc_buffer = new sc_bv<16>[8];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'res_0', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'res_0', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					res_0_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_res_0, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_res_0))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: res_0
				{
					// bitslice(15, 0)
					// {
						// celement: res(15, 0)
						// {
							sc_lv<16>* res_lv0_0_0_2_lv1_0_7_1 = new sc_lv<16>[8];
						// }
					// }

					// bitslice(15, 0)
					{
						int hls_map_index = 0;
						// celement: res(15, 0)
						{
							// carray: (0) => (0) @ (2)
							for (int i_0 = 0; i_0 <= 0; i_0 += 2)
							{
								// carray: (0) => (7) @ (1)
								for (int i_1 = 0; i_1 <= 7; i_1 += 1)
								{
									if (&(res[0][0]) != NULL) // check the null address if the c port is array or others
									{
										res_lv0_0_0_2_lv1_0_7_1[hls_map_index].range(15, 0) = sc_bv<16>(res_0_pc_buffer[hls_map_index].range(15, 0));
										hls_map_index++;
									}
								}
							}
						}
					}

					// bitslice(15, 0)
					{
						int hls_map_index = 0;
						// celement: res(15, 0)
						{
							// carray: (0) => (0) @ (2)
							for (int i_0 = 0; i_0 <= 0; i_0 += 2)
							{
								// carray: (0) => (7) @ (1)
								for (int i_1 = 0; i_1 <= 7; i_1 += 1)
								{
									// sub                    : i_0 i_1
									// ori_name               : res[i_0][i_1]
									// sub_1st_elem           : 0 0
									// ori_name_1st_elem      : res[0][0]
									// output_left_conversion : res[i_0][i_1]
									// output_type_conversion : (res_lv0_0_0_2_lv1_0_7_1[hls_map_index]).to_uint64()
									if (&(res[0][0]) != NULL) // check the null address if the c port is array or others
									{
										res[i_0][i_1] = (res_lv0_0_0_2_lv1_0_7_1[hls_map_index]).to_uint64();
										hls_map_index++;
									}
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] res_0_pc_buffer;
		}

		// output port post check: "res_1"
		aesl_fh.read(AUTOTB_TVOUT_PC_res_1, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_res_1, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_res_1, AESL_token); // data

			sc_bv<16> *res_1_pc_buffer = new sc_bv<16>[8];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'res_1', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'res_1', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					res_1_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_res_1, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_res_1))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: res_1
				{
					// bitslice(15, 0)
					// {
						// celement: res(15, 0)
						// {
							sc_lv<16>* res_lv0_1_1_2_lv1_0_7_1 = new sc_lv<16>[8];
						// }
					// }

					// bitslice(15, 0)
					{
						int hls_map_index = 0;
						// celement: res(15, 0)
						{
							// carray: (1) => (1) @ (2)
							for (int i_0 = 1; i_0 <= 1; i_0 += 2)
							{
								// carray: (0) => (7) @ (1)
								for (int i_1 = 0; i_1 <= 7; i_1 += 1)
								{
									if (&(res[0][0]) != NULL) // check the null address if the c port is array or others
									{
										res_lv0_1_1_2_lv1_0_7_1[hls_map_index].range(15, 0) = sc_bv<16>(res_1_pc_buffer[hls_map_index].range(15, 0));
										hls_map_index++;
									}
								}
							}
						}
					}

					// bitslice(15, 0)
					{
						int hls_map_index = 0;
						// celement: res(15, 0)
						{
							// carray: (1) => (1) @ (2)
							for (int i_0 = 1; i_0 <= 1; i_0 += 2)
							{
								// carray: (0) => (7) @ (1)
								for (int i_1 = 0; i_1 <= 7; i_1 += 1)
								{
									// sub                    : i_0 i_1
									// ori_name               : res[i_0][i_1]
									// sub_1st_elem           : 0 0
									// ori_name_1st_elem      : res[0][0]
									// output_left_conversion : res[i_0][i_1]
									// output_type_conversion : (res_lv0_1_1_2_lv1_0_7_1[hls_map_index]).to_uint64()
									if (&(res[0][0]) != NULL) // check the null address if the c port is array or others
									{
										res[i_0][i_1] = (res_lv0_1_1_2_lv1_0_7_1[hls_map_index]).to_uint64();
										hls_map_index++;
									}
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] res_1_pc_buffer;
		}

		// output port post check: "res_2"
		aesl_fh.read(AUTOTB_TVOUT_PC_res_2, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_res_2, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_res_2, AESL_token); // data

			sc_bv<16> *res_2_pc_buffer = new sc_bv<16>[8];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'res_2', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'res_2', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					res_2_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_res_2, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_res_2))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: res_2
				{
					// bitslice(15, 0)
					// {
						// celement: res(15, 0)
						// {
							sc_lv<16>* res_lv0_2_2_2_lv1_0_7_1 = new sc_lv<16>[8];
						// }
					// }

					// bitslice(15, 0)
					{
						int hls_map_index = 0;
						// celement: res(15, 0)
						{
							// carray: (2) => (2) @ (2)
							for (int i_0 = 2; i_0 <= 2; i_0 += 2)
							{
								// carray: (0) => (7) @ (1)
								for (int i_1 = 0; i_1 <= 7; i_1 += 1)
								{
									if (&(res[0][0]) != NULL) // check the null address if the c port is array or others
									{
										res_lv0_2_2_2_lv1_0_7_1[hls_map_index].range(15, 0) = sc_bv<16>(res_2_pc_buffer[hls_map_index].range(15, 0));
										hls_map_index++;
									}
								}
							}
						}
					}

					// bitslice(15, 0)
					{
						int hls_map_index = 0;
						// celement: res(15, 0)
						{
							// carray: (2) => (2) @ (2)
							for (int i_0 = 2; i_0 <= 2; i_0 += 2)
							{
								// carray: (0) => (7) @ (1)
								for (int i_1 = 0; i_1 <= 7; i_1 += 1)
								{
									// sub                    : i_0 i_1
									// ori_name               : res[i_0][i_1]
									// sub_1st_elem           : 0 0
									// ori_name_1st_elem      : res[0][0]
									// output_left_conversion : res[i_0][i_1]
									// output_type_conversion : (res_lv0_2_2_2_lv1_0_7_1[hls_map_index]).to_uint64()
									if (&(res[0][0]) != NULL) // check the null address if the c port is array or others
									{
										res[i_0][i_1] = (res_lv0_2_2_2_lv1_0_7_1[hls_map_index]).to_uint64();
										hls_map_index++;
									}
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] res_2_pc_buffer;
		}

		// output port post check: "res_3"
		aesl_fh.read(AUTOTB_TVOUT_PC_res_3, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_res_3, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_res_3, AESL_token); // data

			sc_bv<16> *res_3_pc_buffer = new sc_bv<16>[8];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'res_3', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'res_3', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					res_3_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_res_3, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_res_3))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: res_3
				{
					// bitslice(15, 0)
					// {
						// celement: res(15, 0)
						// {
							sc_lv<16>* res_lv0_3_3_2_lv1_0_7_1 = new sc_lv<16>[8];
						// }
					// }

					// bitslice(15, 0)
					{
						int hls_map_index = 0;
						// celement: res(15, 0)
						{
							// carray: (3) => (3) @ (2)
							for (int i_0 = 3; i_0 <= 3; i_0 += 2)
							{
								// carray: (0) => (7) @ (1)
								for (int i_1 = 0; i_1 <= 7; i_1 += 1)
								{
									if (&(res[0][0]) != NULL) // check the null address if the c port is array or others
									{
										res_lv0_3_3_2_lv1_0_7_1[hls_map_index].range(15, 0) = sc_bv<16>(res_3_pc_buffer[hls_map_index].range(15, 0));
										hls_map_index++;
									}
								}
							}
						}
					}

					// bitslice(15, 0)
					{
						int hls_map_index = 0;
						// celement: res(15, 0)
						{
							// carray: (3) => (3) @ (2)
							for (int i_0 = 3; i_0 <= 3; i_0 += 2)
							{
								// carray: (0) => (7) @ (1)
								for (int i_1 = 0; i_1 <= 7; i_1 += 1)
								{
									// sub                    : i_0 i_1
									// ori_name               : res[i_0][i_1]
									// sub_1st_elem           : 0 0
									// ori_name_1st_elem      : res[0][0]
									// output_left_conversion : res[i_0][i_1]
									// output_type_conversion : (res_lv0_3_3_2_lv1_0_7_1[hls_map_index]).to_uint64()
									if (&(res[0][0]) != NULL) // check the null address if the c port is array or others
									{
										res[i_0][i_1] = (res_lv0_3_3_2_lv1_0_7_1[hls_map_index]).to_uint64();
										hls_map_index++;
									}
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] res_3_pc_buffer;
		}

		// output port post check: "res_4"
		aesl_fh.read(AUTOTB_TVOUT_PC_res_4, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_res_4, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_res_4, AESL_token); // data

			sc_bv<16> *res_4_pc_buffer = new sc_bv<16>[8];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'res_4', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'res_4', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					res_4_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_res_4, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_res_4))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: res_4
				{
					// bitslice(15, 0)
					// {
						// celement: res(15, 0)
						// {
							sc_lv<16>* res_lv0_4_4_2_lv1_0_7_1 = new sc_lv<16>[8];
						// }
					// }

					// bitslice(15, 0)
					{
						int hls_map_index = 0;
						// celement: res(15, 0)
						{
							// carray: (4) => (4) @ (2)
							for (int i_0 = 4; i_0 <= 4; i_0 += 2)
							{
								// carray: (0) => (7) @ (1)
								for (int i_1 = 0; i_1 <= 7; i_1 += 1)
								{
									if (&(res[0][0]) != NULL) // check the null address if the c port is array or others
									{
										res_lv0_4_4_2_lv1_0_7_1[hls_map_index].range(15, 0) = sc_bv<16>(res_4_pc_buffer[hls_map_index].range(15, 0));
										hls_map_index++;
									}
								}
							}
						}
					}

					// bitslice(15, 0)
					{
						int hls_map_index = 0;
						// celement: res(15, 0)
						{
							// carray: (4) => (4) @ (2)
							for (int i_0 = 4; i_0 <= 4; i_0 += 2)
							{
								// carray: (0) => (7) @ (1)
								for (int i_1 = 0; i_1 <= 7; i_1 += 1)
								{
									// sub                    : i_0 i_1
									// ori_name               : res[i_0][i_1]
									// sub_1st_elem           : 0 0
									// ori_name_1st_elem      : res[0][0]
									// output_left_conversion : res[i_0][i_1]
									// output_type_conversion : (res_lv0_4_4_2_lv1_0_7_1[hls_map_index]).to_uint64()
									if (&(res[0][0]) != NULL) // check the null address if the c port is array or others
									{
										res[i_0][i_1] = (res_lv0_4_4_2_lv1_0_7_1[hls_map_index]).to_uint64();
										hls_map_index++;
									}
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] res_4_pc_buffer;
		}

		// output port post check: "res_5"
		aesl_fh.read(AUTOTB_TVOUT_PC_res_5, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_res_5, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_res_5, AESL_token); // data

			sc_bv<16> *res_5_pc_buffer = new sc_bv<16>[8];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'res_5', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'res_5', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					res_5_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_res_5, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_res_5))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: res_5
				{
					// bitslice(15, 0)
					// {
						// celement: res(15, 0)
						// {
							sc_lv<16>* res_lv0_5_5_2_lv1_0_7_1 = new sc_lv<16>[8];
						// }
					// }

					// bitslice(15, 0)
					{
						int hls_map_index = 0;
						// celement: res(15, 0)
						{
							// carray: (5) => (5) @ (2)
							for (int i_0 = 5; i_0 <= 5; i_0 += 2)
							{
								// carray: (0) => (7) @ (1)
								for (int i_1 = 0; i_1 <= 7; i_1 += 1)
								{
									if (&(res[0][0]) != NULL) // check the null address if the c port is array or others
									{
										res_lv0_5_5_2_lv1_0_7_1[hls_map_index].range(15, 0) = sc_bv<16>(res_5_pc_buffer[hls_map_index].range(15, 0));
										hls_map_index++;
									}
								}
							}
						}
					}

					// bitslice(15, 0)
					{
						int hls_map_index = 0;
						// celement: res(15, 0)
						{
							// carray: (5) => (5) @ (2)
							for (int i_0 = 5; i_0 <= 5; i_0 += 2)
							{
								// carray: (0) => (7) @ (1)
								for (int i_1 = 0; i_1 <= 7; i_1 += 1)
								{
									// sub                    : i_0 i_1
									// ori_name               : res[i_0][i_1]
									// sub_1st_elem           : 0 0
									// ori_name_1st_elem      : res[0][0]
									// output_left_conversion : res[i_0][i_1]
									// output_type_conversion : (res_lv0_5_5_2_lv1_0_7_1[hls_map_index]).to_uint64()
									if (&(res[0][0]) != NULL) // check the null address if the c port is array or others
									{
										res[i_0][i_1] = (res_lv0_5_5_2_lv1_0_7_1[hls_map_index]).to_uint64();
										hls_map_index++;
									}
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] res_5_pc_buffer;
		}

		// output port post check: "res_6"
		aesl_fh.read(AUTOTB_TVOUT_PC_res_6, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_res_6, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_res_6, AESL_token); // data

			sc_bv<16> *res_6_pc_buffer = new sc_bv<16>[8];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'res_6', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'res_6', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					res_6_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_res_6, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_res_6))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: res_6
				{
					// bitslice(15, 0)
					// {
						// celement: res(15, 0)
						// {
							sc_lv<16>* res_lv0_6_6_2_lv1_0_7_1 = new sc_lv<16>[8];
						// }
					// }

					// bitslice(15, 0)
					{
						int hls_map_index = 0;
						// celement: res(15, 0)
						{
							// carray: (6) => (6) @ (2)
							for (int i_0 = 6; i_0 <= 6; i_0 += 2)
							{
								// carray: (0) => (7) @ (1)
								for (int i_1 = 0; i_1 <= 7; i_1 += 1)
								{
									if (&(res[0][0]) != NULL) // check the null address if the c port is array or others
									{
										res_lv0_6_6_2_lv1_0_7_1[hls_map_index].range(15, 0) = sc_bv<16>(res_6_pc_buffer[hls_map_index].range(15, 0));
										hls_map_index++;
									}
								}
							}
						}
					}

					// bitslice(15, 0)
					{
						int hls_map_index = 0;
						// celement: res(15, 0)
						{
							// carray: (6) => (6) @ (2)
							for (int i_0 = 6; i_0 <= 6; i_0 += 2)
							{
								// carray: (0) => (7) @ (1)
								for (int i_1 = 0; i_1 <= 7; i_1 += 1)
								{
									// sub                    : i_0 i_1
									// ori_name               : res[i_0][i_1]
									// sub_1st_elem           : 0 0
									// ori_name_1st_elem      : res[0][0]
									// output_left_conversion : res[i_0][i_1]
									// output_type_conversion : (res_lv0_6_6_2_lv1_0_7_1[hls_map_index]).to_uint64()
									if (&(res[0][0]) != NULL) // check the null address if the c port is array or others
									{
										res[i_0][i_1] = (res_lv0_6_6_2_lv1_0_7_1[hls_map_index]).to_uint64();
										hls_map_index++;
									}
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] res_6_pc_buffer;
		}

		// output port post check: "res_7"
		aesl_fh.read(AUTOTB_TVOUT_PC_res_7, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_res_7, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_res_7, AESL_token); // data

			sc_bv<16> *res_7_pc_buffer = new sc_bv<16>[8];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'res_7', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'res_7', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					res_7_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_res_7, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_res_7))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: res_7
				{
					// bitslice(15, 0)
					// {
						// celement: res(15, 0)
						// {
							sc_lv<16>* res_lv0_7_7_2_lv1_0_7_1 = new sc_lv<16>[8];
						// }
					// }

					// bitslice(15, 0)
					{
						int hls_map_index = 0;
						// celement: res(15, 0)
						{
							// carray: (7) => (7) @ (2)
							for (int i_0 = 7; i_0 <= 7; i_0 += 2)
							{
								// carray: (0) => (7) @ (1)
								for (int i_1 = 0; i_1 <= 7; i_1 += 1)
								{
									if (&(res[0][0]) != NULL) // check the null address if the c port is array or others
									{
										res_lv0_7_7_2_lv1_0_7_1[hls_map_index].range(15, 0) = sc_bv<16>(res_7_pc_buffer[hls_map_index].range(15, 0));
										hls_map_index++;
									}
								}
							}
						}
					}

					// bitslice(15, 0)
					{
						int hls_map_index = 0;
						// celement: res(15, 0)
						{
							// carray: (7) => (7) @ (2)
							for (int i_0 = 7; i_0 <= 7; i_0 += 2)
							{
								// carray: (0) => (7) @ (1)
								for (int i_1 = 0; i_1 <= 7; i_1 += 1)
								{
									// sub                    : i_0 i_1
									// ori_name               : res[i_0][i_1]
									// sub_1st_elem           : 0 0
									// ori_name_1st_elem      : res[0][0]
									// output_left_conversion : res[i_0][i_1]
									// output_type_conversion : (res_lv0_7_7_2_lv1_0_7_1[hls_map_index]).to_uint64()
									if (&(res[0][0]) != NULL) // check the null address if the c port is array or others
									{
										res[i_0][i_1] = (res_lv0_7_7_2_lv1_0_7_1[hls_map_index]).to_uint64();
										hls_map_index++;
									}
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] res_7_pc_buffer;
		}

		AESL_transaction_pc++;
	}
	else
	{
		CodeState = ENTER_WRAPC;
		static unsigned AESL_transaction;

		static AESL_FILE_HANDLER aesl_fh;

		// "a_0"
		char* tvin_a_0 = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_a_0);

		// "a_1"
		char* tvin_a_1 = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_a_1);

		// "a_2"
		char* tvin_a_2 = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_a_2);

		// "a_3"
		char* tvin_a_3 = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_a_3);

		// "a_4"
		char* tvin_a_4 = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_a_4);

		// "a_5"
		char* tvin_a_5 = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_a_5);

		// "a_6"
		char* tvin_a_6 = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_a_6);

		// "a_7"
		char* tvin_a_7 = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_a_7);

		// "a_8"
		char* tvin_a_8 = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_a_8);

		// "a_9"
		char* tvin_a_9 = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_a_9);

		// "b_0"
		char* tvin_b_0 = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_b_0);

		// "b_1"
		char* tvin_b_1 = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_b_1);

		// "b_2"
		char* tvin_b_2 = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_b_2);

		// "res_0"
		char* tvin_res_0 = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_res_0);
		char* tvout_res_0 = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_res_0);

		// "res_1"
		char* tvin_res_1 = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_res_1);
		char* tvout_res_1 = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_res_1);

		// "res_2"
		char* tvin_res_2 = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_res_2);
		char* tvout_res_2 = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_res_2);

		// "res_3"
		char* tvin_res_3 = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_res_3);
		char* tvout_res_3 = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_res_3);

		// "res_4"
		char* tvin_res_4 = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_res_4);
		char* tvout_res_4 = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_res_4);

		// "res_5"
		char* tvin_res_5 = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_res_5);
		char* tvout_res_5 = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_res_5);

		// "res_6"
		char* tvin_res_6 = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_res_6);
		char* tvout_res_6 = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_res_6);

		// "res_7"
		char* tvin_res_7 = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_res_7);
		char* tvout_res_7 = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_res_7);

		CodeState = DUMP_INPUTS;
		static INTER_TCL_FILE tcl_file(INTER_TCL);
		int leading_zero;

		// [[transaction]]
		sprintf(tvin_a_0, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_a_0, tvin_a_0);

		sc_bv<8>* a_0_tvin_wrapc_buffer = new sc_bv<8>[10];

		// RTL Name: a_0
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: a(7, 0)
				{
					// carray: (0) => (0) @ (2)
					for (int i_0 = 0; i_0 <= 0; i_0 += 2)
					{
						// carray: (0) => (9) @ (1)
						for (int i_1 = 0; i_1 <= 9; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : a[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : a[0][0]
							// regulate_c_name       : a
							// input_type_conversion : a[i_0][i_1]
							if (&(a[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<8> a_tmp_mem;
								a_tmp_mem = a[i_0][i_1];
								a_0_tvin_wrapc_buffer[hls_map_index].range(7, 0) = a_tmp_mem.range(7, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 10; i++)
		{
			sprintf(tvin_a_0, "%s\n", (a_0_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_a_0, tvin_a_0);
		}

		tcl_file.set_num(10, &tcl_file.a_0_depth);
		sprintf(tvin_a_0, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_a_0, tvin_a_0);

		// release memory allocation
		delete [] a_0_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_a_1, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_a_1, tvin_a_1);

		sc_bv<8>* a_1_tvin_wrapc_buffer = new sc_bv<8>[10];

		// RTL Name: a_1
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: a(7, 0)
				{
					// carray: (1) => (1) @ (2)
					for (int i_0 = 1; i_0 <= 1; i_0 += 2)
					{
						// carray: (0) => (9) @ (1)
						for (int i_1 = 0; i_1 <= 9; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : a[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : a[0][0]
							// regulate_c_name       : a
							// input_type_conversion : a[i_0][i_1]
							if (&(a[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<8> a_tmp_mem;
								a_tmp_mem = a[i_0][i_1];
								a_1_tvin_wrapc_buffer[hls_map_index].range(7, 0) = a_tmp_mem.range(7, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 10; i++)
		{
			sprintf(tvin_a_1, "%s\n", (a_1_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_a_1, tvin_a_1);
		}

		tcl_file.set_num(10, &tcl_file.a_1_depth);
		sprintf(tvin_a_1, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_a_1, tvin_a_1);

		// release memory allocation
		delete [] a_1_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_a_2, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_a_2, tvin_a_2);

		sc_bv<8>* a_2_tvin_wrapc_buffer = new sc_bv<8>[10];

		// RTL Name: a_2
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: a(7, 0)
				{
					// carray: (2) => (2) @ (2)
					for (int i_0 = 2; i_0 <= 2; i_0 += 2)
					{
						// carray: (0) => (9) @ (1)
						for (int i_1 = 0; i_1 <= 9; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : a[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : a[0][0]
							// regulate_c_name       : a
							// input_type_conversion : a[i_0][i_1]
							if (&(a[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<8> a_tmp_mem;
								a_tmp_mem = a[i_0][i_1];
								a_2_tvin_wrapc_buffer[hls_map_index].range(7, 0) = a_tmp_mem.range(7, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 10; i++)
		{
			sprintf(tvin_a_2, "%s\n", (a_2_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_a_2, tvin_a_2);
		}

		tcl_file.set_num(10, &tcl_file.a_2_depth);
		sprintf(tvin_a_2, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_a_2, tvin_a_2);

		// release memory allocation
		delete [] a_2_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_a_3, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_a_3, tvin_a_3);

		sc_bv<8>* a_3_tvin_wrapc_buffer = new sc_bv<8>[10];

		// RTL Name: a_3
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: a(7, 0)
				{
					// carray: (3) => (3) @ (2)
					for (int i_0 = 3; i_0 <= 3; i_0 += 2)
					{
						// carray: (0) => (9) @ (1)
						for (int i_1 = 0; i_1 <= 9; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : a[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : a[0][0]
							// regulate_c_name       : a
							// input_type_conversion : a[i_0][i_1]
							if (&(a[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<8> a_tmp_mem;
								a_tmp_mem = a[i_0][i_1];
								a_3_tvin_wrapc_buffer[hls_map_index].range(7, 0) = a_tmp_mem.range(7, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 10; i++)
		{
			sprintf(tvin_a_3, "%s\n", (a_3_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_a_3, tvin_a_3);
		}

		tcl_file.set_num(10, &tcl_file.a_3_depth);
		sprintf(tvin_a_3, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_a_3, tvin_a_3);

		// release memory allocation
		delete [] a_3_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_a_4, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_a_4, tvin_a_4);

		sc_bv<8>* a_4_tvin_wrapc_buffer = new sc_bv<8>[10];

		// RTL Name: a_4
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: a(7, 0)
				{
					// carray: (4) => (4) @ (2)
					for (int i_0 = 4; i_0 <= 4; i_0 += 2)
					{
						// carray: (0) => (9) @ (1)
						for (int i_1 = 0; i_1 <= 9; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : a[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : a[0][0]
							// regulate_c_name       : a
							// input_type_conversion : a[i_0][i_1]
							if (&(a[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<8> a_tmp_mem;
								a_tmp_mem = a[i_0][i_1];
								a_4_tvin_wrapc_buffer[hls_map_index].range(7, 0) = a_tmp_mem.range(7, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 10; i++)
		{
			sprintf(tvin_a_4, "%s\n", (a_4_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_a_4, tvin_a_4);
		}

		tcl_file.set_num(10, &tcl_file.a_4_depth);
		sprintf(tvin_a_4, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_a_4, tvin_a_4);

		// release memory allocation
		delete [] a_4_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_a_5, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_a_5, tvin_a_5);

		sc_bv<8>* a_5_tvin_wrapc_buffer = new sc_bv<8>[10];

		// RTL Name: a_5
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: a(7, 0)
				{
					// carray: (5) => (5) @ (2)
					for (int i_0 = 5; i_0 <= 5; i_0 += 2)
					{
						// carray: (0) => (9) @ (1)
						for (int i_1 = 0; i_1 <= 9; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : a[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : a[0][0]
							// regulate_c_name       : a
							// input_type_conversion : a[i_0][i_1]
							if (&(a[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<8> a_tmp_mem;
								a_tmp_mem = a[i_0][i_1];
								a_5_tvin_wrapc_buffer[hls_map_index].range(7, 0) = a_tmp_mem.range(7, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 10; i++)
		{
			sprintf(tvin_a_5, "%s\n", (a_5_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_a_5, tvin_a_5);
		}

		tcl_file.set_num(10, &tcl_file.a_5_depth);
		sprintf(tvin_a_5, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_a_5, tvin_a_5);

		// release memory allocation
		delete [] a_5_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_a_6, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_a_6, tvin_a_6);

		sc_bv<8>* a_6_tvin_wrapc_buffer = new sc_bv<8>[10];

		// RTL Name: a_6
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: a(7, 0)
				{
					// carray: (6) => (6) @ (2)
					for (int i_0 = 6; i_0 <= 6; i_0 += 2)
					{
						// carray: (0) => (9) @ (1)
						for (int i_1 = 0; i_1 <= 9; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : a[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : a[0][0]
							// regulate_c_name       : a
							// input_type_conversion : a[i_0][i_1]
							if (&(a[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<8> a_tmp_mem;
								a_tmp_mem = a[i_0][i_1];
								a_6_tvin_wrapc_buffer[hls_map_index].range(7, 0) = a_tmp_mem.range(7, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 10; i++)
		{
			sprintf(tvin_a_6, "%s\n", (a_6_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_a_6, tvin_a_6);
		}

		tcl_file.set_num(10, &tcl_file.a_6_depth);
		sprintf(tvin_a_6, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_a_6, tvin_a_6);

		// release memory allocation
		delete [] a_6_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_a_7, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_a_7, tvin_a_7);

		sc_bv<8>* a_7_tvin_wrapc_buffer = new sc_bv<8>[10];

		// RTL Name: a_7
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: a(7, 0)
				{
					// carray: (7) => (7) @ (2)
					for (int i_0 = 7; i_0 <= 7; i_0 += 2)
					{
						// carray: (0) => (9) @ (1)
						for (int i_1 = 0; i_1 <= 9; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : a[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : a[0][0]
							// regulate_c_name       : a
							// input_type_conversion : a[i_0][i_1]
							if (&(a[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<8> a_tmp_mem;
								a_tmp_mem = a[i_0][i_1];
								a_7_tvin_wrapc_buffer[hls_map_index].range(7, 0) = a_tmp_mem.range(7, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 10; i++)
		{
			sprintf(tvin_a_7, "%s\n", (a_7_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_a_7, tvin_a_7);
		}

		tcl_file.set_num(10, &tcl_file.a_7_depth);
		sprintf(tvin_a_7, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_a_7, tvin_a_7);

		// release memory allocation
		delete [] a_7_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_a_8, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_a_8, tvin_a_8);

		sc_bv<8>* a_8_tvin_wrapc_buffer = new sc_bv<8>[10];

		// RTL Name: a_8
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: a(7, 0)
				{
					// carray: (8) => (8) @ (2)
					for (int i_0 = 8; i_0 <= 8; i_0 += 2)
					{
						// carray: (0) => (9) @ (1)
						for (int i_1 = 0; i_1 <= 9; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : a[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : a[0][0]
							// regulate_c_name       : a
							// input_type_conversion : a[i_0][i_1]
							if (&(a[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<8> a_tmp_mem;
								a_tmp_mem = a[i_0][i_1];
								a_8_tvin_wrapc_buffer[hls_map_index].range(7, 0) = a_tmp_mem.range(7, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 10; i++)
		{
			sprintf(tvin_a_8, "%s\n", (a_8_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_a_8, tvin_a_8);
		}

		tcl_file.set_num(10, &tcl_file.a_8_depth);
		sprintf(tvin_a_8, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_a_8, tvin_a_8);

		// release memory allocation
		delete [] a_8_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_a_9, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_a_9, tvin_a_9);

		sc_bv<8>* a_9_tvin_wrapc_buffer = new sc_bv<8>[10];

		// RTL Name: a_9
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: a(7, 0)
				{
					// carray: (9) => (9) @ (2)
					for (int i_0 = 9; i_0 <= 9; i_0 += 2)
					{
						// carray: (0) => (9) @ (1)
						for (int i_1 = 0; i_1 <= 9; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : a[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : a[0][0]
							// regulate_c_name       : a
							// input_type_conversion : a[i_0][i_1]
							if (&(a[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<8> a_tmp_mem;
								a_tmp_mem = a[i_0][i_1];
								a_9_tvin_wrapc_buffer[hls_map_index].range(7, 0) = a_tmp_mem.range(7, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 10; i++)
		{
			sprintf(tvin_a_9, "%s\n", (a_9_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_a_9, tvin_a_9);
		}

		tcl_file.set_num(10, &tcl_file.a_9_depth);
		sprintf(tvin_a_9, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_a_9, tvin_a_9);

		// release memory allocation
		delete [] a_9_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_b_0, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_b_0, tvin_b_0);

		sc_bv<8>* b_0_tvin_wrapc_buffer = new sc_bv<8>[3];

		// RTL Name: b_0
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: b(7, 0)
				{
					// carray: (0) => (0) @ (2)
					for (int i_0 = 0; i_0 <= 0; i_0 += 2)
					{
						// carray: (0) => (2) @ (1)
						for (int i_1 = 0; i_1 <= 2; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : b[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : b[0][0]
							// regulate_c_name       : b
							// input_type_conversion : b[i_0][i_1]
							if (&(b[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<8> b_tmp_mem;
								b_tmp_mem = b[i_0][i_1];
								b_0_tvin_wrapc_buffer[hls_map_index].range(7, 0) = b_tmp_mem.range(7, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 3; i++)
		{
			sprintf(tvin_b_0, "%s\n", (b_0_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_b_0, tvin_b_0);
		}

		tcl_file.set_num(3, &tcl_file.b_0_depth);
		sprintf(tvin_b_0, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_b_0, tvin_b_0);

		// release memory allocation
		delete [] b_0_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_b_1, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_b_1, tvin_b_1);

		sc_bv<8>* b_1_tvin_wrapc_buffer = new sc_bv<8>[3];

		// RTL Name: b_1
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: b(7, 0)
				{
					// carray: (1) => (1) @ (2)
					for (int i_0 = 1; i_0 <= 1; i_0 += 2)
					{
						// carray: (0) => (2) @ (1)
						for (int i_1 = 0; i_1 <= 2; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : b[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : b[0][0]
							// regulate_c_name       : b
							// input_type_conversion : b[i_0][i_1]
							if (&(b[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<8> b_tmp_mem;
								b_tmp_mem = b[i_0][i_1];
								b_1_tvin_wrapc_buffer[hls_map_index].range(7, 0) = b_tmp_mem.range(7, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 3; i++)
		{
			sprintf(tvin_b_1, "%s\n", (b_1_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_b_1, tvin_b_1);
		}

		tcl_file.set_num(3, &tcl_file.b_1_depth);
		sprintf(tvin_b_1, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_b_1, tvin_b_1);

		// release memory allocation
		delete [] b_1_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_b_2, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_b_2, tvin_b_2);

		sc_bv<8>* b_2_tvin_wrapc_buffer = new sc_bv<8>[3];

		// RTL Name: b_2
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: b(7, 0)
				{
					// carray: (2) => (2) @ (2)
					for (int i_0 = 2; i_0 <= 2; i_0 += 2)
					{
						// carray: (0) => (2) @ (1)
						for (int i_1 = 0; i_1 <= 2; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : b[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : b[0][0]
							// regulate_c_name       : b
							// input_type_conversion : b[i_0][i_1]
							if (&(b[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<8> b_tmp_mem;
								b_tmp_mem = b[i_0][i_1];
								b_2_tvin_wrapc_buffer[hls_map_index].range(7, 0) = b_tmp_mem.range(7, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 3; i++)
		{
			sprintf(tvin_b_2, "%s\n", (b_2_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_b_2, tvin_b_2);
		}

		tcl_file.set_num(3, &tcl_file.b_2_depth);
		sprintf(tvin_b_2, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_b_2, tvin_b_2);

		// release memory allocation
		delete [] b_2_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_res_0, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_res_0, tvin_res_0);

		sc_bv<16>* res_0_tvin_wrapc_buffer = new sc_bv<16>[8];

		// RTL Name: res_0
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: res(15, 0)
				{
					// carray: (0) => (0) @ (2)
					for (int i_0 = 0; i_0 <= 0; i_0 += 2)
					{
						// carray: (0) => (7) @ (1)
						for (int i_1 = 0; i_1 <= 7; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : res[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : res[0][0]
							// regulate_c_name       : res
							// input_type_conversion : res[i_0][i_1]
							if (&(res[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<16> res_tmp_mem;
								res_tmp_mem = res[i_0][i_1];
								res_0_tvin_wrapc_buffer[hls_map_index].range(15, 0) = res_tmp_mem.range(15, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 8; i++)
		{
			sprintf(tvin_res_0, "%s\n", (res_0_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_res_0, tvin_res_0);
		}

		tcl_file.set_num(8, &tcl_file.res_0_depth);
		sprintf(tvin_res_0, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_res_0, tvin_res_0);

		// release memory allocation
		delete [] res_0_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_res_1, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_res_1, tvin_res_1);

		sc_bv<16>* res_1_tvin_wrapc_buffer = new sc_bv<16>[8];

		// RTL Name: res_1
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: res(15, 0)
				{
					// carray: (1) => (1) @ (2)
					for (int i_0 = 1; i_0 <= 1; i_0 += 2)
					{
						// carray: (0) => (7) @ (1)
						for (int i_1 = 0; i_1 <= 7; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : res[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : res[0][0]
							// regulate_c_name       : res
							// input_type_conversion : res[i_0][i_1]
							if (&(res[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<16> res_tmp_mem;
								res_tmp_mem = res[i_0][i_1];
								res_1_tvin_wrapc_buffer[hls_map_index].range(15, 0) = res_tmp_mem.range(15, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 8; i++)
		{
			sprintf(tvin_res_1, "%s\n", (res_1_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_res_1, tvin_res_1);
		}

		tcl_file.set_num(8, &tcl_file.res_1_depth);
		sprintf(tvin_res_1, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_res_1, tvin_res_1);

		// release memory allocation
		delete [] res_1_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_res_2, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_res_2, tvin_res_2);

		sc_bv<16>* res_2_tvin_wrapc_buffer = new sc_bv<16>[8];

		// RTL Name: res_2
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: res(15, 0)
				{
					// carray: (2) => (2) @ (2)
					for (int i_0 = 2; i_0 <= 2; i_0 += 2)
					{
						// carray: (0) => (7) @ (1)
						for (int i_1 = 0; i_1 <= 7; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : res[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : res[0][0]
							// regulate_c_name       : res
							// input_type_conversion : res[i_0][i_1]
							if (&(res[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<16> res_tmp_mem;
								res_tmp_mem = res[i_0][i_1];
								res_2_tvin_wrapc_buffer[hls_map_index].range(15, 0) = res_tmp_mem.range(15, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 8; i++)
		{
			sprintf(tvin_res_2, "%s\n", (res_2_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_res_2, tvin_res_2);
		}

		tcl_file.set_num(8, &tcl_file.res_2_depth);
		sprintf(tvin_res_2, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_res_2, tvin_res_2);

		// release memory allocation
		delete [] res_2_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_res_3, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_res_3, tvin_res_3);

		sc_bv<16>* res_3_tvin_wrapc_buffer = new sc_bv<16>[8];

		// RTL Name: res_3
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: res(15, 0)
				{
					// carray: (3) => (3) @ (2)
					for (int i_0 = 3; i_0 <= 3; i_0 += 2)
					{
						// carray: (0) => (7) @ (1)
						for (int i_1 = 0; i_1 <= 7; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : res[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : res[0][0]
							// regulate_c_name       : res
							// input_type_conversion : res[i_0][i_1]
							if (&(res[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<16> res_tmp_mem;
								res_tmp_mem = res[i_0][i_1];
								res_3_tvin_wrapc_buffer[hls_map_index].range(15, 0) = res_tmp_mem.range(15, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 8; i++)
		{
			sprintf(tvin_res_3, "%s\n", (res_3_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_res_3, tvin_res_3);
		}

		tcl_file.set_num(8, &tcl_file.res_3_depth);
		sprintf(tvin_res_3, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_res_3, tvin_res_3);

		// release memory allocation
		delete [] res_3_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_res_4, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_res_4, tvin_res_4);

		sc_bv<16>* res_4_tvin_wrapc_buffer = new sc_bv<16>[8];

		// RTL Name: res_4
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: res(15, 0)
				{
					// carray: (4) => (4) @ (2)
					for (int i_0 = 4; i_0 <= 4; i_0 += 2)
					{
						// carray: (0) => (7) @ (1)
						for (int i_1 = 0; i_1 <= 7; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : res[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : res[0][0]
							// regulate_c_name       : res
							// input_type_conversion : res[i_0][i_1]
							if (&(res[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<16> res_tmp_mem;
								res_tmp_mem = res[i_0][i_1];
								res_4_tvin_wrapc_buffer[hls_map_index].range(15, 0) = res_tmp_mem.range(15, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 8; i++)
		{
			sprintf(tvin_res_4, "%s\n", (res_4_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_res_4, tvin_res_4);
		}

		tcl_file.set_num(8, &tcl_file.res_4_depth);
		sprintf(tvin_res_4, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_res_4, tvin_res_4);

		// release memory allocation
		delete [] res_4_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_res_5, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_res_5, tvin_res_5);

		sc_bv<16>* res_5_tvin_wrapc_buffer = new sc_bv<16>[8];

		// RTL Name: res_5
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: res(15, 0)
				{
					// carray: (5) => (5) @ (2)
					for (int i_0 = 5; i_0 <= 5; i_0 += 2)
					{
						// carray: (0) => (7) @ (1)
						for (int i_1 = 0; i_1 <= 7; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : res[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : res[0][0]
							// regulate_c_name       : res
							// input_type_conversion : res[i_0][i_1]
							if (&(res[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<16> res_tmp_mem;
								res_tmp_mem = res[i_0][i_1];
								res_5_tvin_wrapc_buffer[hls_map_index].range(15, 0) = res_tmp_mem.range(15, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 8; i++)
		{
			sprintf(tvin_res_5, "%s\n", (res_5_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_res_5, tvin_res_5);
		}

		tcl_file.set_num(8, &tcl_file.res_5_depth);
		sprintf(tvin_res_5, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_res_5, tvin_res_5);

		// release memory allocation
		delete [] res_5_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_res_6, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_res_6, tvin_res_6);

		sc_bv<16>* res_6_tvin_wrapc_buffer = new sc_bv<16>[8];

		// RTL Name: res_6
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: res(15, 0)
				{
					// carray: (6) => (6) @ (2)
					for (int i_0 = 6; i_0 <= 6; i_0 += 2)
					{
						// carray: (0) => (7) @ (1)
						for (int i_1 = 0; i_1 <= 7; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : res[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : res[0][0]
							// regulate_c_name       : res
							// input_type_conversion : res[i_0][i_1]
							if (&(res[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<16> res_tmp_mem;
								res_tmp_mem = res[i_0][i_1];
								res_6_tvin_wrapc_buffer[hls_map_index].range(15, 0) = res_tmp_mem.range(15, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 8; i++)
		{
			sprintf(tvin_res_6, "%s\n", (res_6_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_res_6, tvin_res_6);
		}

		tcl_file.set_num(8, &tcl_file.res_6_depth);
		sprintf(tvin_res_6, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_res_6, tvin_res_6);

		// release memory allocation
		delete [] res_6_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_res_7, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_res_7, tvin_res_7);

		sc_bv<16>* res_7_tvin_wrapc_buffer = new sc_bv<16>[8];

		// RTL Name: res_7
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: res(15, 0)
				{
					// carray: (7) => (7) @ (2)
					for (int i_0 = 7; i_0 <= 7; i_0 += 2)
					{
						// carray: (0) => (7) @ (1)
						for (int i_1 = 0; i_1 <= 7; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : res[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : res[0][0]
							// regulate_c_name       : res
							// input_type_conversion : res[i_0][i_1]
							if (&(res[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<16> res_tmp_mem;
								res_tmp_mem = res[i_0][i_1];
								res_7_tvin_wrapc_buffer[hls_map_index].range(15, 0) = res_tmp_mem.range(15, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 8; i++)
		{
			sprintf(tvin_res_7, "%s\n", (res_7_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_res_7, tvin_res_7);
		}

		tcl_file.set_num(8, &tcl_file.res_7_depth);
		sprintf(tvin_res_7, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_res_7, tvin_res_7);

		// release memory allocation
		delete [] res_7_tvin_wrapc_buffer;

// [call_c_dut] ---------->

		CodeState = CALL_C_DUT;
		matrix_conv(a, b, res);

		CodeState = DUMP_OUTPUTS;

		// [[transaction]]
		sprintf(tvout_res_0, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_res_0, tvout_res_0);

		sc_bv<16>* res_0_tvout_wrapc_buffer = new sc_bv<16>[8];

		// RTL Name: res_0
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: res(15, 0)
				{
					// carray: (0) => (0) @ (2)
					for (int i_0 = 0; i_0 <= 0; i_0 += 2)
					{
						// carray: (0) => (7) @ (1)
						for (int i_1 = 0; i_1 <= 7; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : res[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : res[0][0]
							// regulate_c_name       : res
							// input_type_conversion : res[i_0][i_1]
							if (&(res[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<16> res_tmp_mem;
								res_tmp_mem = res[i_0][i_1];
								res_0_tvout_wrapc_buffer[hls_map_index].range(15, 0) = res_tmp_mem.range(15, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 8; i++)
		{
			sprintf(tvout_res_0, "%s\n", (res_0_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_res_0, tvout_res_0);
		}

		tcl_file.set_num(8, &tcl_file.res_0_depth);
		sprintf(tvout_res_0, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_res_0, tvout_res_0);

		// release memory allocation
		delete [] res_0_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_res_1, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_res_1, tvout_res_1);

		sc_bv<16>* res_1_tvout_wrapc_buffer = new sc_bv<16>[8];

		// RTL Name: res_1
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: res(15, 0)
				{
					// carray: (1) => (1) @ (2)
					for (int i_0 = 1; i_0 <= 1; i_0 += 2)
					{
						// carray: (0) => (7) @ (1)
						for (int i_1 = 0; i_1 <= 7; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : res[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : res[0][0]
							// regulate_c_name       : res
							// input_type_conversion : res[i_0][i_1]
							if (&(res[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<16> res_tmp_mem;
								res_tmp_mem = res[i_0][i_1];
								res_1_tvout_wrapc_buffer[hls_map_index].range(15, 0) = res_tmp_mem.range(15, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 8; i++)
		{
			sprintf(tvout_res_1, "%s\n", (res_1_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_res_1, tvout_res_1);
		}

		tcl_file.set_num(8, &tcl_file.res_1_depth);
		sprintf(tvout_res_1, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_res_1, tvout_res_1);

		// release memory allocation
		delete [] res_1_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_res_2, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_res_2, tvout_res_2);

		sc_bv<16>* res_2_tvout_wrapc_buffer = new sc_bv<16>[8];

		// RTL Name: res_2
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: res(15, 0)
				{
					// carray: (2) => (2) @ (2)
					for (int i_0 = 2; i_0 <= 2; i_0 += 2)
					{
						// carray: (0) => (7) @ (1)
						for (int i_1 = 0; i_1 <= 7; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : res[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : res[0][0]
							// regulate_c_name       : res
							// input_type_conversion : res[i_0][i_1]
							if (&(res[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<16> res_tmp_mem;
								res_tmp_mem = res[i_0][i_1];
								res_2_tvout_wrapc_buffer[hls_map_index].range(15, 0) = res_tmp_mem.range(15, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 8; i++)
		{
			sprintf(tvout_res_2, "%s\n", (res_2_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_res_2, tvout_res_2);
		}

		tcl_file.set_num(8, &tcl_file.res_2_depth);
		sprintf(tvout_res_2, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_res_2, tvout_res_2);

		// release memory allocation
		delete [] res_2_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_res_3, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_res_3, tvout_res_3);

		sc_bv<16>* res_3_tvout_wrapc_buffer = new sc_bv<16>[8];

		// RTL Name: res_3
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: res(15, 0)
				{
					// carray: (3) => (3) @ (2)
					for (int i_0 = 3; i_0 <= 3; i_0 += 2)
					{
						// carray: (0) => (7) @ (1)
						for (int i_1 = 0; i_1 <= 7; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : res[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : res[0][0]
							// regulate_c_name       : res
							// input_type_conversion : res[i_0][i_1]
							if (&(res[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<16> res_tmp_mem;
								res_tmp_mem = res[i_0][i_1];
								res_3_tvout_wrapc_buffer[hls_map_index].range(15, 0) = res_tmp_mem.range(15, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 8; i++)
		{
			sprintf(tvout_res_3, "%s\n", (res_3_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_res_3, tvout_res_3);
		}

		tcl_file.set_num(8, &tcl_file.res_3_depth);
		sprintf(tvout_res_3, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_res_3, tvout_res_3);

		// release memory allocation
		delete [] res_3_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_res_4, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_res_4, tvout_res_4);

		sc_bv<16>* res_4_tvout_wrapc_buffer = new sc_bv<16>[8];

		// RTL Name: res_4
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: res(15, 0)
				{
					// carray: (4) => (4) @ (2)
					for (int i_0 = 4; i_0 <= 4; i_0 += 2)
					{
						// carray: (0) => (7) @ (1)
						for (int i_1 = 0; i_1 <= 7; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : res[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : res[0][0]
							// regulate_c_name       : res
							// input_type_conversion : res[i_0][i_1]
							if (&(res[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<16> res_tmp_mem;
								res_tmp_mem = res[i_0][i_1];
								res_4_tvout_wrapc_buffer[hls_map_index].range(15, 0) = res_tmp_mem.range(15, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 8; i++)
		{
			sprintf(tvout_res_4, "%s\n", (res_4_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_res_4, tvout_res_4);
		}

		tcl_file.set_num(8, &tcl_file.res_4_depth);
		sprintf(tvout_res_4, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_res_4, tvout_res_4);

		// release memory allocation
		delete [] res_4_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_res_5, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_res_5, tvout_res_5);

		sc_bv<16>* res_5_tvout_wrapc_buffer = new sc_bv<16>[8];

		// RTL Name: res_5
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: res(15, 0)
				{
					// carray: (5) => (5) @ (2)
					for (int i_0 = 5; i_0 <= 5; i_0 += 2)
					{
						// carray: (0) => (7) @ (1)
						for (int i_1 = 0; i_1 <= 7; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : res[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : res[0][0]
							// regulate_c_name       : res
							// input_type_conversion : res[i_0][i_1]
							if (&(res[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<16> res_tmp_mem;
								res_tmp_mem = res[i_0][i_1];
								res_5_tvout_wrapc_buffer[hls_map_index].range(15, 0) = res_tmp_mem.range(15, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 8; i++)
		{
			sprintf(tvout_res_5, "%s\n", (res_5_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_res_5, tvout_res_5);
		}

		tcl_file.set_num(8, &tcl_file.res_5_depth);
		sprintf(tvout_res_5, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_res_5, tvout_res_5);

		// release memory allocation
		delete [] res_5_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_res_6, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_res_6, tvout_res_6);

		sc_bv<16>* res_6_tvout_wrapc_buffer = new sc_bv<16>[8];

		// RTL Name: res_6
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: res(15, 0)
				{
					// carray: (6) => (6) @ (2)
					for (int i_0 = 6; i_0 <= 6; i_0 += 2)
					{
						// carray: (0) => (7) @ (1)
						for (int i_1 = 0; i_1 <= 7; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : res[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : res[0][0]
							// regulate_c_name       : res
							// input_type_conversion : res[i_0][i_1]
							if (&(res[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<16> res_tmp_mem;
								res_tmp_mem = res[i_0][i_1];
								res_6_tvout_wrapc_buffer[hls_map_index].range(15, 0) = res_tmp_mem.range(15, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 8; i++)
		{
			sprintf(tvout_res_6, "%s\n", (res_6_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_res_6, tvout_res_6);
		}

		tcl_file.set_num(8, &tcl_file.res_6_depth);
		sprintf(tvout_res_6, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_res_6, tvout_res_6);

		// release memory allocation
		delete [] res_6_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_res_7, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_res_7, tvout_res_7);

		sc_bv<16>* res_7_tvout_wrapc_buffer = new sc_bv<16>[8];

		// RTL Name: res_7
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: res(15, 0)
				{
					// carray: (7) => (7) @ (2)
					for (int i_0 = 7; i_0 <= 7; i_0 += 2)
					{
						// carray: (0) => (7) @ (1)
						for (int i_1 = 0; i_1 <= 7; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : res[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : res[0][0]
							// regulate_c_name       : res
							// input_type_conversion : res[i_0][i_1]
							if (&(res[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<16> res_tmp_mem;
								res_tmp_mem = res[i_0][i_1];
								res_7_tvout_wrapc_buffer[hls_map_index].range(15, 0) = res_tmp_mem.range(15, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 8; i++)
		{
			sprintf(tvout_res_7, "%s\n", (res_7_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_res_7, tvout_res_7);
		}

		tcl_file.set_num(8, &tcl_file.res_7_depth);
		sprintf(tvout_res_7, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_res_7, tvout_res_7);

		// release memory allocation
		delete [] res_7_tvout_wrapc_buffer;

		CodeState = DELETE_CHAR_BUFFERS;
		// release memory allocation: "a_0"
		delete [] tvin_a_0;
		// release memory allocation: "a_1"
		delete [] tvin_a_1;
		// release memory allocation: "a_2"
		delete [] tvin_a_2;
		// release memory allocation: "a_3"
		delete [] tvin_a_3;
		// release memory allocation: "a_4"
		delete [] tvin_a_4;
		// release memory allocation: "a_5"
		delete [] tvin_a_5;
		// release memory allocation: "a_6"
		delete [] tvin_a_6;
		// release memory allocation: "a_7"
		delete [] tvin_a_7;
		// release memory allocation: "a_8"
		delete [] tvin_a_8;
		// release memory allocation: "a_9"
		delete [] tvin_a_9;
		// release memory allocation: "b_0"
		delete [] tvin_b_0;
		// release memory allocation: "b_1"
		delete [] tvin_b_1;
		// release memory allocation: "b_2"
		delete [] tvin_b_2;
		// release memory allocation: "res_0"
		delete [] tvout_res_0;
		delete [] tvin_res_0;
		// release memory allocation: "res_1"
		delete [] tvout_res_1;
		delete [] tvin_res_1;
		// release memory allocation: "res_2"
		delete [] tvout_res_2;
		delete [] tvin_res_2;
		// release memory allocation: "res_3"
		delete [] tvout_res_3;
		delete [] tvin_res_3;
		// release memory allocation: "res_4"
		delete [] tvout_res_4;
		delete [] tvin_res_4;
		// release memory allocation: "res_5"
		delete [] tvout_res_5;
		delete [] tvin_res_5;
		// release memory allocation: "res_6"
		delete [] tvout_res_6;
		delete [] tvin_res_6;
		// release memory allocation: "res_7"
		delete [] tvout_res_7;
		delete [] tvin_res_7;

		AESL_transaction++;

		tcl_file.set_num(AESL_transaction , &tcl_file.trans_num);
	}
}

