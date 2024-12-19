#include "matrix_conv.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void matrix_conv::thread_tmp_0_2_1_2_fu_2588_p1() {
    tmp_0_2_1_2_fu_2588_p1 = esl_sext<16,8>(a_1_q0.read());
}

void matrix_conv::thread_tmp_0_2_2_2_fu_2592_p1() {
    tmp_0_2_2_2_fu_2592_p1 = esl_sext<16,8>(a_2_q0.read());
}

void matrix_conv::thread_tmp_0_3_0_2_fu_2596_p1() {
    tmp_0_3_0_2_fu_2596_p1 = esl_sext<16,8>(a_0_q1.read());
}

void matrix_conv::thread_tmp_0_3_1_2_fu_2610_p1() {
    tmp_0_3_1_2_fu_2610_p1 = esl_sext<16,8>(a_1_q1.read());
}

void matrix_conv::thread_tmp_0_3_2_2_fu_2619_p1() {
    tmp_0_3_2_2_fu_2619_p1 = esl_sext<16,8>(a_2_q1.read());
}

void matrix_conv::thread_tmp_0_4_0_2_fu_3049_p1() {
    tmp_0_4_0_2_fu_3049_p1 = esl_sext<16,8>(a_0_q0.read());
}

void matrix_conv::thread_tmp_0_4_1_2_fu_3058_p1() {
    tmp_0_4_1_2_fu_3058_p1 = esl_sext<16,8>(a_1_q0.read());
}

void matrix_conv::thread_tmp_0_4_2_2_fu_3062_p1() {
    tmp_0_4_2_2_fu_3062_p1 = esl_sext<16,8>(a_2_q0.read());
}

void matrix_conv::thread_tmp_0_5_0_2_fu_3066_p1() {
    tmp_0_5_0_2_fu_3066_p1 = esl_sext<16,8>(a_0_q1.read());
}

void matrix_conv::thread_tmp_0_5_1_2_fu_3080_p1() {
    tmp_0_5_1_2_fu_3080_p1 = esl_sext<16,8>(a_1_q1.read());
}

void matrix_conv::thread_tmp_0_5_2_2_fu_3089_p1() {
    tmp_0_5_2_2_fu_3089_p1 = esl_sext<16,8>(a_2_q1.read());
}

void matrix_conv::thread_tmp_0_6_0_2_fu_3708_p1() {
    tmp_0_6_0_2_fu_3708_p1 = esl_sext<16,8>(a_0_q0.read());
}

void matrix_conv::thread_tmp_0_6_1_2_fu_3717_p1() {
    tmp_0_6_1_2_fu_3717_p1 = esl_sext<16,8>(a_1_q0.read());
}

void matrix_conv::thread_tmp_0_6_2_2_fu_3721_p1() {
    tmp_0_6_2_2_fu_3721_p1 = esl_sext<16,8>(a_2_q0.read());
}

void matrix_conv::thread_tmp_0_7_1_2_fu_3739_p1() {
    tmp_0_7_1_2_fu_3739_p1 = esl_sext<16,8>(a_1_q1.read());
}

void matrix_conv::thread_tmp_0_7_2_2_fu_3748_p1() {
    tmp_0_7_2_2_fu_3748_p1 = esl_sext<16,8>(a_2_q1.read());
}

void matrix_conv::thread_tmp_1_0_2_1_fu_1912_p1() {
    tmp_1_0_2_1_fu_1912_p1 = esl_sext<16,8>(a_3_q1.read());
}

void matrix_conv::thread_tmp_1_0_2_2_fu_2155_p1() {
    tmp_1_0_2_2_fu_2155_p1 = esl_sext<16,8>(a_3_q0.read());
}

void matrix_conv::thread_tmp_1_0_2_fu_1908_p1() {
    tmp_1_0_2_fu_1908_p1 = esl_sext<16,8>(a_3_q0.read());
}

void matrix_conv::thread_tmp_1_1_2_2_fu_2175_p1() {
    tmp_1_1_2_2_fu_2175_p1 = esl_sext<16,8>(a_3_q1.read());
}

void matrix_conv::thread_tmp_1_2_2_2_fu_2648_p1() {
    tmp_1_2_2_2_fu_2648_p1 = esl_sext<16,8>(a_3_q0.read());
}

void matrix_conv::thread_tmp_1_3_2_2_fu_2667_p1() {
    tmp_1_3_2_2_fu_2667_p1 = esl_sext<16,8>(a_3_q1.read());
}

void matrix_conv::thread_tmp_1_4_2_2_fu_3156_p1() {
    tmp_1_4_2_2_fu_3156_p1 = esl_sext<16,8>(a_3_q0.read());
}

void matrix_conv::thread_tmp_1_5_2_2_fu_3175_p1() {
    tmp_1_5_2_2_fu_3175_p1 = esl_sext<16,8>(a_3_q1.read());
}

void matrix_conv::thread_tmp_1_6_2_2_fu_3785_p1() {
    tmp_1_6_2_2_fu_3785_p1 = esl_sext<16,8>(a_3_q0.read());
}

void matrix_conv::thread_tmp_1_7_2_2_fu_3804_p1() {
    tmp_1_7_2_2_fu_3804_p1 = esl_sext<16,8>(a_3_q1.read());
}

void matrix_conv::thread_tmp_2_0_2_1_fu_1944_p1() {
    tmp_2_0_2_1_fu_1944_p1 = esl_sext<16,8>(a_4_q1.read());
}

void matrix_conv::thread_tmp_2_0_2_2_fu_2205_p1() {
    tmp_2_0_2_2_fu_2205_p1 = esl_sext<16,8>(a_4_q0.read());
}

void matrix_conv::thread_tmp_2_0_2_fu_1940_p1() {
    tmp_2_0_2_fu_1940_p1 = esl_sext<16,8>(a_4_q0.read());
}

void matrix_conv::thread_tmp_2_1_2_2_fu_2225_p1() {
    tmp_2_1_2_2_fu_2225_p1 = esl_sext<16,8>(a_4_q1.read());
}

void matrix_conv::thread_tmp_2_2_2_2_fu_2696_p1() {
    tmp_2_2_2_2_fu_2696_p1 = esl_sext<16,8>(a_4_q0.read());
}

void matrix_conv::thread_tmp_2_3_2_2_fu_2715_p1() {
    tmp_2_3_2_2_fu_2715_p1 = esl_sext<16,8>(a_4_q1.read());
}

void matrix_conv::thread_tmp_2_4_2_2_fu_3242_p1() {
    tmp_2_4_2_2_fu_3242_p1 = esl_sext<16,8>(a_4_q0.read());
}

void matrix_conv::thread_tmp_2_5_2_2_fu_3261_p1() {
    tmp_2_5_2_2_fu_3261_p1 = esl_sext<16,8>(a_4_q1.read());
}

void matrix_conv::thread_tmp_2_6_2_2_fu_3841_p1() {
    tmp_2_6_2_2_fu_3841_p1 = esl_sext<16,8>(a_4_q0.read());
}

void matrix_conv::thread_tmp_2_7_2_2_fu_3860_p1() {
    tmp_2_7_2_2_fu_3860_p1 = esl_sext<16,8>(a_4_q1.read());
}

void matrix_conv::thread_tmp_3_0_0_0_1_fu_2568_p1() {
    tmp_3_0_0_0_1_fu_2568_p1 = esl_sext<16,8>(b_0_q0.read());
}

void matrix_conv::thread_tmp_3_0_0_0_2_fu_2076_p1() {
    tmp_3_0_0_0_2_fu_2076_p1 = esl_sext<16,8>(b_0_load_2_reg_6583.read());
}

void matrix_conv::thread_tmp_3_0_0_1_1_fu_1862_p1() {
    tmp_3_0_0_1_1_fu_1862_p1 = esl_sext<16,8>(b_1_q0.read());
}

void matrix_conv::thread_tmp_3_0_0_1_2_fu_2089_p1() {
    tmp_3_0_0_1_2_fu_2089_p1 = esl_sext<16,8>(b_1_q1.read());
}

void matrix_conv::thread_tmp_3_0_0_1_fu_2572_p1() {
    tmp_3_0_0_1_fu_2572_p1 = esl_sext<16,8>(b_1_load_reg_7082.read());
}

void matrix_conv::thread_tmp_3_0_0_2_1_fu_1880_p1() {
    tmp_3_0_0_2_1_fu_1880_p1 = esl_sext<16,8>(b_2_q0.read());
}

void matrix_conv::thread_tmp_3_0_0_2_2_fu_2097_p1() {
    tmp_3_0_0_2_2_fu_2097_p1 = esl_sext<16,8>(reg_1827.read());
}

void matrix_conv::thread_tmp_3_0_0_2_fu_2575_p1() {
    tmp_3_0_0_2_fu_2575_p1 = esl_sext<16,8>(b_2_q0.read());
}

void matrix_conv::thread_tmp_3_0_2_1_fu_1976_p1() {
    tmp_3_0_2_1_fu_1976_p1 = esl_sext<16,8>(a_5_q1.read());
}

void matrix_conv::thread_tmp_3_0_2_2_fu_2255_p1() {
    tmp_3_0_2_2_fu_2255_p1 = esl_sext<16,8>(a_5_q0.read());
}

void matrix_conv::thread_tmp_3_0_2_fu_1972_p1() {
    tmp_3_0_2_fu_1972_p1 = esl_sext<16,8>(a_5_q0.read());
}

void matrix_conv::thread_tmp_3_1_2_2_fu_2275_p1() {
    tmp_3_1_2_2_fu_2275_p1 = esl_sext<16,8>(a_5_q1.read());
}

void matrix_conv::thread_tmp_3_2_2_2_fu_2744_p1() {
    tmp_3_2_2_2_fu_2744_p1 = esl_sext<16,8>(a_5_q0.read());
}

void matrix_conv::thread_tmp_3_3_2_2_fu_2763_p1() {
    tmp_3_3_2_2_fu_2763_p1 = esl_sext<16,8>(a_5_q1.read());
}

void matrix_conv::thread_tmp_3_4_2_2_fu_3328_p1() {
    tmp_3_4_2_2_fu_3328_p1 = esl_sext<16,8>(a_5_q0.read());
}

void matrix_conv::thread_tmp_3_5_1_0_1_fu_2835_p1() {
    tmp_3_5_1_0_1_fu_2835_p1 = esl_sext<16,8>(b_0_q1.read());
}

void matrix_conv::thread_tmp_3_5_1_0_2_fu_2374_p1() {
    tmp_3_5_1_0_2_fu_2374_p1 = esl_sext<16,8>(b_0_q1.read());
}

void matrix_conv::thread_tmp_3_5_1_1_1_fu_2042_p1() {
    tmp_3_5_1_1_1_fu_2042_p1 = esl_sext<16,8>(b_1_q1.read());
}

void matrix_conv::thread_tmp_3_5_1_1_2_fu_2843_p1() {
    tmp_3_5_1_1_2_fu_2843_p1 = esl_sext<16,8>(b_1_q1.read());
}

void matrix_conv::thread_tmp_3_5_1_1_fu_2839_p1() {
    tmp_3_5_1_1_fu_2839_p1 = esl_sext<16,8>(b_1_q0.read());
}

void matrix_conv::thread_tmp_3_5_1_fu_2365_p1() {
    tmp_3_5_1_fu_2365_p1 = esl_sext<16,8>(b_0_q0.read());
}

void matrix_conv::thread_tmp_3_5_2_2_1_fu_2409_p1() {
    tmp_3_5_2_2_1_fu_2409_p1 = esl_sext<16,8>(b_2_q0.read());
}

void matrix_conv::thread_tmp_3_5_2_2_2_3_fu_2860_p1() {
    tmp_3_5_2_2_2_3_fu_2860_p1 = esl_sext<16,8>(reg_1827.read());
}

void matrix_conv::thread_tmp_3_5_2_2_2_fu_2852_p1() {
    tmp_3_5_2_2_2_fu_2852_p1 = esl_sext<16,8>(b_2_q1.read());
}

void matrix_conv::thread_tmp_3_5_2_2_fu_3347_p1() {
    tmp_3_5_2_2_fu_3347_p1 = esl_sext<16,8>(a_5_q1.read());
}

void matrix_conv::thread_tmp_3_6_2_2_fu_3897_p1() {
    tmp_3_6_2_2_fu_3897_p1 = esl_sext<16,8>(a_5_q0.read());
}

void matrix_conv::thread_tmp_3_7_2_2_fu_3916_p1() {
    tmp_3_7_2_2_fu_3916_p1 = esl_sext<16,8>(a_5_q1.read());
}

void matrix_conv::thread_tmp_3_fu_1840_p1() {
    tmp_3_fu_1840_p1 = esl_sext<16,8>(b_0_q0.read());
}

void matrix_conv::thread_tmp_4_0_2_1_fu_2004_p1() {
    tmp_4_0_2_1_fu_2004_p1 = esl_sext<16,8>(a_6_q1.read());
}

void matrix_conv::thread_tmp_4_0_2_2_fu_2308_p1() {
    tmp_4_0_2_2_fu_2308_p1 = esl_sext<16,8>(a_6_q0.read());
}

void matrix_conv::thread_tmp_4_0_2_fu_2305_p1() {
    tmp_4_0_2_fu_2305_p1 = esl_sext<16,8>(a_6_load_reg_6881.read());
}

void matrix_conv::thread_tmp_4_1_2_2_fu_2328_p1() {
    tmp_4_1_2_2_fu_2328_p1 = esl_sext<16,8>(a_6_q1.read());
}

void matrix_conv::thread_tmp_4_2_2_2_fu_2792_p1() {
    tmp_4_2_2_2_fu_2792_p1 = esl_sext<16,8>(a_6_q0.read());
}

void matrix_conv::thread_tmp_4_3_2_2_fu_2811_p1() {
    tmp_4_3_2_2_fu_2811_p1 = esl_sext<16,8>(a_6_q1.read());
}

void matrix_conv::thread_tmp_4_4_2_2_fu_3414_p1() {
    tmp_4_4_2_2_fu_3414_p1 = esl_sext<16,8>(a_6_q0.read());
}

void matrix_conv::thread_tmp_4_5_2_2_fu_3433_p1() {
    tmp_4_5_2_2_fu_3433_p1 = esl_sext<16,8>(a_6_q1.read());
}

void matrix_conv::thread_tmp_4_6_2_2_fu_3953_p1() {
    tmp_4_6_2_2_fu_3953_p1 = esl_sext<16,8>(a_6_q0.read());
}

void matrix_conv::thread_tmp_4_7_2_2_fu_3972_p1() {
    tmp_4_7_2_2_fu_3972_p1 = esl_sext<16,8>(a_6_q1.read());
}

void matrix_conv::thread_tmp_5_0_2_1_fu_2032_p1() {
    tmp_5_0_2_1_fu_2032_p1 = esl_sext<16,8>(a_7_q1.read());
}

void matrix_conv::thread_tmp_5_0_2_2_fu_2361_p1() {
    tmp_5_0_2_2_fu_2361_p1 = esl_sext<16,8>(a_7_q0.read());
}

void matrix_conv::thread_tmp_5_0_2_fu_2358_p1() {
    tmp_5_0_2_fu_2358_p1 = esl_sext<16,8>(a_7_load_reg_6924.read());
}

void matrix_conv::thread_tmp_5_1_2_2_fu_2394_p1() {
    tmp_5_1_2_2_fu_2394_p1 = esl_sext<16,8>(a_7_q1.read());
}

void matrix_conv::thread_tmp_5_2_2_2_fu_2856_p1() {
    tmp_5_2_2_2_fu_2856_p1 = esl_sext<16,8>(a_7_q0.read());
}

void matrix_conv::thread_tmp_5_3_2_2_fu_2879_p1() {
    tmp_5_3_2_2_fu_2879_p1 = esl_sext<16,8>(a_7_q1.read());
}

void matrix_conv::thread_tmp_5_4_2_2_fu_3500_p1() {
    tmp_5_4_2_2_fu_3500_p1 = esl_sext<16,8>(a_7_q0.read());
}

void matrix_conv::thread_tmp_5_5_2_2_fu_3519_p1() {
    tmp_5_5_2_2_fu_3519_p1 = esl_sext<16,8>(a_7_q1.read());
}

void matrix_conv::thread_tmp_5_6_2_2_fu_4009_p1() {
    tmp_5_6_2_2_fu_4009_p1 = esl_sext<16,8>(a_7_q0.read());
}

void matrix_conv::thread_tmp_5_7_2_2_fu_4028_p1() {
    tmp_5_7_2_2_fu_4028_p1 = esl_sext<16,8>(a_7_q1.read());
}

void matrix_conv::thread_tmp_6_0_2_1_fu_2052_p1() {
    tmp_6_0_2_1_fu_2052_p1 = esl_sext<16,8>(a_8_q0.read());
}

void matrix_conv::thread_tmp_6_0_2_2_fu_2056_p1() {
    tmp_6_0_2_2_fu_2056_p1 = esl_sext<16,8>(a_8_q1.read());
}

void matrix_conv::thread_tmp_6_0_2_fu_4032_p1() {
    tmp_6_0_2_fu_4032_p1 = esl_sext<16,8>(a_8_q0.read());
}

void matrix_conv::thread_tmp_6_1_2_2_fu_2463_p1() {
    tmp_6_1_2_2_fu_2463_p1 = esl_sext<16,8>(a_8_q0.read());
}

void matrix_conv::thread_tmp_6_2_2_2_fu_2484_p1() {
    tmp_6_2_2_2_fu_2484_p1 = esl_sext<16,8>(a_8_q1.read());
}

void matrix_conv::thread_tmp_6_3_2_2_fu_2918_p1() {
    tmp_6_3_2_2_fu_2918_p1 = esl_sext<16,8>(a_8_q0.read());
}

void matrix_conv::thread_tmp_6_4_2_2_fu_2937_p1() {
    tmp_6_4_2_2_fu_2937_p1 = esl_sext<16,8>(a_8_q1.read());
}

void matrix_conv::thread_tmp_6_5_2_2_fu_3591_p1() {
    tmp_6_5_2_2_fu_3591_p1 = esl_sext<16,8>(a_8_q0.read());
}

void matrix_conv::thread_tmp_6_6_2_2_fu_3610_p1() {
    tmp_6_6_2_2_fu_3610_p1 = esl_sext<16,8>(a_8_q1.read());
}

void matrix_conv::thread_tmp_6_7_2_2_fu_4079_p1() {
    tmp_6_7_2_2_fu_4079_p1 = esl_sext<16,8>(a_8_q1.read());
}

void matrix_conv::thread_tmp_7_0_0_0_2_fu_2079_p0() {
    tmp_7_0_0_0_2_fu_2079_p0 =  (sc_lv<8>) (tmp_0_0_0_2_fu_2072_p1.read());
}

void matrix_conv::thread_tmp_7_0_0_0_2_fu_2079_p1() {
    tmp_7_0_0_0_2_fu_2079_p1 =  (sc_lv<8>) (tmp_3_0_0_0_2_fu_2076_p1.read());
}

void matrix_conv::thread_tmp_7_0_0_0_2_fu_2079_p2() {
    tmp_7_0_0_0_2_fu_2079_p2 = (!tmp_7_0_0_0_2_fu_2079_p0.read().is_01() || !tmp_7_0_0_0_2_fu_2079_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_0_0_0_2_fu_2079_p0.read()) * sc_bigint<8>(tmp_7_0_0_0_2_fu_2079_p1.read());
}

void matrix_conv::thread_tmp_7_0_0_1_1_fu_1866_p0() {
    tmp_7_0_0_1_1_fu_1866_p0 =  (sc_lv<8>) (tmp_0_0_1_1_fu_1858_p1.read());
}

void matrix_conv::thread_tmp_7_0_0_1_1_fu_1866_p1() {
    tmp_7_0_0_1_1_fu_1866_p1 =  (sc_lv<8>) (tmp_3_0_0_1_1_fu_1862_p1.read());
}

void matrix_conv::thread_tmp_7_0_0_1_1_fu_1866_p2() {
    tmp_7_0_0_1_1_fu_1866_p2 = (!tmp_7_0_0_1_1_fu_1866_p0.read().is_01() || !tmp_7_0_0_1_1_fu_1866_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_0_0_1_1_fu_1866_p0.read()) * sc_bigint<8>(tmp_7_0_0_1_1_fu_1866_p1.read());
}

void matrix_conv::thread_tmp_7_0_0_2_1_fu_1884_p0() {
    tmp_7_0_0_2_1_fu_1884_p0 =  (sc_lv<8>) (tmp_0_0_2_1_fu_1876_p1.read());
}

void matrix_conv::thread_tmp_7_0_0_2_1_fu_1884_p1() {
    tmp_7_0_0_2_1_fu_1884_p1 =  (sc_lv<8>) (tmp_3_0_0_2_1_fu_1880_p1.read());
}

void matrix_conv::thread_tmp_7_0_0_2_1_fu_1884_p2() {
    tmp_7_0_0_2_1_fu_1884_p2 = (!tmp_7_0_0_2_1_fu_1884_p0.read().is_01() || !tmp_7_0_0_2_1_fu_1884_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_0_0_2_1_fu_1884_p0.read()) * sc_bigint<8>(tmp_7_0_0_2_1_fu_1884_p1.read());
}

void matrix_conv::thread_tmp_7_0_1_0_2_fu_2105_p0() {
    tmp_7_0_1_0_2_fu_2105_p0 =  (sc_lv<8>) (tmp_0_1_0_2_fu_2101_p1.read());
}

void matrix_conv::thread_tmp_7_0_1_0_2_fu_2105_p1() {
    tmp_7_0_1_0_2_fu_2105_p1 =  (sc_lv<8>) (tmp_3_0_0_0_2_fu_2076_p1.read());
}

void matrix_conv::thread_tmp_7_0_1_0_2_fu_2105_p2() {
    tmp_7_0_1_0_2_fu_2105_p2 = (!tmp_7_0_1_0_2_fu_2105_p0.read().is_01() || !tmp_7_0_1_0_2_fu_2105_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_0_1_0_2_fu_2105_p0.read()) * sc_bigint<8>(tmp_7_0_1_0_2_fu_2105_p1.read());
}

void matrix_conv::thread_tmp_7_0_1_1_1_fu_2111_p0() {
    tmp_7_0_1_1_1_fu_2111_p0 =  (sc_lv<8>) (tmp_0_0_1_2_fu_2085_p1.read());
}

void matrix_conv::thread_tmp_7_0_1_1_1_fu_2111_p1() {
    tmp_7_0_1_1_1_fu_2111_p1 =  (sc_lv<8>) (tmp_3_0_0_1_1_reg_6604.read());
}

void matrix_conv::thread_tmp_7_0_1_1_1_fu_2111_p2() {
    tmp_7_0_1_1_1_fu_2111_p2 = (!tmp_7_0_1_1_1_fu_2111_p0.read().is_01() || !tmp_7_0_1_1_1_fu_2111_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_0_1_1_1_fu_2111_p0.read()) * sc_bigint<8>(tmp_7_0_1_1_1_fu_2111_p1.read());
}

void matrix_conv::thread_tmp_7_0_1_2_1_fu_2120_p0() {
    tmp_7_0_1_2_1_fu_2120_p0 =  (sc_lv<8>) (tmp_0_0_2_2_fu_2093_p1.read());
}

void matrix_conv::thread_tmp_7_0_1_2_1_fu_2120_p1() {
    tmp_7_0_1_2_1_fu_2120_p1 =  (sc_lv<8>) (tmp_3_0_0_2_1_reg_6671.read());
}

void matrix_conv::thread_tmp_7_0_1_2_1_fu_2120_p2() {
    tmp_7_0_1_2_1_fu_2120_p2 = (!tmp_7_0_1_2_1_fu_2120_p0.read().is_01() || !tmp_7_0_1_2_1_fu_2120_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_0_1_2_1_fu_2120_p0.read()) * sc_bigint<8>(tmp_7_0_1_2_1_fu_2120_p1.read());
}

void matrix_conv::thread_tmp_7_0_1_fu_1890_p0() {
    tmp_7_0_1_fu_1890_p0 = a_0_q1.read();
}

void matrix_conv::thread_tmp_7_0_1_fu_1890_p1() {
    tmp_7_0_1_fu_1890_p1 =  (sc_lv<8>) (tmp_3_fu_1840_p1.read());
}

void matrix_conv::thread_tmp_7_0_1_fu_1890_p2() {
    tmp_7_0_1_fu_1890_p2 = (!tmp_7_0_1_fu_1890_p0.read().is_01() || !tmp_7_0_1_fu_1890_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_0_1_fu_1890_p0.read()) * sc_bigint<8>(tmp_7_0_1_fu_1890_p1.read());
}

void matrix_conv::thread_tmp_7_0_2_0_2_fu_2583_p0() {
    tmp_7_0_2_0_2_fu_2583_p0 =  (sc_lv<8>) (tmp_0_2_0_2_fu_2579_p1.read());
}

void matrix_conv::thread_tmp_7_0_2_0_2_fu_2583_p1() {
    tmp_7_0_2_0_2_fu_2583_p1 =  (sc_lv<8>) (tmp_3_0_0_0_2_reg_7043.read());
}

void matrix_conv::thread_tmp_7_0_2_0_2_fu_2583_p2() {
    tmp_7_0_2_0_2_fu_2583_p2 = (!tmp_7_0_2_0_2_fu_2583_p0.read().is_01() || !tmp_7_0_2_0_2_fu_2583_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_0_2_0_2_fu_2583_p0.read()) * sc_bigint<8>(tmp_7_0_2_0_2_fu_2583_p1.read());
}

void matrix_conv::thread_tmp_7_0_2_1_1_fu_2134_p0() {
    tmp_7_0_2_1_1_fu_2134_p0 =  (sc_lv<8>) (tmp_0_1_1_2_fu_2116_p1.read());
}

void matrix_conv::thread_tmp_7_0_2_1_1_fu_2134_p1() {
    tmp_7_0_2_1_1_fu_2134_p1 =  (sc_lv<8>) (tmp_3_0_0_1_1_reg_6604.read());
}

void matrix_conv::thread_tmp_7_0_2_1_1_fu_2134_p2() {
    tmp_7_0_2_1_1_fu_2134_p2 = (!tmp_7_0_2_1_1_fu_2134_p0.read().is_01() || !tmp_7_0_2_1_1_fu_2134_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_0_2_1_1_fu_2134_p0.read()) * sc_bigint<8>(tmp_7_0_2_1_1_fu_2134_p1.read());
}

void matrix_conv::thread_tmp_7_0_2_1_5_fu_2512_p1() {
    tmp_7_0_2_1_5_fu_2512_p1 = esl_sext<16,8>(reg_1831.read());
}

void matrix_conv::thread_tmp_7_0_2_2_1_fu_2139_p0() {
    tmp_7_0_2_2_1_fu_2139_p0 =  (sc_lv<8>) (tmp_0_1_2_2_fu_2125_p1.read());
}

void matrix_conv::thread_tmp_7_0_2_2_1_fu_2139_p1() {
    tmp_7_0_2_2_1_fu_2139_p1 =  (sc_lv<8>) (tmp_3_0_0_2_1_reg_6671.read());
}

void matrix_conv::thread_tmp_7_0_2_2_1_fu_2139_p2() {
    tmp_7_0_2_2_1_fu_2139_p2 = (!tmp_7_0_2_2_1_fu_2139_p0.read().is_01() || !tmp_7_0_2_2_1_fu_2139_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_0_2_2_1_fu_2139_p0.read()) * sc_bigint<8>(tmp_7_0_2_2_1_fu_2139_p1.read());
}

void matrix_conv::thread_tmp_7_0_2_2_6_fu_2522_p1() {
    tmp_7_0_2_2_6_fu_2522_p1 = esl_sext<16,8>(a_9_load_2_reg_7012.read());
}

void matrix_conv::thread_tmp_7_0_2_fu_2129_p0() {
    tmp_7_0_2_fu_2129_p0 =  (sc_lv<8>) (tmp_0_0_0_2_fu_2072_p1.read());
}

void matrix_conv::thread_tmp_7_0_2_fu_2129_p1() {
    tmp_7_0_2_fu_2129_p1 =  (sc_lv<8>) (tmp_3_reg_6534.read());
}

void matrix_conv::thread_tmp_7_0_2_fu_2129_p2() {
    tmp_7_0_2_fu_2129_p2 = (!tmp_7_0_2_fu_2129_p0.read().is_01() || !tmp_7_0_2_fu_2129_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_0_2_fu_2129_p0.read()) * sc_bigint<8>(tmp_7_0_2_fu_2129_p1.read());
}

void matrix_conv::thread_tmp_7_0_3_0_2_fu_2600_p0() {
    tmp_7_0_3_0_2_fu_2600_p0 =  (sc_lv<8>) (tmp_0_3_0_2_fu_2596_p1.read());
}

void matrix_conv::thread_tmp_7_0_3_0_2_fu_2600_p1() {
    tmp_7_0_3_0_2_fu_2600_p1 =  (sc_lv<8>) (tmp_3_0_0_0_2_reg_7043.read());
}

void matrix_conv::thread_tmp_7_0_3_0_2_fu_2600_p2() {
    tmp_7_0_3_0_2_fu_2600_p2 = (!tmp_7_0_3_0_2_fu_2600_p0.read().is_01() || !tmp_7_0_3_0_2_fu_2600_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_0_3_0_2_fu_2600_p0.read()) * sc_bigint<8>(tmp_7_0_3_0_2_fu_2600_p1.read());
}

void matrix_conv::thread_tmp_7_0_3_1_1_fu_2605_p0() {
    tmp_7_0_3_1_1_fu_2605_p0 =  (sc_lv<8>) (tmp_0_2_1_2_fu_2588_p1.read());
}

void matrix_conv::thread_tmp_7_0_3_1_1_fu_2605_p1() {
    tmp_7_0_3_1_1_fu_2605_p1 =  (sc_lv<8>) (tmp_3_0_0_1_1_reg_6604.read());
}

void matrix_conv::thread_tmp_7_0_3_1_1_fu_2605_p2() {
    tmp_7_0_3_1_1_fu_2605_p2 = (!tmp_7_0_3_1_1_fu_2605_p0.read().is_01() || !tmp_7_0_3_1_1_fu_2605_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_0_3_1_1_fu_2605_p0.read()) * sc_bigint<8>(tmp_7_0_3_1_1_fu_2605_p1.read());
}

void matrix_conv::thread_tmp_7_0_3_2_1_fu_2614_p0() {
    tmp_7_0_3_2_1_fu_2614_p0 =  (sc_lv<8>) (tmp_0_2_2_2_fu_2592_p1.read());
}

void matrix_conv::thread_tmp_7_0_3_2_1_fu_2614_p1() {
    tmp_7_0_3_2_1_fu_2614_p1 =  (sc_lv<8>) (tmp_3_0_0_2_1_reg_6671.read());
}

void matrix_conv::thread_tmp_7_0_3_2_1_fu_2614_p2() {
    tmp_7_0_3_2_1_fu_2614_p2 = (!tmp_7_0_3_2_1_fu_2614_p0.read().is_01() || !tmp_7_0_3_2_1_fu_2614_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_0_3_2_1_fu_2614_p0.read()) * sc_bigint<8>(tmp_7_0_3_2_1_fu_2614_p1.read());
}

void matrix_conv::thread_tmp_7_0_3_fu_2144_p0() {
    tmp_7_0_3_fu_2144_p0 =  (sc_lv<8>) (tmp_0_1_0_2_fu_2101_p1.read());
}

void matrix_conv::thread_tmp_7_0_3_fu_2144_p1() {
    tmp_7_0_3_fu_2144_p1 =  (sc_lv<8>) (tmp_3_reg_6534.read());
}

void matrix_conv::thread_tmp_7_0_3_fu_2144_p2() {
    tmp_7_0_3_fu_2144_p2 = (!tmp_7_0_3_fu_2144_p0.read().is_01() || !tmp_7_0_3_fu_2144_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_0_3_fu_2144_p0.read()) * sc_bigint<8>(tmp_7_0_3_fu_2144_p1.read());
}

void matrix_conv::thread_tmp_7_0_4_0_2_fu_3053_p0() {
    tmp_7_0_4_0_2_fu_3053_p0 =  (sc_lv<8>) (tmp_0_4_0_2_fu_3049_p1.read());
}

void matrix_conv::thread_tmp_7_0_4_0_2_fu_3053_p1() {
    tmp_7_0_4_0_2_fu_3053_p1 =  (sc_lv<8>) (tmp_3_0_0_0_2_reg_7043.read());
}

void matrix_conv::thread_tmp_7_0_4_0_2_fu_3053_p2() {
    tmp_7_0_4_0_2_fu_3053_p2 = (!tmp_7_0_4_0_2_fu_3053_p0.read().is_01() || !tmp_7_0_4_0_2_fu_3053_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_0_4_0_2_fu_3053_p0.read()) * sc_bigint<8>(tmp_7_0_4_0_2_fu_3053_p1.read());
}

void matrix_conv::thread_tmp_7_0_4_1_1_fu_2628_p0() {
    tmp_7_0_4_1_1_fu_2628_p0 =  (sc_lv<8>) (tmp_0_3_1_2_fu_2610_p1.read());
}

void matrix_conv::thread_tmp_7_0_4_1_1_fu_2628_p1() {
    tmp_7_0_4_1_1_fu_2628_p1 =  (sc_lv<8>) (tmp_3_0_0_1_1_reg_6604.read());
}

void matrix_conv::thread_tmp_7_0_4_1_1_fu_2628_p2() {
    tmp_7_0_4_1_1_fu_2628_p2 = (!tmp_7_0_4_1_1_fu_2628_p0.read().is_01() || !tmp_7_0_4_1_1_fu_2628_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_0_4_1_1_fu_2628_p0.read()) * sc_bigint<8>(tmp_7_0_4_1_1_fu_2628_p1.read());
}

void matrix_conv::thread_tmp_7_0_4_2_1_fu_2633_p0() {
    tmp_7_0_4_2_1_fu_2633_p0 =  (sc_lv<8>) (tmp_0_3_2_2_fu_2619_p1.read());
}

void matrix_conv::thread_tmp_7_0_4_2_1_fu_2633_p1() {
    tmp_7_0_4_2_1_fu_2633_p1 =  (sc_lv<8>) (tmp_3_0_0_2_1_reg_6671.read());
}

void matrix_conv::thread_tmp_7_0_4_2_1_fu_2633_p2() {
    tmp_7_0_4_2_1_fu_2633_p2 = (!tmp_7_0_4_2_1_fu_2633_p0.read().is_01() || !tmp_7_0_4_2_1_fu_2633_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_0_4_2_1_fu_2633_p0.read()) * sc_bigint<8>(tmp_7_0_4_2_1_fu_2633_p1.read());
}

void matrix_conv::thread_tmp_7_0_4_fu_2623_p0() {
    tmp_7_0_4_fu_2623_p0 =  (sc_lv<8>) (tmp_0_2_0_2_fu_2579_p1.read());
}

void matrix_conv::thread_tmp_7_0_4_fu_2623_p1() {
    tmp_7_0_4_fu_2623_p1 =  (sc_lv<8>) (tmp_3_reg_6534.read());
}

void matrix_conv::thread_tmp_7_0_4_fu_2623_p2() {
    tmp_7_0_4_fu_2623_p2 = (!tmp_7_0_4_fu_2623_p0.read().is_01() || !tmp_7_0_4_fu_2623_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_0_4_fu_2623_p0.read()) * sc_bigint<8>(tmp_7_0_4_fu_2623_p1.read());
}

void matrix_conv::thread_tmp_7_0_5_0_2_fu_3070_p0() {
    tmp_7_0_5_0_2_fu_3070_p0 =  (sc_lv<8>) (tmp_0_5_0_2_fu_3066_p1.read());
}

void matrix_conv::thread_tmp_7_0_5_0_2_fu_3070_p1() {
    tmp_7_0_5_0_2_fu_3070_p1 =  (sc_lv<8>) (tmp_3_0_0_0_2_reg_7043.read());
}

void matrix_conv::thread_tmp_7_0_5_0_2_fu_3070_p2() {
    tmp_7_0_5_0_2_fu_3070_p2 = (!tmp_7_0_5_0_2_fu_3070_p0.read().is_01() || !tmp_7_0_5_0_2_fu_3070_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_0_5_0_2_fu_3070_p0.read()) * sc_bigint<8>(tmp_7_0_5_0_2_fu_3070_p1.read());
}

void matrix_conv::thread_tmp_7_0_5_1_1_fu_3075_p0() {
    tmp_7_0_5_1_1_fu_3075_p0 =  (sc_lv<8>) (tmp_0_4_1_2_fu_3058_p1.read());
}

void matrix_conv::thread_tmp_7_0_5_1_1_fu_3075_p1() {
    tmp_7_0_5_1_1_fu_3075_p1 =  (sc_lv<8>) (tmp_3_0_0_1_1_reg_6604.read());
}

void matrix_conv::thread_tmp_7_0_5_1_1_fu_3075_p2() {
    tmp_7_0_5_1_1_fu_3075_p2 = (!tmp_7_0_5_1_1_fu_3075_p0.read().is_01() || !tmp_7_0_5_1_1_fu_3075_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_0_5_1_1_fu_3075_p0.read()) * sc_bigint<8>(tmp_7_0_5_1_1_fu_3075_p1.read());
}

void matrix_conv::thread_tmp_7_0_5_2_1_fu_3084_p0() {
    tmp_7_0_5_2_1_fu_3084_p0 =  (sc_lv<8>) (tmp_0_4_2_2_fu_3062_p1.read());
}

void matrix_conv::thread_tmp_7_0_5_2_1_fu_3084_p1() {
    tmp_7_0_5_2_1_fu_3084_p1 =  (sc_lv<8>) (tmp_3_0_0_2_1_reg_6671.read());
}

void matrix_conv::thread_tmp_7_0_5_2_1_fu_3084_p2() {
    tmp_7_0_5_2_1_fu_3084_p2 = (!tmp_7_0_5_2_1_fu_3084_p0.read().is_01() || !tmp_7_0_5_2_1_fu_3084_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_0_5_2_1_fu_3084_p0.read()) * sc_bigint<8>(tmp_7_0_5_2_1_fu_3084_p1.read());
}

void matrix_conv::thread_tmp_7_0_5_fu_2638_p0() {
    tmp_7_0_5_fu_2638_p0 =  (sc_lv<8>) (tmp_0_3_0_2_fu_2596_p1.read());
}

void matrix_conv::thread_tmp_7_0_5_fu_2638_p1() {
    tmp_7_0_5_fu_2638_p1 =  (sc_lv<8>) (tmp_3_reg_6534.read());
}

void matrix_conv::thread_tmp_7_0_5_fu_2638_p2() {
    tmp_7_0_5_fu_2638_p2 = (!tmp_7_0_5_fu_2638_p0.read().is_01() || !tmp_7_0_5_fu_2638_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_0_5_fu_2638_p0.read()) * sc_bigint<8>(tmp_7_0_5_fu_2638_p1.read());
}

void matrix_conv::thread_tmp_7_0_6_0_2_fu_3712_p0() {
    tmp_7_0_6_0_2_fu_3712_p0 =  (sc_lv<8>) (tmp_0_6_0_2_fu_3708_p1.read());
}

void matrix_conv::thread_tmp_7_0_6_0_2_fu_3712_p1() {
    tmp_7_0_6_0_2_fu_3712_p1 =  (sc_lv<8>) (tmp_3_0_0_0_2_reg_7043.read());
}

void matrix_conv::thread_tmp_7_0_6_0_2_fu_3712_p2() {
    tmp_7_0_6_0_2_fu_3712_p2 = (!tmp_7_0_6_0_2_fu_3712_p0.read().is_01() || !tmp_7_0_6_0_2_fu_3712_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_0_6_0_2_fu_3712_p0.read()) * sc_bigint<8>(tmp_7_0_6_0_2_fu_3712_p1.read());
}

void matrix_conv::thread_tmp_7_0_6_1_1_fu_3098_p0() {
    tmp_7_0_6_1_1_fu_3098_p0 =  (sc_lv<8>) (tmp_0_5_1_2_fu_3080_p1.read());
}

void matrix_conv::thread_tmp_7_0_6_1_1_fu_3098_p1() {
    tmp_7_0_6_1_1_fu_3098_p1 =  (sc_lv<8>) (tmp_3_0_0_1_1_reg_6604.read());
}

void matrix_conv::thread_tmp_7_0_6_1_1_fu_3098_p2() {
    tmp_7_0_6_1_1_fu_3098_p2 = (!tmp_7_0_6_1_1_fu_3098_p0.read().is_01() || !tmp_7_0_6_1_1_fu_3098_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_0_6_1_1_fu_3098_p0.read()) * sc_bigint<8>(tmp_7_0_6_1_1_fu_3098_p1.read());
}

void matrix_conv::thread_tmp_7_0_6_2_1_fu_3103_p0() {
    tmp_7_0_6_2_1_fu_3103_p0 =  (sc_lv<8>) (tmp_0_5_2_2_fu_3089_p1.read());
}

void matrix_conv::thread_tmp_7_0_6_2_1_fu_3103_p1() {
    tmp_7_0_6_2_1_fu_3103_p1 =  (sc_lv<8>) (tmp_3_0_0_2_1_reg_6671.read());
}

void matrix_conv::thread_tmp_7_0_6_2_1_fu_3103_p2() {
    tmp_7_0_6_2_1_fu_3103_p2 = (!tmp_7_0_6_2_1_fu_3103_p0.read().is_01() || !tmp_7_0_6_2_1_fu_3103_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_0_6_2_1_fu_3103_p0.read()) * sc_bigint<8>(tmp_7_0_6_2_1_fu_3103_p1.read());
}

void matrix_conv::thread_tmp_7_0_6_fu_3093_p0() {
    tmp_7_0_6_fu_3093_p0 =  (sc_lv<8>) (tmp_0_4_0_2_fu_3049_p1.read());
}

void matrix_conv::thread_tmp_7_0_6_fu_3093_p1() {
    tmp_7_0_6_fu_3093_p1 =  (sc_lv<8>) (tmp_3_reg_6534.read());
}

void matrix_conv::thread_tmp_7_0_6_fu_3093_p2() {
    tmp_7_0_6_fu_3093_p2 = (!tmp_7_0_6_fu_3093_p0.read().is_01() || !tmp_7_0_6_fu_3093_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_0_6_fu_3093_p0.read()) * sc_bigint<8>(tmp_7_0_6_fu_3093_p1.read());
}

void matrix_conv::thread_tmp_7_0_7_0_2_fu_3729_p0() {
    tmp_7_0_7_0_2_fu_3729_p0 = a_0_q1.read();
}

void matrix_conv::thread_tmp_7_0_7_0_2_fu_3729_p1() {
    tmp_7_0_7_0_2_fu_3729_p1 =  (sc_lv<8>) (tmp_3_0_0_0_2_reg_7043.read());
}

void matrix_conv::thread_tmp_7_0_7_0_2_fu_3729_p2() {
    tmp_7_0_7_0_2_fu_3729_p2 = (!tmp_7_0_7_0_2_fu_3729_p0.read().is_01() || !tmp_7_0_7_0_2_fu_3729_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_0_7_0_2_fu_3729_p0.read()) * sc_bigint<8>(tmp_7_0_7_0_2_fu_3729_p1.read());
}

void matrix_conv::thread_tmp_7_0_7_1_1_fu_3734_p0() {
    tmp_7_0_7_1_1_fu_3734_p0 =  (sc_lv<8>) (tmp_0_6_1_2_fu_3717_p1.read());
}

void matrix_conv::thread_tmp_7_0_7_1_1_fu_3734_p1() {
    tmp_7_0_7_1_1_fu_3734_p1 =  (sc_lv<8>) (tmp_3_0_0_1_1_reg_6604.read());
}

void matrix_conv::thread_tmp_7_0_7_1_1_fu_3734_p2() {
    tmp_7_0_7_1_1_fu_3734_p2 = (!tmp_7_0_7_1_1_fu_3734_p0.read().is_01() || !tmp_7_0_7_1_1_fu_3734_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_0_7_1_1_fu_3734_p0.read()) * sc_bigint<8>(tmp_7_0_7_1_1_fu_3734_p1.read());
}

void matrix_conv::thread_tmp_7_0_7_2_1_fu_3743_p0() {
    tmp_7_0_7_2_1_fu_3743_p0 =  (sc_lv<8>) (tmp_0_6_2_2_fu_3721_p1.read());
}

void matrix_conv::thread_tmp_7_0_7_2_1_fu_3743_p1() {
    tmp_7_0_7_2_1_fu_3743_p1 =  (sc_lv<8>) (tmp_3_0_0_2_1_reg_6671.read());
}

void matrix_conv::thread_tmp_7_0_7_2_1_fu_3743_p2() {
    tmp_7_0_7_2_1_fu_3743_p2 = (!tmp_7_0_7_2_1_fu_3743_p0.read().is_01() || !tmp_7_0_7_2_1_fu_3743_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_0_7_2_1_fu_3743_p0.read()) * sc_bigint<8>(tmp_7_0_7_2_1_fu_3743_p1.read());
}

void matrix_conv::thread_tmp_7_0_7_fu_3108_p0() {
    tmp_7_0_7_fu_3108_p0 =  (sc_lv<8>) (tmp_0_5_0_2_fu_3066_p1.read());
}

void matrix_conv::thread_tmp_7_0_7_fu_3108_p1() {
    tmp_7_0_7_fu_3108_p1 =  (sc_lv<8>) (tmp_3_reg_6534.read());
}

void matrix_conv::thread_tmp_7_0_7_fu_3108_p2() {
    tmp_7_0_7_fu_3108_p2 = (!tmp_7_0_7_fu_3108_p0.read().is_01() || !tmp_7_0_7_fu_3108_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_0_7_fu_3108_p0.read()) * sc_bigint<8>(tmp_7_0_7_fu_3108_p1.read());
}

void matrix_conv::thread_tmp_7_1_0_0_2_fu_2149_p0() {
    tmp_7_1_0_0_2_fu_2149_p0 =  (sc_lv<8>) (tmp_0_0_1_2_fu_2085_p1.read());
}

void matrix_conv::thread_tmp_7_1_0_0_2_fu_2149_p1() {
    tmp_7_1_0_0_2_fu_2149_p1 =  (sc_lv<8>) (tmp_3_0_0_0_2_fu_2076_p1.read());
}

void matrix_conv::thread_tmp_7_1_0_0_2_fu_2149_p2() {
    tmp_7_1_0_0_2_fu_2149_p2 = (!tmp_7_1_0_0_2_fu_2149_p0.read().is_01() || !tmp_7_1_0_0_2_fu_2149_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_1_0_0_2_fu_2149_p0.read()) * sc_bigint<8>(tmp_7_1_0_0_2_fu_2149_p1.read());
}

void matrix_conv::thread_tmp_7_1_0_1_1_fu_1902_p0() {
    tmp_7_1_0_1_1_fu_1902_p0 =  (sc_lv<8>) (tmp_0_0_2_1_fu_1876_p1.read());
}

void matrix_conv::thread_tmp_7_1_0_1_1_fu_1902_p1() {
    tmp_7_1_0_1_1_fu_1902_p1 =  (sc_lv<8>) (tmp_3_0_0_1_1_fu_1862_p1.read());
}

void matrix_conv::thread_tmp_7_1_0_1_1_fu_1902_p2() {
    tmp_7_1_0_1_1_fu_1902_p2 = (!tmp_7_1_0_1_1_fu_1902_p0.read().is_01() || !tmp_7_1_0_1_1_fu_1902_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_1_0_1_1_fu_1902_p0.read()) * sc_bigint<8>(tmp_7_1_0_1_1_fu_1902_p1.read());
}

void matrix_conv::thread_tmp_7_1_0_2_1_fu_1916_p0() {
    tmp_7_1_0_2_1_fu_1916_p0 =  (sc_lv<8>) (tmp_1_0_2_1_fu_1912_p1.read());
}

void matrix_conv::thread_tmp_7_1_0_2_1_fu_1916_p1() {
    tmp_7_1_0_2_1_fu_1916_p1 =  (sc_lv<8>) (tmp_3_0_0_2_1_fu_1880_p1.read());
}

void matrix_conv::thread_tmp_7_1_0_2_1_fu_1916_p2() {
    tmp_7_1_0_2_1_fu_1916_p2 = (!tmp_7_1_0_2_1_fu_1916_p0.read().is_01() || !tmp_7_1_0_2_1_fu_1916_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_1_0_2_1_fu_1916_p0.read()) * sc_bigint<8>(tmp_7_1_0_2_1_fu_1916_p1.read());
}

void matrix_conv::thread_tmp_7_1_1_0_2_fu_2159_p0() {
    tmp_7_1_1_0_2_fu_2159_p0 =  (sc_lv<8>) (tmp_0_1_1_2_fu_2116_p1.read());
}

void matrix_conv::thread_tmp_7_1_1_0_2_fu_2159_p1() {
    tmp_7_1_1_0_2_fu_2159_p1 =  (sc_lv<8>) (tmp_3_0_0_0_2_fu_2076_p1.read());
}

void matrix_conv::thread_tmp_7_1_1_0_2_fu_2159_p2() {
    tmp_7_1_1_0_2_fu_2159_p2 = (!tmp_7_1_1_0_2_fu_2159_p0.read().is_01() || !tmp_7_1_1_0_2_fu_2159_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_1_1_0_2_fu_2159_p0.read()) * sc_bigint<8>(tmp_7_1_1_0_2_fu_2159_p1.read());
}

void matrix_conv::thread_tmp_7_1_1_1_1_fu_2165_p0() {
    tmp_7_1_1_1_1_fu_2165_p0 =  (sc_lv<8>) (tmp_0_0_2_2_fu_2093_p1.read());
}

void matrix_conv::thread_tmp_7_1_1_1_1_fu_2165_p1() {
    tmp_7_1_1_1_1_fu_2165_p1 =  (sc_lv<8>) (tmp_3_0_0_1_1_reg_6604.read());
}

void matrix_conv::thread_tmp_7_1_1_1_1_fu_2165_p2() {
    tmp_7_1_1_1_1_fu_2165_p2 = (!tmp_7_1_1_1_1_fu_2165_p0.read().is_01() || !tmp_7_1_1_1_1_fu_2165_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_1_1_1_1_fu_2165_p0.read()) * sc_bigint<8>(tmp_7_1_1_1_1_fu_2165_p1.read());
}

void matrix_conv::thread_tmp_7_1_1_2_1_fu_2170_p0() {
    tmp_7_1_1_2_1_fu_2170_p0 =  (sc_lv<8>) (tmp_1_0_2_2_fu_2155_p1.read());
}

void matrix_conv::thread_tmp_7_1_1_2_1_fu_2170_p1() {
    tmp_7_1_1_2_1_fu_2170_p1 =  (sc_lv<8>) (tmp_3_0_0_2_1_reg_6671.read());
}

void matrix_conv::thread_tmp_7_1_1_2_1_fu_2170_p2() {
    tmp_7_1_1_2_1_fu_2170_p2 = (!tmp_7_1_1_2_1_fu_2170_p0.read().is_01() || !tmp_7_1_1_2_1_fu_2170_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_1_1_2_1_fu_2170_p0.read()) * sc_bigint<8>(tmp_7_1_1_2_1_fu_2170_p1.read());
}

void matrix_conv::thread_tmp_7_1_1_fu_1922_p0() {
    tmp_7_1_1_fu_1922_p0 =  (sc_lv<8>) (tmp_0_0_1_1_fu_1858_p1.read());
}

void matrix_conv::thread_tmp_7_1_1_fu_1922_p1() {
    tmp_7_1_1_fu_1922_p1 =  (sc_lv<8>) (tmp_3_fu_1840_p1.read());
}

void matrix_conv::thread_tmp_7_1_1_fu_1922_p2() {
    tmp_7_1_1_fu_1922_p2 = (!tmp_7_1_1_fu_1922_p0.read().is_01() || !tmp_7_1_1_fu_1922_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_1_1_fu_1922_p0.read()) * sc_bigint<8>(tmp_7_1_1_fu_1922_p1.read());
}

void matrix_conv::thread_tmp_7_1_2_0_2_fu_2643_p0() {
    tmp_7_1_2_0_2_fu_2643_p0 =  (sc_lv<8>) (tmp_0_2_1_2_fu_2588_p1.read());
}

void matrix_conv::thread_tmp_7_1_2_0_2_fu_2643_p1() {
    tmp_7_1_2_0_2_fu_2643_p1 =  (sc_lv<8>) (tmp_3_0_0_0_2_reg_7043.read());
}

void matrix_conv::thread_tmp_7_1_2_0_2_fu_2643_p2() {
    tmp_7_1_2_0_2_fu_2643_p2 = (!tmp_7_1_2_0_2_fu_2643_p0.read().is_01() || !tmp_7_1_2_0_2_fu_2643_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_1_2_0_2_fu_2643_p0.read()) * sc_bigint<8>(tmp_7_1_2_0_2_fu_2643_p1.read());
}

void matrix_conv::thread_tmp_7_1_2_1_1_fu_2184_p0() {
    tmp_7_1_2_1_1_fu_2184_p0 =  (sc_lv<8>) (tmp_0_1_2_2_fu_2125_p1.read());
}

void matrix_conv::thread_tmp_7_1_2_1_1_fu_2184_p1() {
    tmp_7_1_2_1_1_fu_2184_p1 =  (sc_lv<8>) (tmp_3_0_0_1_1_reg_6604.read());
}

void matrix_conv::thread_tmp_7_1_2_1_1_fu_2184_p2() {
    tmp_7_1_2_1_1_fu_2184_p2 = (!tmp_7_1_2_1_1_fu_2184_p0.read().is_01() || !tmp_7_1_2_1_1_fu_2184_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_1_2_1_1_fu_2184_p0.read()) * sc_bigint<8>(tmp_7_1_2_1_1_fu_2184_p1.read());
}

void matrix_conv::thread_tmp_7_1_2_2_1_fu_2189_p0() {
    tmp_7_1_2_2_1_fu_2189_p0 =  (sc_lv<8>) (tmp_1_1_2_2_fu_2175_p1.read());
}

void matrix_conv::thread_tmp_7_1_2_2_1_fu_2189_p1() {
    tmp_7_1_2_2_1_fu_2189_p1 =  (sc_lv<8>) (tmp_3_0_0_2_1_reg_6671.read());
}

void matrix_conv::thread_tmp_7_1_2_2_1_fu_2189_p2() {
    tmp_7_1_2_2_1_fu_2189_p2 = (!tmp_7_1_2_2_1_fu_2189_p0.read().is_01() || !tmp_7_1_2_2_1_fu_2189_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_1_2_2_1_fu_2189_p0.read()) * sc_bigint<8>(tmp_7_1_2_2_1_fu_2189_p1.read());
}

void matrix_conv::thread_tmp_7_1_2_2_7_fu_2542_p1() {
    tmp_7_1_2_2_7_fu_2542_p1 = esl_sext<16,8>(a_9_q0.read());
}

void matrix_conv::thread_tmp_7_1_2_fu_2179_p0() {
    tmp_7_1_2_fu_2179_p0 =  (sc_lv<8>) (tmp_0_0_1_2_fu_2085_p1.read());
}

void matrix_conv::thread_tmp_7_1_2_fu_2179_p1() {
    tmp_7_1_2_fu_2179_p1 =  (sc_lv<8>) (tmp_3_reg_6534.read());
}

void matrix_conv::thread_tmp_7_1_2_fu_2179_p2() {
    tmp_7_1_2_fu_2179_p2 = (!tmp_7_1_2_fu_2179_p0.read().is_01() || !tmp_7_1_2_fu_2179_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_1_2_fu_2179_p0.read()) * sc_bigint<8>(tmp_7_1_2_fu_2179_p1.read());
}

void matrix_conv::thread_tmp_7_1_3_0_2_fu_2652_p0() {
    tmp_7_1_3_0_2_fu_2652_p0 =  (sc_lv<8>) (tmp_0_3_1_2_fu_2610_p1.read());
}

void matrix_conv::thread_tmp_7_1_3_0_2_fu_2652_p1() {
    tmp_7_1_3_0_2_fu_2652_p1 =  (sc_lv<8>) (tmp_3_0_0_0_2_reg_7043.read());
}

void matrix_conv::thread_tmp_7_1_3_0_2_fu_2652_p2() {
    tmp_7_1_3_0_2_fu_2652_p2 = (!tmp_7_1_3_0_2_fu_2652_p0.read().is_01() || !tmp_7_1_3_0_2_fu_2652_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_1_3_0_2_fu_2652_p0.read()) * sc_bigint<8>(tmp_7_1_3_0_2_fu_2652_p1.read());
}

void matrix_conv::thread_tmp_7_1_3_1_1_fu_2657_p0() {
    tmp_7_1_3_1_1_fu_2657_p0 =  (sc_lv<8>) (tmp_0_2_2_2_fu_2592_p1.read());
}

void matrix_conv::thread_tmp_7_1_3_1_1_fu_2657_p1() {
    tmp_7_1_3_1_1_fu_2657_p1 =  (sc_lv<8>) (tmp_3_0_0_1_1_reg_6604.read());
}

void matrix_conv::thread_tmp_7_1_3_1_1_fu_2657_p2() {
    tmp_7_1_3_1_1_fu_2657_p2 = (!tmp_7_1_3_1_1_fu_2657_p0.read().is_01() || !tmp_7_1_3_1_1_fu_2657_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_1_3_1_1_fu_2657_p0.read()) * sc_bigint<8>(tmp_7_1_3_1_1_fu_2657_p1.read());
}

void matrix_conv::thread_tmp_7_1_3_2_1_fu_2662_p0() {
    tmp_7_1_3_2_1_fu_2662_p0 =  (sc_lv<8>) (tmp_1_2_2_2_fu_2648_p1.read());
}

void matrix_conv::thread_tmp_7_1_3_2_1_fu_2662_p1() {
    tmp_7_1_3_2_1_fu_2662_p1 =  (sc_lv<8>) (tmp_3_0_0_2_1_reg_6671.read());
}

void matrix_conv::thread_tmp_7_1_3_2_1_fu_2662_p2() {
    tmp_7_1_3_2_1_fu_2662_p2 = (!tmp_7_1_3_2_1_fu_2662_p0.read().is_01() || !tmp_7_1_3_2_1_fu_2662_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_1_3_2_1_fu_2662_p0.read()) * sc_bigint<8>(tmp_7_1_3_2_1_fu_2662_p1.read());
}

void matrix_conv::thread_tmp_7_1_3_fu_2194_p0() {
    tmp_7_1_3_fu_2194_p0 =  (sc_lv<8>) (tmp_0_1_1_2_fu_2116_p1.read());
}

void matrix_conv::thread_tmp_7_1_3_fu_2194_p1() {
    tmp_7_1_3_fu_2194_p1 =  (sc_lv<8>) (tmp_3_reg_6534.read());
}

void matrix_conv::thread_tmp_7_1_3_fu_2194_p2() {
    tmp_7_1_3_fu_2194_p2 = (!tmp_7_1_3_fu_2194_p0.read().is_01() || !tmp_7_1_3_fu_2194_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_1_3_fu_2194_p0.read()) * sc_bigint<8>(tmp_7_1_3_fu_2194_p1.read());
}

void matrix_conv::thread_tmp_7_1_4_0_2_fu_3151_p0() {
    tmp_7_1_4_0_2_fu_3151_p0 =  (sc_lv<8>) (tmp_0_4_1_2_fu_3058_p1.read());
}

void matrix_conv::thread_tmp_7_1_4_0_2_fu_3151_p1() {
    tmp_7_1_4_0_2_fu_3151_p1 =  (sc_lv<8>) (tmp_3_0_0_0_2_reg_7043.read());
}

void matrix_conv::thread_tmp_7_1_4_0_2_fu_3151_p2() {
    tmp_7_1_4_0_2_fu_3151_p2 = (!tmp_7_1_4_0_2_fu_3151_p0.read().is_01() || !tmp_7_1_4_0_2_fu_3151_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_1_4_0_2_fu_3151_p0.read()) * sc_bigint<8>(tmp_7_1_4_0_2_fu_3151_p1.read());
}

void matrix_conv::thread_tmp_7_1_4_1_1_fu_2676_p0() {
    tmp_7_1_4_1_1_fu_2676_p0 =  (sc_lv<8>) (tmp_0_3_2_2_fu_2619_p1.read());
}

void matrix_conv::thread_tmp_7_1_4_1_1_fu_2676_p1() {
    tmp_7_1_4_1_1_fu_2676_p1 =  (sc_lv<8>) (tmp_3_0_0_1_1_reg_6604.read());
}

void matrix_conv::thread_tmp_7_1_4_1_1_fu_2676_p2() {
    tmp_7_1_4_1_1_fu_2676_p2 = (!tmp_7_1_4_1_1_fu_2676_p0.read().is_01() || !tmp_7_1_4_1_1_fu_2676_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_1_4_1_1_fu_2676_p0.read()) * sc_bigint<8>(tmp_7_1_4_1_1_fu_2676_p1.read());
}

void matrix_conv::thread_tmp_7_1_4_2_1_fu_2681_p0() {
    tmp_7_1_4_2_1_fu_2681_p0 =  (sc_lv<8>) (tmp_1_3_2_2_fu_2667_p1.read());
}

void matrix_conv::thread_tmp_7_1_4_2_1_fu_2681_p1() {
    tmp_7_1_4_2_1_fu_2681_p1 =  (sc_lv<8>) (tmp_3_0_0_2_1_reg_6671.read());
}

void matrix_conv::thread_tmp_7_1_4_2_1_fu_2681_p2() {
    tmp_7_1_4_2_1_fu_2681_p2 = (!tmp_7_1_4_2_1_fu_2681_p0.read().is_01() || !tmp_7_1_4_2_1_fu_2681_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_1_4_2_1_fu_2681_p0.read()) * sc_bigint<8>(tmp_7_1_4_2_1_fu_2681_p1.read());
}

void matrix_conv::thread_tmp_7_1_4_fu_2671_p0() {
    tmp_7_1_4_fu_2671_p0 =  (sc_lv<8>) (tmp_0_2_1_2_fu_2588_p1.read());
}

void matrix_conv::thread_tmp_7_1_4_fu_2671_p1() {
    tmp_7_1_4_fu_2671_p1 =  (sc_lv<8>) (tmp_3_reg_6534.read());
}

void matrix_conv::thread_tmp_7_1_4_fu_2671_p2() {
    tmp_7_1_4_fu_2671_p2 = (!tmp_7_1_4_fu_2671_p0.read().is_01() || !tmp_7_1_4_fu_2671_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_1_4_fu_2671_p0.read()) * sc_bigint<8>(tmp_7_1_4_fu_2671_p1.read());
}

void matrix_conv::thread_tmp_7_1_5_0_2_fu_3160_p0() {
    tmp_7_1_5_0_2_fu_3160_p0 =  (sc_lv<8>) (tmp_0_5_1_2_fu_3080_p1.read());
}

void matrix_conv::thread_tmp_7_1_5_0_2_fu_3160_p1() {
    tmp_7_1_5_0_2_fu_3160_p1 =  (sc_lv<8>) (tmp_3_0_0_0_2_reg_7043.read());
}

void matrix_conv::thread_tmp_7_1_5_0_2_fu_3160_p2() {
    tmp_7_1_5_0_2_fu_3160_p2 = (!tmp_7_1_5_0_2_fu_3160_p0.read().is_01() || !tmp_7_1_5_0_2_fu_3160_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_1_5_0_2_fu_3160_p0.read()) * sc_bigint<8>(tmp_7_1_5_0_2_fu_3160_p1.read());
}

void matrix_conv::thread_tmp_7_1_5_1_1_fu_3165_p0() {
    tmp_7_1_5_1_1_fu_3165_p0 =  (sc_lv<8>) (tmp_0_4_2_2_fu_3062_p1.read());
}

void matrix_conv::thread_tmp_7_1_5_1_1_fu_3165_p1() {
    tmp_7_1_5_1_1_fu_3165_p1 =  (sc_lv<8>) (tmp_3_0_0_1_1_reg_6604.read());
}

void matrix_conv::thread_tmp_7_1_5_1_1_fu_3165_p2() {
    tmp_7_1_5_1_1_fu_3165_p2 = (!tmp_7_1_5_1_1_fu_3165_p0.read().is_01() || !tmp_7_1_5_1_1_fu_3165_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_1_5_1_1_fu_3165_p0.read()) * sc_bigint<8>(tmp_7_1_5_1_1_fu_3165_p1.read());
}

void matrix_conv::thread_tmp_7_1_5_2_1_fu_3170_p0() {
    tmp_7_1_5_2_1_fu_3170_p0 =  (sc_lv<8>) (tmp_1_4_2_2_fu_3156_p1.read());
}

void matrix_conv::thread_tmp_7_1_5_2_1_fu_3170_p1() {
    tmp_7_1_5_2_1_fu_3170_p1 =  (sc_lv<8>) (tmp_3_0_0_2_1_reg_6671.read());
}

void matrix_conv::thread_tmp_7_1_5_2_1_fu_3170_p2() {
    tmp_7_1_5_2_1_fu_3170_p2 = (!tmp_7_1_5_2_1_fu_3170_p0.read().is_01() || !tmp_7_1_5_2_1_fu_3170_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_1_5_2_1_fu_3170_p0.read()) * sc_bigint<8>(tmp_7_1_5_2_1_fu_3170_p1.read());
}

void matrix_conv::thread_tmp_7_1_5_fu_2686_p0() {
    tmp_7_1_5_fu_2686_p0 =  (sc_lv<8>) (tmp_0_3_1_2_fu_2610_p1.read());
}

void matrix_conv::thread_tmp_7_1_5_fu_2686_p1() {
    tmp_7_1_5_fu_2686_p1 =  (sc_lv<8>) (tmp_3_reg_6534.read());
}

void matrix_conv::thread_tmp_7_1_5_fu_2686_p2() {
    tmp_7_1_5_fu_2686_p2 = (!tmp_7_1_5_fu_2686_p0.read().is_01() || !tmp_7_1_5_fu_2686_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_1_5_fu_2686_p0.read()) * sc_bigint<8>(tmp_7_1_5_fu_2686_p1.read());
}

void matrix_conv::thread_tmp_7_1_6_0_2_fu_3780_p0() {
    tmp_7_1_6_0_2_fu_3780_p0 =  (sc_lv<8>) (tmp_0_6_1_2_fu_3717_p1.read());
}

void matrix_conv::thread_tmp_7_1_6_0_2_fu_3780_p1() {
    tmp_7_1_6_0_2_fu_3780_p1 =  (sc_lv<8>) (tmp_3_0_0_0_2_reg_7043.read());
}

void matrix_conv::thread_tmp_7_1_6_0_2_fu_3780_p2() {
    tmp_7_1_6_0_2_fu_3780_p2 = (!tmp_7_1_6_0_2_fu_3780_p0.read().is_01() || !tmp_7_1_6_0_2_fu_3780_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_1_6_0_2_fu_3780_p0.read()) * sc_bigint<8>(tmp_7_1_6_0_2_fu_3780_p1.read());
}

void matrix_conv::thread_tmp_7_1_6_1_1_fu_3184_p0() {
    tmp_7_1_6_1_1_fu_3184_p0 =  (sc_lv<8>) (tmp_0_5_2_2_fu_3089_p1.read());
}

void matrix_conv::thread_tmp_7_1_6_1_1_fu_3184_p1() {
    tmp_7_1_6_1_1_fu_3184_p1 =  (sc_lv<8>) (tmp_3_0_0_1_1_reg_6604.read());
}

void matrix_conv::thread_tmp_7_1_6_1_1_fu_3184_p2() {
    tmp_7_1_6_1_1_fu_3184_p2 = (!tmp_7_1_6_1_1_fu_3184_p0.read().is_01() || !tmp_7_1_6_1_1_fu_3184_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_1_6_1_1_fu_3184_p0.read()) * sc_bigint<8>(tmp_7_1_6_1_1_fu_3184_p1.read());
}

void matrix_conv::thread_tmp_7_1_6_2_1_fu_3189_p0() {
    tmp_7_1_6_2_1_fu_3189_p0 =  (sc_lv<8>) (tmp_1_5_2_2_fu_3175_p1.read());
}

void matrix_conv::thread_tmp_7_1_6_2_1_fu_3189_p1() {
    tmp_7_1_6_2_1_fu_3189_p1 =  (sc_lv<8>) (tmp_3_0_0_2_1_reg_6671.read());
}

void matrix_conv::thread_tmp_7_1_6_2_1_fu_3189_p2() {
    tmp_7_1_6_2_1_fu_3189_p2 = (!tmp_7_1_6_2_1_fu_3189_p0.read().is_01() || !tmp_7_1_6_2_1_fu_3189_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_1_6_2_1_fu_3189_p0.read()) * sc_bigint<8>(tmp_7_1_6_2_1_fu_3189_p1.read());
}

void matrix_conv::thread_tmp_7_1_6_fu_3179_p0() {
    tmp_7_1_6_fu_3179_p0 =  (sc_lv<8>) (tmp_0_4_1_2_fu_3058_p1.read());
}

void matrix_conv::thread_tmp_7_1_6_fu_3179_p1() {
    tmp_7_1_6_fu_3179_p1 =  (sc_lv<8>) (tmp_3_reg_6534.read());
}

void matrix_conv::thread_tmp_7_1_6_fu_3179_p2() {
    tmp_7_1_6_fu_3179_p2 = (!tmp_7_1_6_fu_3179_p0.read().is_01() || !tmp_7_1_6_fu_3179_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_1_6_fu_3179_p0.read()) * sc_bigint<8>(tmp_7_1_6_fu_3179_p1.read());
}

void matrix_conv::thread_tmp_7_1_7_0_2_fu_3789_p0() {
    tmp_7_1_7_0_2_fu_3789_p0 = a_1_q1.read();
}

void matrix_conv::thread_tmp_7_1_7_0_2_fu_3789_p1() {
    tmp_7_1_7_0_2_fu_3789_p1 =  (sc_lv<8>) (tmp_3_0_0_0_2_reg_7043.read());
}

void matrix_conv::thread_tmp_7_1_7_0_2_fu_3789_p2() {
    tmp_7_1_7_0_2_fu_3789_p2 = (!tmp_7_1_7_0_2_fu_3789_p0.read().is_01() || !tmp_7_1_7_0_2_fu_3789_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_1_7_0_2_fu_3789_p0.read()) * sc_bigint<8>(tmp_7_1_7_0_2_fu_3789_p1.read());
}

void matrix_conv::thread_tmp_7_1_7_1_1_fu_3794_p0() {
    tmp_7_1_7_1_1_fu_3794_p0 =  (sc_lv<8>) (tmp_0_6_2_2_fu_3721_p1.read());
}

void matrix_conv::thread_tmp_7_1_7_1_1_fu_3794_p1() {
    tmp_7_1_7_1_1_fu_3794_p1 =  (sc_lv<8>) (tmp_3_0_0_1_1_reg_6604.read());
}

void matrix_conv::thread_tmp_7_1_7_1_1_fu_3794_p2() {
    tmp_7_1_7_1_1_fu_3794_p2 = (!tmp_7_1_7_1_1_fu_3794_p0.read().is_01() || !tmp_7_1_7_1_1_fu_3794_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_1_7_1_1_fu_3794_p0.read()) * sc_bigint<8>(tmp_7_1_7_1_1_fu_3794_p1.read());
}

void matrix_conv::thread_tmp_7_1_7_2_1_fu_3799_p0() {
    tmp_7_1_7_2_1_fu_3799_p0 =  (sc_lv<8>) (tmp_1_6_2_2_fu_3785_p1.read());
}

void matrix_conv::thread_tmp_7_1_7_2_1_fu_3799_p1() {
    tmp_7_1_7_2_1_fu_3799_p1 =  (sc_lv<8>) (tmp_3_0_0_2_1_reg_6671.read());
}

void matrix_conv::thread_tmp_7_1_7_2_1_fu_3799_p2() {
    tmp_7_1_7_2_1_fu_3799_p2 = (!tmp_7_1_7_2_1_fu_3799_p0.read().is_01() || !tmp_7_1_7_2_1_fu_3799_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_1_7_2_1_fu_3799_p0.read()) * sc_bigint<8>(tmp_7_1_7_2_1_fu_3799_p1.read());
}

void matrix_conv::thread_tmp_7_1_7_fu_3194_p0() {
    tmp_7_1_7_fu_3194_p0 =  (sc_lv<8>) (tmp_0_5_1_2_fu_3080_p1.read());
}

void matrix_conv::thread_tmp_7_1_7_fu_3194_p1() {
    tmp_7_1_7_fu_3194_p1 =  (sc_lv<8>) (tmp_3_reg_6534.read());
}

void matrix_conv::thread_tmp_7_1_7_fu_3194_p2() {
    tmp_7_1_7_fu_3194_p2 = (!tmp_7_1_7_fu_3194_p0.read().is_01() || !tmp_7_1_7_fu_3194_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_1_7_fu_3194_p0.read()) * sc_bigint<8>(tmp_7_1_7_fu_3194_p1.read());
}

void matrix_conv::thread_tmp_7_1_fu_1896_p0() {
    tmp_7_1_fu_1896_p0 = a_1_q0.read();
}

void matrix_conv::thread_tmp_7_1_fu_1896_p1() {
    tmp_7_1_fu_1896_p1 =  (sc_lv<8>) (tmp_3_fu_1840_p1.read());
}

void matrix_conv::thread_tmp_7_1_fu_1896_p2() {
    tmp_7_1_fu_1896_p2 = (!tmp_7_1_fu_1896_p0.read().is_01() || !tmp_7_1_fu_1896_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_1_fu_1896_p0.read()) * sc_bigint<8>(tmp_7_1_fu_1896_p1.read());
}

void matrix_conv::thread_tmp_7_2_0_0_2_fu_2199_p0() {
    tmp_7_2_0_0_2_fu_2199_p0 =  (sc_lv<8>) (tmp_0_0_2_2_fu_2093_p1.read());
}

void matrix_conv::thread_tmp_7_2_0_0_2_fu_2199_p1() {
    tmp_7_2_0_0_2_fu_2199_p1 =  (sc_lv<8>) (tmp_3_0_0_0_2_fu_2076_p1.read());
}

void matrix_conv::thread_tmp_7_2_0_0_2_fu_2199_p2() {
    tmp_7_2_0_0_2_fu_2199_p2 = (!tmp_7_2_0_0_2_fu_2199_p0.read().is_01() || !tmp_7_2_0_0_2_fu_2199_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_2_0_0_2_fu_2199_p0.read()) * sc_bigint<8>(tmp_7_2_0_0_2_fu_2199_p1.read());
}

void matrix_conv::thread_tmp_7_2_0_1_1_fu_1934_p0() {
    tmp_7_2_0_1_1_fu_1934_p0 =  (sc_lv<8>) (tmp_1_0_2_1_fu_1912_p1.read());
}

void matrix_conv::thread_tmp_7_2_0_1_1_fu_1934_p1() {
    tmp_7_2_0_1_1_fu_1934_p1 =  (sc_lv<8>) (tmp_3_0_0_1_1_fu_1862_p1.read());
}

void matrix_conv::thread_tmp_7_2_0_1_1_fu_1934_p2() {
    tmp_7_2_0_1_1_fu_1934_p2 = (!tmp_7_2_0_1_1_fu_1934_p0.read().is_01() || !tmp_7_2_0_1_1_fu_1934_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_2_0_1_1_fu_1934_p0.read()) * sc_bigint<8>(tmp_7_2_0_1_1_fu_1934_p1.read());
}

void matrix_conv::thread_tmp_7_2_0_2_1_fu_1948_p0() {
    tmp_7_2_0_2_1_fu_1948_p0 =  (sc_lv<8>) (tmp_2_0_2_1_fu_1944_p1.read());
}

void matrix_conv::thread_tmp_7_2_0_2_1_fu_1948_p1() {
    tmp_7_2_0_2_1_fu_1948_p1 =  (sc_lv<8>) (tmp_3_0_0_2_1_fu_1880_p1.read());
}

void matrix_conv::thread_tmp_7_2_0_2_1_fu_1948_p2() {
    tmp_7_2_0_2_1_fu_1948_p2 = (!tmp_7_2_0_2_1_fu_1948_p0.read().is_01() || !tmp_7_2_0_2_1_fu_1948_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_2_0_2_1_fu_1948_p0.read()) * sc_bigint<8>(tmp_7_2_0_2_1_fu_1948_p1.read());
}

void matrix_conv::thread_tmp_7_2_1_0_2_fu_2209_p0() {
    tmp_7_2_1_0_2_fu_2209_p0 =  (sc_lv<8>) (tmp_0_1_2_2_fu_2125_p1.read());
}

void matrix_conv::thread_tmp_7_2_1_0_2_fu_2209_p1() {
    tmp_7_2_1_0_2_fu_2209_p1 =  (sc_lv<8>) (tmp_3_0_0_0_2_fu_2076_p1.read());
}

void matrix_conv::thread_tmp_7_2_1_0_2_fu_2209_p2() {
    tmp_7_2_1_0_2_fu_2209_p2 = (!tmp_7_2_1_0_2_fu_2209_p0.read().is_01() || !tmp_7_2_1_0_2_fu_2209_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_2_1_0_2_fu_2209_p0.read()) * sc_bigint<8>(tmp_7_2_1_0_2_fu_2209_p1.read());
}

void matrix_conv::thread_tmp_7_2_1_1_1_fu_2215_p0() {
    tmp_7_2_1_1_1_fu_2215_p0 =  (sc_lv<8>) (tmp_1_0_2_2_fu_2155_p1.read());
}

void matrix_conv::thread_tmp_7_2_1_1_1_fu_2215_p1() {
    tmp_7_2_1_1_1_fu_2215_p1 =  (sc_lv<8>) (tmp_3_0_0_1_1_reg_6604.read());
}

void matrix_conv::thread_tmp_7_2_1_1_1_fu_2215_p2() {
    tmp_7_2_1_1_1_fu_2215_p2 = (!tmp_7_2_1_1_1_fu_2215_p0.read().is_01() || !tmp_7_2_1_1_1_fu_2215_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_2_1_1_1_fu_2215_p0.read()) * sc_bigint<8>(tmp_7_2_1_1_1_fu_2215_p1.read());
}

void matrix_conv::thread_tmp_7_2_1_2_1_fu_2220_p0() {
    tmp_7_2_1_2_1_fu_2220_p0 =  (sc_lv<8>) (tmp_2_0_2_2_fu_2205_p1.read());
}

void matrix_conv::thread_tmp_7_2_1_2_1_fu_2220_p1() {
    tmp_7_2_1_2_1_fu_2220_p1 =  (sc_lv<8>) (tmp_3_0_0_2_1_reg_6671.read());
}

void matrix_conv::thread_tmp_7_2_1_2_1_fu_2220_p2() {
    tmp_7_2_1_2_1_fu_2220_p2 = (!tmp_7_2_1_2_1_fu_2220_p0.read().is_01() || !tmp_7_2_1_2_1_fu_2220_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_2_1_2_1_fu_2220_p0.read()) * sc_bigint<8>(tmp_7_2_1_2_1_fu_2220_p1.read());
}

void matrix_conv::thread_tmp_7_2_1_fu_1954_p0() {
    tmp_7_2_1_fu_1954_p0 =  (sc_lv<8>) (tmp_0_0_2_1_fu_1876_p1.read());
}

void matrix_conv::thread_tmp_7_2_1_fu_1954_p1() {
    tmp_7_2_1_fu_1954_p1 =  (sc_lv<8>) (tmp_3_fu_1840_p1.read());
}

void matrix_conv::thread_tmp_7_2_1_fu_1954_p2() {
    tmp_7_2_1_fu_1954_p2 = (!tmp_7_2_1_fu_1954_p0.read().is_01() || !tmp_7_2_1_fu_1954_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_2_1_fu_1954_p0.read()) * sc_bigint<8>(tmp_7_2_1_fu_1954_p1.read());
}

void matrix_conv::thread_tmp_7_2_2_0_2_fu_2691_p0() {
    tmp_7_2_2_0_2_fu_2691_p0 =  (sc_lv<8>) (tmp_0_2_2_2_fu_2592_p1.read());
}

void matrix_conv::thread_tmp_7_2_2_0_2_fu_2691_p1() {
    tmp_7_2_2_0_2_fu_2691_p1 =  (sc_lv<8>) (tmp_3_0_0_0_2_reg_7043.read());
}

void matrix_conv::thread_tmp_7_2_2_0_2_fu_2691_p2() {
    tmp_7_2_2_0_2_fu_2691_p2 = (!tmp_7_2_2_0_2_fu_2691_p0.read().is_01() || !tmp_7_2_2_0_2_fu_2691_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_2_2_0_2_fu_2691_p0.read()) * sc_bigint<8>(tmp_7_2_2_0_2_fu_2691_p1.read());
}

void matrix_conv::thread_tmp_7_2_2_1_1_fu_2234_p0() {
    tmp_7_2_2_1_1_fu_2234_p0 =  (sc_lv<8>) (tmp_1_1_2_2_fu_2175_p1.read());
}

void matrix_conv::thread_tmp_7_2_2_1_1_fu_2234_p1() {
    tmp_7_2_2_1_1_fu_2234_p1 =  (sc_lv<8>) (tmp_3_0_0_1_1_reg_6604.read());
}

void matrix_conv::thread_tmp_7_2_2_1_1_fu_2234_p2() {
    tmp_7_2_2_1_1_fu_2234_p2 = (!tmp_7_2_2_1_1_fu_2234_p0.read().is_01() || !tmp_7_2_2_1_1_fu_2234_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_2_2_1_1_fu_2234_p0.read()) * sc_bigint<8>(tmp_7_2_2_1_1_fu_2234_p1.read());
}

void matrix_conv::thread_tmp_7_2_2_2_1_fu_2239_p0() {
    tmp_7_2_2_2_1_fu_2239_p0 =  (sc_lv<8>) (tmp_2_1_2_2_fu_2225_p1.read());
}

void matrix_conv::thread_tmp_7_2_2_2_1_fu_2239_p1() {
    tmp_7_2_2_2_1_fu_2239_p1 =  (sc_lv<8>) (tmp_3_0_0_2_1_reg_6671.read());
}

void matrix_conv::thread_tmp_7_2_2_2_1_fu_2239_p2() {
    tmp_7_2_2_2_1_fu_2239_p2 = (!tmp_7_2_2_2_1_fu_2239_p0.read().is_01() || !tmp_7_2_2_2_1_fu_2239_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_2_2_2_1_fu_2239_p0.read()) * sc_bigint<8>(tmp_7_2_2_2_1_fu_2239_p1.read());
}

void matrix_conv::thread_tmp_7_2_2_2_8_fu_2558_p1() {
    tmp_7_2_2_2_8_fu_2558_p1 = esl_sext<16,8>(a_9_q1.read());
}

void matrix_conv::thread_tmp_7_2_2_fu_2229_p0() {
    tmp_7_2_2_fu_2229_p0 =  (sc_lv<8>) (tmp_0_0_2_2_fu_2093_p1.read());
}

void matrix_conv::thread_tmp_7_2_2_fu_2229_p1() {
    tmp_7_2_2_fu_2229_p1 =  (sc_lv<8>) (tmp_3_reg_6534.read());
}

void matrix_conv::thread_tmp_7_2_2_fu_2229_p2() {
    tmp_7_2_2_fu_2229_p2 = (!tmp_7_2_2_fu_2229_p0.read().is_01() || !tmp_7_2_2_fu_2229_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_2_2_fu_2229_p0.read()) * sc_bigint<8>(tmp_7_2_2_fu_2229_p1.read());
}

void matrix_conv::thread_tmp_7_2_3_0_2_fu_2700_p0() {
    tmp_7_2_3_0_2_fu_2700_p0 =  (sc_lv<8>) (tmp_0_3_2_2_fu_2619_p1.read());
}

void matrix_conv::thread_tmp_7_2_3_0_2_fu_2700_p1() {
    tmp_7_2_3_0_2_fu_2700_p1 =  (sc_lv<8>) (tmp_3_0_0_0_2_reg_7043.read());
}

void matrix_conv::thread_tmp_7_2_3_0_2_fu_2700_p2() {
    tmp_7_2_3_0_2_fu_2700_p2 = (!tmp_7_2_3_0_2_fu_2700_p0.read().is_01() || !tmp_7_2_3_0_2_fu_2700_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_2_3_0_2_fu_2700_p0.read()) * sc_bigint<8>(tmp_7_2_3_0_2_fu_2700_p1.read());
}

void matrix_conv::thread_tmp_7_2_3_1_1_fu_2705_p0() {
    tmp_7_2_3_1_1_fu_2705_p0 =  (sc_lv<8>) (tmp_1_2_2_2_fu_2648_p1.read());
}

void matrix_conv::thread_tmp_7_2_3_1_1_fu_2705_p1() {
    tmp_7_2_3_1_1_fu_2705_p1 =  (sc_lv<8>) (tmp_3_0_0_1_1_reg_6604.read());
}

void matrix_conv::thread_tmp_7_2_3_1_1_fu_2705_p2() {
    tmp_7_2_3_1_1_fu_2705_p2 = (!tmp_7_2_3_1_1_fu_2705_p0.read().is_01() || !tmp_7_2_3_1_1_fu_2705_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_2_3_1_1_fu_2705_p0.read()) * sc_bigint<8>(tmp_7_2_3_1_1_fu_2705_p1.read());
}

void matrix_conv::thread_tmp_7_2_3_2_1_fu_2710_p0() {
    tmp_7_2_3_2_1_fu_2710_p0 =  (sc_lv<8>) (tmp_2_2_2_2_fu_2696_p1.read());
}

void matrix_conv::thread_tmp_7_2_3_2_1_fu_2710_p1() {
    tmp_7_2_3_2_1_fu_2710_p1 =  (sc_lv<8>) (tmp_3_0_0_2_1_reg_6671.read());
}

void matrix_conv::thread_tmp_7_2_3_2_1_fu_2710_p2() {
    tmp_7_2_3_2_1_fu_2710_p2 = (!tmp_7_2_3_2_1_fu_2710_p0.read().is_01() || !tmp_7_2_3_2_1_fu_2710_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_2_3_2_1_fu_2710_p0.read()) * sc_bigint<8>(tmp_7_2_3_2_1_fu_2710_p1.read());
}

void matrix_conv::thread_tmp_7_2_3_fu_2244_p0() {
    tmp_7_2_3_fu_2244_p0 =  (sc_lv<8>) (tmp_0_1_2_2_fu_2125_p1.read());
}

void matrix_conv::thread_tmp_7_2_3_fu_2244_p1() {
    tmp_7_2_3_fu_2244_p1 =  (sc_lv<8>) (tmp_3_reg_6534.read());
}

void matrix_conv::thread_tmp_7_2_3_fu_2244_p2() {
    tmp_7_2_3_fu_2244_p2 = (!tmp_7_2_3_fu_2244_p0.read().is_01() || !tmp_7_2_3_fu_2244_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_2_3_fu_2244_p0.read()) * sc_bigint<8>(tmp_7_2_3_fu_2244_p1.read());
}

void matrix_conv::thread_tmp_7_2_4_0_2_fu_3237_p0() {
    tmp_7_2_4_0_2_fu_3237_p0 =  (sc_lv<8>) (tmp_0_4_2_2_fu_3062_p1.read());
}

void matrix_conv::thread_tmp_7_2_4_0_2_fu_3237_p1() {
    tmp_7_2_4_0_2_fu_3237_p1 =  (sc_lv<8>) (tmp_3_0_0_0_2_reg_7043.read());
}

void matrix_conv::thread_tmp_7_2_4_0_2_fu_3237_p2() {
    tmp_7_2_4_0_2_fu_3237_p2 = (!tmp_7_2_4_0_2_fu_3237_p0.read().is_01() || !tmp_7_2_4_0_2_fu_3237_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_2_4_0_2_fu_3237_p0.read()) * sc_bigint<8>(tmp_7_2_4_0_2_fu_3237_p1.read());
}

void matrix_conv::thread_tmp_7_2_4_1_1_fu_2724_p0() {
    tmp_7_2_4_1_1_fu_2724_p0 =  (sc_lv<8>) (tmp_1_3_2_2_fu_2667_p1.read());
}

void matrix_conv::thread_tmp_7_2_4_1_1_fu_2724_p1() {
    tmp_7_2_4_1_1_fu_2724_p1 =  (sc_lv<8>) (tmp_3_0_0_1_1_reg_6604.read());
}

void matrix_conv::thread_tmp_7_2_4_1_1_fu_2724_p2() {
    tmp_7_2_4_1_1_fu_2724_p2 = (!tmp_7_2_4_1_1_fu_2724_p0.read().is_01() || !tmp_7_2_4_1_1_fu_2724_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_2_4_1_1_fu_2724_p0.read()) * sc_bigint<8>(tmp_7_2_4_1_1_fu_2724_p1.read());
}

void matrix_conv::thread_tmp_7_2_4_2_1_fu_2729_p0() {
    tmp_7_2_4_2_1_fu_2729_p0 =  (sc_lv<8>) (tmp_2_3_2_2_fu_2715_p1.read());
}

void matrix_conv::thread_tmp_7_2_4_2_1_fu_2729_p1() {
    tmp_7_2_4_2_1_fu_2729_p1 =  (sc_lv<8>) (tmp_3_0_0_2_1_reg_6671.read());
}

void matrix_conv::thread_tmp_7_2_4_2_1_fu_2729_p2() {
    tmp_7_2_4_2_1_fu_2729_p2 = (!tmp_7_2_4_2_1_fu_2729_p0.read().is_01() || !tmp_7_2_4_2_1_fu_2729_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_2_4_2_1_fu_2729_p0.read()) * sc_bigint<8>(tmp_7_2_4_2_1_fu_2729_p1.read());
}

void matrix_conv::thread_tmp_7_2_4_fu_2719_p0() {
    tmp_7_2_4_fu_2719_p0 =  (sc_lv<8>) (tmp_0_2_2_2_fu_2592_p1.read());
}

void matrix_conv::thread_tmp_7_2_4_fu_2719_p1() {
    tmp_7_2_4_fu_2719_p1 =  (sc_lv<8>) (tmp_3_reg_6534.read());
}

void matrix_conv::thread_tmp_7_2_4_fu_2719_p2() {
    tmp_7_2_4_fu_2719_p2 = (!tmp_7_2_4_fu_2719_p0.read().is_01() || !tmp_7_2_4_fu_2719_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_2_4_fu_2719_p0.read()) * sc_bigint<8>(tmp_7_2_4_fu_2719_p1.read());
}

void matrix_conv::thread_tmp_7_2_5_0_2_fu_3246_p0() {
    tmp_7_2_5_0_2_fu_3246_p0 =  (sc_lv<8>) (tmp_0_5_2_2_fu_3089_p1.read());
}

void matrix_conv::thread_tmp_7_2_5_0_2_fu_3246_p1() {
    tmp_7_2_5_0_2_fu_3246_p1 =  (sc_lv<8>) (tmp_3_0_0_0_2_reg_7043.read());
}

void matrix_conv::thread_tmp_7_2_5_0_2_fu_3246_p2() {
    tmp_7_2_5_0_2_fu_3246_p2 = (!tmp_7_2_5_0_2_fu_3246_p0.read().is_01() || !tmp_7_2_5_0_2_fu_3246_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_2_5_0_2_fu_3246_p0.read()) * sc_bigint<8>(tmp_7_2_5_0_2_fu_3246_p1.read());
}

void matrix_conv::thread_tmp_7_2_5_1_1_fu_3251_p0() {
    tmp_7_2_5_1_1_fu_3251_p0 =  (sc_lv<8>) (tmp_1_4_2_2_fu_3156_p1.read());
}

void matrix_conv::thread_tmp_7_2_5_1_1_fu_3251_p1() {
    tmp_7_2_5_1_1_fu_3251_p1 =  (sc_lv<8>) (tmp_3_0_0_1_1_reg_6604.read());
}

void matrix_conv::thread_tmp_7_2_5_1_1_fu_3251_p2() {
    tmp_7_2_5_1_1_fu_3251_p2 = (!tmp_7_2_5_1_1_fu_3251_p0.read().is_01() || !tmp_7_2_5_1_1_fu_3251_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_2_5_1_1_fu_3251_p0.read()) * sc_bigint<8>(tmp_7_2_5_1_1_fu_3251_p1.read());
}

void matrix_conv::thread_tmp_7_2_5_2_1_fu_3256_p0() {
    tmp_7_2_5_2_1_fu_3256_p0 =  (sc_lv<8>) (tmp_2_4_2_2_fu_3242_p1.read());
}

void matrix_conv::thread_tmp_7_2_5_2_1_fu_3256_p1() {
    tmp_7_2_5_2_1_fu_3256_p1 =  (sc_lv<8>) (tmp_3_0_0_2_1_reg_6671.read());
}

void matrix_conv::thread_tmp_7_2_5_2_1_fu_3256_p2() {
    tmp_7_2_5_2_1_fu_3256_p2 = (!tmp_7_2_5_2_1_fu_3256_p0.read().is_01() || !tmp_7_2_5_2_1_fu_3256_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_2_5_2_1_fu_3256_p0.read()) * sc_bigint<8>(tmp_7_2_5_2_1_fu_3256_p1.read());
}

void matrix_conv::thread_tmp_7_2_5_fu_2734_p0() {
    tmp_7_2_5_fu_2734_p0 =  (sc_lv<8>) (tmp_0_3_2_2_fu_2619_p1.read());
}

void matrix_conv::thread_tmp_7_2_5_fu_2734_p1() {
    tmp_7_2_5_fu_2734_p1 =  (sc_lv<8>) (tmp_3_reg_6534.read());
}

void matrix_conv::thread_tmp_7_2_5_fu_2734_p2() {
    tmp_7_2_5_fu_2734_p2 = (!tmp_7_2_5_fu_2734_p0.read().is_01() || !tmp_7_2_5_fu_2734_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_2_5_fu_2734_p0.read()) * sc_bigint<8>(tmp_7_2_5_fu_2734_p1.read());
}

void matrix_conv::thread_tmp_7_2_6_0_2_fu_3836_p0() {
    tmp_7_2_6_0_2_fu_3836_p0 =  (sc_lv<8>) (tmp_0_6_2_2_fu_3721_p1.read());
}

void matrix_conv::thread_tmp_7_2_6_0_2_fu_3836_p1() {
    tmp_7_2_6_0_2_fu_3836_p1 =  (sc_lv<8>) (tmp_3_0_0_0_2_reg_7043.read());
}

void matrix_conv::thread_tmp_7_2_6_0_2_fu_3836_p2() {
    tmp_7_2_6_0_2_fu_3836_p2 = (!tmp_7_2_6_0_2_fu_3836_p0.read().is_01() || !tmp_7_2_6_0_2_fu_3836_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_2_6_0_2_fu_3836_p0.read()) * sc_bigint<8>(tmp_7_2_6_0_2_fu_3836_p1.read());
}

void matrix_conv::thread_tmp_7_2_6_1_1_fu_3270_p0() {
    tmp_7_2_6_1_1_fu_3270_p0 =  (sc_lv<8>) (tmp_1_5_2_2_fu_3175_p1.read());
}

void matrix_conv::thread_tmp_7_2_6_1_1_fu_3270_p1() {
    tmp_7_2_6_1_1_fu_3270_p1 =  (sc_lv<8>) (tmp_3_0_0_1_1_reg_6604.read());
}

void matrix_conv::thread_tmp_7_2_6_1_1_fu_3270_p2() {
    tmp_7_2_6_1_1_fu_3270_p2 = (!tmp_7_2_6_1_1_fu_3270_p0.read().is_01() || !tmp_7_2_6_1_1_fu_3270_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_2_6_1_1_fu_3270_p0.read()) * sc_bigint<8>(tmp_7_2_6_1_1_fu_3270_p1.read());
}

void matrix_conv::thread_tmp_7_2_6_2_1_fu_3275_p0() {
    tmp_7_2_6_2_1_fu_3275_p0 =  (sc_lv<8>) (tmp_2_5_2_2_fu_3261_p1.read());
}

void matrix_conv::thread_tmp_7_2_6_2_1_fu_3275_p1() {
    tmp_7_2_6_2_1_fu_3275_p1 =  (sc_lv<8>) (tmp_3_0_0_2_1_reg_6671.read());
}

void matrix_conv::thread_tmp_7_2_6_2_1_fu_3275_p2() {
    tmp_7_2_6_2_1_fu_3275_p2 = (!tmp_7_2_6_2_1_fu_3275_p0.read().is_01() || !tmp_7_2_6_2_1_fu_3275_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_2_6_2_1_fu_3275_p0.read()) * sc_bigint<8>(tmp_7_2_6_2_1_fu_3275_p1.read());
}

void matrix_conv::thread_tmp_7_2_6_fu_3265_p0() {
    tmp_7_2_6_fu_3265_p0 =  (sc_lv<8>) (tmp_0_4_2_2_fu_3062_p1.read());
}

void matrix_conv::thread_tmp_7_2_6_fu_3265_p1() {
    tmp_7_2_6_fu_3265_p1 =  (sc_lv<8>) (tmp_3_reg_6534.read());
}

void matrix_conv::thread_tmp_7_2_6_fu_3265_p2() {
    tmp_7_2_6_fu_3265_p2 = (!tmp_7_2_6_fu_3265_p0.read().is_01() || !tmp_7_2_6_fu_3265_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_2_6_fu_3265_p0.read()) * sc_bigint<8>(tmp_7_2_6_fu_3265_p1.read());
}

void matrix_conv::thread_tmp_7_2_7_0_2_fu_3845_p0() {
    tmp_7_2_7_0_2_fu_3845_p0 = a_2_q1.read();
}

void matrix_conv::thread_tmp_7_2_7_0_2_fu_3845_p1() {
    tmp_7_2_7_0_2_fu_3845_p1 =  (sc_lv<8>) (tmp_3_0_0_0_2_reg_7043.read());
}

void matrix_conv::thread_tmp_7_2_7_0_2_fu_3845_p2() {
    tmp_7_2_7_0_2_fu_3845_p2 = (!tmp_7_2_7_0_2_fu_3845_p0.read().is_01() || !tmp_7_2_7_0_2_fu_3845_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_2_7_0_2_fu_3845_p0.read()) * sc_bigint<8>(tmp_7_2_7_0_2_fu_3845_p1.read());
}

void matrix_conv::thread_tmp_7_2_7_1_1_fu_3850_p0() {
    tmp_7_2_7_1_1_fu_3850_p0 =  (sc_lv<8>) (tmp_1_6_2_2_fu_3785_p1.read());
}

void matrix_conv::thread_tmp_7_2_7_1_1_fu_3850_p1() {
    tmp_7_2_7_1_1_fu_3850_p1 =  (sc_lv<8>) (tmp_3_0_0_1_1_reg_6604.read());
}

void matrix_conv::thread_tmp_7_2_7_1_1_fu_3850_p2() {
    tmp_7_2_7_1_1_fu_3850_p2 = (!tmp_7_2_7_1_1_fu_3850_p0.read().is_01() || !tmp_7_2_7_1_1_fu_3850_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_2_7_1_1_fu_3850_p0.read()) * sc_bigint<8>(tmp_7_2_7_1_1_fu_3850_p1.read());
}

void matrix_conv::thread_tmp_7_2_7_2_1_fu_3855_p0() {
    tmp_7_2_7_2_1_fu_3855_p0 =  (sc_lv<8>) (tmp_2_6_2_2_fu_3841_p1.read());
}

void matrix_conv::thread_tmp_7_2_7_2_1_fu_3855_p1() {
    tmp_7_2_7_2_1_fu_3855_p1 =  (sc_lv<8>) (tmp_3_0_0_2_1_reg_6671.read());
}

void matrix_conv::thread_tmp_7_2_7_2_1_fu_3855_p2() {
    tmp_7_2_7_2_1_fu_3855_p2 = (!tmp_7_2_7_2_1_fu_3855_p0.read().is_01() || !tmp_7_2_7_2_1_fu_3855_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_2_7_2_1_fu_3855_p0.read()) * sc_bigint<8>(tmp_7_2_7_2_1_fu_3855_p1.read());
}

void matrix_conv::thread_tmp_7_2_7_fu_3280_p0() {
    tmp_7_2_7_fu_3280_p0 =  (sc_lv<8>) (tmp_0_5_2_2_fu_3089_p1.read());
}

void matrix_conv::thread_tmp_7_2_7_fu_3280_p1() {
    tmp_7_2_7_fu_3280_p1 =  (sc_lv<8>) (tmp_3_reg_6534.read());
}

void matrix_conv::thread_tmp_7_2_7_fu_3280_p2() {
    tmp_7_2_7_fu_3280_p2 = (!tmp_7_2_7_fu_3280_p0.read().is_01() || !tmp_7_2_7_fu_3280_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_2_7_fu_3280_p0.read()) * sc_bigint<8>(tmp_7_2_7_fu_3280_p1.read());
}

void matrix_conv::thread_tmp_7_2_fu_1928_p0() {
    tmp_7_2_fu_1928_p0 = a_2_q0.read();
}

void matrix_conv::thread_tmp_7_2_fu_1928_p1() {
    tmp_7_2_fu_1928_p1 =  (sc_lv<8>) (tmp_3_fu_1840_p1.read());
}

void matrix_conv::thread_tmp_7_2_fu_1928_p2() {
    tmp_7_2_fu_1928_p2 = (!tmp_7_2_fu_1928_p0.read().is_01() || !tmp_7_2_fu_1928_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_2_fu_1928_p0.read()) * sc_bigint<8>(tmp_7_2_fu_1928_p1.read());
}

void matrix_conv::thread_tmp_7_3_0_0_2_fu_2249_p0() {
    tmp_7_3_0_0_2_fu_2249_p0 =  (sc_lv<8>) (tmp_1_0_2_2_fu_2155_p1.read());
}

void matrix_conv::thread_tmp_7_3_0_0_2_fu_2249_p1() {
    tmp_7_3_0_0_2_fu_2249_p1 =  (sc_lv<8>) (tmp_3_0_0_0_2_fu_2076_p1.read());
}

void matrix_conv::thread_tmp_7_3_0_0_2_fu_2249_p2() {
    tmp_7_3_0_0_2_fu_2249_p2 = (!tmp_7_3_0_0_2_fu_2249_p0.read().is_01() || !tmp_7_3_0_0_2_fu_2249_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_3_0_0_2_fu_2249_p0.read()) * sc_bigint<8>(tmp_7_3_0_0_2_fu_2249_p1.read());
}

void matrix_conv::thread_tmp_7_3_0_1_1_fu_1966_p0() {
    tmp_7_3_0_1_1_fu_1966_p0 =  (sc_lv<8>) (tmp_2_0_2_1_fu_1944_p1.read());
}

void matrix_conv::thread_tmp_7_3_0_1_1_fu_1966_p1() {
    tmp_7_3_0_1_1_fu_1966_p1 =  (sc_lv<8>) (tmp_3_0_0_1_1_fu_1862_p1.read());
}

void matrix_conv::thread_tmp_7_3_0_1_1_fu_1966_p2() {
    tmp_7_3_0_1_1_fu_1966_p2 = (!tmp_7_3_0_1_1_fu_1966_p0.read().is_01() || !tmp_7_3_0_1_1_fu_1966_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_3_0_1_1_fu_1966_p0.read()) * sc_bigint<8>(tmp_7_3_0_1_1_fu_1966_p1.read());
}

void matrix_conv::thread_tmp_7_3_0_2_1_fu_1980_p0() {
    tmp_7_3_0_2_1_fu_1980_p0 =  (sc_lv<8>) (tmp_3_0_2_1_fu_1976_p1.read());
}

void matrix_conv::thread_tmp_7_3_0_2_1_fu_1980_p1() {
    tmp_7_3_0_2_1_fu_1980_p1 =  (sc_lv<8>) (tmp_3_0_0_2_1_fu_1880_p1.read());
}

void matrix_conv::thread_tmp_7_3_0_2_1_fu_1980_p2() {
    tmp_7_3_0_2_1_fu_1980_p2 = (!tmp_7_3_0_2_1_fu_1980_p0.read().is_01() || !tmp_7_3_0_2_1_fu_1980_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_3_0_2_1_fu_1980_p0.read()) * sc_bigint<8>(tmp_7_3_0_2_1_fu_1980_p1.read());
}

void matrix_conv::thread_tmp_7_3_1_0_2_fu_2259_p0() {
    tmp_7_3_1_0_2_fu_2259_p0 =  (sc_lv<8>) (tmp_1_1_2_2_fu_2175_p1.read());
}

void matrix_conv::thread_tmp_7_3_1_0_2_fu_2259_p1() {
    tmp_7_3_1_0_2_fu_2259_p1 =  (sc_lv<8>) (tmp_3_0_0_0_2_fu_2076_p1.read());
}

void matrix_conv::thread_tmp_7_3_1_0_2_fu_2259_p2() {
    tmp_7_3_1_0_2_fu_2259_p2 = (!tmp_7_3_1_0_2_fu_2259_p0.read().is_01() || !tmp_7_3_1_0_2_fu_2259_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_3_1_0_2_fu_2259_p0.read()) * sc_bigint<8>(tmp_7_3_1_0_2_fu_2259_p1.read());
}

void matrix_conv::thread_tmp_7_3_1_1_1_fu_2265_p0() {
    tmp_7_3_1_1_1_fu_2265_p0 =  (sc_lv<8>) (tmp_2_0_2_2_fu_2205_p1.read());
}

void matrix_conv::thread_tmp_7_3_1_1_1_fu_2265_p1() {
    tmp_7_3_1_1_1_fu_2265_p1 =  (sc_lv<8>) (tmp_3_0_0_1_1_reg_6604.read());
}

void matrix_conv::thread_tmp_7_3_1_1_1_fu_2265_p2() {
    tmp_7_3_1_1_1_fu_2265_p2 = (!tmp_7_3_1_1_1_fu_2265_p0.read().is_01() || !tmp_7_3_1_1_1_fu_2265_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_3_1_1_1_fu_2265_p0.read()) * sc_bigint<8>(tmp_7_3_1_1_1_fu_2265_p1.read());
}

void matrix_conv::thread_tmp_7_3_1_2_1_fu_2270_p0() {
    tmp_7_3_1_2_1_fu_2270_p0 =  (sc_lv<8>) (tmp_3_0_2_2_fu_2255_p1.read());
}

void matrix_conv::thread_tmp_7_3_1_2_1_fu_2270_p1() {
    tmp_7_3_1_2_1_fu_2270_p1 =  (sc_lv<8>) (tmp_3_0_0_2_1_reg_6671.read());
}

void matrix_conv::thread_tmp_7_3_1_2_1_fu_2270_p2() {
    tmp_7_3_1_2_1_fu_2270_p2 = (!tmp_7_3_1_2_1_fu_2270_p0.read().is_01() || !tmp_7_3_1_2_1_fu_2270_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_3_1_2_1_fu_2270_p0.read()) * sc_bigint<8>(tmp_7_3_1_2_1_fu_2270_p1.read());
}

void matrix_conv::thread_tmp_7_3_1_fu_1986_p0() {
    tmp_7_3_1_fu_1986_p0 =  (sc_lv<8>) (tmp_1_0_2_1_fu_1912_p1.read());
}

void matrix_conv::thread_tmp_7_3_1_fu_1986_p1() {
    tmp_7_3_1_fu_1986_p1 =  (sc_lv<8>) (tmp_3_fu_1840_p1.read());
}

void matrix_conv::thread_tmp_7_3_1_fu_1986_p2() {
    tmp_7_3_1_fu_1986_p2 = (!tmp_7_3_1_fu_1986_p0.read().is_01() || !tmp_7_3_1_fu_1986_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_3_1_fu_1986_p0.read()) * sc_bigint<8>(tmp_7_3_1_fu_1986_p1.read());
}

void matrix_conv::thread_tmp_7_3_2_0_2_fu_2739_p0() {
    tmp_7_3_2_0_2_fu_2739_p0 =  (sc_lv<8>) (tmp_1_2_2_2_fu_2648_p1.read());
}

void matrix_conv::thread_tmp_7_3_2_0_2_fu_2739_p1() {
    tmp_7_3_2_0_2_fu_2739_p1 =  (sc_lv<8>) (tmp_3_0_0_0_2_reg_7043.read());
}

void matrix_conv::thread_tmp_7_3_2_0_2_fu_2739_p2() {
    tmp_7_3_2_0_2_fu_2739_p2 = (!tmp_7_3_2_0_2_fu_2739_p0.read().is_01() || !tmp_7_3_2_0_2_fu_2739_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_3_2_0_2_fu_2739_p0.read()) * sc_bigint<8>(tmp_7_3_2_0_2_fu_2739_p1.read());
}

void matrix_conv::thread_tmp_7_3_2_1_1_fu_2284_p0() {
    tmp_7_3_2_1_1_fu_2284_p0 =  (sc_lv<8>) (tmp_2_1_2_2_fu_2225_p1.read());
}

void matrix_conv::thread_tmp_7_3_2_1_1_fu_2284_p1() {
    tmp_7_3_2_1_1_fu_2284_p1 =  (sc_lv<8>) (tmp_3_0_0_1_1_reg_6604.read());
}

void matrix_conv::thread_tmp_7_3_2_1_1_fu_2284_p2() {
    tmp_7_3_2_1_1_fu_2284_p2 = (!tmp_7_3_2_1_1_fu_2284_p0.read().is_01() || !tmp_7_3_2_1_1_fu_2284_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_3_2_1_1_fu_2284_p0.read()) * sc_bigint<8>(tmp_7_3_2_1_1_fu_2284_p1.read());
}

void matrix_conv::thread_tmp_7_3_2_2_1_fu_2289_p0() {
    tmp_7_3_2_2_1_fu_2289_p0 =  (sc_lv<8>) (tmp_3_1_2_2_fu_2275_p1.read());
}

void matrix_conv::thread_tmp_7_3_2_2_1_fu_2289_p1() {
    tmp_7_3_2_2_1_fu_2289_p1 =  (sc_lv<8>) (tmp_3_0_0_2_1_reg_6671.read());
}

void matrix_conv::thread_tmp_7_3_2_2_1_fu_2289_p2() {
    tmp_7_3_2_2_1_fu_2289_p2 = (!tmp_7_3_2_2_1_fu_2289_p0.read().is_01() || !tmp_7_3_2_2_1_fu_2289_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_3_2_2_1_fu_2289_p0.read()) * sc_bigint<8>(tmp_7_3_2_2_1_fu_2289_p1.read());
}

void matrix_conv::thread_tmp_7_3_2_2_9_fu_2973_p1() {
    tmp_7_3_2_2_9_fu_2973_p1 = esl_sext<16,8>(a_9_q0.read());
}

void matrix_conv::thread_tmp_7_3_2_fu_2279_p0() {
    tmp_7_3_2_fu_2279_p0 =  (sc_lv<8>) (tmp_1_0_2_2_fu_2155_p1.read());
}

void matrix_conv::thread_tmp_7_3_2_fu_2279_p1() {
    tmp_7_3_2_fu_2279_p1 =  (sc_lv<8>) (tmp_3_reg_6534.read());
}

void matrix_conv::thread_tmp_7_3_2_fu_2279_p2() {
    tmp_7_3_2_fu_2279_p2 = (!tmp_7_3_2_fu_2279_p0.read().is_01() || !tmp_7_3_2_fu_2279_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_3_2_fu_2279_p0.read()) * sc_bigint<8>(tmp_7_3_2_fu_2279_p1.read());
}

void matrix_conv::thread_tmp_7_3_3_0_2_fu_2748_p0() {
    tmp_7_3_3_0_2_fu_2748_p0 =  (sc_lv<8>) (tmp_1_3_2_2_fu_2667_p1.read());
}

void matrix_conv::thread_tmp_7_3_3_0_2_fu_2748_p1() {
    tmp_7_3_3_0_2_fu_2748_p1 =  (sc_lv<8>) (tmp_3_0_0_0_2_reg_7043.read());
}

void matrix_conv::thread_tmp_7_3_3_0_2_fu_2748_p2() {
    tmp_7_3_3_0_2_fu_2748_p2 = (!tmp_7_3_3_0_2_fu_2748_p0.read().is_01() || !tmp_7_3_3_0_2_fu_2748_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_3_3_0_2_fu_2748_p0.read()) * sc_bigint<8>(tmp_7_3_3_0_2_fu_2748_p1.read());
}

void matrix_conv::thread_tmp_7_3_3_1_1_fu_2753_p0() {
    tmp_7_3_3_1_1_fu_2753_p0 =  (sc_lv<8>) (tmp_2_2_2_2_fu_2696_p1.read());
}

void matrix_conv::thread_tmp_7_3_3_1_1_fu_2753_p1() {
    tmp_7_3_3_1_1_fu_2753_p1 =  (sc_lv<8>) (tmp_3_0_0_1_1_reg_6604.read());
}

void matrix_conv::thread_tmp_7_3_3_1_1_fu_2753_p2() {
    tmp_7_3_3_1_1_fu_2753_p2 = (!tmp_7_3_3_1_1_fu_2753_p0.read().is_01() || !tmp_7_3_3_1_1_fu_2753_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_3_3_1_1_fu_2753_p0.read()) * sc_bigint<8>(tmp_7_3_3_1_1_fu_2753_p1.read());
}

void matrix_conv::thread_tmp_7_3_3_2_1_fu_2758_p0() {
    tmp_7_3_3_2_1_fu_2758_p0 =  (sc_lv<8>) (tmp_3_2_2_2_fu_2744_p1.read());
}

void matrix_conv::thread_tmp_7_3_3_2_1_fu_2758_p1() {
    tmp_7_3_3_2_1_fu_2758_p1 =  (sc_lv<8>) (tmp_3_0_0_2_1_reg_6671.read());
}

void matrix_conv::thread_tmp_7_3_3_2_1_fu_2758_p2() {
    tmp_7_3_3_2_1_fu_2758_p2 = (!tmp_7_3_3_2_1_fu_2758_p0.read().is_01() || !tmp_7_3_3_2_1_fu_2758_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_3_3_2_1_fu_2758_p0.read()) * sc_bigint<8>(tmp_7_3_3_2_1_fu_2758_p1.read());
}

void matrix_conv::thread_tmp_7_3_3_fu_2294_p0() {
    tmp_7_3_3_fu_2294_p0 =  (sc_lv<8>) (tmp_1_1_2_2_fu_2175_p1.read());
}

void matrix_conv::thread_tmp_7_3_3_fu_2294_p1() {
    tmp_7_3_3_fu_2294_p1 =  (sc_lv<8>) (tmp_3_reg_6534.read());
}

void matrix_conv::thread_tmp_7_3_3_fu_2294_p2() {
    tmp_7_3_3_fu_2294_p2 = (!tmp_7_3_3_fu_2294_p0.read().is_01() || !tmp_7_3_3_fu_2294_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_3_3_fu_2294_p0.read()) * sc_bigint<8>(tmp_7_3_3_fu_2294_p1.read());
}

void matrix_conv::thread_tmp_7_3_4_0_2_fu_3323_p0() {
    tmp_7_3_4_0_2_fu_3323_p0 =  (sc_lv<8>) (tmp_1_4_2_2_fu_3156_p1.read());
}

void matrix_conv::thread_tmp_7_3_4_0_2_fu_3323_p1() {
    tmp_7_3_4_0_2_fu_3323_p1 =  (sc_lv<8>) (tmp_3_0_0_0_2_reg_7043.read());
}

void matrix_conv::thread_tmp_7_3_4_0_2_fu_3323_p2() {
    tmp_7_3_4_0_2_fu_3323_p2 = (!tmp_7_3_4_0_2_fu_3323_p0.read().is_01() || !tmp_7_3_4_0_2_fu_3323_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_3_4_0_2_fu_3323_p0.read()) * sc_bigint<8>(tmp_7_3_4_0_2_fu_3323_p1.read());
}

void matrix_conv::thread_tmp_7_3_4_1_1_fu_2772_p0() {
    tmp_7_3_4_1_1_fu_2772_p0 =  (sc_lv<8>) (tmp_2_3_2_2_fu_2715_p1.read());
}

void matrix_conv::thread_tmp_7_3_4_1_1_fu_2772_p1() {
    tmp_7_3_4_1_1_fu_2772_p1 =  (sc_lv<8>) (tmp_3_0_0_1_1_reg_6604.read());
}

void matrix_conv::thread_tmp_7_3_4_1_1_fu_2772_p2() {
    tmp_7_3_4_1_1_fu_2772_p2 = (!tmp_7_3_4_1_1_fu_2772_p0.read().is_01() || !tmp_7_3_4_1_1_fu_2772_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_3_4_1_1_fu_2772_p0.read()) * sc_bigint<8>(tmp_7_3_4_1_1_fu_2772_p1.read());
}

void matrix_conv::thread_tmp_7_3_4_2_1_fu_2777_p0() {
    tmp_7_3_4_2_1_fu_2777_p0 =  (sc_lv<8>) (tmp_3_3_2_2_fu_2763_p1.read());
}

void matrix_conv::thread_tmp_7_3_4_2_1_fu_2777_p1() {
    tmp_7_3_4_2_1_fu_2777_p1 =  (sc_lv<8>) (tmp_3_0_0_2_1_reg_6671.read());
}

void matrix_conv::thread_tmp_7_3_4_2_1_fu_2777_p2() {
    tmp_7_3_4_2_1_fu_2777_p2 = (!tmp_7_3_4_2_1_fu_2777_p0.read().is_01() || !tmp_7_3_4_2_1_fu_2777_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_3_4_2_1_fu_2777_p0.read()) * sc_bigint<8>(tmp_7_3_4_2_1_fu_2777_p1.read());
}

void matrix_conv::thread_tmp_7_3_4_fu_2767_p0() {
    tmp_7_3_4_fu_2767_p0 =  (sc_lv<8>) (tmp_1_2_2_2_fu_2648_p1.read());
}

void matrix_conv::thread_tmp_7_3_4_fu_2767_p1() {
    tmp_7_3_4_fu_2767_p1 =  (sc_lv<8>) (tmp_3_reg_6534.read());
}

void matrix_conv::thread_tmp_7_3_4_fu_2767_p2() {
    tmp_7_3_4_fu_2767_p2 = (!tmp_7_3_4_fu_2767_p0.read().is_01() || !tmp_7_3_4_fu_2767_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_3_4_fu_2767_p0.read()) * sc_bigint<8>(tmp_7_3_4_fu_2767_p1.read());
}

void matrix_conv::thread_tmp_7_3_5_0_2_fu_3332_p0() {
    tmp_7_3_5_0_2_fu_3332_p0 =  (sc_lv<8>) (tmp_1_5_2_2_fu_3175_p1.read());
}

void matrix_conv::thread_tmp_7_3_5_0_2_fu_3332_p1() {
    tmp_7_3_5_0_2_fu_3332_p1 =  (sc_lv<8>) (tmp_3_0_0_0_2_reg_7043.read());
}

void matrix_conv::thread_tmp_7_3_5_0_2_fu_3332_p2() {
    tmp_7_3_5_0_2_fu_3332_p2 = (!tmp_7_3_5_0_2_fu_3332_p0.read().is_01() || !tmp_7_3_5_0_2_fu_3332_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_3_5_0_2_fu_3332_p0.read()) * sc_bigint<8>(tmp_7_3_5_0_2_fu_3332_p1.read());
}

void matrix_conv::thread_tmp_7_3_5_1_1_fu_3337_p0() {
    tmp_7_3_5_1_1_fu_3337_p0 =  (sc_lv<8>) (tmp_2_4_2_2_fu_3242_p1.read());
}

void matrix_conv::thread_tmp_7_3_5_1_1_fu_3337_p1() {
    tmp_7_3_5_1_1_fu_3337_p1 =  (sc_lv<8>) (tmp_3_0_0_1_1_reg_6604.read());
}

void matrix_conv::thread_tmp_7_3_5_1_1_fu_3337_p2() {
    tmp_7_3_5_1_1_fu_3337_p2 = (!tmp_7_3_5_1_1_fu_3337_p0.read().is_01() || !tmp_7_3_5_1_1_fu_3337_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_3_5_1_1_fu_3337_p0.read()) * sc_bigint<8>(tmp_7_3_5_1_1_fu_3337_p1.read());
}

void matrix_conv::thread_tmp_7_3_5_2_1_fu_3342_p0() {
    tmp_7_3_5_2_1_fu_3342_p0 =  (sc_lv<8>) (tmp_3_4_2_2_fu_3328_p1.read());
}

void matrix_conv::thread_tmp_7_3_5_2_1_fu_3342_p1() {
    tmp_7_3_5_2_1_fu_3342_p1 =  (sc_lv<8>) (tmp_3_0_0_2_1_reg_6671.read());
}

void matrix_conv::thread_tmp_7_3_5_2_1_fu_3342_p2() {
    tmp_7_3_5_2_1_fu_3342_p2 = (!tmp_7_3_5_2_1_fu_3342_p0.read().is_01() || !tmp_7_3_5_2_1_fu_3342_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_3_5_2_1_fu_3342_p0.read()) * sc_bigint<8>(tmp_7_3_5_2_1_fu_3342_p1.read());
}

void matrix_conv::thread_tmp_7_3_5_fu_2782_p0() {
    tmp_7_3_5_fu_2782_p0 =  (sc_lv<8>) (tmp_1_3_2_2_fu_2667_p1.read());
}

void matrix_conv::thread_tmp_7_3_5_fu_2782_p1() {
    tmp_7_3_5_fu_2782_p1 =  (sc_lv<8>) (tmp_3_reg_6534.read());
}

void matrix_conv::thread_tmp_7_3_5_fu_2782_p2() {
    tmp_7_3_5_fu_2782_p2 = (!tmp_7_3_5_fu_2782_p0.read().is_01() || !tmp_7_3_5_fu_2782_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_3_5_fu_2782_p0.read()) * sc_bigint<8>(tmp_7_3_5_fu_2782_p1.read());
}

void matrix_conv::thread_tmp_7_3_6_0_2_fu_3892_p0() {
    tmp_7_3_6_0_2_fu_3892_p0 =  (sc_lv<8>) (tmp_1_6_2_2_fu_3785_p1.read());
}

void matrix_conv::thread_tmp_7_3_6_0_2_fu_3892_p1() {
    tmp_7_3_6_0_2_fu_3892_p1 =  (sc_lv<8>) (tmp_3_0_0_0_2_reg_7043.read());
}

void matrix_conv::thread_tmp_7_3_6_0_2_fu_3892_p2() {
    tmp_7_3_6_0_2_fu_3892_p2 = (!tmp_7_3_6_0_2_fu_3892_p0.read().is_01() || !tmp_7_3_6_0_2_fu_3892_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_3_6_0_2_fu_3892_p0.read()) * sc_bigint<8>(tmp_7_3_6_0_2_fu_3892_p1.read());
}

void matrix_conv::thread_tmp_7_3_6_1_1_fu_3356_p0() {
    tmp_7_3_6_1_1_fu_3356_p0 =  (sc_lv<8>) (tmp_2_5_2_2_fu_3261_p1.read());
}

void matrix_conv::thread_tmp_7_3_6_1_1_fu_3356_p1() {
    tmp_7_3_6_1_1_fu_3356_p1 =  (sc_lv<8>) (tmp_3_0_0_1_1_reg_6604.read());
}

void matrix_conv::thread_tmp_7_3_6_1_1_fu_3356_p2() {
    tmp_7_3_6_1_1_fu_3356_p2 = (!tmp_7_3_6_1_1_fu_3356_p0.read().is_01() || !tmp_7_3_6_1_1_fu_3356_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_3_6_1_1_fu_3356_p0.read()) * sc_bigint<8>(tmp_7_3_6_1_1_fu_3356_p1.read());
}

void matrix_conv::thread_tmp_7_3_6_2_1_fu_3361_p0() {
    tmp_7_3_6_2_1_fu_3361_p0 =  (sc_lv<8>) (tmp_3_5_2_2_fu_3347_p1.read());
}

void matrix_conv::thread_tmp_7_3_6_2_1_fu_3361_p1() {
    tmp_7_3_6_2_1_fu_3361_p1 =  (sc_lv<8>) (tmp_3_0_0_2_1_reg_6671.read());
}

void matrix_conv::thread_tmp_7_3_6_2_1_fu_3361_p2() {
    tmp_7_3_6_2_1_fu_3361_p2 = (!tmp_7_3_6_2_1_fu_3361_p0.read().is_01() || !tmp_7_3_6_2_1_fu_3361_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_3_6_2_1_fu_3361_p0.read()) * sc_bigint<8>(tmp_7_3_6_2_1_fu_3361_p1.read());
}

void matrix_conv::thread_tmp_7_3_6_fu_3351_p0() {
    tmp_7_3_6_fu_3351_p0 =  (sc_lv<8>) (tmp_1_4_2_2_fu_3156_p1.read());
}

void matrix_conv::thread_tmp_7_3_6_fu_3351_p1() {
    tmp_7_3_6_fu_3351_p1 =  (sc_lv<8>) (tmp_3_reg_6534.read());
}

void matrix_conv::thread_tmp_7_3_6_fu_3351_p2() {
    tmp_7_3_6_fu_3351_p2 = (!tmp_7_3_6_fu_3351_p0.read().is_01() || !tmp_7_3_6_fu_3351_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_3_6_fu_3351_p0.read()) * sc_bigint<8>(tmp_7_3_6_fu_3351_p1.read());
}

void matrix_conv::thread_tmp_7_3_7_0_2_fu_3901_p0() {
    tmp_7_3_7_0_2_fu_3901_p0 = a_3_q1.read();
}

void matrix_conv::thread_tmp_7_3_7_0_2_fu_3901_p1() {
    tmp_7_3_7_0_2_fu_3901_p1 =  (sc_lv<8>) (tmp_3_0_0_0_2_reg_7043.read());
}

void matrix_conv::thread_tmp_7_3_7_0_2_fu_3901_p2() {
    tmp_7_3_7_0_2_fu_3901_p2 = (!tmp_7_3_7_0_2_fu_3901_p0.read().is_01() || !tmp_7_3_7_0_2_fu_3901_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_3_7_0_2_fu_3901_p0.read()) * sc_bigint<8>(tmp_7_3_7_0_2_fu_3901_p1.read());
}

void matrix_conv::thread_tmp_7_3_7_1_1_fu_3906_p0() {
    tmp_7_3_7_1_1_fu_3906_p0 =  (sc_lv<8>) (tmp_2_6_2_2_fu_3841_p1.read());
}

void matrix_conv::thread_tmp_7_3_7_1_1_fu_3906_p1() {
    tmp_7_3_7_1_1_fu_3906_p1 =  (sc_lv<8>) (tmp_3_0_0_1_1_reg_6604.read());
}

void matrix_conv::thread_tmp_7_3_7_1_1_fu_3906_p2() {
    tmp_7_3_7_1_1_fu_3906_p2 = (!tmp_7_3_7_1_1_fu_3906_p0.read().is_01() || !tmp_7_3_7_1_1_fu_3906_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_3_7_1_1_fu_3906_p0.read()) * sc_bigint<8>(tmp_7_3_7_1_1_fu_3906_p1.read());
}

void matrix_conv::thread_tmp_7_3_7_2_1_fu_3911_p0() {
    tmp_7_3_7_2_1_fu_3911_p0 =  (sc_lv<8>) (tmp_3_6_2_2_fu_3897_p1.read());
}

void matrix_conv::thread_tmp_7_3_7_2_1_fu_3911_p1() {
    tmp_7_3_7_2_1_fu_3911_p1 =  (sc_lv<8>) (tmp_3_0_0_2_1_reg_6671.read());
}

void matrix_conv::thread_tmp_7_3_7_2_1_fu_3911_p2() {
    tmp_7_3_7_2_1_fu_3911_p2 = (!tmp_7_3_7_2_1_fu_3911_p0.read().is_01() || !tmp_7_3_7_2_1_fu_3911_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_3_7_2_1_fu_3911_p0.read()) * sc_bigint<8>(tmp_7_3_7_2_1_fu_3911_p1.read());
}

void matrix_conv::thread_tmp_7_3_7_fu_3366_p0() {
    tmp_7_3_7_fu_3366_p0 =  (sc_lv<8>) (tmp_1_5_2_2_fu_3175_p1.read());
}

void matrix_conv::thread_tmp_7_3_7_fu_3366_p1() {
    tmp_7_3_7_fu_3366_p1 =  (sc_lv<8>) (tmp_3_reg_6534.read());
}

void matrix_conv::thread_tmp_7_3_7_fu_3366_p2() {
    tmp_7_3_7_fu_3366_p2 = (!tmp_7_3_7_fu_3366_p0.read().is_01() || !tmp_7_3_7_fu_3366_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_3_7_fu_3366_p0.read()) * sc_bigint<8>(tmp_7_3_7_fu_3366_p1.read());
}

void matrix_conv::thread_tmp_7_3_fu_1960_p0() {
    tmp_7_3_fu_1960_p0 = a_3_q0.read();
}

void matrix_conv::thread_tmp_7_3_fu_1960_p1() {
    tmp_7_3_fu_1960_p1 =  (sc_lv<8>) (tmp_3_fu_1840_p1.read());
}

void matrix_conv::thread_tmp_7_3_fu_1960_p2() {
    tmp_7_3_fu_1960_p2 = (!tmp_7_3_fu_1960_p0.read().is_01() || !tmp_7_3_fu_1960_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_3_fu_1960_p0.read()) * sc_bigint<8>(tmp_7_3_fu_1960_p1.read());
}

void matrix_conv::thread_tmp_7_4_0_0_2_fu_2299_p0() {
    tmp_7_4_0_0_2_fu_2299_p0 =  (sc_lv<8>) (tmp_2_0_2_2_fu_2205_p1.read());
}

void matrix_conv::thread_tmp_7_4_0_0_2_fu_2299_p1() {
    tmp_7_4_0_0_2_fu_2299_p1 =  (sc_lv<8>) (tmp_3_0_0_0_2_fu_2076_p1.read());
}

void matrix_conv::thread_tmp_7_4_0_0_2_fu_2299_p2() {
    tmp_7_4_0_0_2_fu_2299_p2 = (!tmp_7_4_0_0_2_fu_2299_p0.read().is_01() || !tmp_7_4_0_0_2_fu_2299_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_4_0_0_2_fu_2299_p0.read()) * sc_bigint<8>(tmp_7_4_0_0_2_fu_2299_p1.read());
}

void matrix_conv::thread_tmp_7_4_0_1_1_fu_1998_p0() {
    tmp_7_4_0_1_1_fu_1998_p0 =  (sc_lv<8>) (tmp_3_0_2_1_fu_1976_p1.read());
}

void matrix_conv::thread_tmp_7_4_0_1_1_fu_1998_p1() {
    tmp_7_4_0_1_1_fu_1998_p1 =  (sc_lv<8>) (tmp_3_0_0_1_1_fu_1862_p1.read());
}

void matrix_conv::thread_tmp_7_4_0_1_1_fu_1998_p2() {
    tmp_7_4_0_1_1_fu_1998_p2 = (!tmp_7_4_0_1_1_fu_1998_p0.read().is_01() || !tmp_7_4_0_1_1_fu_1998_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_4_0_1_1_fu_1998_p0.read()) * sc_bigint<8>(tmp_7_4_0_1_1_fu_1998_p1.read());
}

void matrix_conv::thread_tmp_7_4_0_2_1_fu_2008_p0() {
    tmp_7_4_0_2_1_fu_2008_p0 =  (sc_lv<8>) (tmp_4_0_2_1_fu_2004_p1.read());
}

void matrix_conv::thread_tmp_7_4_0_2_1_fu_2008_p1() {
    tmp_7_4_0_2_1_fu_2008_p1 =  (sc_lv<8>) (tmp_3_0_0_2_1_fu_1880_p1.read());
}

void matrix_conv::thread_tmp_7_4_0_2_1_fu_2008_p2() {
    tmp_7_4_0_2_1_fu_2008_p2 = (!tmp_7_4_0_2_1_fu_2008_p0.read().is_01() || !tmp_7_4_0_2_1_fu_2008_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_4_0_2_1_fu_2008_p0.read()) * sc_bigint<8>(tmp_7_4_0_2_1_fu_2008_p1.read());
}

void matrix_conv::thread_tmp_7_4_1_0_2_fu_2312_p0() {
    tmp_7_4_1_0_2_fu_2312_p0 =  (sc_lv<8>) (tmp_2_1_2_2_fu_2225_p1.read());
}

void matrix_conv::thread_tmp_7_4_1_0_2_fu_2312_p1() {
    tmp_7_4_1_0_2_fu_2312_p1 =  (sc_lv<8>) (tmp_3_0_0_0_2_fu_2076_p1.read());
}

void matrix_conv::thread_tmp_7_4_1_0_2_fu_2312_p2() {
    tmp_7_4_1_0_2_fu_2312_p2 = (!tmp_7_4_1_0_2_fu_2312_p0.read().is_01() || !tmp_7_4_1_0_2_fu_2312_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_4_1_0_2_fu_2312_p0.read()) * sc_bigint<8>(tmp_7_4_1_0_2_fu_2312_p1.read());
}

void matrix_conv::thread_tmp_7_4_1_1_1_fu_2318_p0() {
    tmp_7_4_1_1_1_fu_2318_p0 =  (sc_lv<8>) (tmp_3_0_2_2_fu_2255_p1.read());
}

void matrix_conv::thread_tmp_7_4_1_1_1_fu_2318_p1() {
    tmp_7_4_1_1_1_fu_2318_p1 =  (sc_lv<8>) (tmp_3_0_0_1_1_reg_6604.read());
}

void matrix_conv::thread_tmp_7_4_1_1_1_fu_2318_p2() {
    tmp_7_4_1_1_1_fu_2318_p2 = (!tmp_7_4_1_1_1_fu_2318_p0.read().is_01() || !tmp_7_4_1_1_1_fu_2318_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_4_1_1_1_fu_2318_p0.read()) * sc_bigint<8>(tmp_7_4_1_1_1_fu_2318_p1.read());
}

void matrix_conv::thread_tmp_7_4_1_2_1_fu_2323_p0() {
    tmp_7_4_1_2_1_fu_2323_p0 =  (sc_lv<8>) (tmp_4_0_2_2_fu_2308_p1.read());
}

void matrix_conv::thread_tmp_7_4_1_2_1_fu_2323_p1() {
    tmp_7_4_1_2_1_fu_2323_p1 =  (sc_lv<8>) (tmp_3_0_0_2_1_reg_6671.read());
}

void matrix_conv::thread_tmp_7_4_1_2_1_fu_2323_p2() {
    tmp_7_4_1_2_1_fu_2323_p2 = (!tmp_7_4_1_2_1_fu_2323_p0.read().is_01() || !tmp_7_4_1_2_1_fu_2323_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_4_1_2_1_fu_2323_p0.read()) * sc_bigint<8>(tmp_7_4_1_2_1_fu_2323_p1.read());
}

void matrix_conv::thread_tmp_7_4_1_fu_2014_p0() {
    tmp_7_4_1_fu_2014_p0 =  (sc_lv<8>) (tmp_2_0_2_1_fu_1944_p1.read());
}

void matrix_conv::thread_tmp_7_4_1_fu_2014_p1() {
    tmp_7_4_1_fu_2014_p1 =  (sc_lv<8>) (tmp_3_fu_1840_p1.read());
}

void matrix_conv::thread_tmp_7_4_1_fu_2014_p2() {
    tmp_7_4_1_fu_2014_p2 = (!tmp_7_4_1_fu_2014_p0.read().is_01() || !tmp_7_4_1_fu_2014_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_4_1_fu_2014_p0.read()) * sc_bigint<8>(tmp_7_4_1_fu_2014_p1.read());
}

void matrix_conv::thread_tmp_7_4_2_0_2_fu_2787_p0() {
    tmp_7_4_2_0_2_fu_2787_p0 =  (sc_lv<8>) (tmp_2_2_2_2_fu_2696_p1.read());
}

void matrix_conv::thread_tmp_7_4_2_0_2_fu_2787_p1() {
    tmp_7_4_2_0_2_fu_2787_p1 =  (sc_lv<8>) (tmp_3_0_0_0_2_reg_7043.read());
}

void matrix_conv::thread_tmp_7_4_2_0_2_fu_2787_p2() {
    tmp_7_4_2_0_2_fu_2787_p2 = (!tmp_7_4_2_0_2_fu_2787_p0.read().is_01() || !tmp_7_4_2_0_2_fu_2787_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_4_2_0_2_fu_2787_p0.read()) * sc_bigint<8>(tmp_7_4_2_0_2_fu_2787_p1.read());
}

void matrix_conv::thread_tmp_7_4_2_1_1_fu_2337_p0() {
    tmp_7_4_2_1_1_fu_2337_p0 =  (sc_lv<8>) (tmp_3_1_2_2_fu_2275_p1.read());
}

void matrix_conv::thread_tmp_7_4_2_1_1_fu_2337_p1() {
    tmp_7_4_2_1_1_fu_2337_p1 =  (sc_lv<8>) (tmp_3_0_0_1_1_reg_6604.read());
}

void matrix_conv::thread_tmp_7_4_2_1_1_fu_2337_p2() {
    tmp_7_4_2_1_1_fu_2337_p2 = (!tmp_7_4_2_1_1_fu_2337_p0.read().is_01() || !tmp_7_4_2_1_1_fu_2337_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_4_2_1_1_fu_2337_p0.read()) * sc_bigint<8>(tmp_7_4_2_1_1_fu_2337_p1.read());
}

void matrix_conv::thread_tmp_7_4_2_2_10_fu_2992_p1() {
    tmp_7_4_2_2_10_fu_2992_p1 = esl_sext<16,8>(a_9_q1.read());
}

void matrix_conv::thread_tmp_7_4_2_2_1_fu_2342_p0() {
    tmp_7_4_2_2_1_fu_2342_p0 =  (sc_lv<8>) (tmp_4_1_2_2_fu_2328_p1.read());
}

void matrix_conv::thread_tmp_7_4_2_2_1_fu_2342_p1() {
    tmp_7_4_2_2_1_fu_2342_p1 =  (sc_lv<8>) (tmp_3_0_0_2_1_reg_6671.read());
}

void matrix_conv::thread_tmp_7_4_2_2_1_fu_2342_p2() {
    tmp_7_4_2_2_1_fu_2342_p2 = (!tmp_7_4_2_2_1_fu_2342_p0.read().is_01() || !tmp_7_4_2_2_1_fu_2342_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_4_2_2_1_fu_2342_p0.read()) * sc_bigint<8>(tmp_7_4_2_2_1_fu_2342_p1.read());
}

void matrix_conv::thread_tmp_7_4_2_fu_2332_p0() {
    tmp_7_4_2_fu_2332_p0 =  (sc_lv<8>) (tmp_2_0_2_2_fu_2205_p1.read());
}

void matrix_conv::thread_tmp_7_4_2_fu_2332_p1() {
    tmp_7_4_2_fu_2332_p1 =  (sc_lv<8>) (tmp_3_reg_6534.read());
}

void matrix_conv::thread_tmp_7_4_2_fu_2332_p2() {
    tmp_7_4_2_fu_2332_p2 = (!tmp_7_4_2_fu_2332_p0.read().is_01() || !tmp_7_4_2_fu_2332_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_4_2_fu_2332_p0.read()) * sc_bigint<8>(tmp_7_4_2_fu_2332_p1.read());
}

void matrix_conv::thread_tmp_7_4_3_0_2_fu_2796_p0() {
    tmp_7_4_3_0_2_fu_2796_p0 =  (sc_lv<8>) (tmp_2_3_2_2_fu_2715_p1.read());
}

void matrix_conv::thread_tmp_7_4_3_0_2_fu_2796_p1() {
    tmp_7_4_3_0_2_fu_2796_p1 =  (sc_lv<8>) (tmp_3_0_0_0_2_reg_7043.read());
}

void matrix_conv::thread_tmp_7_4_3_0_2_fu_2796_p2() {
    tmp_7_4_3_0_2_fu_2796_p2 = (!tmp_7_4_3_0_2_fu_2796_p0.read().is_01() || !tmp_7_4_3_0_2_fu_2796_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_4_3_0_2_fu_2796_p0.read()) * sc_bigint<8>(tmp_7_4_3_0_2_fu_2796_p1.read());
}

void matrix_conv::thread_tmp_7_4_3_1_1_fu_2801_p0() {
    tmp_7_4_3_1_1_fu_2801_p0 =  (sc_lv<8>) (tmp_3_2_2_2_fu_2744_p1.read());
}

void matrix_conv::thread_tmp_7_4_3_1_1_fu_2801_p1() {
    tmp_7_4_3_1_1_fu_2801_p1 =  (sc_lv<8>) (tmp_3_0_0_1_1_reg_6604.read());
}

void matrix_conv::thread_tmp_7_4_3_1_1_fu_2801_p2() {
    tmp_7_4_3_1_1_fu_2801_p2 = (!tmp_7_4_3_1_1_fu_2801_p0.read().is_01() || !tmp_7_4_3_1_1_fu_2801_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_4_3_1_1_fu_2801_p0.read()) * sc_bigint<8>(tmp_7_4_3_1_1_fu_2801_p1.read());
}

void matrix_conv::thread_tmp_7_4_3_2_1_fu_2806_p0() {
    tmp_7_4_3_2_1_fu_2806_p0 =  (sc_lv<8>) (tmp_4_2_2_2_fu_2792_p1.read());
}

void matrix_conv::thread_tmp_7_4_3_2_1_fu_2806_p1() {
    tmp_7_4_3_2_1_fu_2806_p1 =  (sc_lv<8>) (tmp_3_0_0_2_1_reg_6671.read());
}

void matrix_conv::thread_tmp_7_4_3_2_1_fu_2806_p2() {
    tmp_7_4_3_2_1_fu_2806_p2 = (!tmp_7_4_3_2_1_fu_2806_p0.read().is_01() || !tmp_7_4_3_2_1_fu_2806_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_4_3_2_1_fu_2806_p0.read()) * sc_bigint<8>(tmp_7_4_3_2_1_fu_2806_p1.read());
}

void matrix_conv::thread_tmp_7_4_3_fu_2347_p0() {
    tmp_7_4_3_fu_2347_p0 =  (sc_lv<8>) (tmp_2_1_2_2_fu_2225_p1.read());
}

void matrix_conv::thread_tmp_7_4_3_fu_2347_p1() {
    tmp_7_4_3_fu_2347_p1 =  (sc_lv<8>) (tmp_3_reg_6534.read());
}

void matrix_conv::thread_tmp_7_4_3_fu_2347_p2() {
    tmp_7_4_3_fu_2347_p2 = (!tmp_7_4_3_fu_2347_p0.read().is_01() || !tmp_7_4_3_fu_2347_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_4_3_fu_2347_p0.read()) * sc_bigint<8>(tmp_7_4_3_fu_2347_p1.read());
}

void matrix_conv::thread_tmp_7_4_4_0_2_fu_3409_p0() {
    tmp_7_4_4_0_2_fu_3409_p0 =  (sc_lv<8>) (tmp_2_4_2_2_fu_3242_p1.read());
}

void matrix_conv::thread_tmp_7_4_4_0_2_fu_3409_p1() {
    tmp_7_4_4_0_2_fu_3409_p1 =  (sc_lv<8>) (tmp_3_0_0_0_2_reg_7043.read());
}

void matrix_conv::thread_tmp_7_4_4_0_2_fu_3409_p2() {
    tmp_7_4_4_0_2_fu_3409_p2 = (!tmp_7_4_4_0_2_fu_3409_p0.read().is_01() || !tmp_7_4_4_0_2_fu_3409_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_4_4_0_2_fu_3409_p0.read()) * sc_bigint<8>(tmp_7_4_4_0_2_fu_3409_p1.read());
}

void matrix_conv::thread_tmp_7_4_4_1_1_fu_2820_p0() {
    tmp_7_4_4_1_1_fu_2820_p0 =  (sc_lv<8>) (tmp_3_3_2_2_fu_2763_p1.read());
}

void matrix_conv::thread_tmp_7_4_4_1_1_fu_2820_p1() {
    tmp_7_4_4_1_1_fu_2820_p1 =  (sc_lv<8>) (tmp_3_0_0_1_1_reg_6604.read());
}

void matrix_conv::thread_tmp_7_4_4_1_1_fu_2820_p2() {
    tmp_7_4_4_1_1_fu_2820_p2 = (!tmp_7_4_4_1_1_fu_2820_p0.read().is_01() || !tmp_7_4_4_1_1_fu_2820_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_4_4_1_1_fu_2820_p0.read()) * sc_bigint<8>(tmp_7_4_4_1_1_fu_2820_p1.read());
}

void matrix_conv::thread_tmp_7_4_4_2_1_fu_2825_p0() {
    tmp_7_4_4_2_1_fu_2825_p0 =  (sc_lv<8>) (tmp_4_3_2_2_fu_2811_p1.read());
}

void matrix_conv::thread_tmp_7_4_4_2_1_fu_2825_p1() {
    tmp_7_4_4_2_1_fu_2825_p1 =  (sc_lv<8>) (tmp_3_0_0_2_1_reg_6671.read());
}

void matrix_conv::thread_tmp_7_4_4_2_1_fu_2825_p2() {
    tmp_7_4_4_2_1_fu_2825_p2 = (!tmp_7_4_4_2_1_fu_2825_p0.read().is_01() || !tmp_7_4_4_2_1_fu_2825_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_4_4_2_1_fu_2825_p0.read()) * sc_bigint<8>(tmp_7_4_4_2_1_fu_2825_p1.read());
}

void matrix_conv::thread_tmp_7_4_4_fu_2815_p0() {
    tmp_7_4_4_fu_2815_p0 =  (sc_lv<8>) (tmp_2_2_2_2_fu_2696_p1.read());
}

void matrix_conv::thread_tmp_7_4_4_fu_2815_p1() {
    tmp_7_4_4_fu_2815_p1 =  (sc_lv<8>) (tmp_3_reg_6534.read());
}

void matrix_conv::thread_tmp_7_4_4_fu_2815_p2() {
    tmp_7_4_4_fu_2815_p2 = (!tmp_7_4_4_fu_2815_p0.read().is_01() || !tmp_7_4_4_fu_2815_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_4_4_fu_2815_p0.read()) * sc_bigint<8>(tmp_7_4_4_fu_2815_p1.read());
}

void matrix_conv::thread_tmp_7_4_5_0_2_fu_3418_p0() {
    tmp_7_4_5_0_2_fu_3418_p0 =  (sc_lv<8>) (tmp_2_5_2_2_fu_3261_p1.read());
}

void matrix_conv::thread_tmp_7_4_5_0_2_fu_3418_p1() {
    tmp_7_4_5_0_2_fu_3418_p1 =  (sc_lv<8>) (tmp_3_0_0_0_2_reg_7043.read());
}

void matrix_conv::thread_tmp_7_4_5_0_2_fu_3418_p2() {
    tmp_7_4_5_0_2_fu_3418_p2 = (!tmp_7_4_5_0_2_fu_3418_p0.read().is_01() || !tmp_7_4_5_0_2_fu_3418_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_4_5_0_2_fu_3418_p0.read()) * sc_bigint<8>(tmp_7_4_5_0_2_fu_3418_p1.read());
}

void matrix_conv::thread_tmp_7_4_5_1_1_fu_3423_p0() {
    tmp_7_4_5_1_1_fu_3423_p0 =  (sc_lv<8>) (tmp_3_4_2_2_fu_3328_p1.read());
}

void matrix_conv::thread_tmp_7_4_5_1_1_fu_3423_p1() {
    tmp_7_4_5_1_1_fu_3423_p1 =  (sc_lv<8>) (tmp_3_0_0_1_1_reg_6604.read());
}

void matrix_conv::thread_tmp_7_4_5_1_1_fu_3423_p2() {
    tmp_7_4_5_1_1_fu_3423_p2 = (!tmp_7_4_5_1_1_fu_3423_p0.read().is_01() || !tmp_7_4_5_1_1_fu_3423_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_4_5_1_1_fu_3423_p0.read()) * sc_bigint<8>(tmp_7_4_5_1_1_fu_3423_p1.read());
}

void matrix_conv::thread_tmp_7_4_5_2_1_fu_3428_p0() {
    tmp_7_4_5_2_1_fu_3428_p0 =  (sc_lv<8>) (tmp_4_4_2_2_fu_3414_p1.read());
}

void matrix_conv::thread_tmp_7_4_5_2_1_fu_3428_p1() {
    tmp_7_4_5_2_1_fu_3428_p1 =  (sc_lv<8>) (tmp_3_0_0_2_1_reg_6671.read());
}

void matrix_conv::thread_tmp_7_4_5_2_1_fu_3428_p2() {
    tmp_7_4_5_2_1_fu_3428_p2 = (!tmp_7_4_5_2_1_fu_3428_p0.read().is_01() || !tmp_7_4_5_2_1_fu_3428_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_4_5_2_1_fu_3428_p0.read()) * sc_bigint<8>(tmp_7_4_5_2_1_fu_3428_p1.read());
}

void matrix_conv::thread_tmp_7_4_5_fu_2830_p0() {
    tmp_7_4_5_fu_2830_p0 =  (sc_lv<8>) (tmp_2_3_2_2_fu_2715_p1.read());
}

void matrix_conv::thread_tmp_7_4_5_fu_2830_p1() {
    tmp_7_4_5_fu_2830_p1 =  (sc_lv<8>) (tmp_3_reg_6534.read());
}

void matrix_conv::thread_tmp_7_4_5_fu_2830_p2() {
    tmp_7_4_5_fu_2830_p2 = (!tmp_7_4_5_fu_2830_p0.read().is_01() || !tmp_7_4_5_fu_2830_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_4_5_fu_2830_p0.read()) * sc_bigint<8>(tmp_7_4_5_fu_2830_p1.read());
}

void matrix_conv::thread_tmp_7_4_6_0_2_fu_3948_p0() {
    tmp_7_4_6_0_2_fu_3948_p0 =  (sc_lv<8>) (tmp_2_6_2_2_fu_3841_p1.read());
}

void matrix_conv::thread_tmp_7_4_6_0_2_fu_3948_p1() {
    tmp_7_4_6_0_2_fu_3948_p1 =  (sc_lv<8>) (tmp_3_0_0_0_2_reg_7043.read());
}

void matrix_conv::thread_tmp_7_4_6_0_2_fu_3948_p2() {
    tmp_7_4_6_0_2_fu_3948_p2 = (!tmp_7_4_6_0_2_fu_3948_p0.read().is_01() || !tmp_7_4_6_0_2_fu_3948_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_4_6_0_2_fu_3948_p0.read()) * sc_bigint<8>(tmp_7_4_6_0_2_fu_3948_p1.read());
}

void matrix_conv::thread_tmp_7_4_6_1_1_fu_3442_p0() {
    tmp_7_4_6_1_1_fu_3442_p0 =  (sc_lv<8>) (tmp_3_5_2_2_fu_3347_p1.read());
}

void matrix_conv::thread_tmp_7_4_6_1_1_fu_3442_p1() {
    tmp_7_4_6_1_1_fu_3442_p1 =  (sc_lv<8>) (tmp_3_0_0_1_1_reg_6604.read());
}

void matrix_conv::thread_tmp_7_4_6_1_1_fu_3442_p2() {
    tmp_7_4_6_1_1_fu_3442_p2 = (!tmp_7_4_6_1_1_fu_3442_p0.read().is_01() || !tmp_7_4_6_1_1_fu_3442_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_4_6_1_1_fu_3442_p0.read()) * sc_bigint<8>(tmp_7_4_6_1_1_fu_3442_p1.read());
}

void matrix_conv::thread_tmp_7_4_6_2_1_fu_3447_p0() {
    tmp_7_4_6_2_1_fu_3447_p0 =  (sc_lv<8>) (tmp_4_5_2_2_fu_3433_p1.read());
}

void matrix_conv::thread_tmp_7_4_6_2_1_fu_3447_p1() {
    tmp_7_4_6_2_1_fu_3447_p1 =  (sc_lv<8>) (tmp_3_0_0_2_1_reg_6671.read());
}

void matrix_conv::thread_tmp_7_4_6_2_1_fu_3447_p2() {
    tmp_7_4_6_2_1_fu_3447_p2 = (!tmp_7_4_6_2_1_fu_3447_p0.read().is_01() || !tmp_7_4_6_2_1_fu_3447_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_4_6_2_1_fu_3447_p0.read()) * sc_bigint<8>(tmp_7_4_6_2_1_fu_3447_p1.read());
}

void matrix_conv::thread_tmp_7_4_6_fu_3437_p0() {
    tmp_7_4_6_fu_3437_p0 =  (sc_lv<8>) (tmp_2_4_2_2_fu_3242_p1.read());
}

void matrix_conv::thread_tmp_7_4_6_fu_3437_p1() {
    tmp_7_4_6_fu_3437_p1 =  (sc_lv<8>) (tmp_3_reg_6534.read());
}

void matrix_conv::thread_tmp_7_4_6_fu_3437_p2() {
    tmp_7_4_6_fu_3437_p2 = (!tmp_7_4_6_fu_3437_p0.read().is_01() || !tmp_7_4_6_fu_3437_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_4_6_fu_3437_p0.read()) * sc_bigint<8>(tmp_7_4_6_fu_3437_p1.read());
}

void matrix_conv::thread_tmp_7_4_7_0_2_fu_3957_p0() {
    tmp_7_4_7_0_2_fu_3957_p0 = a_4_q1.read();
}

void matrix_conv::thread_tmp_7_4_7_0_2_fu_3957_p1() {
    tmp_7_4_7_0_2_fu_3957_p1 =  (sc_lv<8>) (tmp_3_0_0_0_2_reg_7043.read());
}

void matrix_conv::thread_tmp_7_4_7_0_2_fu_3957_p2() {
    tmp_7_4_7_0_2_fu_3957_p2 = (!tmp_7_4_7_0_2_fu_3957_p0.read().is_01() || !tmp_7_4_7_0_2_fu_3957_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_4_7_0_2_fu_3957_p0.read()) * sc_bigint<8>(tmp_7_4_7_0_2_fu_3957_p1.read());
}

void matrix_conv::thread_tmp_7_4_7_1_1_fu_3962_p0() {
    tmp_7_4_7_1_1_fu_3962_p0 =  (sc_lv<8>) (tmp_3_6_2_2_fu_3897_p1.read());
}

void matrix_conv::thread_tmp_7_4_7_1_1_fu_3962_p1() {
    tmp_7_4_7_1_1_fu_3962_p1 =  (sc_lv<8>) (tmp_3_0_0_1_1_reg_6604.read());
}

void matrix_conv::thread_tmp_7_4_7_1_1_fu_3962_p2() {
    tmp_7_4_7_1_1_fu_3962_p2 = (!tmp_7_4_7_1_1_fu_3962_p0.read().is_01() || !tmp_7_4_7_1_1_fu_3962_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_4_7_1_1_fu_3962_p0.read()) * sc_bigint<8>(tmp_7_4_7_1_1_fu_3962_p1.read());
}

void matrix_conv::thread_tmp_7_4_7_2_1_fu_3967_p0() {
    tmp_7_4_7_2_1_fu_3967_p0 =  (sc_lv<8>) (tmp_4_6_2_2_fu_3953_p1.read());
}

void matrix_conv::thread_tmp_7_4_7_2_1_fu_3967_p1() {
    tmp_7_4_7_2_1_fu_3967_p1 =  (sc_lv<8>) (tmp_3_0_0_2_1_reg_6671.read());
}

void matrix_conv::thread_tmp_7_4_7_2_1_fu_3967_p2() {
    tmp_7_4_7_2_1_fu_3967_p2 = (!tmp_7_4_7_2_1_fu_3967_p0.read().is_01() || !tmp_7_4_7_2_1_fu_3967_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_4_7_2_1_fu_3967_p0.read()) * sc_bigint<8>(tmp_7_4_7_2_1_fu_3967_p1.read());
}

void matrix_conv::thread_tmp_7_4_7_fu_3452_p0() {
    tmp_7_4_7_fu_3452_p0 =  (sc_lv<8>) (tmp_2_5_2_2_fu_3261_p1.read());
}

void matrix_conv::thread_tmp_7_4_7_fu_3452_p1() {
    tmp_7_4_7_fu_3452_p1 =  (sc_lv<8>) (tmp_3_reg_6534.read());
}

void matrix_conv::thread_tmp_7_4_7_fu_3452_p2() {
    tmp_7_4_7_fu_3452_p2 = (!tmp_7_4_7_fu_3452_p0.read().is_01() || !tmp_7_4_7_fu_3452_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_4_7_fu_3452_p0.read()) * sc_bigint<8>(tmp_7_4_7_fu_3452_p1.read());
}

void matrix_conv::thread_tmp_7_4_fu_1992_p0() {
    tmp_7_4_fu_1992_p0 = a_4_q0.read();
}

void matrix_conv::thread_tmp_7_4_fu_1992_p1() {
    tmp_7_4_fu_1992_p1 =  (sc_lv<8>) (tmp_3_fu_1840_p1.read());
}

void matrix_conv::thread_tmp_7_4_fu_1992_p2() {
    tmp_7_4_fu_1992_p2 = (!tmp_7_4_fu_1992_p0.read().is_01() || !tmp_7_4_fu_1992_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_4_fu_1992_p0.read()) * sc_bigint<8>(tmp_7_4_fu_1992_p1.read());
}

void matrix_conv::thread_tmp_7_5_0_0_2_fu_2352_p0() {
    tmp_7_5_0_0_2_fu_2352_p0 =  (sc_lv<8>) (tmp_3_0_2_2_fu_2255_p1.read());
}

void matrix_conv::thread_tmp_7_5_0_0_2_fu_2352_p1() {
    tmp_7_5_0_0_2_fu_2352_p1 =  (sc_lv<8>) (tmp_3_0_0_0_2_fu_2076_p1.read());
}

void matrix_conv::thread_tmp_7_5_0_0_2_fu_2352_p2() {
    tmp_7_5_0_0_2_fu_2352_p2 = (!tmp_7_5_0_0_2_fu_2352_p0.read().is_01() || !tmp_7_5_0_0_2_fu_2352_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_5_0_0_2_fu_2352_p0.read()) * sc_bigint<8>(tmp_7_5_0_0_2_fu_2352_p1.read());
}

void matrix_conv::thread_tmp_7_5_0_1_1_fu_2026_p0() {
    tmp_7_5_0_1_1_fu_2026_p0 =  (sc_lv<8>) (tmp_4_0_2_1_fu_2004_p1.read());
}

void matrix_conv::thread_tmp_7_5_0_1_1_fu_2026_p1() {
    tmp_7_5_0_1_1_fu_2026_p1 =  (sc_lv<8>) (tmp_3_0_0_1_1_fu_1862_p1.read());
}

void matrix_conv::thread_tmp_7_5_0_1_1_fu_2026_p2() {
    tmp_7_5_0_1_1_fu_2026_p2 = (!tmp_7_5_0_1_1_fu_2026_p0.read().is_01() || !tmp_7_5_0_1_1_fu_2026_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_5_0_1_1_fu_2026_p0.read()) * sc_bigint<8>(tmp_7_5_0_1_1_fu_2026_p1.read());
}

void matrix_conv::thread_tmp_7_5_0_2_1_fu_2036_p0() {
    tmp_7_5_0_2_1_fu_2036_p0 =  (sc_lv<8>) (tmp_5_0_2_1_fu_2032_p1.read());
}

void matrix_conv::thread_tmp_7_5_0_2_1_fu_2036_p1() {
    tmp_7_5_0_2_1_fu_2036_p1 =  (sc_lv<8>) (tmp_3_0_0_2_1_fu_1880_p1.read());
}

void matrix_conv::thread_tmp_7_5_0_2_1_fu_2036_p2() {
    tmp_7_5_0_2_1_fu_2036_p2 = (!tmp_7_5_0_2_1_fu_2036_p0.read().is_01() || !tmp_7_5_0_2_1_fu_2036_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_5_0_2_1_fu_2036_p0.read()) * sc_bigint<8>(tmp_7_5_0_2_1_fu_2036_p1.read());
}

void matrix_conv::thread_tmp_7_5_1_0_2_fu_2378_p0() {
    tmp_7_5_1_0_2_fu_2378_p0 =  (sc_lv<8>) (tmp_3_1_2_2_fu_2275_p1.read());
}

void matrix_conv::thread_tmp_7_5_1_0_2_fu_2378_p1() {
    tmp_7_5_1_0_2_fu_2378_p1 =  (sc_lv<8>) (tmp_3_5_1_0_2_fu_2374_p1.read());
}

void matrix_conv::thread_tmp_7_5_1_0_2_fu_2378_p2() {
    tmp_7_5_1_0_2_fu_2378_p2 = (!tmp_7_5_1_0_2_fu_2378_p0.read().is_01() || !tmp_7_5_1_0_2_fu_2378_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_5_1_0_2_fu_2378_p0.read()) * sc_bigint<8>(tmp_7_5_1_0_2_fu_2378_p1.read());
}

void matrix_conv::thread_tmp_7_5_1_1_1_fu_2384_p0() {
    tmp_7_5_1_1_1_fu_2384_p0 =  (sc_lv<8>) (tmp_4_0_2_2_fu_2308_p1.read());
}

void matrix_conv::thread_tmp_7_5_1_1_1_fu_2384_p1() {
    tmp_7_5_1_1_1_fu_2384_p1 =  (sc_lv<8>) (tmp_3_5_1_1_1_reg_6947.read());
}

void matrix_conv::thread_tmp_7_5_1_1_1_fu_2384_p2() {
    tmp_7_5_1_1_1_fu_2384_p2 = (!tmp_7_5_1_1_1_fu_2384_p0.read().is_01() || !tmp_7_5_1_1_1_fu_2384_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_5_1_1_1_fu_2384_p0.read()) * sc_bigint<8>(tmp_7_5_1_1_1_fu_2384_p1.read());
}

void matrix_conv::thread_tmp_7_5_1_2_1_fu_2389_p0() {
    tmp_7_5_1_2_1_fu_2389_p0 =  (sc_lv<8>) (tmp_5_0_2_2_fu_2361_p1.read());
}

void matrix_conv::thread_tmp_7_5_1_2_1_fu_2389_p1() {
    tmp_7_5_1_2_1_fu_2389_p1 =  (sc_lv<8>) (tmp_3_0_0_2_1_reg_6671.read());
}

void matrix_conv::thread_tmp_7_5_1_2_1_fu_2389_p2() {
    tmp_7_5_1_2_1_fu_2389_p2 = (!tmp_7_5_1_2_1_fu_2389_p0.read().is_01() || !tmp_7_5_1_2_1_fu_2389_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_5_1_2_1_fu_2389_p0.read()) * sc_bigint<8>(tmp_7_5_1_2_1_fu_2389_p1.read());
}

void matrix_conv::thread_tmp_7_5_1_fu_2369_p0() {
    tmp_7_5_1_fu_2369_p0 =  (sc_lv<8>) (tmp_3_0_2_1_reg_6843.read());
}

void matrix_conv::thread_tmp_7_5_1_fu_2369_p1() {
    tmp_7_5_1_fu_2369_p1 =  (sc_lv<8>) (tmp_3_5_1_fu_2365_p1.read());
}

void matrix_conv::thread_tmp_7_5_1_fu_2369_p2() {
    tmp_7_5_1_fu_2369_p2 = (!tmp_7_5_1_fu_2369_p0.read().is_01() || !tmp_7_5_1_fu_2369_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_5_1_fu_2369_p0.read()) * sc_bigint<8>(tmp_7_5_1_fu_2369_p1.read());
}

void matrix_conv::thread_tmp_7_5_2_0_2_fu_2847_p0() {
    tmp_7_5_2_0_2_fu_2847_p0 =  (sc_lv<8>) (tmp_3_2_2_2_fu_2744_p1.read());
}

void matrix_conv::thread_tmp_7_5_2_0_2_fu_2847_p1() {
    tmp_7_5_2_0_2_fu_2847_p1 =  (sc_lv<8>) (tmp_3_5_1_0_2_reg_7642.read());
}

void matrix_conv::thread_tmp_7_5_2_0_2_fu_2847_p2() {
    tmp_7_5_2_0_2_fu_2847_p2 = (!tmp_7_5_2_0_2_fu_2847_p0.read().is_01() || !tmp_7_5_2_0_2_fu_2847_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_5_2_0_2_fu_2847_p0.read()) * sc_bigint<8>(tmp_7_5_2_0_2_fu_2847_p1.read());
}

void matrix_conv::thread_tmp_7_5_2_1_1_fu_2404_p0() {
    tmp_7_5_2_1_1_fu_2404_p0 =  (sc_lv<8>) (tmp_4_1_2_2_fu_2328_p1.read());
}

void matrix_conv::thread_tmp_7_5_2_1_1_fu_2404_p1() {
    tmp_7_5_2_1_1_fu_2404_p1 =  (sc_lv<8>) (tmp_3_5_1_1_1_reg_6947.read());
}

void matrix_conv::thread_tmp_7_5_2_1_1_fu_2404_p2() {
    tmp_7_5_2_1_1_fu_2404_p2 = (!tmp_7_5_2_1_1_fu_2404_p0.read().is_01() || !tmp_7_5_2_1_1_fu_2404_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_5_2_1_1_fu_2404_p0.read()) * sc_bigint<8>(tmp_7_5_2_1_1_fu_2404_p1.read());
}

void matrix_conv::thread_tmp_7_5_2_2_11_fu_3642_p1() {
    tmp_7_5_2_2_11_fu_3642_p1 = esl_sext<16,8>(a_9_q0.read());
}

void matrix_conv::thread_tmp_7_5_2_2_1_fu_2413_p0() {
    tmp_7_5_2_2_1_fu_2413_p0 =  (sc_lv<8>) (tmp_5_1_2_2_fu_2394_p1.read());
}

void matrix_conv::thread_tmp_7_5_2_2_1_fu_2413_p1() {
    tmp_7_5_2_2_1_fu_2413_p1 =  (sc_lv<8>) (tmp_3_5_2_2_1_fu_2409_p1.read());
}

void matrix_conv::thread_tmp_7_5_2_2_1_fu_2413_p2() {
    tmp_7_5_2_2_1_fu_2413_p2 = (!tmp_7_5_2_2_1_fu_2413_p0.read().is_01() || !tmp_7_5_2_2_1_fu_2413_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_5_2_2_1_fu_2413_p0.read()) * sc_bigint<8>(tmp_7_5_2_2_1_fu_2413_p1.read());
}

void matrix_conv::thread_tmp_7_5_2_fu_2398_p0() {
    tmp_7_5_2_fu_2398_p0 =  (sc_lv<8>) (tmp_3_0_2_2_fu_2255_p1.read());
}

void matrix_conv::thread_tmp_7_5_2_fu_2398_p1() {
    tmp_7_5_2_fu_2398_p1 =  (sc_lv<8>) (tmp_3_5_1_fu_2365_p1.read());
}

void matrix_conv::thread_tmp_7_5_2_fu_2398_p2() {
    tmp_7_5_2_fu_2398_p2 = (!tmp_7_5_2_fu_2398_p0.read().is_01() || !tmp_7_5_2_fu_2398_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_5_2_fu_2398_p0.read()) * sc_bigint<8>(tmp_7_5_2_fu_2398_p1.read());
}

void matrix_conv::thread_tmp_7_5_3_0_2_fu_2864_p0() {
    tmp_7_5_3_0_2_fu_2864_p0 =  (sc_lv<8>) (tmp_3_3_2_2_fu_2763_p1.read());
}

void matrix_conv::thread_tmp_7_5_3_0_2_fu_2864_p1() {
    tmp_7_5_3_0_2_fu_2864_p1 =  (sc_lv<8>) (tmp_3_5_1_0_2_reg_7642.read());
}

void matrix_conv::thread_tmp_7_5_3_0_2_fu_2864_p2() {
    tmp_7_5_3_0_2_fu_2864_p2 = (!tmp_7_5_3_0_2_fu_2864_p0.read().is_01() || !tmp_7_5_3_0_2_fu_2864_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_5_3_0_2_fu_2864_p0.read()) * sc_bigint<8>(tmp_7_5_3_0_2_fu_2864_p1.read());
}

void matrix_conv::thread_tmp_7_5_3_1_1_fu_2869_p0() {
    tmp_7_5_3_1_1_fu_2869_p0 =  (sc_lv<8>) (tmp_4_2_2_2_fu_2792_p1.read());
}

void matrix_conv::thread_tmp_7_5_3_1_1_fu_2869_p1() {
    tmp_7_5_3_1_1_fu_2869_p1 =  (sc_lv<8>) (tmp_3_5_1_1_1_reg_6947.read());
}

void matrix_conv::thread_tmp_7_5_3_1_1_fu_2869_p2() {
    tmp_7_5_3_1_1_fu_2869_p2 = (!tmp_7_5_3_1_1_fu_2869_p0.read().is_01() || !tmp_7_5_3_1_1_fu_2869_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_5_3_1_1_fu_2869_p0.read()) * sc_bigint<8>(tmp_7_5_3_1_1_fu_2869_p1.read());
}

void matrix_conv::thread_tmp_7_5_3_2_1_fu_2874_p0() {
    tmp_7_5_3_2_1_fu_2874_p0 =  (sc_lv<8>) (tmp_5_2_2_2_fu_2856_p1.read());
}

void matrix_conv::thread_tmp_7_5_3_2_1_fu_2874_p1() {
    tmp_7_5_3_2_1_fu_2874_p1 =  (sc_lv<8>) (tmp_3_5_2_2_1_reg_7699.read());
}

void matrix_conv::thread_tmp_7_5_3_2_1_fu_2874_p2() {
    tmp_7_5_3_2_1_fu_2874_p2 = (!tmp_7_5_3_2_1_fu_2874_p0.read().is_01() || !tmp_7_5_3_2_1_fu_2874_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_5_3_2_1_fu_2874_p0.read()) * sc_bigint<8>(tmp_7_5_3_2_1_fu_2874_p1.read());
}

void matrix_conv::thread_tmp_7_5_3_fu_2419_p0() {
    tmp_7_5_3_fu_2419_p0 =  (sc_lv<8>) (tmp_3_1_2_2_fu_2275_p1.read());
}

void matrix_conv::thread_tmp_7_5_3_fu_2419_p1() {
    tmp_7_5_3_fu_2419_p1 =  (sc_lv<8>) (tmp_3_5_1_fu_2365_p1.read());
}

void matrix_conv::thread_tmp_7_5_3_fu_2419_p2() {
    tmp_7_5_3_fu_2419_p2 = (!tmp_7_5_3_fu_2419_p0.read().is_01() || !tmp_7_5_3_fu_2419_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_5_3_fu_2419_p0.read()) * sc_bigint<8>(tmp_7_5_3_fu_2419_p1.read());
}

void matrix_conv::thread_tmp_7_5_4_0_2_fu_3495_p0() {
    tmp_7_5_4_0_2_fu_3495_p0 =  (sc_lv<8>) (tmp_3_4_2_2_fu_3328_p1.read());
}

void matrix_conv::thread_tmp_7_5_4_0_2_fu_3495_p1() {
    tmp_7_5_4_0_2_fu_3495_p1 =  (sc_lv<8>) (tmp_3_5_1_0_2_reg_7642.read());
}

void matrix_conv::thread_tmp_7_5_4_0_2_fu_3495_p2() {
    tmp_7_5_4_0_2_fu_3495_p2 = (!tmp_7_5_4_0_2_fu_3495_p0.read().is_01() || !tmp_7_5_4_0_2_fu_3495_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_5_4_0_2_fu_3495_p0.read()) * sc_bigint<8>(tmp_7_5_4_0_2_fu_3495_p1.read());
}

void matrix_conv::thread_tmp_7_5_4_1_1_fu_2888_p0() {
    tmp_7_5_4_1_1_fu_2888_p0 =  (sc_lv<8>) (tmp_4_3_2_2_fu_2811_p1.read());
}

void matrix_conv::thread_tmp_7_5_4_1_1_fu_2888_p1() {
    tmp_7_5_4_1_1_fu_2888_p1 =  (sc_lv<8>) (tmp_3_5_1_1_1_reg_6947.read());
}

void matrix_conv::thread_tmp_7_5_4_1_1_fu_2888_p2() {
    tmp_7_5_4_1_1_fu_2888_p2 = (!tmp_7_5_4_1_1_fu_2888_p0.read().is_01() || !tmp_7_5_4_1_1_fu_2888_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_5_4_1_1_fu_2888_p0.read()) * sc_bigint<8>(tmp_7_5_4_1_1_fu_2888_p1.read());
}

void matrix_conv::thread_tmp_7_5_4_2_1_fu_2893_p0() {
    tmp_7_5_4_2_1_fu_2893_p0 =  (sc_lv<8>) (tmp_5_3_2_2_fu_2879_p1.read());
}

void matrix_conv::thread_tmp_7_5_4_2_1_fu_2893_p1() {
    tmp_7_5_4_2_1_fu_2893_p1 =  (sc_lv<8>) (tmp_3_5_2_2_1_reg_7699.read());
}

void matrix_conv::thread_tmp_7_5_4_2_1_fu_2893_p2() {
    tmp_7_5_4_2_1_fu_2893_p2 = (!tmp_7_5_4_2_1_fu_2893_p0.read().is_01() || !tmp_7_5_4_2_1_fu_2893_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_5_4_2_1_fu_2893_p0.read()) * sc_bigint<8>(tmp_7_5_4_2_1_fu_2893_p1.read());
}

void matrix_conv::thread_tmp_7_5_4_fu_2883_p0() {
    tmp_7_5_4_fu_2883_p0 =  (sc_lv<8>) (tmp_3_2_2_2_fu_2744_p1.read());
}

void matrix_conv::thread_tmp_7_5_4_fu_2883_p1() {
    tmp_7_5_4_fu_2883_p1 =  (sc_lv<8>) (tmp_3_5_1_reg_7620.read());
}

void matrix_conv::thread_tmp_7_5_4_fu_2883_p2() {
    tmp_7_5_4_fu_2883_p2 = (!tmp_7_5_4_fu_2883_p0.read().is_01() || !tmp_7_5_4_fu_2883_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_5_4_fu_2883_p0.read()) * sc_bigint<8>(tmp_7_5_4_fu_2883_p1.read());
}

void matrix_conv::thread_tmp_7_5_5_0_2_fu_3504_p0() {
    tmp_7_5_5_0_2_fu_3504_p0 =  (sc_lv<8>) (tmp_3_5_2_2_fu_3347_p1.read());
}

void matrix_conv::thread_tmp_7_5_5_0_2_fu_3504_p1() {
    tmp_7_5_5_0_2_fu_3504_p1 =  (sc_lv<8>) (tmp_3_5_1_0_2_reg_7642.read());
}

void matrix_conv::thread_tmp_7_5_5_0_2_fu_3504_p2() {
    tmp_7_5_5_0_2_fu_3504_p2 = (!tmp_7_5_5_0_2_fu_3504_p0.read().is_01() || !tmp_7_5_5_0_2_fu_3504_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_5_5_0_2_fu_3504_p0.read()) * sc_bigint<8>(tmp_7_5_5_0_2_fu_3504_p1.read());
}

void matrix_conv::thread_tmp_7_5_5_1_1_fu_3509_p0() {
    tmp_7_5_5_1_1_fu_3509_p0 =  (sc_lv<8>) (tmp_4_4_2_2_fu_3414_p1.read());
}

void matrix_conv::thread_tmp_7_5_5_1_1_fu_3509_p1() {
    tmp_7_5_5_1_1_fu_3509_p1 =  (sc_lv<8>) (tmp_3_5_1_1_1_reg_6947.read());
}

void matrix_conv::thread_tmp_7_5_5_1_1_fu_3509_p2() {
    tmp_7_5_5_1_1_fu_3509_p2 = (!tmp_7_5_5_1_1_fu_3509_p0.read().is_01() || !tmp_7_5_5_1_1_fu_3509_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_5_5_1_1_fu_3509_p0.read()) * sc_bigint<8>(tmp_7_5_5_1_1_fu_3509_p1.read());
}

void matrix_conv::thread_tmp_7_5_5_2_1_fu_3514_p0() {
    tmp_7_5_5_2_1_fu_3514_p0 =  (sc_lv<8>) (tmp_5_4_2_2_fu_3500_p1.read());
}

void matrix_conv::thread_tmp_7_5_5_2_1_fu_3514_p1() {
    tmp_7_5_5_2_1_fu_3514_p1 =  (sc_lv<8>) (tmp_3_5_2_2_1_reg_7699.read());
}

void matrix_conv::thread_tmp_7_5_5_2_1_fu_3514_p2() {
    tmp_7_5_5_2_1_fu_3514_p2 = (!tmp_7_5_5_2_1_fu_3514_p0.read().is_01() || !tmp_7_5_5_2_1_fu_3514_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_5_5_2_1_fu_3514_p0.read()) * sc_bigint<8>(tmp_7_5_5_2_1_fu_3514_p1.read());
}

void matrix_conv::thread_tmp_7_5_5_fu_2898_p0() {
    tmp_7_5_5_fu_2898_p0 =  (sc_lv<8>) (tmp_3_3_2_2_fu_2763_p1.read());
}

void matrix_conv::thread_tmp_7_5_5_fu_2898_p1() {
    tmp_7_5_5_fu_2898_p1 =  (sc_lv<8>) (tmp_3_5_1_reg_7620.read());
}

void matrix_conv::thread_tmp_7_5_5_fu_2898_p2() {
    tmp_7_5_5_fu_2898_p2 = (!tmp_7_5_5_fu_2898_p0.read().is_01() || !tmp_7_5_5_fu_2898_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_5_5_fu_2898_p0.read()) * sc_bigint<8>(tmp_7_5_5_fu_2898_p1.read());
}

void matrix_conv::thread_tmp_7_5_6_0_2_fu_4004_p0() {
    tmp_7_5_6_0_2_fu_4004_p0 =  (sc_lv<8>) (tmp_3_6_2_2_fu_3897_p1.read());
}

void matrix_conv::thread_tmp_7_5_6_0_2_fu_4004_p1() {
    tmp_7_5_6_0_2_fu_4004_p1 =  (sc_lv<8>) (tmp_3_5_1_0_2_reg_7642.read());
}

void matrix_conv::thread_tmp_7_5_6_0_2_fu_4004_p2() {
    tmp_7_5_6_0_2_fu_4004_p2 = (!tmp_7_5_6_0_2_fu_4004_p0.read().is_01() || !tmp_7_5_6_0_2_fu_4004_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_5_6_0_2_fu_4004_p0.read()) * sc_bigint<8>(tmp_7_5_6_0_2_fu_4004_p1.read());
}

void matrix_conv::thread_tmp_7_5_6_1_1_fu_3528_p0() {
    tmp_7_5_6_1_1_fu_3528_p0 =  (sc_lv<8>) (tmp_4_5_2_2_fu_3433_p1.read());
}

void matrix_conv::thread_tmp_7_5_6_1_1_fu_3528_p1() {
    tmp_7_5_6_1_1_fu_3528_p1 =  (sc_lv<8>) (tmp_3_5_1_1_1_reg_6947.read());
}

void matrix_conv::thread_tmp_7_5_6_1_1_fu_3528_p2() {
    tmp_7_5_6_1_1_fu_3528_p2 = (!tmp_7_5_6_1_1_fu_3528_p0.read().is_01() || !tmp_7_5_6_1_1_fu_3528_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_5_6_1_1_fu_3528_p0.read()) * sc_bigint<8>(tmp_7_5_6_1_1_fu_3528_p1.read());
}

void matrix_conv::thread_tmp_7_5_6_2_1_fu_3533_p0() {
    tmp_7_5_6_2_1_fu_3533_p0 =  (sc_lv<8>) (tmp_5_5_2_2_fu_3519_p1.read());
}

void matrix_conv::thread_tmp_7_5_6_2_1_fu_3533_p1() {
    tmp_7_5_6_2_1_fu_3533_p1 =  (sc_lv<8>) (tmp_3_5_2_2_1_reg_7699.read());
}

void matrix_conv::thread_tmp_7_5_6_2_1_fu_3533_p2() {
    tmp_7_5_6_2_1_fu_3533_p2 = (!tmp_7_5_6_2_1_fu_3533_p0.read().is_01() || !tmp_7_5_6_2_1_fu_3533_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_5_6_2_1_fu_3533_p0.read()) * sc_bigint<8>(tmp_7_5_6_2_1_fu_3533_p1.read());
}

void matrix_conv::thread_tmp_7_5_6_fu_3523_p0() {
    tmp_7_5_6_fu_3523_p0 =  (sc_lv<8>) (tmp_3_4_2_2_fu_3328_p1.read());
}

void matrix_conv::thread_tmp_7_5_6_fu_3523_p1() {
    tmp_7_5_6_fu_3523_p1 =  (sc_lv<8>) (tmp_3_5_1_reg_7620.read());
}

void matrix_conv::thread_tmp_7_5_6_fu_3523_p2() {
    tmp_7_5_6_fu_3523_p2 = (!tmp_7_5_6_fu_3523_p0.read().is_01() || !tmp_7_5_6_fu_3523_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_5_6_fu_3523_p0.read()) * sc_bigint<8>(tmp_7_5_6_fu_3523_p1.read());
}

void matrix_conv::thread_tmp_7_5_7_0_2_fu_4013_p0() {
    tmp_7_5_7_0_2_fu_4013_p0 = a_5_q1.read();
}

void matrix_conv::thread_tmp_7_5_7_0_2_fu_4013_p1() {
    tmp_7_5_7_0_2_fu_4013_p1 =  (sc_lv<8>) (tmp_3_5_1_0_2_reg_7642.read());
}

void matrix_conv::thread_tmp_7_5_7_0_2_fu_4013_p2() {
    tmp_7_5_7_0_2_fu_4013_p2 = (!tmp_7_5_7_0_2_fu_4013_p0.read().is_01() || !tmp_7_5_7_0_2_fu_4013_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_5_7_0_2_fu_4013_p0.read()) * sc_bigint<8>(tmp_7_5_7_0_2_fu_4013_p1.read());
}

void matrix_conv::thread_tmp_7_5_7_1_1_fu_4018_p0() {
    tmp_7_5_7_1_1_fu_4018_p0 =  (sc_lv<8>) (tmp_4_6_2_2_fu_3953_p1.read());
}

void matrix_conv::thread_tmp_7_5_7_1_1_fu_4018_p1() {
    tmp_7_5_7_1_1_fu_4018_p1 =  (sc_lv<8>) (tmp_3_5_1_1_1_reg_6947.read());
}

void matrix_conv::thread_tmp_7_5_7_1_1_fu_4018_p2() {
    tmp_7_5_7_1_1_fu_4018_p2 = (!tmp_7_5_7_1_1_fu_4018_p0.read().is_01() || !tmp_7_5_7_1_1_fu_4018_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_5_7_1_1_fu_4018_p0.read()) * sc_bigint<8>(tmp_7_5_7_1_1_fu_4018_p1.read());
}

void matrix_conv::thread_tmp_7_5_7_2_1_fu_4023_p0() {
    tmp_7_5_7_2_1_fu_4023_p0 =  (sc_lv<8>) (tmp_5_6_2_2_fu_4009_p1.read());
}

void matrix_conv::thread_tmp_7_5_7_2_1_fu_4023_p1() {
    tmp_7_5_7_2_1_fu_4023_p1 =  (sc_lv<8>) (tmp_3_5_2_2_1_reg_7699.read());
}

void matrix_conv::thread_tmp_7_5_7_2_1_fu_4023_p2() {
    tmp_7_5_7_2_1_fu_4023_p2 = (!tmp_7_5_7_2_1_fu_4023_p0.read().is_01() || !tmp_7_5_7_2_1_fu_4023_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_5_7_2_1_fu_4023_p0.read()) * sc_bigint<8>(tmp_7_5_7_2_1_fu_4023_p1.read());
}

void matrix_conv::thread_tmp_7_5_7_fu_3538_p0() {
    tmp_7_5_7_fu_3538_p0 =  (sc_lv<8>) (tmp_3_5_2_2_fu_3347_p1.read());
}

void matrix_conv::thread_tmp_7_5_7_fu_3538_p1() {
    tmp_7_5_7_fu_3538_p1 =  (sc_lv<8>) (tmp_3_5_1_reg_7620.read());
}

void matrix_conv::thread_tmp_7_5_7_fu_3538_p2() {
    tmp_7_5_7_fu_3538_p2 = (!tmp_7_5_7_fu_3538_p0.read().is_01() || !tmp_7_5_7_fu_3538_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_5_7_fu_3538_p0.read()) * sc_bigint<8>(tmp_7_5_7_fu_3538_p1.read());
}

void matrix_conv::thread_tmp_7_5_fu_2020_p0() {
    tmp_7_5_fu_2020_p0 = a_5_q0.read();
}

void matrix_conv::thread_tmp_7_5_fu_2020_p1() {
    tmp_7_5_fu_2020_p1 =  (sc_lv<8>) (tmp_3_fu_1840_p1.read());
}

void matrix_conv::thread_tmp_7_5_fu_2020_p2() {
    tmp_7_5_fu_2020_p2 = (!tmp_7_5_fu_2020_p0.read().is_01() || !tmp_7_5_fu_2020_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_5_fu_2020_p0.read()) * sc_bigint<8>(tmp_7_5_fu_2020_p1.read());
}

void matrix_conv::thread_tmp_7_6_0_0_2_fu_2431_p0() {
    tmp_7_6_0_0_2_fu_2431_p0 =  (sc_lv<8>) (tmp_4_0_2_2_fu_2308_p1.read());
}

void matrix_conv::thread_tmp_7_6_0_0_2_fu_2431_p1() {
    tmp_7_6_0_0_2_fu_2431_p1 =  (sc_lv<8>) (tmp_3_5_1_0_2_fu_2374_p1.read());
}

void matrix_conv::thread_tmp_7_6_0_0_2_fu_2431_p2() {
    tmp_7_6_0_0_2_fu_2431_p2 = (!tmp_7_6_0_0_2_fu_2431_p0.read().is_01() || !tmp_7_6_0_0_2_fu_2431_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_6_0_0_2_fu_2431_p0.read()) * sc_bigint<8>(tmp_7_6_0_0_2_fu_2431_p1.read());
}

void matrix_conv::thread_tmp_7_6_0_1_1_fu_2046_p0() {
    tmp_7_6_0_1_1_fu_2046_p0 =  (sc_lv<8>) (tmp_5_0_2_1_fu_2032_p1.read());
}

void matrix_conv::thread_tmp_7_6_0_1_1_fu_2046_p1() {
    tmp_7_6_0_1_1_fu_2046_p1 =  (sc_lv<8>) (tmp_3_5_1_1_1_fu_2042_p1.read());
}

void matrix_conv::thread_tmp_7_6_0_1_1_fu_2046_p2() {
    tmp_7_6_0_1_1_fu_2046_p2 = (!tmp_7_6_0_1_1_fu_2046_p0.read().is_01() || !tmp_7_6_0_1_1_fu_2046_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_6_0_1_1_fu_2046_p0.read()) * sc_bigint<8>(tmp_7_6_0_1_1_fu_2046_p1.read());
}

void matrix_conv::thread_tmp_7_6_0_2_1_fu_2437_p0() {
    tmp_7_6_0_2_1_fu_2437_p0 =  (sc_lv<8>) (tmp_6_0_2_1_reg_6981.read());
}

void matrix_conv::thread_tmp_7_6_0_2_1_fu_2437_p1() {
    tmp_7_6_0_2_1_fu_2437_p1 =  (sc_lv<8>) (tmp_3_5_2_2_1_fu_2409_p1.read());
}

void matrix_conv::thread_tmp_7_6_0_2_1_fu_2437_p2() {
    tmp_7_6_0_2_1_fu_2437_p2 = (!tmp_7_6_0_2_1_fu_2437_p0.read().is_01() || !tmp_7_6_0_2_1_fu_2437_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_6_0_2_1_fu_2437_p0.read()) * sc_bigint<8>(tmp_7_6_0_2_1_fu_2437_p1.read());
}

void matrix_conv::thread_tmp_7_6_1_0_2_fu_2447_p0() {
    tmp_7_6_1_0_2_fu_2447_p0 =  (sc_lv<8>) (tmp_4_1_2_2_fu_2328_p1.read());
}

void matrix_conv::thread_tmp_7_6_1_0_2_fu_2447_p1() {
    tmp_7_6_1_0_2_fu_2447_p1 =  (sc_lv<8>) (tmp_3_5_1_0_2_fu_2374_p1.read());
}

void matrix_conv::thread_tmp_7_6_1_0_2_fu_2447_p2() {
    tmp_7_6_1_0_2_fu_2447_p2 = (!tmp_7_6_1_0_2_fu_2447_p0.read().is_01() || !tmp_7_6_1_0_2_fu_2447_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_6_1_0_2_fu_2447_p0.read()) * sc_bigint<8>(tmp_7_6_1_0_2_fu_2447_p1.read());
}

void matrix_conv::thread_tmp_7_6_1_1_1_fu_2453_p0() {
    tmp_7_6_1_1_1_fu_2453_p0 =  (sc_lv<8>) (tmp_5_0_2_2_fu_2361_p1.read());
}

void matrix_conv::thread_tmp_7_6_1_1_1_fu_2453_p1() {
    tmp_7_6_1_1_1_fu_2453_p1 =  (sc_lv<8>) (tmp_3_5_1_1_1_reg_6947.read());
}

void matrix_conv::thread_tmp_7_6_1_1_1_fu_2453_p2() {
    tmp_7_6_1_1_1_fu_2453_p2 = (!tmp_7_6_1_1_1_fu_2453_p0.read().is_01() || !tmp_7_6_1_1_1_fu_2453_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_6_1_1_1_fu_2453_p0.read()) * sc_bigint<8>(tmp_7_6_1_1_1_fu_2453_p1.read());
}

void matrix_conv::thread_tmp_7_6_1_2_1_fu_2458_p0() {
    tmp_7_6_1_2_1_fu_2458_p0 =  (sc_lv<8>) (tmp_6_0_2_2_reg_6988.read());
}

void matrix_conv::thread_tmp_7_6_1_2_1_fu_2458_p1() {
    tmp_7_6_1_2_1_fu_2458_p1 =  (sc_lv<8>) (tmp_3_5_2_2_1_fu_2409_p1.read());
}

void matrix_conv::thread_tmp_7_6_1_2_1_fu_2458_p2() {
    tmp_7_6_1_2_1_fu_2458_p2 = (!tmp_7_6_1_2_1_fu_2458_p0.read().is_01() || !tmp_7_6_1_2_1_fu_2458_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_6_1_2_1_fu_2458_p0.read()) * sc_bigint<8>(tmp_7_6_1_2_1_fu_2458_p1.read());
}

void matrix_conv::thread_tmp_7_6_1_fu_2442_p0() {
    tmp_7_6_1_fu_2442_p0 =  (sc_lv<8>) (tmp_4_0_2_1_reg_6886.read());
}

void matrix_conv::thread_tmp_7_6_1_fu_2442_p1() {
    tmp_7_6_1_fu_2442_p1 =  (sc_lv<8>) (tmp_3_5_1_fu_2365_p1.read());
}

void matrix_conv::thread_tmp_7_6_1_fu_2442_p2() {
    tmp_7_6_1_fu_2442_p2 = (!tmp_7_6_1_fu_2442_p0.read().is_01() || !tmp_7_6_1_fu_2442_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_6_1_fu_2442_p0.read()) * sc_bigint<8>(tmp_7_6_1_fu_2442_p1.read());
}

void matrix_conv::thread_tmp_7_6_2_0_2_fu_2903_p0() {
    tmp_7_6_2_0_2_fu_2903_p0 =  (sc_lv<8>) (tmp_4_2_2_2_fu_2792_p1.read());
}

void matrix_conv::thread_tmp_7_6_2_0_2_fu_2903_p1() {
    tmp_7_6_2_0_2_fu_2903_p1 =  (sc_lv<8>) (tmp_3_5_1_0_2_reg_7642.read());
}

void matrix_conv::thread_tmp_7_6_2_0_2_fu_2903_p2() {
    tmp_7_6_2_0_2_fu_2903_p2 = (!tmp_7_6_2_0_2_fu_2903_p0.read().is_01() || !tmp_7_6_2_0_2_fu_2903_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_6_2_0_2_fu_2903_p0.read()) * sc_bigint<8>(tmp_7_6_2_0_2_fu_2903_p1.read());
}

void matrix_conv::thread_tmp_7_6_2_1_1_fu_2473_p0() {
    tmp_7_6_2_1_1_fu_2473_p0 =  (sc_lv<8>) (tmp_5_1_2_2_fu_2394_p1.read());
}

void matrix_conv::thread_tmp_7_6_2_1_1_fu_2473_p1() {
    tmp_7_6_2_1_1_fu_2473_p1 =  (sc_lv<8>) (tmp_3_5_1_1_1_reg_6947.read());
}

void matrix_conv::thread_tmp_7_6_2_1_1_fu_2473_p2() {
    tmp_7_6_2_1_1_fu_2473_p2 = (!tmp_7_6_2_1_1_fu_2473_p0.read().is_01() || !tmp_7_6_2_1_1_fu_2473_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_6_2_1_1_fu_2473_p0.read()) * sc_bigint<8>(tmp_7_6_2_1_1_fu_2473_p1.read());
}

void matrix_conv::thread_tmp_7_6_2_2_12_fu_3661_p1() {
    tmp_7_6_2_2_12_fu_3661_p1 = esl_sext<16,8>(a_9_q1.read());
}

void matrix_conv::thread_tmp_7_6_2_2_1_fu_2478_p0() {
    tmp_7_6_2_2_1_fu_2478_p0 = a_8_q0.read();
}

void matrix_conv::thread_tmp_7_6_2_2_1_fu_2478_p1() {
    tmp_7_6_2_2_1_fu_2478_p1 =  (sc_lv<8>) (tmp_3_5_2_2_1_fu_2409_p1.read());
}

void matrix_conv::thread_tmp_7_6_2_2_1_fu_2478_p2() {
    tmp_7_6_2_2_1_fu_2478_p2 = (!tmp_7_6_2_2_1_fu_2478_p0.read().is_01() || !tmp_7_6_2_2_1_fu_2478_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_6_2_2_1_fu_2478_p0.read()) * sc_bigint<8>(tmp_7_6_2_2_1_fu_2478_p1.read());
}

void matrix_conv::thread_tmp_7_6_2_fu_2467_p0() {
    tmp_7_6_2_fu_2467_p0 =  (sc_lv<8>) (tmp_4_0_2_2_fu_2308_p1.read());
}

void matrix_conv::thread_tmp_7_6_2_fu_2467_p1() {
    tmp_7_6_2_fu_2467_p1 =  (sc_lv<8>) (tmp_3_5_1_fu_2365_p1.read());
}

void matrix_conv::thread_tmp_7_6_2_fu_2467_p2() {
    tmp_7_6_2_fu_2467_p2 = (!tmp_7_6_2_fu_2467_p0.read().is_01() || !tmp_7_6_2_fu_2467_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_6_2_fu_2467_p0.read()) * sc_bigint<8>(tmp_7_6_2_fu_2467_p1.read());
}

void matrix_conv::thread_tmp_7_6_3_0_2_fu_2908_p0() {
    tmp_7_6_3_0_2_fu_2908_p0 =  (sc_lv<8>) (tmp_4_3_2_2_fu_2811_p1.read());
}

void matrix_conv::thread_tmp_7_6_3_0_2_fu_2908_p1() {
    tmp_7_6_3_0_2_fu_2908_p1 =  (sc_lv<8>) (tmp_3_5_1_0_2_reg_7642.read());
}

void matrix_conv::thread_tmp_7_6_3_0_2_fu_2908_p2() {
    tmp_7_6_3_0_2_fu_2908_p2 = (!tmp_7_6_3_0_2_fu_2908_p0.read().is_01() || !tmp_7_6_3_0_2_fu_2908_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_6_3_0_2_fu_2908_p0.read()) * sc_bigint<8>(tmp_7_6_3_0_2_fu_2908_p1.read());
}

void matrix_conv::thread_tmp_7_6_3_1_1_fu_2913_p0() {
    tmp_7_6_3_1_1_fu_2913_p0 =  (sc_lv<8>) (tmp_5_2_2_2_fu_2856_p1.read());
}

void matrix_conv::thread_tmp_7_6_3_1_1_fu_2913_p1() {
    tmp_7_6_3_1_1_fu_2913_p1 =  (sc_lv<8>) (tmp_3_5_1_1_1_reg_6947.read());
}

void matrix_conv::thread_tmp_7_6_3_1_1_fu_2913_p2() {
    tmp_7_6_3_1_1_fu_2913_p2 = (!tmp_7_6_3_1_1_fu_2913_p0.read().is_01() || !tmp_7_6_3_1_1_fu_2913_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_6_3_1_1_fu_2913_p0.read()) * sc_bigint<8>(tmp_7_6_3_1_1_fu_2913_p1.read());
}

void matrix_conv::thread_tmp_7_6_3_2_1_fu_2494_p0() {
    tmp_7_6_3_2_1_fu_2494_p0 = a_8_q1.read();
}

void matrix_conv::thread_tmp_7_6_3_2_1_fu_2494_p1() {
    tmp_7_6_3_2_1_fu_2494_p1 =  (sc_lv<8>) (tmp_3_5_2_2_1_fu_2409_p1.read());
}

void matrix_conv::thread_tmp_7_6_3_2_1_fu_2494_p2() {
    tmp_7_6_3_2_1_fu_2494_p2 = (!tmp_7_6_3_2_1_fu_2494_p0.read().is_01() || !tmp_7_6_3_2_1_fu_2494_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_6_3_2_1_fu_2494_p0.read()) * sc_bigint<8>(tmp_7_6_3_2_1_fu_2494_p1.read());
}

void matrix_conv::thread_tmp_7_6_3_fu_2488_p0() {
    tmp_7_6_3_fu_2488_p0 =  (sc_lv<8>) (tmp_4_1_2_2_fu_2328_p1.read());
}

void matrix_conv::thread_tmp_7_6_3_fu_2488_p1() {
    tmp_7_6_3_fu_2488_p1 =  (sc_lv<8>) (tmp_3_5_1_fu_2365_p1.read());
}

void matrix_conv::thread_tmp_7_6_3_fu_2488_p2() {
    tmp_7_6_3_fu_2488_p2 = (!tmp_7_6_3_fu_2488_p0.read().is_01() || !tmp_7_6_3_fu_2488_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_6_3_fu_2488_p0.read()) * sc_bigint<8>(tmp_7_6_3_fu_2488_p1.read());
}

void matrix_conv::thread_tmp_7_6_4_0_2_fu_3576_p0() {
    tmp_7_6_4_0_2_fu_3576_p0 =  (sc_lv<8>) (tmp_4_4_2_2_fu_3414_p1.read());
}

void matrix_conv::thread_tmp_7_6_4_0_2_fu_3576_p1() {
    tmp_7_6_4_0_2_fu_3576_p1 =  (sc_lv<8>) (tmp_3_5_1_0_2_reg_7642.read());
}

void matrix_conv::thread_tmp_7_6_4_0_2_fu_3576_p2() {
    tmp_7_6_4_0_2_fu_3576_p2 = (!tmp_7_6_4_0_2_fu_3576_p0.read().is_01() || !tmp_7_6_4_0_2_fu_3576_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_6_4_0_2_fu_3576_p0.read()) * sc_bigint<8>(tmp_7_6_4_0_2_fu_3576_p1.read());
}

void matrix_conv::thread_tmp_7_6_4_1_1_fu_2927_p0() {
    tmp_7_6_4_1_1_fu_2927_p0 =  (sc_lv<8>) (tmp_5_3_2_2_fu_2879_p1.read());
}

void matrix_conv::thread_tmp_7_6_4_1_1_fu_2927_p1() {
    tmp_7_6_4_1_1_fu_2927_p1 =  (sc_lv<8>) (tmp_3_5_1_1_1_reg_6947.read());
}

void matrix_conv::thread_tmp_7_6_4_1_1_fu_2927_p2() {
    tmp_7_6_4_1_1_fu_2927_p2 = (!tmp_7_6_4_1_1_fu_2927_p0.read().is_01() || !tmp_7_6_4_1_1_fu_2927_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_6_4_1_1_fu_2927_p0.read()) * sc_bigint<8>(tmp_7_6_4_1_1_fu_2927_p1.read());
}

void matrix_conv::thread_tmp_7_6_4_2_1_fu_2932_p0() {
    tmp_7_6_4_2_1_fu_2932_p0 =  (sc_lv<8>) (tmp_6_3_2_2_fu_2918_p1.read());
}

void matrix_conv::thread_tmp_7_6_4_2_1_fu_2932_p1() {
    tmp_7_6_4_2_1_fu_2932_p1 =  (sc_lv<8>) (tmp_3_5_2_2_1_reg_7699.read());
}

void matrix_conv::thread_tmp_7_6_4_2_1_fu_2932_p2() {
    tmp_7_6_4_2_1_fu_2932_p2 = (!tmp_7_6_4_2_1_fu_2932_p0.read().is_01() || !tmp_7_6_4_2_1_fu_2932_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_6_4_2_1_fu_2932_p0.read()) * sc_bigint<8>(tmp_7_6_4_2_1_fu_2932_p1.read());
}

void matrix_conv::thread_tmp_7_6_4_fu_2922_p0() {
    tmp_7_6_4_fu_2922_p0 =  (sc_lv<8>) (tmp_4_2_2_2_fu_2792_p1.read());
}

void matrix_conv::thread_tmp_7_6_4_fu_2922_p1() {
    tmp_7_6_4_fu_2922_p1 =  (sc_lv<8>) (tmp_3_5_1_reg_7620.read());
}

void matrix_conv::thread_tmp_7_6_4_fu_2922_p2() {
    tmp_7_6_4_fu_2922_p2 = (!tmp_7_6_4_fu_2922_p0.read().is_01() || !tmp_7_6_4_fu_2922_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_6_4_fu_2922_p0.read()) * sc_bigint<8>(tmp_7_6_4_fu_2922_p1.read());
}

void matrix_conv::thread_tmp_7_6_5_0_2_fu_3581_p0() {
    tmp_7_6_5_0_2_fu_3581_p0 =  (sc_lv<8>) (tmp_4_5_2_2_fu_3433_p1.read());
}

void matrix_conv::thread_tmp_7_6_5_0_2_fu_3581_p1() {
    tmp_7_6_5_0_2_fu_3581_p1 =  (sc_lv<8>) (tmp_3_5_1_0_2_reg_7642.read());
}

void matrix_conv::thread_tmp_7_6_5_0_2_fu_3581_p2() {
    tmp_7_6_5_0_2_fu_3581_p2 = (!tmp_7_6_5_0_2_fu_3581_p0.read().is_01() || !tmp_7_6_5_0_2_fu_3581_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_6_5_0_2_fu_3581_p0.read()) * sc_bigint<8>(tmp_7_6_5_0_2_fu_3581_p1.read());
}

void matrix_conv::thread_tmp_7_6_5_1_1_fu_3586_p0() {
    tmp_7_6_5_1_1_fu_3586_p0 =  (sc_lv<8>) (tmp_5_4_2_2_fu_3500_p1.read());
}

void matrix_conv::thread_tmp_7_6_5_1_1_fu_3586_p1() {
    tmp_7_6_5_1_1_fu_3586_p1 =  (sc_lv<8>) (tmp_3_5_1_1_1_reg_6947.read());
}

void matrix_conv::thread_tmp_7_6_5_1_1_fu_3586_p2() {
    tmp_7_6_5_1_1_fu_3586_p2 = (!tmp_7_6_5_1_1_fu_3586_p0.read().is_01() || !tmp_7_6_5_1_1_fu_3586_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_6_5_1_1_fu_3586_p0.read()) * sc_bigint<8>(tmp_7_6_5_1_1_fu_3586_p1.read());
}

void matrix_conv::thread_tmp_7_6_5_2_1_fu_2946_p0() {
    tmp_7_6_5_2_1_fu_2946_p0 =  (sc_lv<8>) (tmp_6_4_2_2_fu_2937_p1.read());
}

void matrix_conv::thread_tmp_7_6_5_2_1_fu_2946_p1() {
    tmp_7_6_5_2_1_fu_2946_p1 =  (sc_lv<8>) (tmp_3_5_2_2_1_reg_7699.read());
}

void matrix_conv::thread_tmp_7_6_5_2_1_fu_2946_p2() {
    tmp_7_6_5_2_1_fu_2946_p2 = (!tmp_7_6_5_2_1_fu_2946_p0.read().is_01() || !tmp_7_6_5_2_1_fu_2946_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_6_5_2_1_fu_2946_p0.read()) * sc_bigint<8>(tmp_7_6_5_2_1_fu_2946_p1.read());
}

void matrix_conv::thread_tmp_7_6_5_fu_2941_p0() {
    tmp_7_6_5_fu_2941_p0 =  (sc_lv<8>) (tmp_4_3_2_2_fu_2811_p1.read());
}

void matrix_conv::thread_tmp_7_6_5_fu_2941_p1() {
    tmp_7_6_5_fu_2941_p1 =  (sc_lv<8>) (tmp_3_5_1_reg_7620.read());
}

void matrix_conv::thread_tmp_7_6_5_fu_2941_p2() {
    tmp_7_6_5_fu_2941_p2 = (!tmp_7_6_5_fu_2941_p0.read().is_01() || !tmp_7_6_5_fu_2941_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_6_5_fu_2941_p0.read()) * sc_bigint<8>(tmp_7_6_5_fu_2941_p1.read());
}

void matrix_conv::thread_tmp_7_6_6_0_2_fu_4064_p0() {
    tmp_7_6_6_0_2_fu_4064_p0 =  (sc_lv<8>) (tmp_4_6_2_2_fu_3953_p1.read());
}

void matrix_conv::thread_tmp_7_6_6_0_2_fu_4064_p1() {
    tmp_7_6_6_0_2_fu_4064_p1 =  (sc_lv<8>) (tmp_3_5_1_0_2_reg_7642.read());
}

void matrix_conv::thread_tmp_7_6_6_0_2_fu_4064_p2() {
    tmp_7_6_6_0_2_fu_4064_p2 = (!tmp_7_6_6_0_2_fu_4064_p0.read().is_01() || !tmp_7_6_6_0_2_fu_4064_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_6_6_0_2_fu_4064_p0.read()) * sc_bigint<8>(tmp_7_6_6_0_2_fu_4064_p1.read());
}

void matrix_conv::thread_tmp_7_6_6_1_1_fu_3600_p0() {
    tmp_7_6_6_1_1_fu_3600_p0 =  (sc_lv<8>) (tmp_5_5_2_2_fu_3519_p1.read());
}

void matrix_conv::thread_tmp_7_6_6_1_1_fu_3600_p1() {
    tmp_7_6_6_1_1_fu_3600_p1 =  (sc_lv<8>) (tmp_3_5_1_1_1_reg_6947.read());
}

void matrix_conv::thread_tmp_7_6_6_1_1_fu_3600_p2() {
    tmp_7_6_6_1_1_fu_3600_p2 = (!tmp_7_6_6_1_1_fu_3600_p0.read().is_01() || !tmp_7_6_6_1_1_fu_3600_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_6_6_1_1_fu_3600_p0.read()) * sc_bigint<8>(tmp_7_6_6_1_1_fu_3600_p1.read());
}

void matrix_conv::thread_tmp_7_6_6_2_1_fu_3605_p0() {
    tmp_7_6_6_2_1_fu_3605_p0 =  (sc_lv<8>) (tmp_6_5_2_2_fu_3591_p1.read());
}

void matrix_conv::thread_tmp_7_6_6_2_1_fu_3605_p1() {
    tmp_7_6_6_2_1_fu_3605_p1 =  (sc_lv<8>) (tmp_3_5_2_2_1_reg_7699.read());
}

void matrix_conv::thread_tmp_7_6_6_2_1_fu_3605_p2() {
    tmp_7_6_6_2_1_fu_3605_p2 = (!tmp_7_6_6_2_1_fu_3605_p0.read().is_01() || !tmp_7_6_6_2_1_fu_3605_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_6_6_2_1_fu_3605_p0.read()) * sc_bigint<8>(tmp_7_6_6_2_1_fu_3605_p1.read());
}

void matrix_conv::thread_tmp_7_6_6_fu_3595_p0() {
    tmp_7_6_6_fu_3595_p0 =  (sc_lv<8>) (tmp_4_4_2_2_fu_3414_p1.read());
}

void matrix_conv::thread_tmp_7_6_6_fu_3595_p1() {
    tmp_7_6_6_fu_3595_p1 =  (sc_lv<8>) (tmp_3_5_1_reg_7620.read());
}

void matrix_conv::thread_tmp_7_6_6_fu_3595_p2() {
    tmp_7_6_6_fu_3595_p2 = (!tmp_7_6_6_fu_3595_p0.read().is_01() || !tmp_7_6_6_fu_3595_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_6_6_fu_3595_p0.read()) * sc_bigint<8>(tmp_7_6_6_fu_3595_p1.read());
}

void matrix_conv::thread_tmp_7_6_7_0_2_fu_4069_p0() {
    tmp_7_6_7_0_2_fu_4069_p0 = a_6_q1.read();
}

void matrix_conv::thread_tmp_7_6_7_0_2_fu_4069_p1() {
    tmp_7_6_7_0_2_fu_4069_p1 =  (sc_lv<8>) (tmp_3_5_1_0_2_reg_7642.read());
}

void matrix_conv::thread_tmp_7_6_7_0_2_fu_4069_p2() {
    tmp_7_6_7_0_2_fu_4069_p2 = (!tmp_7_6_7_0_2_fu_4069_p0.read().is_01() || !tmp_7_6_7_0_2_fu_4069_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_6_7_0_2_fu_4069_p0.read()) * sc_bigint<8>(tmp_7_6_7_0_2_fu_4069_p1.read());
}

void matrix_conv::thread_tmp_7_6_7_1_1_fu_4074_p0() {
    tmp_7_6_7_1_1_fu_4074_p0 =  (sc_lv<8>) (tmp_5_6_2_2_fu_4009_p1.read());
}

void matrix_conv::thread_tmp_7_6_7_1_1_fu_4074_p1() {
    tmp_7_6_7_1_1_fu_4074_p1 =  (sc_lv<8>) (tmp_3_5_1_1_1_reg_6947.read());
}

void matrix_conv::thread_tmp_7_6_7_1_1_fu_4074_p2() {
    tmp_7_6_7_1_1_fu_4074_p2 = (!tmp_7_6_7_1_1_fu_4074_p0.read().is_01() || !tmp_7_6_7_1_1_fu_4074_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_6_7_1_1_fu_4074_p0.read()) * sc_bigint<8>(tmp_7_6_7_1_1_fu_4074_p1.read());
}

void matrix_conv::thread_tmp_7_6_7_2_1_fu_3619_p0() {
    tmp_7_6_7_2_1_fu_3619_p0 =  (sc_lv<8>) (tmp_6_6_2_2_fu_3610_p1.read());
}

void matrix_conv::thread_tmp_7_6_7_2_1_fu_3619_p1() {
    tmp_7_6_7_2_1_fu_3619_p1 =  (sc_lv<8>) (tmp_3_5_2_2_1_reg_7699.read());
}

void matrix_conv::thread_tmp_7_6_7_2_1_fu_3619_p2() {
    tmp_7_6_7_2_1_fu_3619_p2 = (!tmp_7_6_7_2_1_fu_3619_p0.read().is_01() || !tmp_7_6_7_2_1_fu_3619_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_6_7_2_1_fu_3619_p0.read()) * sc_bigint<8>(tmp_7_6_7_2_1_fu_3619_p1.read());
}

void matrix_conv::thread_tmp_7_6_7_fu_3614_p0() {
    tmp_7_6_7_fu_3614_p0 =  (sc_lv<8>) (tmp_4_5_2_2_fu_3433_p1.read());
}

void matrix_conv::thread_tmp_7_6_7_fu_3614_p1() {
    tmp_7_6_7_fu_3614_p1 =  (sc_lv<8>) (tmp_3_5_1_reg_7620.read());
}

void matrix_conv::thread_tmp_7_6_7_fu_3614_p2() {
    tmp_7_6_7_fu_3614_p2 = (!tmp_7_6_7_fu_3614_p0.read().is_01() || !tmp_7_6_7_fu_3614_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_6_7_fu_3614_p0.read()) * sc_bigint<8>(tmp_7_6_7_fu_3614_p1.read());
}

void matrix_conv::thread_tmp_7_6_fu_2425_p0() {
    tmp_7_6_fu_2425_p0 = a_6_load_reg_6881.read();
}

void matrix_conv::thread_tmp_7_6_fu_2425_p1() {
    tmp_7_6_fu_2425_p1 =  (sc_lv<8>) (tmp_3_5_1_fu_2365_p1.read());
}

void matrix_conv::thread_tmp_7_6_fu_2425_p2() {
    tmp_7_6_fu_2425_p2 = (!tmp_7_6_fu_2425_p0.read().is_01() || !tmp_7_6_fu_2425_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_6_fu_2425_p0.read()) * sc_bigint<8>(tmp_7_6_fu_2425_p1.read());
}

void matrix_conv::thread_tmp_7_7_0_0_2_fu_2506_p0() {
    tmp_7_7_0_0_2_fu_2506_p0 =  (sc_lv<8>) (tmp_5_0_2_2_fu_2361_p1.read());
}

void matrix_conv::thread_tmp_7_7_0_0_2_fu_2506_p1() {
    tmp_7_7_0_0_2_fu_2506_p1 =  (sc_lv<8>) (tmp_3_5_1_0_2_fu_2374_p1.read());
}

void matrix_conv::thread_tmp_7_7_0_0_2_fu_2506_p2() {
    tmp_7_7_0_0_2_fu_2506_p2 = (!tmp_7_7_0_0_2_fu_2506_p0.read().is_01() || !tmp_7_7_0_0_2_fu_2506_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_7_0_0_2_fu_2506_p0.read()) * sc_bigint<8>(tmp_7_7_0_0_2_fu_2506_p1.read());
}

void matrix_conv::thread_tmp_7_7_0_1_1_fu_2060_p0() {
    tmp_7_7_0_1_1_fu_2060_p0 = a_8_q0.read();
}

void matrix_conv::thread_tmp_7_7_0_1_1_fu_2060_p1() {
    tmp_7_7_0_1_1_fu_2060_p1 =  (sc_lv<8>) (tmp_3_5_1_1_1_fu_2042_p1.read());
}

void matrix_conv::thread_tmp_7_7_0_1_1_fu_2060_p2() {
    tmp_7_7_0_1_1_fu_2060_p2 = (!tmp_7_7_0_1_1_fu_2060_p0.read().is_01() || !tmp_7_7_0_1_1_fu_2060_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_7_0_1_1_fu_2060_p0.read()) * sc_bigint<8>(tmp_7_7_0_1_1_fu_2060_p1.read());
}

void matrix_conv::thread_tmp_7_7_0_2_1_fu_2516_p0() {
    tmp_7_7_0_2_1_fu_2516_p0 = reg_1831.read();
}

void matrix_conv::thread_tmp_7_7_0_2_1_fu_2516_p1() {
    tmp_7_7_0_2_1_fu_2516_p1 =  (sc_lv<8>) (tmp_3_5_2_2_1_fu_2409_p1.read());
}

void matrix_conv::thread_tmp_7_7_0_2_1_fu_2516_p2() {
    tmp_7_7_0_2_1_fu_2516_p2 = (!tmp_7_7_0_2_1_fu_2516_p0.read().is_01() || !tmp_7_7_0_2_1_fu_2516_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_7_0_2_1_fu_2516_p0.read()) * sc_bigint<8>(tmp_7_7_0_2_1_fu_2516_p1.read());
}

void matrix_conv::thread_tmp_7_7_1_0_2_fu_2530_p0() {
    tmp_7_7_1_0_2_fu_2530_p0 =  (sc_lv<8>) (tmp_5_1_2_2_fu_2394_p1.read());
}

void matrix_conv::thread_tmp_7_7_1_0_2_fu_2530_p1() {
    tmp_7_7_1_0_2_fu_2530_p1 =  (sc_lv<8>) (tmp_3_5_1_0_2_fu_2374_p1.read());
}

void matrix_conv::thread_tmp_7_7_1_0_2_fu_2530_p2() {
    tmp_7_7_1_0_2_fu_2530_p2 = (!tmp_7_7_1_0_2_fu_2530_p0.read().is_01() || !tmp_7_7_1_0_2_fu_2530_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_7_1_0_2_fu_2530_p0.read()) * sc_bigint<8>(tmp_7_7_1_0_2_fu_2530_p1.read());
}

void matrix_conv::thread_tmp_7_7_1_1_1_fu_2066_p0() {
    tmp_7_7_1_1_1_fu_2066_p0 = a_8_q1.read();
}

void matrix_conv::thread_tmp_7_7_1_1_1_fu_2066_p1() {
    tmp_7_7_1_1_1_fu_2066_p1 =  (sc_lv<8>) (tmp_3_5_1_1_1_fu_2042_p1.read());
}

void matrix_conv::thread_tmp_7_7_1_1_1_fu_2066_p2() {
    tmp_7_7_1_1_1_fu_2066_p2 = (!tmp_7_7_1_1_1_fu_2066_p0.read().is_01() || !tmp_7_7_1_1_1_fu_2066_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_7_1_1_1_fu_2066_p0.read()) * sc_bigint<8>(tmp_7_7_1_1_1_fu_2066_p1.read());
}

void matrix_conv::thread_tmp_7_7_1_2_1_fu_2536_p0() {
    tmp_7_7_1_2_1_fu_2536_p0 = a_9_load_2_reg_7012.read();
}

void matrix_conv::thread_tmp_7_7_1_2_1_fu_2536_p1() {
    tmp_7_7_1_2_1_fu_2536_p1 =  (sc_lv<8>) (tmp_3_5_2_2_1_fu_2409_p1.read());
}

void matrix_conv::thread_tmp_7_7_1_2_1_fu_2536_p2() {
    tmp_7_7_1_2_1_fu_2536_p2 = (!tmp_7_7_1_2_1_fu_2536_p0.read().is_01() || !tmp_7_7_1_2_1_fu_2536_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_7_1_2_1_fu_2536_p0.read()) * sc_bigint<8>(tmp_7_7_1_2_1_fu_2536_p1.read());
}

void matrix_conv::thread_tmp_7_7_1_fu_2525_p0() {
    tmp_7_7_1_fu_2525_p0 =  (sc_lv<8>) (tmp_5_0_2_1_reg_6929.read());
}

void matrix_conv::thread_tmp_7_7_1_fu_2525_p1() {
    tmp_7_7_1_fu_2525_p1 =  (sc_lv<8>) (tmp_3_5_1_fu_2365_p1.read());
}

void matrix_conv::thread_tmp_7_7_1_fu_2525_p2() {
    tmp_7_7_1_fu_2525_p2 = (!tmp_7_7_1_fu_2525_p0.read().is_01() || !tmp_7_7_1_fu_2525_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_7_1_fu_2525_p0.read()) * sc_bigint<8>(tmp_7_7_1_fu_2525_p1.read());
}

void matrix_conv::thread_tmp_7_7_2_0_2_fu_2951_p0() {
    tmp_7_7_2_0_2_fu_2951_p0 =  (sc_lv<8>) (tmp_5_2_2_2_fu_2856_p1.read());
}

void matrix_conv::thread_tmp_7_7_2_0_2_fu_2951_p1() {
    tmp_7_7_2_0_2_fu_2951_p1 =  (sc_lv<8>) (tmp_3_5_1_0_2_reg_7642.read());
}

void matrix_conv::thread_tmp_7_7_2_0_2_fu_2951_p2() {
    tmp_7_7_2_0_2_fu_2951_p2 = (!tmp_7_7_2_0_2_fu_2951_p0.read().is_01() || !tmp_7_7_2_0_2_fu_2951_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_7_2_0_2_fu_2951_p0.read()) * sc_bigint<8>(tmp_7_7_2_0_2_fu_2951_p1.read());
}

void matrix_conv::thread_tmp_7_7_2_1_1_fu_2956_p0() {
    tmp_7_7_2_1_1_fu_2956_p0 =  (sc_lv<8>) (tmp_6_1_2_2_reg_7771.read());
}

void matrix_conv::thread_tmp_7_7_2_1_1_fu_2956_p1() {
    tmp_7_7_2_1_1_fu_2956_p1 =  (sc_lv<8>) (tmp_3_5_1_1_1_reg_6947.read());
}

void matrix_conv::thread_tmp_7_7_2_1_1_fu_2956_p2() {
    tmp_7_7_2_1_1_fu_2956_p2 = (!tmp_7_7_2_1_1_fu_2956_p0.read().is_01() || !tmp_7_7_2_1_1_fu_2956_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_7_2_1_1_fu_2956_p0.read()) * sc_bigint<8>(tmp_7_7_2_1_1_fu_2956_p1.read());
}

void matrix_conv::thread_tmp_7_7_2_2_1_fu_2552_p0() {
    tmp_7_7_2_2_1_fu_2552_p0 = a_9_q0.read();
}

void matrix_conv::thread_tmp_7_7_2_2_1_fu_2552_p1() {
    tmp_7_7_2_2_1_fu_2552_p1 =  (sc_lv<8>) (tmp_3_5_2_2_1_fu_2409_p1.read());
}

void matrix_conv::thread_tmp_7_7_2_2_1_fu_2552_p2() {
    tmp_7_7_2_2_1_fu_2552_p2 = (!tmp_7_7_2_2_1_fu_2552_p0.read().is_01() || !tmp_7_7_2_2_1_fu_2552_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_7_2_2_1_fu_2552_p0.read()) * sc_bigint<8>(tmp_7_7_2_2_1_fu_2552_p1.read());
}

void matrix_conv::thread_tmp_7_7_2_fu_2546_p0() {
    tmp_7_7_2_fu_2546_p0 =  (sc_lv<8>) (tmp_5_0_2_2_fu_2361_p1.read());
}

void matrix_conv::thread_tmp_7_7_2_fu_2546_p1() {
    tmp_7_7_2_fu_2546_p1 =  (sc_lv<8>) (tmp_3_5_1_fu_2365_p1.read());
}

void matrix_conv::thread_tmp_7_7_2_fu_2546_p2() {
    tmp_7_7_2_fu_2546_p2 = (!tmp_7_7_2_fu_2546_p0.read().is_01() || !tmp_7_7_2_fu_2546_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_7_2_fu_2546_p0.read()) * sc_bigint<8>(tmp_7_7_2_fu_2546_p1.read());
}

void matrix_conv::thread_tmp_7_7_3_0_2_fu_2964_p0() {
    tmp_7_7_3_0_2_fu_2964_p0 =  (sc_lv<8>) (tmp_5_3_2_2_fu_2879_p1.read());
}

void matrix_conv::thread_tmp_7_7_3_0_2_fu_2964_p1() {
    tmp_7_7_3_0_2_fu_2964_p1 =  (sc_lv<8>) (tmp_3_5_1_0_2_reg_7642.read());
}

void matrix_conv::thread_tmp_7_7_3_0_2_fu_2964_p2() {
    tmp_7_7_3_0_2_fu_2964_p2 = (!tmp_7_7_3_0_2_fu_2964_p0.read().is_01() || !tmp_7_7_3_0_2_fu_2964_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_7_3_0_2_fu_2964_p0.read()) * sc_bigint<8>(tmp_7_7_3_0_2_fu_2964_p1.read());
}

void matrix_conv::thread_tmp_7_7_3_1_1_fu_2969_p0() {
    tmp_7_7_3_1_1_fu_2969_p0 =  (sc_lv<8>) (tmp_6_2_2_2_reg_7795.read());
}

void matrix_conv::thread_tmp_7_7_3_1_1_fu_2969_p1() {
    tmp_7_7_3_1_1_fu_2969_p1 =  (sc_lv<8>) (tmp_3_5_1_1_1_reg_6947.read());
}

void matrix_conv::thread_tmp_7_7_3_1_1_fu_2969_p2() {
    tmp_7_7_3_1_1_fu_2969_p2 = (!tmp_7_7_3_1_1_fu_2969_p0.read().is_01() || !tmp_7_7_3_1_1_fu_2969_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_7_3_1_1_fu_2969_p0.read()) * sc_bigint<8>(tmp_7_7_3_1_1_fu_2969_p1.read());
}

void matrix_conv::thread_tmp_7_7_3_2_1_fu_2562_p0() {
    tmp_7_7_3_2_1_fu_2562_p0 = a_9_q1.read();
}

void matrix_conv::thread_tmp_7_7_3_2_1_fu_2562_p1() {
    tmp_7_7_3_2_1_fu_2562_p1 =  (sc_lv<8>) (tmp_3_5_2_2_1_fu_2409_p1.read());
}

void matrix_conv::thread_tmp_7_7_3_2_1_fu_2562_p2() {
    tmp_7_7_3_2_1_fu_2562_p2 = (!tmp_7_7_3_2_1_fu_2562_p0.read().is_01() || !tmp_7_7_3_2_1_fu_2562_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_7_3_2_1_fu_2562_p0.read()) * sc_bigint<8>(tmp_7_7_3_2_1_fu_2562_p1.read());
}

void matrix_conv::thread_tmp_7_7_3_fu_2960_p0() {
    tmp_7_7_3_fu_2960_p0 =  (sc_lv<8>) (tmp_5_1_2_2_reg_7679.read());
}

void matrix_conv::thread_tmp_7_7_3_fu_2960_p1() {
    tmp_7_7_3_fu_2960_p1 =  (sc_lv<8>) (tmp_3_5_1_reg_7620.read());
}

void matrix_conv::thread_tmp_7_7_3_fu_2960_p2() {
    tmp_7_7_3_fu_2960_p2 = (!tmp_7_7_3_fu_2960_p0.read().is_01() || !tmp_7_7_3_fu_2960_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_7_3_fu_2960_p0.read()) * sc_bigint<8>(tmp_7_7_3_fu_2960_p1.read());
}

void matrix_conv::thread_tmp_7_7_4_0_2_fu_3632_p0() {
    tmp_7_7_4_0_2_fu_3632_p0 =  (sc_lv<8>) (tmp_5_4_2_2_fu_3500_p1.read());
}

void matrix_conv::thread_tmp_7_7_4_0_2_fu_3632_p1() {
    tmp_7_7_4_0_2_fu_3632_p1 =  (sc_lv<8>) (tmp_3_5_1_0_2_reg_7642.read());
}

void matrix_conv::thread_tmp_7_7_4_0_2_fu_3632_p2() {
    tmp_7_7_4_0_2_fu_3632_p2 = (!tmp_7_7_4_0_2_fu_3632_p0.read().is_01() || !tmp_7_7_4_0_2_fu_3632_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_7_4_0_2_fu_3632_p0.read()) * sc_bigint<8>(tmp_7_7_4_0_2_fu_3632_p1.read());
}

void matrix_conv::thread_tmp_7_7_4_1_1_fu_2982_p0() {
    tmp_7_7_4_1_1_fu_2982_p0 =  (sc_lv<8>) (tmp_6_3_2_2_fu_2918_p1.read());
}

void matrix_conv::thread_tmp_7_7_4_1_1_fu_2982_p1() {
    tmp_7_7_4_1_1_fu_2982_p1 =  (sc_lv<8>) (tmp_3_5_1_1_1_reg_6947.read());
}

void matrix_conv::thread_tmp_7_7_4_1_1_fu_2982_p2() {
    tmp_7_7_4_1_1_fu_2982_p2 = (!tmp_7_7_4_1_1_fu_2982_p0.read().is_01() || !tmp_7_7_4_1_1_fu_2982_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_7_4_1_1_fu_2982_p0.read()) * sc_bigint<8>(tmp_7_7_4_1_1_fu_2982_p1.read());
}

void matrix_conv::thread_tmp_7_7_4_2_1_fu_2987_p0() {
    tmp_7_7_4_2_1_fu_2987_p0 = a_9_q0.read();
}

void matrix_conv::thread_tmp_7_7_4_2_1_fu_2987_p1() {
    tmp_7_7_4_2_1_fu_2987_p1 =  (sc_lv<8>) (tmp_3_5_2_2_1_reg_7699.read());
}

void matrix_conv::thread_tmp_7_7_4_2_1_fu_2987_p2() {
    tmp_7_7_4_2_1_fu_2987_p2 = (!tmp_7_7_4_2_1_fu_2987_p0.read().is_01() || !tmp_7_7_4_2_1_fu_2987_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_7_4_2_1_fu_2987_p0.read()) * sc_bigint<8>(tmp_7_7_4_2_1_fu_2987_p1.read());
}

void matrix_conv::thread_tmp_7_7_4_fu_2977_p0() {
    tmp_7_7_4_fu_2977_p0 =  (sc_lv<8>) (tmp_5_2_2_2_fu_2856_p1.read());
}

void matrix_conv::thread_tmp_7_7_4_fu_2977_p1() {
    tmp_7_7_4_fu_2977_p1 =  (sc_lv<8>) (tmp_3_5_1_reg_7620.read());
}

void matrix_conv::thread_tmp_7_7_4_fu_2977_p2() {
    tmp_7_7_4_fu_2977_p2 = (!tmp_7_7_4_fu_2977_p0.read().is_01() || !tmp_7_7_4_fu_2977_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_7_4_fu_2977_p0.read()) * sc_bigint<8>(tmp_7_7_4_fu_2977_p1.read());
}

void matrix_conv::thread_tmp_7_7_5_0_2_fu_3637_p0() {
    tmp_7_7_5_0_2_fu_3637_p0 =  (sc_lv<8>) (tmp_5_5_2_2_fu_3519_p1.read());
}

void matrix_conv::thread_tmp_7_7_5_0_2_fu_3637_p1() {
    tmp_7_7_5_0_2_fu_3637_p1 =  (sc_lv<8>) (tmp_3_5_1_0_2_reg_7642.read());
}

void matrix_conv::thread_tmp_7_7_5_0_2_fu_3637_p2() {
    tmp_7_7_5_0_2_fu_3637_p2 = (!tmp_7_7_5_0_2_fu_3637_p0.read().is_01() || !tmp_7_7_5_0_2_fu_3637_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_7_5_0_2_fu_3637_p0.read()) * sc_bigint<8>(tmp_7_7_5_0_2_fu_3637_p1.read());
}

void matrix_conv::thread_tmp_7_7_5_1_1_fu_3001_p0() {
    tmp_7_7_5_1_1_fu_3001_p0 =  (sc_lv<8>) (tmp_6_4_2_2_fu_2937_p1.read());
}

void matrix_conv::thread_tmp_7_7_5_1_1_fu_3001_p1() {
    tmp_7_7_5_1_1_fu_3001_p1 =  (sc_lv<8>) (tmp_3_5_1_1_1_reg_6947.read());
}

void matrix_conv::thread_tmp_7_7_5_1_1_fu_3001_p2() {
    tmp_7_7_5_1_1_fu_3001_p2 = (!tmp_7_7_5_1_1_fu_3001_p0.read().is_01() || !tmp_7_7_5_1_1_fu_3001_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_7_5_1_1_fu_3001_p0.read()) * sc_bigint<8>(tmp_7_7_5_1_1_fu_3001_p1.read());
}

void matrix_conv::thread_tmp_7_7_5_2_1_fu_3006_p0() {
    tmp_7_7_5_2_1_fu_3006_p0 = a_9_q1.read();
}

void matrix_conv::thread_tmp_7_7_5_2_1_fu_3006_p1() {
    tmp_7_7_5_2_1_fu_3006_p1 =  (sc_lv<8>) (tmp_3_5_2_2_1_reg_7699.read());
}

void matrix_conv::thread_tmp_7_7_5_2_1_fu_3006_p2() {
    tmp_7_7_5_2_1_fu_3006_p2 = (!tmp_7_7_5_2_1_fu_3006_p0.read().is_01() || !tmp_7_7_5_2_1_fu_3006_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_7_5_2_1_fu_3006_p0.read()) * sc_bigint<8>(tmp_7_7_5_2_1_fu_3006_p1.read());
}

void matrix_conv::thread_tmp_7_7_5_fu_2996_p0() {
    tmp_7_7_5_fu_2996_p0 =  (sc_lv<8>) (tmp_5_3_2_2_fu_2879_p1.read());
}

void matrix_conv::thread_tmp_7_7_5_fu_2996_p1() {
    tmp_7_7_5_fu_2996_p1 =  (sc_lv<8>) (tmp_3_5_1_reg_7620.read());
}

void matrix_conv::thread_tmp_7_7_5_fu_2996_p2() {
    tmp_7_7_5_fu_2996_p2 = (!tmp_7_7_5_fu_2996_p0.read().is_01() || !tmp_7_7_5_fu_2996_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_7_5_fu_2996_p0.read()) * sc_bigint<8>(tmp_7_7_5_fu_2996_p1.read());
}

void matrix_conv::thread_tmp_7_7_6_0_2_fu_4115_p0() {
    tmp_7_7_6_0_2_fu_4115_p0 =  (sc_lv<8>) (tmp_5_6_2_2_fu_4009_p1.read());
}

void matrix_conv::thread_tmp_7_7_6_0_2_fu_4115_p1() {
    tmp_7_7_6_0_2_fu_4115_p1 =  (sc_lv<8>) (tmp_3_5_1_0_2_reg_7642.read());
}

void matrix_conv::thread_tmp_7_7_6_0_2_fu_4115_p2() {
    tmp_7_7_6_0_2_fu_4115_p2 = (!tmp_7_7_6_0_2_fu_4115_p0.read().is_01() || !tmp_7_7_6_0_2_fu_4115_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_7_6_0_2_fu_4115_p0.read()) * sc_bigint<8>(tmp_7_7_6_0_2_fu_4115_p1.read());
}

void matrix_conv::thread_tmp_7_7_6_1_1_fu_3651_p0() {
    tmp_7_7_6_1_1_fu_3651_p0 =  (sc_lv<8>) (tmp_6_5_2_2_fu_3591_p1.read());
}

void matrix_conv::thread_tmp_7_7_6_1_1_fu_3651_p1() {
    tmp_7_7_6_1_1_fu_3651_p1 =  (sc_lv<8>) (tmp_3_5_1_1_1_reg_6947.read());
}

void matrix_conv::thread_tmp_7_7_6_1_1_fu_3651_p2() {
    tmp_7_7_6_1_1_fu_3651_p2 = (!tmp_7_7_6_1_1_fu_3651_p0.read().is_01() || !tmp_7_7_6_1_1_fu_3651_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_7_6_1_1_fu_3651_p0.read()) * sc_bigint<8>(tmp_7_7_6_1_1_fu_3651_p1.read());
}

void matrix_conv::thread_tmp_7_7_6_2_1_fu_3656_p0() {
    tmp_7_7_6_2_1_fu_3656_p0 = a_9_q0.read();
}

void matrix_conv::thread_tmp_7_7_6_2_1_fu_3656_p1() {
    tmp_7_7_6_2_1_fu_3656_p1 =  (sc_lv<8>) (tmp_3_5_2_2_1_reg_7699.read());
}

void matrix_conv::thread_tmp_7_7_6_2_1_fu_3656_p2() {
    tmp_7_7_6_2_1_fu_3656_p2 = (!tmp_7_7_6_2_1_fu_3656_p0.read().is_01() || !tmp_7_7_6_2_1_fu_3656_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_7_6_2_1_fu_3656_p0.read()) * sc_bigint<8>(tmp_7_7_6_2_1_fu_3656_p1.read());
}

void matrix_conv::thread_tmp_7_7_6_fu_3646_p0() {
    tmp_7_7_6_fu_3646_p0 =  (sc_lv<8>) (tmp_5_4_2_2_fu_3500_p1.read());
}

void matrix_conv::thread_tmp_7_7_6_fu_3646_p1() {
    tmp_7_7_6_fu_3646_p1 =  (sc_lv<8>) (tmp_3_5_1_reg_7620.read());
}

void matrix_conv::thread_tmp_7_7_6_fu_3646_p2() {
    tmp_7_7_6_fu_3646_p2 = (!tmp_7_7_6_fu_3646_p0.read().is_01() || !tmp_7_7_6_fu_3646_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_7_6_fu_3646_p0.read()) * sc_bigint<8>(tmp_7_7_6_fu_3646_p1.read());
}

void matrix_conv::thread_tmp_7_7_7_0_2_fu_4120_p0() {
    tmp_7_7_7_0_2_fu_4120_p0 = a_7_q1.read();
}

void matrix_conv::thread_tmp_7_7_7_0_2_fu_4120_p1() {
    tmp_7_7_7_0_2_fu_4120_p1 =  (sc_lv<8>) (tmp_3_5_1_0_2_reg_7642.read());
}

void matrix_conv::thread_tmp_7_7_7_0_2_fu_4120_p2() {
    tmp_7_7_7_0_2_fu_4120_p2 = (!tmp_7_7_7_0_2_fu_4120_p0.read().is_01() || !tmp_7_7_7_0_2_fu_4120_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_7_7_0_2_fu_4120_p0.read()) * sc_bigint<8>(tmp_7_7_7_0_2_fu_4120_p1.read());
}

void matrix_conv::thread_tmp_7_7_7_1_1_fu_3670_p0() {
    tmp_7_7_7_1_1_fu_3670_p0 =  (sc_lv<8>) (tmp_6_6_2_2_fu_3610_p1.read());
}

void matrix_conv::thread_tmp_7_7_7_1_1_fu_3670_p1() {
    tmp_7_7_7_1_1_fu_3670_p1 =  (sc_lv<8>) (tmp_3_5_1_1_1_reg_6947.read());
}

void matrix_conv::thread_tmp_7_7_7_1_1_fu_3670_p2() {
    tmp_7_7_7_1_1_fu_3670_p2 = (!tmp_7_7_7_1_1_fu_3670_p0.read().is_01() || !tmp_7_7_7_1_1_fu_3670_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_7_7_1_1_fu_3670_p0.read()) * sc_bigint<8>(tmp_7_7_7_1_1_fu_3670_p1.read());
}

void matrix_conv::thread_tmp_7_7_7_2_1_fu_3675_p0() {
    tmp_7_7_7_2_1_fu_3675_p0 = a_9_q1.read();
}

void matrix_conv::thread_tmp_7_7_7_2_1_fu_3675_p1() {
    tmp_7_7_7_2_1_fu_3675_p1 =  (sc_lv<8>) (tmp_3_5_2_2_1_reg_7699.read());
}

void matrix_conv::thread_tmp_7_7_7_2_1_fu_3675_p2() {
    tmp_7_7_7_2_1_fu_3675_p2 = (!tmp_7_7_7_2_1_fu_3675_p0.read().is_01() || !tmp_7_7_7_2_1_fu_3675_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_7_7_2_1_fu_3675_p0.read()) * sc_bigint<8>(tmp_7_7_7_2_1_fu_3675_p1.read());
}

void matrix_conv::thread_tmp_7_7_7_fu_3665_p0() {
    tmp_7_7_7_fu_3665_p0 =  (sc_lv<8>) (tmp_5_5_2_2_fu_3519_p1.read());
}

void matrix_conv::thread_tmp_7_7_7_fu_3665_p1() {
    tmp_7_7_7_fu_3665_p1 =  (sc_lv<8>) (tmp_3_5_1_reg_7620.read());
}

void matrix_conv::thread_tmp_7_7_7_fu_3665_p2() {
    tmp_7_7_7_fu_3665_p2 = (!tmp_7_7_7_fu_3665_p0.read().is_01() || !tmp_7_7_7_fu_3665_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_7_7_fu_3665_p0.read()) * sc_bigint<8>(tmp_7_7_7_fu_3665_p1.read());
}

void matrix_conv::thread_tmp_7_7_fu_2500_p0() {
    tmp_7_7_fu_2500_p0 = a_7_load_reg_6924.read();
}

void matrix_conv::thread_tmp_7_7_fu_2500_p1() {
    tmp_7_7_fu_2500_p1 =  (sc_lv<8>) (tmp_3_5_1_fu_2365_p1.read());
}

void matrix_conv::thread_tmp_7_7_fu_2500_p2() {
    tmp_7_7_fu_2500_p2 = (!tmp_7_7_fu_2500_p0.read().is_01() || !tmp_7_7_fu_2500_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_7_fu_2500_p0.read()) * sc_bigint<8>(tmp_7_7_fu_2500_p1.read());
}

void matrix_conv::thread_tmp_7_fu_1844_p0() {
    tmp_7_fu_1844_p0 = a_0_q0.read();
}

void matrix_conv::thread_tmp_7_fu_1844_p1() {
    tmp_7_fu_1844_p1 =  (sc_lv<8>) (tmp_3_fu_1840_p1.read());
}

void matrix_conv::thread_tmp_7_fu_1844_p2() {
    tmp_7_fu_1844_p2 = (!tmp_7_fu_1844_p0.read().is_01() || !tmp_7_fu_1844_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(tmp_7_fu_1844_p0.read()) * sc_bigint<8>(tmp_7_fu_1844_p1.read());
}

void matrix_conv::thread_tmp_fu_3011_p2() {
    tmp_fu_3011_p2 = (!tmp2_reg_7999.read().is_01() || !tmp1_reg_7994.read().is_01())? sc_lv<16>(): (sc_bigint<16>(tmp2_reg_7999.read()) + sc_bigint<16>(tmp1_reg_7994.read()));
}

}

