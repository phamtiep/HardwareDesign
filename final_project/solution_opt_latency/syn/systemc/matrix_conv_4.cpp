#include "matrix_conv.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void matrix_conv::thread_a_0_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
            a_0_address0 =  (sc_lv<4>) (ap_const_lv64_8);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
            a_0_address0 =  (sc_lv<4>) (ap_const_lv64_6);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
            a_0_address0 =  (sc_lv<4>) (ap_const_lv64_4);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
            a_0_address0 =  (sc_lv<4>) (ap_const_lv64_2);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
            a_0_address0 =  (sc_lv<4>) (ap_const_lv64_0);
        } else {
            a_0_address0 = "XXXX";
        }
    } else {
        a_0_address0 = "XXXX";
    }
}

void matrix_conv::thread_a_0_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
            a_0_address1 =  (sc_lv<4>) (ap_const_lv64_9);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
            a_0_address1 =  (sc_lv<4>) (ap_const_lv64_7);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
            a_0_address1 =  (sc_lv<4>) (ap_const_lv64_5);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
            a_0_address1 =  (sc_lv<4>) (ap_const_lv64_3);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
            a_0_address1 =  (sc_lv<4>) (ap_const_lv64_1);
        } else {
            a_0_address1 = "XXXX";
        }
    } else {
        a_0_address1 = "XXXX";
    }
}

void matrix_conv::thread_a_0_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        a_0_ce0 = ap_const_logic_1;
    } else {
        a_0_ce0 = ap_const_logic_0;
    }
}

void matrix_conv::thread_a_0_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        a_0_ce1 = ap_const_logic_1;
    } else {
        a_0_ce1 = ap_const_logic_0;
    }
}

void matrix_conv::thread_a_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
            a_1_address0 =  (sc_lv<4>) (ap_const_lv64_8);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
            a_1_address0 =  (sc_lv<4>) (ap_const_lv64_6);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
            a_1_address0 =  (sc_lv<4>) (ap_const_lv64_4);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
            a_1_address0 =  (sc_lv<4>) (ap_const_lv64_2);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
            a_1_address0 =  (sc_lv<4>) (ap_const_lv64_0);
        } else {
            a_1_address0 = "XXXX";
        }
    } else {
        a_1_address0 = "XXXX";
    }
}

void matrix_conv::thread_a_1_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
            a_1_address1 =  (sc_lv<4>) (ap_const_lv64_9);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
            a_1_address1 =  (sc_lv<4>) (ap_const_lv64_7);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
            a_1_address1 =  (sc_lv<4>) (ap_const_lv64_5);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
            a_1_address1 =  (sc_lv<4>) (ap_const_lv64_3);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
            a_1_address1 =  (sc_lv<4>) (ap_const_lv64_1);
        } else {
            a_1_address1 = "XXXX";
        }
    } else {
        a_1_address1 = "XXXX";
    }
}

void matrix_conv::thread_a_1_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        a_1_ce0 = ap_const_logic_1;
    } else {
        a_1_ce0 = ap_const_logic_0;
    }
}

void matrix_conv::thread_a_1_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        a_1_ce1 = ap_const_logic_1;
    } else {
        a_1_ce1 = ap_const_logic_0;
    }
}

void matrix_conv::thread_a_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
            a_2_address0 =  (sc_lv<4>) (ap_const_lv64_8);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
            a_2_address0 =  (sc_lv<4>) (ap_const_lv64_6);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
            a_2_address0 =  (sc_lv<4>) (ap_const_lv64_4);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
            a_2_address0 =  (sc_lv<4>) (ap_const_lv64_2);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
            a_2_address0 =  (sc_lv<4>) (ap_const_lv64_0);
        } else {
            a_2_address0 = "XXXX";
        }
    } else {
        a_2_address0 = "XXXX";
    }
}

void matrix_conv::thread_a_2_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
            a_2_address1 =  (sc_lv<4>) (ap_const_lv64_9);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
            a_2_address1 =  (sc_lv<4>) (ap_const_lv64_7);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
            a_2_address1 =  (sc_lv<4>) (ap_const_lv64_5);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
            a_2_address1 =  (sc_lv<4>) (ap_const_lv64_3);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
            a_2_address1 =  (sc_lv<4>) (ap_const_lv64_1);
        } else {
            a_2_address1 = "XXXX";
        }
    } else {
        a_2_address1 = "XXXX";
    }
}

void matrix_conv::thread_a_2_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        a_2_ce0 = ap_const_logic_1;
    } else {
        a_2_ce0 = ap_const_logic_0;
    }
}

void matrix_conv::thread_a_2_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        a_2_ce1 = ap_const_logic_1;
    } else {
        a_2_ce1 = ap_const_logic_0;
    }
}

void matrix_conv::thread_a_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
            a_3_address0 =  (sc_lv<4>) (ap_const_lv64_8);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
            a_3_address0 =  (sc_lv<4>) (ap_const_lv64_6);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
            a_3_address0 =  (sc_lv<4>) (ap_const_lv64_4);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
            a_3_address0 =  (sc_lv<4>) (ap_const_lv64_2);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
            a_3_address0 =  (sc_lv<4>) (ap_const_lv64_0);
        } else {
            a_3_address0 = "XXXX";
        }
    } else {
        a_3_address0 = "XXXX";
    }
}

void matrix_conv::thread_a_3_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
            a_3_address1 =  (sc_lv<4>) (ap_const_lv64_9);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
            a_3_address1 =  (sc_lv<4>) (ap_const_lv64_7);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
            a_3_address1 =  (sc_lv<4>) (ap_const_lv64_5);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
            a_3_address1 =  (sc_lv<4>) (ap_const_lv64_3);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
            a_3_address1 =  (sc_lv<4>) (ap_const_lv64_1);
        } else {
            a_3_address1 = "XXXX";
        }
    } else {
        a_3_address1 = "XXXX";
    }
}

void matrix_conv::thread_a_3_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        a_3_ce0 = ap_const_logic_1;
    } else {
        a_3_ce0 = ap_const_logic_0;
    }
}

void matrix_conv::thread_a_3_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        a_3_ce1 = ap_const_logic_1;
    } else {
        a_3_ce1 = ap_const_logic_0;
    }
}

void matrix_conv::thread_a_4_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
            a_4_address0 =  (sc_lv<4>) (ap_const_lv64_8);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
            a_4_address0 =  (sc_lv<4>) (ap_const_lv64_6);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
            a_4_address0 =  (sc_lv<4>) (ap_const_lv64_4);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
            a_4_address0 =  (sc_lv<4>) (ap_const_lv64_2);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
            a_4_address0 =  (sc_lv<4>) (ap_const_lv64_0);
        } else {
            a_4_address0 = "XXXX";
        }
    } else {
        a_4_address0 = "XXXX";
    }
}

void matrix_conv::thread_a_4_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
            a_4_address1 =  (sc_lv<4>) (ap_const_lv64_9);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
            a_4_address1 =  (sc_lv<4>) (ap_const_lv64_7);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
            a_4_address1 =  (sc_lv<4>) (ap_const_lv64_5);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
            a_4_address1 =  (sc_lv<4>) (ap_const_lv64_3);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
            a_4_address1 =  (sc_lv<4>) (ap_const_lv64_1);
        } else {
            a_4_address1 = "XXXX";
        }
    } else {
        a_4_address1 = "XXXX";
    }
}

void matrix_conv::thread_a_4_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        a_4_ce0 = ap_const_logic_1;
    } else {
        a_4_ce0 = ap_const_logic_0;
    }
}

void matrix_conv::thread_a_4_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        a_4_ce1 = ap_const_logic_1;
    } else {
        a_4_ce1 = ap_const_logic_0;
    }
}

void matrix_conv::thread_a_5_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
            a_5_address0 =  (sc_lv<4>) (ap_const_lv64_8);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
            a_5_address0 =  (sc_lv<4>) (ap_const_lv64_6);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
            a_5_address0 =  (sc_lv<4>) (ap_const_lv64_4);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
            a_5_address0 =  (sc_lv<4>) (ap_const_lv64_2);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
            a_5_address0 =  (sc_lv<4>) (ap_const_lv64_0);
        } else {
            a_5_address0 = "XXXX";
        }
    } else {
        a_5_address0 = "XXXX";
    }
}

void matrix_conv::thread_a_5_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
            a_5_address1 =  (sc_lv<4>) (ap_const_lv64_9);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
            a_5_address1 =  (sc_lv<4>) (ap_const_lv64_7);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
            a_5_address1 =  (sc_lv<4>) (ap_const_lv64_5);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
            a_5_address1 =  (sc_lv<4>) (ap_const_lv64_3);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
            a_5_address1 =  (sc_lv<4>) (ap_const_lv64_1);
        } else {
            a_5_address1 = "XXXX";
        }
    } else {
        a_5_address1 = "XXXX";
    }
}

void matrix_conv::thread_a_5_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        a_5_ce0 = ap_const_logic_1;
    } else {
        a_5_ce0 = ap_const_logic_0;
    }
}

void matrix_conv::thread_a_5_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        a_5_ce1 = ap_const_logic_1;
    } else {
        a_5_ce1 = ap_const_logic_0;
    }
}

void matrix_conv::thread_a_6_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
            a_6_address0 =  (sc_lv<4>) (ap_const_lv64_8);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
            a_6_address0 =  (sc_lv<4>) (ap_const_lv64_6);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
            a_6_address0 =  (sc_lv<4>) (ap_const_lv64_4);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
            a_6_address0 =  (sc_lv<4>) (ap_const_lv64_2);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
            a_6_address0 =  (sc_lv<4>) (ap_const_lv64_0);
        } else {
            a_6_address0 = "XXXX";
        }
    } else {
        a_6_address0 = "XXXX";
    }
}

void matrix_conv::thread_a_6_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
            a_6_address1 =  (sc_lv<4>) (ap_const_lv64_9);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
            a_6_address1 =  (sc_lv<4>) (ap_const_lv64_7);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
            a_6_address1 =  (sc_lv<4>) (ap_const_lv64_5);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
            a_6_address1 =  (sc_lv<4>) (ap_const_lv64_3);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
            a_6_address1 =  (sc_lv<4>) (ap_const_lv64_1);
        } else {
            a_6_address1 = "XXXX";
        }
    } else {
        a_6_address1 = "XXXX";
    }
}

void matrix_conv::thread_a_6_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        a_6_ce0 = ap_const_logic_1;
    } else {
        a_6_ce0 = ap_const_logic_0;
    }
}

void matrix_conv::thread_a_6_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        a_6_ce1 = ap_const_logic_1;
    } else {
        a_6_ce1 = ap_const_logic_0;
    }
}

void matrix_conv::thread_a_7_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
            a_7_address0 =  (sc_lv<4>) (ap_const_lv64_8);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
            a_7_address0 =  (sc_lv<4>) (ap_const_lv64_6);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
            a_7_address0 =  (sc_lv<4>) (ap_const_lv64_4);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
            a_7_address0 =  (sc_lv<4>) (ap_const_lv64_2);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
            a_7_address0 =  (sc_lv<4>) (ap_const_lv64_0);
        } else {
            a_7_address0 = "XXXX";
        }
    } else {
        a_7_address0 = "XXXX";
    }
}

void matrix_conv::thread_a_7_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
            a_7_address1 =  (sc_lv<4>) (ap_const_lv64_9);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
            a_7_address1 =  (sc_lv<4>) (ap_const_lv64_7);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
            a_7_address1 =  (sc_lv<4>) (ap_const_lv64_5);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
            a_7_address1 =  (sc_lv<4>) (ap_const_lv64_3);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
            a_7_address1 =  (sc_lv<4>) (ap_const_lv64_1);
        } else {
            a_7_address1 = "XXXX";
        }
    } else {
        a_7_address1 = "XXXX";
    }
}

void matrix_conv::thread_a_7_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        a_7_ce0 = ap_const_logic_1;
    } else {
        a_7_ce0 = ap_const_logic_0;
    }
}

void matrix_conv::thread_a_7_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        a_7_ce1 = ap_const_logic_1;
    } else {
        a_7_ce1 = ap_const_logic_0;
    }
}

void matrix_conv::thread_a_8_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
            a_8_address0 =  (sc_lv<4>) (ap_const_lv64_0);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
            a_8_address0 =  (sc_lv<4>) (ap_const_lv64_7);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
            a_8_address0 =  (sc_lv<4>) (ap_const_lv64_5);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
            a_8_address0 =  (sc_lv<4>) (ap_const_lv64_3);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
            a_8_address0 =  (sc_lv<4>) (ap_const_lv64_1);
        } else {
            a_8_address0 = "XXXX";
        }
    } else {
        a_8_address0 = "XXXX";
    }
}

void matrix_conv::thread_a_8_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
            a_8_address1 =  (sc_lv<4>) (ap_const_lv64_9);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
            a_8_address1 =  (sc_lv<4>) (ap_const_lv64_8);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
            a_8_address1 =  (sc_lv<4>) (ap_const_lv64_6);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
            a_8_address1 =  (sc_lv<4>) (ap_const_lv64_4);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
            a_8_address1 =  (sc_lv<4>) (ap_const_lv64_2);
        } else {
            a_8_address1 = "XXXX";
        }
    } else {
        a_8_address1 = "XXXX";
    }
}

void matrix_conv::thread_a_8_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        a_8_ce0 = ap_const_logic_1;
    } else {
        a_8_ce0 = ap_const_logic_0;
    }
}

void matrix_conv::thread_a_8_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        a_8_ce1 = ap_const_logic_1;
    } else {
        a_8_ce1 = ap_const_logic_0;
    }
}

void matrix_conv::thread_a_9_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
            a_9_address0 =  (sc_lv<4>) (ap_const_lv64_0);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
            a_9_address0 =  (sc_lv<4>) (ap_const_lv64_7);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
            a_9_address0 =  (sc_lv<4>) (ap_const_lv64_5);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
            a_9_address0 =  (sc_lv<4>) (ap_const_lv64_3);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
            a_9_address0 =  (sc_lv<4>) (ap_const_lv64_1);
        } else {
            a_9_address0 = "XXXX";
        }
    } else {
        a_9_address0 = "XXXX";
    }
}

void matrix_conv::thread_a_9_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
            a_9_address1 =  (sc_lv<4>) (ap_const_lv64_9);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
            a_9_address1 =  (sc_lv<4>) (ap_const_lv64_8);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
            a_9_address1 =  (sc_lv<4>) (ap_const_lv64_6);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
            a_9_address1 =  (sc_lv<4>) (ap_const_lv64_4);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
            a_9_address1 =  (sc_lv<4>) (ap_const_lv64_2);
        } else {
            a_9_address1 = "XXXX";
        }
    } else {
        a_9_address1 = "XXXX";
    }
}

void matrix_conv::thread_a_9_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        a_9_ce0 = ap_const_logic_1;
    } else {
        a_9_ce0 = ap_const_logic_0;
    }
}

void matrix_conv::thread_a_9_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        a_9_ce1 = ap_const_logic_1;
    } else {
        a_9_ce1 = ap_const_logic_0;
    }
}

void matrix_conv::thread_ap_CS_fsm_pp0_stage0() {
    ap_CS_fsm_pp0_stage0 = ap_CS_fsm.read()[0];
}

void matrix_conv::thread_ap_CS_fsm_pp0_stage1() {
    ap_CS_fsm_pp0_stage1 = ap_CS_fsm.read()[1];
}

void matrix_conv::thread_ap_CS_fsm_pp0_stage2() {
    ap_CS_fsm_pp0_stage2 = ap_CS_fsm.read()[2];
}

void matrix_conv::thread_ap_CS_fsm_pp0_stage3() {
    ap_CS_fsm_pp0_stage3 = ap_CS_fsm.read()[3];
}

void matrix_conv::thread_ap_CS_fsm_pp0_stage4() {
    ap_CS_fsm_pp0_stage4 = ap_CS_fsm.read()[4];
}

void matrix_conv::thread_ap_block_pp0_stage0() {
    ap_block_pp0_stage0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_conv::thread_ap_block_pp0_stage0_11001() {
    ap_block_pp0_stage0_11001 = (esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()));
}

void matrix_conv::thread_ap_block_pp0_stage0_subdone() {
    ap_block_pp0_stage0_subdone = (esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()));
}

void matrix_conv::thread_ap_block_pp0_stage1() {
    ap_block_pp0_stage1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_conv::thread_ap_block_pp0_stage1_11001() {
    ap_block_pp0_stage1_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_conv::thread_ap_block_pp0_stage1_subdone() {
    ap_block_pp0_stage1_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_conv::thread_ap_block_pp0_stage2() {
    ap_block_pp0_stage2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_conv::thread_ap_block_pp0_stage2_11001() {
    ap_block_pp0_stage2_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_conv::thread_ap_block_pp0_stage2_subdone() {
    ap_block_pp0_stage2_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_conv::thread_ap_block_pp0_stage3() {
    ap_block_pp0_stage3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_conv::thread_ap_block_pp0_stage3_11001() {
    ap_block_pp0_stage3_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_conv::thread_ap_block_pp0_stage3_subdone() {
    ap_block_pp0_stage3_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_conv::thread_ap_block_pp0_stage4() {
    ap_block_pp0_stage4 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_conv::thread_ap_block_pp0_stage4_11001() {
    ap_block_pp0_stage4_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_conv::thread_ap_block_pp0_stage4_subdone() {
    ap_block_pp0_stage4_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_conv::thread_ap_block_state1_pp0_stage0_iter0() {
    ap_block_state1_pp0_stage0_iter0 = esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read());
}

void matrix_conv::thread_ap_block_state2_pp0_stage1_iter0() {
    ap_block_state2_pp0_stage1_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_conv::thread_ap_block_state3_pp0_stage2_iter0() {
    ap_block_state3_pp0_stage2_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_conv::thread_ap_block_state4_pp0_stage3_iter0() {
    ap_block_state4_pp0_stage3_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_conv::thread_ap_block_state5_pp0_stage4_iter0() {
    ap_block_state5_pp0_stage4_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_conv::thread_ap_block_state6_pp0_stage0_iter1() {
    ap_block_state6_pp0_stage0_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_conv::thread_ap_block_state7_pp0_stage1_iter1() {
    ap_block_state7_pp0_stage1_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_conv::thread_ap_block_state8_pp0_stage2_iter1() {
    ap_block_state8_pp0_stage2_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_conv::thread_ap_block_state9_pp0_stage3_iter1() {
    ap_block_state9_pp0_stage3_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrix_conv::thread_ap_done() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0))) {
        ap_done = ap_const_logic_1;
    } else {
        ap_done = ap_const_logic_0;
    }
}

void matrix_conv::thread_ap_enable_pp0() {
    ap_enable_pp0 = (ap_idle_pp0.read() ^ ap_const_logic_1);
}

void matrix_conv::thread_ap_enable_reg_pp0_iter0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read())) {
        ap_enable_reg_pp0_iter0 = ap_start.read();
    } else {
        ap_enable_reg_pp0_iter0 = ap_enable_reg_pp0_iter0_reg.read();
    }
}

void matrix_conv::thread_ap_idle() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_idle_pp0.read()))) {
        ap_idle = ap_const_logic_1;
    } else {
        ap_idle = ap_const_logic_0;
    }
}

void matrix_conv::thread_ap_idle_pp0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter1.read()))) {
        ap_idle_pp0 = ap_const_logic_1;
    } else {
        ap_idle_pp0 = ap_const_logic_0;
    }
}

void matrix_conv::thread_ap_idle_pp0_0to0() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter0.read())) {
        ap_idle_pp0_0to0 = ap_const_logic_1;
    } else {
        ap_idle_pp0_0to0 = ap_const_logic_0;
    }
}

void matrix_conv::thread_ap_idle_pp0_1to1() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter1.read())) {
        ap_idle_pp0_1to1 = ap_const_logic_1;
    } else {
        ap_idle_pp0_1to1 = ap_const_logic_0;
    }
}

void matrix_conv::thread_ap_ready() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0))) {
        ap_ready = ap_const_logic_1;
    } else {
        ap_ready = ap_const_logic_0;
    }
}

void matrix_conv::thread_ap_reset_idle_pp0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_idle_pp0_0to0.read()))) {
        ap_reset_idle_pp0 = ap_const_logic_1;
    } else {
        ap_reset_idle_pp0 = ap_const_logic_0;
    }
}

void matrix_conv::thread_b_0_addr_2_reg_6423() {
    b_0_addr_2_reg_6423 =  (sc_lv<2>) (ap_const_lv64_2);
}

void matrix_conv::thread_b_0_addr_reg_6413() {
    b_0_addr_reg_6413 =  (sc_lv<2>) (ap_const_lv64_0);
}

void matrix_conv::thread_b_0_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
            b_0_address0 =  (sc_lv<2>) (ap_const_lv64_1);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
            b_0_address0 = b_0_addr_reg_6413.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
            b_0_address0 =  (sc_lv<2>) (ap_const_lv64_0);
        } else {
            b_0_address0 =  (sc_lv<2>) ("XX");
        }
    } else {
        b_0_address0 =  (sc_lv<2>) ("XX");
    }
}

void matrix_conv::thread_b_0_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
            b_0_address1 =  (sc_lv<2>) (ap_const_lv64_1);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
            b_0_address1 = b_0_addr_2_reg_6423.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
            b_0_address1 =  (sc_lv<2>) (ap_const_lv64_2);
        } else {
            b_0_address1 =  (sc_lv<2>) ("XX");
        }
    } else {
        b_0_address1 =  (sc_lv<2>) ("XX");
    }
}

void matrix_conv::thread_b_0_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        b_0_ce0 = ap_const_logic_1;
    } else {
        b_0_ce0 = ap_const_logic_0;
    }
}

void matrix_conv::thread_b_0_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        b_0_ce1 = ap_const_logic_1;
    } else {
        b_0_ce1 = ap_const_logic_0;
    }
}

void matrix_conv::thread_b_1_addr_2_reg_6653() {
    b_1_addr_2_reg_6653 =  (sc_lv<2>) (ap_const_lv64_2);
}

void matrix_conv::thread_b_1_addr_reg_6593() {
    b_1_addr_reg_6593 =  (sc_lv<2>) (ap_const_lv64_0);
}

void matrix_conv::thread_b_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
            b_1_address0 = b_1_addr_reg_6593.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
            b_1_address0 =  (sc_lv<2>) (ap_const_lv64_0);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
            b_1_address0 =  (sc_lv<2>) (ap_const_lv64_1);
        } else {
            b_1_address0 =  (sc_lv<2>) ("XX");
        }
    } else {
        b_1_address0 =  (sc_lv<2>) ("XX");
    }
}

void matrix_conv::thread_b_1_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
            b_1_address1 = b_1_addr_2_reg_6653.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
            b_1_address1 =  (sc_lv<2>) (ap_const_lv64_2);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
            b_1_address1 =  (sc_lv<2>) (ap_const_lv64_1);
        } else {
            b_1_address1 =  (sc_lv<2>) ("XX");
        }
    } else {
        b_1_address1 =  (sc_lv<2>) ("XX");
    }
}

void matrix_conv::thread_b_1_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        b_1_ce0 = ap_const_logic_1;
    } else {
        b_1_ce0 = ap_const_logic_0;
    }
}

void matrix_conv::thread_b_1_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        b_1_ce1 = ap_const_logic_1;
    } else {
        b_1_ce1 = ap_const_logic_0;
    }
}

void matrix_conv::thread_b_2_addr_1_reg_6454() {
    b_2_addr_1_reg_6454 =  (sc_lv<2>) (ap_const_lv64_1);
}

void matrix_conv::thread_b_2_addr_2_reg_6459() {
    b_2_addr_2_reg_6459 =  (sc_lv<2>) (ap_const_lv64_2);
}

void matrix_conv::thread_b_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
            b_2_address0 =  (sc_lv<2>) (ap_const_lv64_0);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
            b_2_address0 = b_2_addr_1_reg_6454.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
            b_2_address0 =  (sc_lv<2>) (ap_const_lv64_1);
        } else {
            b_2_address0 =  (sc_lv<2>) ("XX");
        }
    } else {
        b_2_address0 =  (sc_lv<2>) ("XX");
    }
}

void matrix_conv::thread_b_2_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
            b_2_address1 =  (sc_lv<2>) (ap_const_lv64_0);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
            b_2_address1 = b_2_addr_2_reg_6459.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
            b_2_address1 =  (sc_lv<2>) (ap_const_lv64_2);
        } else {
            b_2_address1 =  (sc_lv<2>) ("XX");
        }
    } else {
        b_2_address1 =  (sc_lv<2>) ("XX");
    }
}

void matrix_conv::thread_b_2_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        b_2_ce0 = ap_const_logic_1;
    } else {
        b_2_ce0 = ap_const_logic_0;
    }
}

void matrix_conv::thread_b_2_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        b_2_ce1 = ap_const_logic_1;
    } else {
        b_2_ce1 = ap_const_logic_0;
    }
}

void matrix_conv::thread_grp_fu_4542_p0() {
    grp_fu_4542_p0 =  (sc_lv<8>) (tmp_0_0_1_2_fu_2085_p1.read());
}

void matrix_conv::thread_grp_fu_4542_p1() {
    grp_fu_4542_p1 =  (sc_lv<8>) (tmp_3_0_0_1_2_fu_2089_p1.read());
}

void matrix_conv::thread_grp_fu_4549_p0() {
    grp_fu_4549_p0 =  (sc_lv<8>) (tmp_0_0_2_2_fu_2093_p1.read());
}

void matrix_conv::thread_grp_fu_4549_p1() {
    grp_fu_4549_p1 =  (sc_lv<8>) (tmp_3_0_0_2_2_fu_2097_p1.read());
}

void matrix_conv::thread_grp_fu_4556_p0() {
    grp_fu_4556_p0 =  (sc_lv<8>) (tmp_0_0_2_2_fu_2093_p1.read());
}

void matrix_conv::thread_grp_fu_4556_p1() {
    grp_fu_4556_p1 =  (sc_lv<8>) (tmp_3_0_0_1_2_fu_2089_p1.read());
}

void matrix_conv::thread_grp_fu_4563_p0() {
    grp_fu_4563_p0 =  (sc_lv<8>) (tmp_1_0_2_2_fu_2155_p1.read());
}

void matrix_conv::thread_grp_fu_4563_p1() {
    grp_fu_4563_p1 =  (sc_lv<8>) (tmp_3_0_0_2_2_fu_2097_p1.read());
}

void matrix_conv::thread_grp_fu_4570_p0() {
    grp_fu_4570_p0 =  (sc_lv<8>) (tmp_1_0_2_2_fu_2155_p1.read());
}

void matrix_conv::thread_grp_fu_4570_p1() {
    grp_fu_4570_p1 =  (sc_lv<8>) (tmp_3_0_0_1_2_fu_2089_p1.read());
}

void matrix_conv::thread_grp_fu_4577_p0() {
    grp_fu_4577_p0 =  (sc_lv<8>) (tmp_2_0_2_2_fu_2205_p1.read());
}

void matrix_conv::thread_grp_fu_4577_p1() {
    grp_fu_4577_p1 =  (sc_lv<8>) (tmp_3_0_0_2_2_fu_2097_p1.read());
}

void matrix_conv::thread_grp_fu_4584_p0() {
    grp_fu_4584_p0 =  (sc_lv<8>) (tmp_2_0_2_2_fu_2205_p1.read());
}

void matrix_conv::thread_grp_fu_4584_p1() {
    grp_fu_4584_p1 =  (sc_lv<8>) (tmp_3_0_0_1_2_fu_2089_p1.read());
}

void matrix_conv::thread_grp_fu_4591_p0() {
    grp_fu_4591_p0 =  (sc_lv<8>) (tmp_3_0_2_2_fu_2255_p1.read());
}

void matrix_conv::thread_grp_fu_4591_p1() {
    grp_fu_4591_p1 =  (sc_lv<8>) (tmp_3_0_0_2_2_fu_2097_p1.read());
}

void matrix_conv::thread_grp_fu_4598_p0() {
    grp_fu_4598_p0 =  (sc_lv<8>) (tmp_3_0_2_2_fu_2255_p1.read());
}

void matrix_conv::thread_grp_fu_4598_p1() {
    grp_fu_4598_p1 =  (sc_lv<8>) (tmp_3_0_0_1_2_fu_2089_p1.read());
}

void matrix_conv::thread_grp_fu_4605_p0() {
    grp_fu_4605_p0 =  (sc_lv<8>) (tmp_4_0_2_2_fu_2308_p1.read());
}

void matrix_conv::thread_grp_fu_4605_p1() {
    grp_fu_4605_p1 =  (sc_lv<8>) (tmp_3_0_0_2_2_fu_2097_p1.read());
}

void matrix_conv::thread_grp_fu_4612_p0() {
    grp_fu_4612_p0 =  (sc_lv<8>) (tmp_4_0_2_2_fu_2308_p1.read());
}

void matrix_conv::thread_grp_fu_4612_p1() {
    grp_fu_4612_p1 =  (sc_lv<8>) (tmp_3_0_0_1_2_fu_2089_p1.read());
}

void matrix_conv::thread_grp_fu_4619_p0() {
    grp_fu_4619_p0 =  (sc_lv<8>) (tmp_5_0_2_2_fu_2361_p1.read());
}

void matrix_conv::thread_grp_fu_4619_p1() {
    grp_fu_4619_p1 =  (sc_lv<8>) (tmp_3_0_0_2_2_fu_2097_p1.read());
}

void matrix_conv::thread_grp_fu_4626_p0() {
    grp_fu_4626_p0 =  (sc_lv<8>) (tmp_0_0_0_1_reg_6573.read());
}

void matrix_conv::thread_grp_fu_4626_p1() {
    grp_fu_4626_p1 =  (sc_lv<8>) (tmp_3_0_0_0_1_fu_2568_p1.read());
}

void matrix_conv::thread_grp_fu_4632_p0() {
    grp_fu_4632_p0 =  (sc_lv<8>) (tmp_0_0_1_reg_6588.read());
}

void matrix_conv::thread_grp_fu_4632_p1() {
    grp_fu_4632_p1 =  (sc_lv<8>) (tmp_3_0_0_1_fu_2572_p1.read());
}

void matrix_conv::thread_grp_fu_4638_p0() {
    grp_fu_4638_p0 =  (sc_lv<8>) (tmp_0_0_2_reg_6658.read());
}

void matrix_conv::thread_grp_fu_4638_p1() {
    grp_fu_4638_p1 =  (sc_lv<8>) (tmp_3_0_0_2_fu_2575_p1.read());
}

void matrix_conv::thread_grp_fu_4644_p0() {
    grp_fu_4644_p0 =  (sc_lv<8>) (tmp_0_0_0_2_reg_7038.read());
}

void matrix_conv::thread_grp_fu_4644_p1() {
    grp_fu_4644_p1 =  (sc_lv<8>) (tmp_3_0_0_0_1_fu_2568_p1.read());
}

void matrix_conv::thread_grp_fu_4650_p0() {
    grp_fu_4650_p0 =  (sc_lv<8>) (tmp_0_0_1_1_reg_6598.read());
}

void matrix_conv::thread_grp_fu_4650_p1() {
    grp_fu_4650_p1 =  (sc_lv<8>) (tmp_3_0_0_1_fu_2572_p1.read());
}

void matrix_conv::thread_grp_fu_4656_p0() {
    grp_fu_4656_p0 =  (sc_lv<8>) (tmp_0_1_1_2_reg_7210.read());
}

void matrix_conv::thread_grp_fu_4656_p1() {
    grp_fu_4656_p1 =  (sc_lv<8>) (tmp_3_0_0_1_2_reg_7093.read());
}

void matrix_conv::thread_grp_fu_4661_p0() {
    grp_fu_4661_p0 =  (sc_lv<8>) (tmp_0_0_2_1_reg_6664.read());
}

void matrix_conv::thread_grp_fu_4661_p1() {
    grp_fu_4661_p1 =  (sc_lv<8>) (tmp_3_0_0_2_fu_2575_p1.read());
}

void matrix_conv::thread_grp_fu_4667_p0() {
    grp_fu_4667_p0 =  (sc_lv<8>) (tmp_0_1_2_2_reg_7222.read());
}

void matrix_conv::thread_grp_fu_4667_p1() {
    grp_fu_4667_p1 =  (sc_lv<8>) (tmp_3_0_0_2_2_reg_7145.read());
}

void matrix_conv::thread_grp_fu_4673_p0() {
    grp_fu_4673_p0 =  (sc_lv<8>) (tmp_0_1_0_2_reg_7195.read());
}

void matrix_conv::thread_grp_fu_4673_p1() {
    grp_fu_4673_p1 =  (sc_lv<8>) (tmp_3_0_0_0_1_fu_2568_p1.read());
}

void matrix_conv::thread_grp_fu_4679_p0() {
    grp_fu_4679_p0 =  (sc_lv<8>) (tmp_0_2_1_2_fu_2588_p1.read());
}

void matrix_conv::thread_grp_fu_4679_p1() {
    grp_fu_4679_p1 =  (sc_lv<8>) (tmp_3_0_0_1_2_reg_7093.read());
}

void matrix_conv::thread_grp_fu_4685_p0() {
    grp_fu_4685_p0 =  (sc_lv<8>) (tmp_0_2_2_2_fu_2592_p1.read());
}

void matrix_conv::thread_grp_fu_4685_p1() {
    grp_fu_4685_p1 =  (sc_lv<8>) (tmp_3_0_0_2_2_reg_7145.read());
}

void matrix_conv::thread_grp_fu_4691_p0() {
    grp_fu_4691_p0 =  (sc_lv<8>) (tmp_0_2_0_2_fu_2579_p1.read());
}

void matrix_conv::thread_grp_fu_4691_p1() {
    grp_fu_4691_p1 =  (sc_lv<8>) (tmp_3_0_0_0_1_fu_2568_p1.read());
}

void matrix_conv::thread_grp_fu_4698_p0() {
    grp_fu_4698_p0 =  (sc_lv<8>) (tmp_0_0_1_1_reg_6598.read());
}

void matrix_conv::thread_grp_fu_4698_p1() {
    grp_fu_4698_p1 =  (sc_lv<8>) (tmp_3_0_0_0_1_fu_2568_p1.read());
}

void matrix_conv::thread_grp_fu_4704_p0() {
    grp_fu_4704_p0 =  (sc_lv<8>) (tmp_0_0_2_reg_6658.read());
}

void matrix_conv::thread_grp_fu_4704_p1() {
    grp_fu_4704_p1 =  (sc_lv<8>) (tmp_3_0_0_1_fu_2572_p1.read());
}

void matrix_conv::thread_grp_fu_4710_p0() {
    grp_fu_4710_p0 =  (sc_lv<8>) (tmp_1_0_2_reg_6751.read());
}

void matrix_conv::thread_grp_fu_4710_p1() {
    grp_fu_4710_p1 =  (sc_lv<8>) (tmp_3_0_0_2_fu_2575_p1.read());
}

void matrix_conv::thread_grp_fu_4716_p0() {
    grp_fu_4716_p0 =  (sc_lv<8>) (tmp_0_0_1_2_reg_7087.read());
}

void matrix_conv::thread_grp_fu_4716_p1() {
    grp_fu_4716_p1 =  (sc_lv<8>) (tmp_3_0_0_0_1_fu_2568_p1.read());
}

void matrix_conv::thread_grp_fu_4722_p0() {
    grp_fu_4722_p0 =  (sc_lv<8>) (tmp_0_0_2_1_reg_6664.read());
}

void matrix_conv::thread_grp_fu_4722_p1() {
    grp_fu_4722_p1 =  (sc_lv<8>) (tmp_3_0_0_1_fu_2572_p1.read());
}

void matrix_conv::thread_grp_fu_4728_p0() {
    grp_fu_4728_p0 =  (sc_lv<8>) (tmp_0_1_2_2_reg_7222.read());
}

void matrix_conv::thread_grp_fu_4728_p1() {
    grp_fu_4728_p1 =  (sc_lv<8>) (tmp_3_0_0_1_2_reg_7093.read());
}

void matrix_conv::thread_grp_fu_4733_p0() {
    grp_fu_4733_p0 =  (sc_lv<8>) (tmp_1_0_2_1_reg_6757.read());
}

void matrix_conv::thread_grp_fu_4733_p1() {
    grp_fu_4733_p1 =  (sc_lv<8>) (tmp_3_0_0_2_fu_2575_p1.read());
}

void matrix_conv::thread_grp_fu_4739_p0() {
    grp_fu_4739_p0 =  (sc_lv<8>) (tmp_1_1_2_2_reg_7318.read());
}

void matrix_conv::thread_grp_fu_4739_p1() {
    grp_fu_4739_p1 =  (sc_lv<8>) (tmp_3_0_0_2_2_reg_7145.read());
}

void matrix_conv::thread_grp_fu_4745_p0() {
    grp_fu_4745_p0 =  (sc_lv<8>) (tmp_0_1_1_2_reg_7210.read());
}

void matrix_conv::thread_grp_fu_4745_p1() {
    grp_fu_4745_p1 =  (sc_lv<8>) (tmp_3_0_0_0_1_fu_2568_p1.read());
}

void matrix_conv::thread_grp_fu_4751_p0() {
    grp_fu_4751_p0 =  (sc_lv<8>) (tmp_0_2_2_2_fu_2592_p1.read());
}

void matrix_conv::thread_grp_fu_4751_p1() {
    grp_fu_4751_p1 =  (sc_lv<8>) (tmp_3_0_0_1_2_reg_7093.read());
}

void matrix_conv::thread_grp_fu_4757_p0() {
    grp_fu_4757_p0 =  (sc_lv<8>) (tmp_1_2_2_2_fu_2648_p1.read());
}

void matrix_conv::thread_grp_fu_4757_p1() {
    grp_fu_4757_p1 =  (sc_lv<8>) (tmp_3_0_0_2_2_reg_7145.read());
}

void matrix_conv::thread_grp_fu_4763_p0() {
    grp_fu_4763_p0 =  (sc_lv<8>) (tmp_0_2_1_2_fu_2588_p1.read());
}

void matrix_conv::thread_grp_fu_4763_p1() {
    grp_fu_4763_p1 =  (sc_lv<8>) (tmp_3_0_0_0_1_fu_2568_p1.read());
}

void matrix_conv::thread_grp_fu_4770_p0() {
    grp_fu_4770_p0 =  (sc_lv<8>) (tmp_0_0_2_1_reg_6664.read());
}

void matrix_conv::thread_grp_fu_4770_p1() {
    grp_fu_4770_p1 =  (sc_lv<8>) (tmp_3_0_0_0_1_fu_2568_p1.read());
}

void matrix_conv::thread_grp_fu_4776_p0() {
    grp_fu_4776_p0 =  (sc_lv<8>) (tmp_1_0_2_reg_6751.read());
}

void matrix_conv::thread_grp_fu_4776_p1() {
    grp_fu_4776_p1 =  (sc_lv<8>) (tmp_3_0_0_1_fu_2572_p1.read());
}

void matrix_conv::thread_grp_fu_4782_p0() {
    grp_fu_4782_p0 =  (sc_lv<8>) (tmp_2_0_2_reg_6794.read());
}

void matrix_conv::thread_grp_fu_4782_p1() {
    grp_fu_4782_p1 =  (sc_lv<8>) (tmp_3_0_0_2_fu_2575_p1.read());
}

void matrix_conv::thread_grp_fu_4788_p0() {
    grp_fu_4788_p0 =  (sc_lv<8>) (tmp_0_0_2_2_reg_7138.read());
}

void matrix_conv::thread_grp_fu_4788_p1() {
    grp_fu_4788_p1 =  (sc_lv<8>) (tmp_3_0_0_0_1_fu_2568_p1.read());
}

void matrix_conv::thread_grp_fu_4794_p0() {
    grp_fu_4794_p0 =  (sc_lv<8>) (tmp_1_0_2_1_reg_6757.read());
}

void matrix_conv::thread_grp_fu_4794_p1() {
    grp_fu_4794_p1 =  (sc_lv<8>) (tmp_3_0_0_1_fu_2572_p1.read());
}

void matrix_conv::thread_grp_fu_4800_p0() {
    grp_fu_4800_p0 =  (sc_lv<8>) (tmp_1_1_2_2_reg_7318.read());
}

void matrix_conv::thread_grp_fu_4800_p1() {
    grp_fu_4800_p1 =  (sc_lv<8>) (tmp_3_0_0_1_2_reg_7093.read());
}

void matrix_conv::thread_grp_fu_4805_p0() {
    grp_fu_4805_p0 =  (sc_lv<8>) (tmp_2_0_2_1_reg_6800.read());
}

void matrix_conv::thread_grp_fu_4805_p1() {
    grp_fu_4805_p1 =  (sc_lv<8>) (tmp_3_0_0_2_fu_2575_p1.read());
}

void matrix_conv::thread_grp_fu_4811_p0() {
    grp_fu_4811_p0 =  (sc_lv<8>) (tmp_2_1_2_2_reg_7394.read());
}

void matrix_conv::thread_grp_fu_4811_p1() {
    grp_fu_4811_p1 =  (sc_lv<8>) (tmp_3_0_0_2_2_reg_7145.read());
}

void matrix_conv::thread_grp_fu_4817_p0() {
    grp_fu_4817_p0 =  (sc_lv<8>) (tmp_0_1_2_2_reg_7222.read());
}

void matrix_conv::thread_grp_fu_4817_p1() {
    grp_fu_4817_p1 =  (sc_lv<8>) (tmp_3_0_0_0_1_fu_2568_p1.read());
}

void matrix_conv::thread_grp_fu_4823_p0() {
    grp_fu_4823_p0 =  (sc_lv<8>) (tmp_1_2_2_2_fu_2648_p1.read());
}

void matrix_conv::thread_grp_fu_4823_p1() {
    grp_fu_4823_p1 =  (sc_lv<8>) (tmp_3_0_0_1_2_reg_7093.read());
}

void matrix_conv::thread_grp_fu_4829_p0() {
    grp_fu_4829_p0 =  (sc_lv<8>) (tmp_2_2_2_2_fu_2696_p1.read());
}

void matrix_conv::thread_grp_fu_4829_p1() {
    grp_fu_4829_p1 =  (sc_lv<8>) (tmp_3_0_0_2_2_reg_7145.read());
}

void matrix_conv::thread_grp_fu_4835_p0() {
    grp_fu_4835_p0 =  (sc_lv<8>) (tmp_0_2_2_2_fu_2592_p1.read());
}

void matrix_conv::thread_grp_fu_4835_p1() {
    grp_fu_4835_p1 =  (sc_lv<8>) (tmp_3_0_0_0_1_fu_2568_p1.read());
}

void matrix_conv::thread_grp_fu_4842_p0() {
    grp_fu_4842_p0 =  (sc_lv<8>) (tmp_1_0_2_1_reg_6757.read());
}

void matrix_conv::thread_grp_fu_4842_p1() {
    grp_fu_4842_p1 =  (sc_lv<8>) (tmp_3_0_0_0_1_fu_2568_p1.read());
}

void matrix_conv::thread_grp_fu_4848_p0() {
    grp_fu_4848_p0 =  (sc_lv<8>) (tmp_2_0_2_reg_6794.read());
}

void matrix_conv::thread_grp_fu_4848_p1() {
    grp_fu_4848_p1 =  (sc_lv<8>) (tmp_3_0_0_1_fu_2572_p1.read());
}

void matrix_conv::thread_grp_fu_4854_p0() {
    grp_fu_4854_p0 =  (sc_lv<8>) (tmp_3_0_2_reg_6837.read());
}

void matrix_conv::thread_grp_fu_4854_p1() {
    grp_fu_4854_p1 =  (sc_lv<8>) (tmp_3_0_0_2_fu_2575_p1.read());
}

void matrix_conv::thread_grp_fu_4860_p0() {
    grp_fu_4860_p0 =  (sc_lv<8>) (tmp_1_0_2_2_reg_7286.read());
}

void matrix_conv::thread_grp_fu_4860_p1() {
    grp_fu_4860_p1 =  (sc_lv<8>) (tmp_3_0_0_0_1_fu_2568_p1.read());
}

void matrix_conv::thread_grp_fu_4866_p0() {
    grp_fu_4866_p0 =  (sc_lv<8>) (tmp_2_0_2_1_reg_6800.read());
}

void matrix_conv::thread_grp_fu_4866_p1() {
    grp_fu_4866_p1 =  (sc_lv<8>) (tmp_3_0_0_1_fu_2572_p1.read());
}

void matrix_conv::thread_grp_fu_4872_p0() {
    grp_fu_4872_p0 =  (sc_lv<8>) (tmp_2_1_2_2_reg_7394.read());
}

void matrix_conv::thread_grp_fu_4872_p1() {
    grp_fu_4872_p1 =  (sc_lv<8>) (tmp_3_0_0_1_2_reg_7093.read());
}

void matrix_conv::thread_grp_fu_4877_p0() {
    grp_fu_4877_p0 =  (sc_lv<8>) (tmp_3_0_2_1_reg_6843.read());
}

void matrix_conv::thread_grp_fu_4877_p1() {
    grp_fu_4877_p1 =  (sc_lv<8>) (tmp_3_0_0_2_fu_2575_p1.read());
}

void matrix_conv::thread_grp_fu_4883_p0() {
    grp_fu_4883_p0 =  (sc_lv<8>) (tmp_3_1_2_2_reg_7470.read());
}

void matrix_conv::thread_grp_fu_4883_p1() {
    grp_fu_4883_p1 =  (sc_lv<8>) (tmp_3_0_0_2_2_reg_7145.read());
}

void matrix_conv::thread_grp_fu_4889_p0() {
    grp_fu_4889_p0 =  (sc_lv<8>) (tmp_1_1_2_2_reg_7318.read());
}

void matrix_conv::thread_grp_fu_4889_p1() {
    grp_fu_4889_p1 =  (sc_lv<8>) (tmp_3_0_0_0_1_fu_2568_p1.read());
}

void matrix_conv::thread_grp_fu_4895_p0() {
    grp_fu_4895_p0 =  (sc_lv<8>) (tmp_2_2_2_2_fu_2696_p1.read());
}

void matrix_conv::thread_grp_fu_4895_p1() {
    grp_fu_4895_p1 =  (sc_lv<8>) (tmp_3_0_0_1_2_reg_7093.read());
}

void matrix_conv::thread_grp_fu_4901_p0() {
    grp_fu_4901_p0 =  (sc_lv<8>) (tmp_3_2_2_2_fu_2744_p1.read());
}

void matrix_conv::thread_grp_fu_4901_p1() {
    grp_fu_4901_p1 =  (sc_lv<8>) (tmp_3_0_0_2_2_reg_7145.read());
}

void matrix_conv::thread_grp_fu_4907_p0() {
    grp_fu_4907_p0 =  (sc_lv<8>) (tmp_1_2_2_2_fu_2648_p1.read());
}

void matrix_conv::thread_grp_fu_4907_p1() {
    grp_fu_4907_p1 =  (sc_lv<8>) (tmp_3_0_0_0_1_fu_2568_p1.read());
}

void matrix_conv::thread_grp_fu_4914_p0() {
    grp_fu_4914_p0 =  (sc_lv<8>) (tmp_2_0_2_1_reg_6800.read());
}

void matrix_conv::thread_grp_fu_4914_p1() {
    grp_fu_4914_p1 =  (sc_lv<8>) (tmp_3_0_0_0_1_fu_2568_p1.read());
}

void matrix_conv::thread_grp_fu_4920_p0() {
    grp_fu_4920_p0 =  (sc_lv<8>) (tmp_3_0_2_reg_6837.read());
}

void matrix_conv::thread_grp_fu_4920_p1() {
    grp_fu_4920_p1 =  (sc_lv<8>) (tmp_3_0_0_1_fu_2572_p1.read());
}

void matrix_conv::thread_grp_fu_4926_p0() {
    grp_fu_4926_p0 =  (sc_lv<8>) (tmp_4_0_2_reg_7514.read());
}

void matrix_conv::thread_grp_fu_4926_p1() {
    grp_fu_4926_p1 =  (sc_lv<8>) (tmp_3_0_0_2_fu_2575_p1.read());
}

void matrix_conv::thread_grp_fu_4932_p0() {
    grp_fu_4932_p0 =  (sc_lv<8>) (tmp_2_0_2_2_reg_7362.read());
}

void matrix_conv::thread_grp_fu_4932_p1() {
    grp_fu_4932_p1 =  (sc_lv<8>) (tmp_3_0_0_0_1_fu_2568_p1.read());
}

void matrix_conv::thread_grp_fu_4938_p0() {
    grp_fu_4938_p0 =  (sc_lv<8>) (tmp_3_0_2_1_reg_6843.read());
}

void matrix_conv::thread_grp_fu_4938_p1() {
    grp_fu_4938_p1 =  (sc_lv<8>) (tmp_3_0_0_1_fu_2572_p1.read());
}

void matrix_conv::thread_grp_fu_4944_p0() {
    grp_fu_4944_p0 =  (sc_lv<8>) (tmp_3_1_2_2_reg_7470.read());
}

void matrix_conv::thread_grp_fu_4944_p1() {
    grp_fu_4944_p1 =  (sc_lv<8>) (tmp_3_0_0_1_2_reg_7093.read());
}

void matrix_conv::thread_grp_fu_4949_p0() {
    grp_fu_4949_p0 =  (sc_lv<8>) (tmp_4_0_2_1_reg_6886.read());
}

void matrix_conv::thread_grp_fu_4949_p1() {
    grp_fu_4949_p1 =  (sc_lv<8>) (tmp_3_0_0_2_fu_2575_p1.read());
}

void matrix_conv::thread_grp_fu_4955_p0() {
    grp_fu_4955_p0 =  (sc_lv<8>) (tmp_4_1_2_2_reg_7552.read());
}

void matrix_conv::thread_grp_fu_4955_p1() {
    grp_fu_4955_p1 =  (sc_lv<8>) (tmp_3_0_0_2_2_reg_7145.read());
}

void matrix_conv::thread_grp_fu_4961_p0() {
    grp_fu_4961_p0 =  (sc_lv<8>) (tmp_2_1_2_2_reg_7394.read());
}

void matrix_conv::thread_grp_fu_4961_p1() {
    grp_fu_4961_p1 =  (sc_lv<8>) (tmp_3_0_0_0_1_fu_2568_p1.read());
}

void matrix_conv::thread_grp_fu_4967_p0() {
    grp_fu_4967_p0 =  (sc_lv<8>) (tmp_3_2_2_2_fu_2744_p1.read());
}

void matrix_conv::thread_grp_fu_4967_p1() {
    grp_fu_4967_p1 =  (sc_lv<8>) (tmp_3_0_0_1_2_reg_7093.read());
}

void matrix_conv::thread_grp_fu_4973_p0() {
    grp_fu_4973_p0 =  (sc_lv<8>) (tmp_4_2_2_2_fu_2792_p1.read());
}

void matrix_conv::thread_grp_fu_4973_p1() {
    grp_fu_4973_p1 =  (sc_lv<8>) (tmp_3_0_0_2_2_reg_7145.read());
}

void matrix_conv::thread_grp_fu_4979_p0() {
    grp_fu_4979_p0 =  (sc_lv<8>) (tmp_2_2_2_2_fu_2696_p1.read());
}

void matrix_conv::thread_grp_fu_4979_p1() {
    grp_fu_4979_p1 =  (sc_lv<8>) (tmp_3_0_0_0_1_fu_2568_p1.read());
}

void matrix_conv::thread_grp_fu_4986_p0() {
    grp_fu_4986_p0 =  (sc_lv<8>) (tmp_3_0_2_1_reg_6843.read());
}

void matrix_conv::thread_grp_fu_4986_p1() {
    grp_fu_4986_p1 =  (sc_lv<8>) (tmp_3_0_0_0_1_fu_2568_p1.read());
}

void matrix_conv::thread_grp_fu_4992_p0() {
    grp_fu_4992_p0 =  (sc_lv<8>) (tmp_4_0_2_reg_7514.read());
}

void matrix_conv::thread_grp_fu_4992_p1() {
    grp_fu_4992_p1 =  (sc_lv<8>) (tmp_3_0_0_1_fu_2572_p1.read());
}

void matrix_conv::thread_grp_fu_4998_p0() {
    grp_fu_4998_p0 =  (sc_lv<8>) (tmp_5_0_2_reg_7596.read());
}

void matrix_conv::thread_grp_fu_4998_p1() {
    grp_fu_4998_p1 =  (sc_lv<8>) (tmp_3_0_0_2_fu_2575_p1.read());
}

void matrix_conv::thread_grp_fu_5004_p0() {
    grp_fu_5004_p0 =  (sc_lv<8>) (tmp_3_0_2_2_reg_7438.read());
}

void matrix_conv::thread_grp_fu_5004_p1() {
    grp_fu_5004_p1 =  (sc_lv<8>) (tmp_3_5_1_0_1_fu_2835_p1.read());
}

void matrix_conv::thread_grp_fu_5010_p0() {
    grp_fu_5010_p0 =  (sc_lv<8>) (tmp_4_0_2_1_reg_6886.read());
}

void matrix_conv::thread_grp_fu_5010_p1() {
    grp_fu_5010_p1 =  (sc_lv<8>) (tmp_3_5_1_1_fu_2839_p1.read());
}

void matrix_conv::thread_grp_fu_5016_p0() {
    grp_fu_5016_p0 =  (sc_lv<8>) (tmp_4_1_2_2_reg_7552.read());
}

void matrix_conv::thread_grp_fu_5016_p1() {
    grp_fu_5016_p1 =  (sc_lv<8>) (tmp_3_5_1_1_2_fu_2843_p1.read());
}

void matrix_conv::thread_grp_fu_5022_p0() {
    grp_fu_5022_p0 =  (sc_lv<8>) (tmp_5_0_2_1_reg_6929.read());
}

void matrix_conv::thread_grp_fu_5022_p1() {
    grp_fu_5022_p1 =  (sc_lv<8>) (tmp_3_0_0_2_fu_2575_p1.read());
}

void matrix_conv::thread_grp_fu_5028_p0() {
    grp_fu_5028_p0 =  (sc_lv<8>) (tmp_5_1_2_2_reg_7679.read());
}

void matrix_conv::thread_grp_fu_5028_p1() {
    grp_fu_5028_p1 =  (sc_lv<8>) (tmp_3_0_0_2_2_reg_7145.read());
}

void matrix_conv::thread_grp_fu_5034_p0() {
    grp_fu_5034_p0 =  (sc_lv<8>) (tmp_3_1_2_2_reg_7470.read());
}

void matrix_conv::thread_grp_fu_5034_p1() {
    grp_fu_5034_p1 =  (sc_lv<8>) (tmp_3_5_1_0_1_fu_2835_p1.read());
}

void matrix_conv::thread_grp_fu_5040_p0() {
    grp_fu_5040_p0 =  (sc_lv<8>) (tmp_4_2_2_2_fu_2792_p1.read());
}

void matrix_conv::thread_grp_fu_5040_p1() {
    grp_fu_5040_p1 =  (sc_lv<8>) (tmp_3_5_1_1_2_fu_2843_p1.read());
}

void matrix_conv::thread_grp_fu_5047_p0() {
    grp_fu_5047_p0 =  (sc_lv<8>) (tmp_5_2_2_2_fu_2856_p1.read());
}

void matrix_conv::thread_grp_fu_5047_p1() {
    grp_fu_5047_p1 =  (sc_lv<8>) (tmp_3_5_2_2_2_3_fu_2860_p1.read());
}

void matrix_conv::thread_grp_fu_5054_p0() {
    grp_fu_5054_p0 =  (sc_lv<8>) (tmp_3_2_2_2_fu_2744_p1.read());
}

void matrix_conv::thread_grp_fu_5054_p1() {
    grp_fu_5054_p1 =  (sc_lv<8>) (tmp_3_5_1_0_1_fu_2835_p1.read());
}

void matrix_conv::thread_grp_fu_5061_p0() {
    grp_fu_5061_p0 =  (sc_lv<8>) (tmp_4_0_2_1_reg_6886.read());
}

void matrix_conv::thread_grp_fu_5061_p1() {
    grp_fu_5061_p1 =  (sc_lv<8>) (tmp_3_5_1_0_1_fu_2835_p1.read());
}

void matrix_conv::thread_grp_fu_5067_p0() {
    grp_fu_5067_p0 =  (sc_lv<8>) (tmp_5_0_2_reg_7596.read());
}

void matrix_conv::thread_grp_fu_5067_p1() {
    grp_fu_5067_p1 =  (sc_lv<8>) (tmp_3_5_1_1_fu_2839_p1.read());
}

void matrix_conv::thread_grp_fu_5073_p0() {
    grp_fu_5073_p0 =  (sc_lv<8>) (tmp_5_0_2_2_reg_7602.read());
}

void matrix_conv::thread_grp_fu_5073_p1() {
    grp_fu_5073_p1 =  (sc_lv<8>) (tmp_3_5_1_1_2_fu_2843_p1.read());
}

void matrix_conv::thread_grp_fu_5079_p0() {
    grp_fu_5079_p0 =  (sc_lv<8>) (tmp_6_0_2_2_reg_6988.read());
}

void matrix_conv::thread_grp_fu_5079_p1() {
    grp_fu_5079_p1 =  (sc_lv<8>) (tmp_3_5_2_2_2_3_fu_2860_p1.read());
}

void matrix_conv::thread_grp_fu_5085_p0() {
    grp_fu_5085_p0 =  (sc_lv<8>) (tmp_4_0_2_2_reg_7520.read());
}

void matrix_conv::thread_grp_fu_5085_p1() {
    grp_fu_5085_p1 =  (sc_lv<8>) (tmp_3_5_1_0_1_fu_2835_p1.read());
}

void matrix_conv::thread_grp_fu_5091_p0() {
    grp_fu_5091_p0 =  (sc_lv<8>) (tmp_5_0_2_1_reg_6929.read());
}

void matrix_conv::thread_grp_fu_5091_p1() {
    grp_fu_5091_p1 =  (sc_lv<8>) (tmp_3_5_1_1_fu_2839_p1.read());
}

void matrix_conv::thread_grp_fu_5097_p0() {
    grp_fu_5097_p0 =  (sc_lv<8>) (tmp_5_1_2_2_reg_7679.read());
}

void matrix_conv::thread_grp_fu_5097_p1() {
    grp_fu_5097_p1 =  (sc_lv<8>) (tmp_3_5_1_1_2_fu_2843_p1.read());
}

void matrix_conv::thread_grp_fu_5103_p0() {
    grp_fu_5103_p0 =  (sc_lv<8>) (tmp_6_0_2_1_reg_6981.read());
}

void matrix_conv::thread_grp_fu_5103_p1() {
    grp_fu_5103_p1 =  (sc_lv<8>) (tmp_3_5_2_2_2_fu_2852_p1.read());
}

void matrix_conv::thread_grp_fu_5109_p0() {
    grp_fu_5109_p0 =  (sc_lv<8>) (tmp_6_1_2_2_reg_7771.read());
}

void matrix_conv::thread_grp_fu_5109_p1() {
    grp_fu_5109_p1 =  (sc_lv<8>) (tmp_3_5_2_2_2_3_fu_2860_p1.read());
}

void matrix_conv::thread_grp_fu_5116_p0() {
    grp_fu_5116_p0 =  (sc_lv<8>) (tmp_4_1_2_2_reg_7552.read());
}

void matrix_conv::thread_grp_fu_5116_p1() {
    grp_fu_5116_p1 =  (sc_lv<8>) (tmp_3_5_1_0_1_fu_2835_p1.read());
}

void matrix_conv::thread_grp_fu_5122_p0() {
    grp_fu_5122_p0 =  (sc_lv<8>) (tmp_5_2_2_2_fu_2856_p1.read());
}

void matrix_conv::thread_grp_fu_5122_p1() {
    grp_fu_5122_p1 =  (sc_lv<8>) (tmp_3_5_1_1_2_fu_2843_p1.read());
}

void matrix_conv::thread_grp_fu_5129_p0() {
    grp_fu_5129_p0 =  (sc_lv<8>) (tmp_6_0_2_2_reg_6988.read());
}

void matrix_conv::thread_grp_fu_5129_p1() {
    grp_fu_5129_p1 =  (sc_lv<8>) (tmp_3_5_2_2_2_fu_2852_p1.read());
}

void matrix_conv::thread_grp_fu_5135_p0() {
    grp_fu_5135_p0 =  (sc_lv<8>) (tmp_6_2_2_2_reg_7795.read());
}

void matrix_conv::thread_grp_fu_5135_p1() {
    grp_fu_5135_p1 =  (sc_lv<8>) (tmp_3_5_2_2_2_3_fu_2860_p1.read());
}

void matrix_conv::thread_grp_fu_5142_p0() {
    grp_fu_5142_p0 =  (sc_lv<8>) (tmp_0_0_1_2_reg_7087.read());
}

void matrix_conv::thread_grp_fu_5142_p1() {
    grp_fu_5142_p1 =  (sc_lv<8>) (tmp_3_0_0_1_reg_7926.read());
}

void matrix_conv::thread_grp_fu_5147_p0() {
    grp_fu_5147_p0 =  (sc_lv<8>) (tmp_0_0_2_2_reg_7138.read());
}

void matrix_conv::thread_grp_fu_5147_p1() {
    grp_fu_5147_p1 =  (sc_lv<8>) (tmp_3_0_0_2_reg_7960.read());
}

void matrix_conv::thread_grp_fu_5153_p0() {
    grp_fu_5153_p0 =  (sc_lv<8>) (tmp_0_1_1_2_reg_7210.read());
}

void matrix_conv::thread_grp_fu_5153_p1() {
    grp_fu_5153_p1 =  (sc_lv<8>) (tmp_3_0_0_1_reg_7926.read());
}

void matrix_conv::thread_grp_fu_5158_p0() {
    grp_fu_5158_p0 =  (sc_lv<8>) (tmp_0_3_1_2_reg_8075.read());
}

void matrix_conv::thread_grp_fu_5158_p1() {
    grp_fu_5158_p1 =  (sc_lv<8>) (tmp_3_0_0_1_2_reg_7093.read());
}

void matrix_conv::thread_grp_fu_5164_p0() {
    grp_fu_5164_p0 =  (sc_lv<8>) (tmp_0_1_2_2_reg_7222.read());
}

void matrix_conv::thread_grp_fu_5164_p1() {
    grp_fu_5164_p1 =  (sc_lv<8>) (tmp_3_0_0_2_reg_7960.read());
}

void matrix_conv::thread_grp_fu_5170_p0() {
    grp_fu_5170_p0 =  (sc_lv<8>) (tmp_0_3_2_2_reg_8087.read());
}

void matrix_conv::thread_grp_fu_5170_p1() {
    grp_fu_5170_p1 =  (sc_lv<8>) (tmp_3_0_0_2_2_reg_7145.read());
}

void matrix_conv::thread_grp_fu_5176_p0() {
    grp_fu_5176_p0 =  (sc_lv<8>) (tmp_0_3_0_2_reg_8060.read());
}

void matrix_conv::thread_grp_fu_5176_p1() {
    grp_fu_5176_p1 =  (sc_lv<8>) (tmp_3_0_0_0_1_reg_7902.read());
}

void matrix_conv::thread_grp_fu_5181_p0() {
    grp_fu_5181_p0 =  (sc_lv<8>) (tmp_0_4_1_2_fu_3058_p1.read());
}

void matrix_conv::thread_grp_fu_5181_p1() {
    grp_fu_5181_p1 =  (sc_lv<8>) (tmp_3_0_0_1_2_reg_7093.read());
}

void matrix_conv::thread_grp_fu_5187_p0() {
    grp_fu_5187_p0 =  (sc_lv<8>) (tmp_0_4_2_2_fu_3062_p1.read());
}

void matrix_conv::thread_grp_fu_5187_p1() {
    grp_fu_5187_p1 =  (sc_lv<8>) (tmp_3_0_0_2_2_reg_7145.read());
}

void matrix_conv::thread_grp_fu_5193_p0() {
    grp_fu_5193_p0 =  (sc_lv<8>) (tmp_0_4_0_2_fu_3049_p1.read());
}

void matrix_conv::thread_grp_fu_5193_p1() {
    grp_fu_5193_p1 =  (sc_lv<8>) (tmp_3_0_0_0_1_reg_7902.read());
}

void matrix_conv::thread_grp_fu_5199_p0() {
    grp_fu_5199_p0 =  (sc_lv<8>) (tmp_0_0_2_2_reg_7138.read());
}

void matrix_conv::thread_grp_fu_5199_p1() {
    grp_fu_5199_p1 =  (sc_lv<8>) (tmp_3_0_0_1_reg_7926.read());
}

void matrix_conv::thread_grp_fu_5204_p0() {
    grp_fu_5204_p0 =  (sc_lv<8>) (tmp_1_0_2_2_reg_7286.read());
}

void matrix_conv::thread_grp_fu_5204_p1() {
    grp_fu_5204_p1 =  (sc_lv<8>) (tmp_3_0_0_2_reg_7960.read());
}

void matrix_conv::thread_grp_fu_5210_p0() {
    grp_fu_5210_p0 =  (sc_lv<8>) (tmp_0_1_2_2_reg_7222.read());
}

void matrix_conv::thread_grp_fu_5210_p1() {
    grp_fu_5210_p1 =  (sc_lv<8>) (tmp_3_0_0_1_reg_7926.read());
}

void matrix_conv::thread_grp_fu_5215_p0() {
    grp_fu_5215_p0 =  (sc_lv<8>) (tmp_0_3_2_2_reg_8087.read());
}

void matrix_conv::thread_grp_fu_5215_p1() {
    grp_fu_5215_p1 =  (sc_lv<8>) (tmp_3_0_0_1_2_reg_7093.read());
}

void matrix_conv::thread_grp_fu_5221_p0() {
    grp_fu_5221_p0 =  (sc_lv<8>) (tmp_1_1_2_2_reg_7318.read());
}

void matrix_conv::thread_grp_fu_5221_p1() {
    grp_fu_5221_p1 =  (sc_lv<8>) (tmp_3_0_0_2_reg_7960.read());
}

void matrix_conv::thread_grp_fu_5227_p0() {
    grp_fu_5227_p0 =  (sc_lv<8>) (tmp_1_3_2_2_reg_8227.read());
}

void matrix_conv::thread_grp_fu_5227_p1() {
    grp_fu_5227_p1 =  (sc_lv<8>) (tmp_3_0_0_2_2_reg_7145.read());
}

void matrix_conv::thread_grp_fu_5233_p0() {
    grp_fu_5233_p0 =  (sc_lv<8>) (tmp_0_3_1_2_reg_8075.read());
}

void matrix_conv::thread_grp_fu_5233_p1() {
    grp_fu_5233_p1 =  (sc_lv<8>) (tmp_3_0_0_0_1_reg_7902.read());
}

void matrix_conv::thread_grp_fu_5238_p0() {
    grp_fu_5238_p0 =  (sc_lv<8>) (tmp_0_4_2_2_fu_3062_p1.read());
}

void matrix_conv::thread_grp_fu_5238_p1() {
    grp_fu_5238_p1 =  (sc_lv<8>) (tmp_3_0_0_1_2_reg_7093.read());
}

void matrix_conv::thread_grp_fu_5244_p0() {
    grp_fu_5244_p0 =  (sc_lv<8>) (tmp_1_4_2_2_fu_3156_p1.read());
}

void matrix_conv::thread_grp_fu_5244_p1() {
    grp_fu_5244_p1 =  (sc_lv<8>) (tmp_3_0_0_2_2_reg_7145.read());
}

void matrix_conv::thread_grp_fu_5250_p0() {
    grp_fu_5250_p0 =  (sc_lv<8>) (tmp_0_4_1_2_fu_3058_p1.read());
}

void matrix_conv::thread_grp_fu_5250_p1() {
    grp_fu_5250_p1 =  (sc_lv<8>) (tmp_3_0_0_0_1_reg_7902.read());
}

void matrix_conv::thread_grp_fu_5256_p0() {
    grp_fu_5256_p0 =  (sc_lv<8>) (tmp_1_0_2_2_reg_7286.read());
}

void matrix_conv::thread_grp_fu_5256_p1() {
    grp_fu_5256_p1 =  (sc_lv<8>) (tmp_3_0_0_1_reg_7926.read());
}

void matrix_conv::thread_grp_fu_5261_p0() {
    grp_fu_5261_p0 =  (sc_lv<8>) (tmp_2_0_2_2_reg_7362.read());
}

void matrix_conv::thread_grp_fu_5261_p1() {
    grp_fu_5261_p1 =  (sc_lv<8>) (tmp_3_0_0_2_reg_7960.read());
}

void matrix_conv::thread_grp_fu_5267_p0() {
    grp_fu_5267_p0 =  (sc_lv<8>) (tmp_1_1_2_2_reg_7318.read());
}

void matrix_conv::thread_grp_fu_5267_p1() {
    grp_fu_5267_p1 =  (sc_lv<8>) (tmp_3_0_0_1_reg_7926.read());
}

void matrix_conv::thread_grp_fu_5272_p0() {
    grp_fu_5272_p0 =  (sc_lv<8>) (tmp_1_3_2_2_reg_8227.read());
}

void matrix_conv::thread_grp_fu_5272_p1() {
    grp_fu_5272_p1 =  (sc_lv<8>) (tmp_3_0_0_1_2_reg_7093.read());
}

void matrix_conv::thread_grp_fu_5278_p0() {
    grp_fu_5278_p0 =  (sc_lv<8>) (tmp_2_1_2_2_reg_7394.read());
}

void matrix_conv::thread_grp_fu_5278_p1() {
    grp_fu_5278_p1 =  (sc_lv<8>) (tmp_3_0_0_2_reg_7960.read());
}

void matrix_conv::thread_grp_fu_5284_p0() {
    grp_fu_5284_p0 =  (sc_lv<8>) (tmp_2_3_2_2_reg_8347.read());
}

void matrix_conv::thread_grp_fu_5284_p1() {
    grp_fu_5284_p1 =  (sc_lv<8>) (tmp_3_0_0_2_2_reg_7145.read());
}

void matrix_conv::thread_grp_fu_5290_p0() {
    grp_fu_5290_p0 =  (sc_lv<8>) (tmp_0_3_2_2_reg_8087.read());
}

void matrix_conv::thread_grp_fu_5290_p1() {
    grp_fu_5290_p1 =  (sc_lv<8>) (tmp_3_0_0_0_1_reg_7902.read());
}

void matrix_conv::thread_grp_fu_5295_p0() {
    grp_fu_5295_p0 =  (sc_lv<8>) (tmp_1_4_2_2_fu_3156_p1.read());
}

void matrix_conv::thread_grp_fu_5295_p1() {
    grp_fu_5295_p1 =  (sc_lv<8>) (tmp_3_0_0_1_2_reg_7093.read());
}

void matrix_conv::thread_grp_fu_5301_p0() {
    grp_fu_5301_p0 =  (sc_lv<8>) (tmp_2_4_2_2_fu_3242_p1.read());
}

void matrix_conv::thread_grp_fu_5301_p1() {
    grp_fu_5301_p1 =  (sc_lv<8>) (tmp_3_0_0_2_2_reg_7145.read());
}

void matrix_conv::thread_grp_fu_5307_p0() {
    grp_fu_5307_p0 =  (sc_lv<8>) (tmp_0_4_2_2_fu_3062_p1.read());
}

void matrix_conv::thread_grp_fu_5307_p1() {
    grp_fu_5307_p1 =  (sc_lv<8>) (tmp_3_0_0_0_1_reg_7902.read());
}

void matrix_conv::thread_grp_fu_5313_p0() {
    grp_fu_5313_p0 =  (sc_lv<8>) (tmp_2_0_2_2_reg_7362.read());
}

void matrix_conv::thread_grp_fu_5313_p1() {
    grp_fu_5313_p1 =  (sc_lv<8>) (tmp_3_0_0_1_reg_7926.read());
}

void matrix_conv::thread_grp_fu_5318_p0() {
    grp_fu_5318_p0 =  (sc_lv<8>) (tmp_3_0_2_2_reg_7438.read());
}

void matrix_conv::thread_grp_fu_5318_p1() {
    grp_fu_5318_p1 =  (sc_lv<8>) (tmp_3_0_0_2_reg_7960.read());
}

void matrix_conv::thread_grp_fu_5324_p0() {
    grp_fu_5324_p0 =  (sc_lv<8>) (tmp_2_1_2_2_reg_7394.read());
}

void matrix_conv::thread_grp_fu_5324_p1() {
    grp_fu_5324_p1 =  (sc_lv<8>) (tmp_3_0_0_1_reg_7926.read());
}

void matrix_conv::thread_grp_fu_5329_p0() {
    grp_fu_5329_p0 =  (sc_lv<8>) (tmp_2_3_2_2_reg_8347.read());
}

void matrix_conv::thread_grp_fu_5329_p1() {
    grp_fu_5329_p1 =  (sc_lv<8>) (tmp_3_0_0_1_2_reg_7093.read());
}

void matrix_conv::thread_grp_fu_5335_p0() {
    grp_fu_5335_p0 =  (sc_lv<8>) (tmp_3_1_2_2_reg_7470.read());
}

void matrix_conv::thread_grp_fu_5335_p1() {
    grp_fu_5335_p1 =  (sc_lv<8>) (tmp_3_0_0_2_reg_7960.read());
}

void matrix_conv::thread_grp_fu_5341_p0() {
    grp_fu_5341_p0 =  (sc_lv<8>) (tmp_3_3_2_2_reg_8467.read());
}

void matrix_conv::thread_grp_fu_5341_p1() {
    grp_fu_5341_p1 =  (sc_lv<8>) (tmp_3_0_0_2_2_reg_7145.read());
}

void matrix_conv::thread_grp_fu_5347_p0() {
    grp_fu_5347_p0 =  (sc_lv<8>) (tmp_1_3_2_2_reg_8227.read());
}

void matrix_conv::thread_grp_fu_5347_p1() {
    grp_fu_5347_p1 =  (sc_lv<8>) (tmp_3_0_0_0_1_reg_7902.read());
}

void matrix_conv::thread_grp_fu_5352_p0() {
    grp_fu_5352_p0 =  (sc_lv<8>) (tmp_2_4_2_2_fu_3242_p1.read());
}

void matrix_conv::thread_grp_fu_5352_p1() {
    grp_fu_5352_p1 =  (sc_lv<8>) (tmp_3_0_0_1_2_reg_7093.read());
}

void matrix_conv::thread_grp_fu_5358_p0() {
    grp_fu_5358_p0 =  (sc_lv<8>) (tmp_3_4_2_2_fu_3328_p1.read());
}

void matrix_conv::thread_grp_fu_5358_p1() {
    grp_fu_5358_p1 =  (sc_lv<8>) (tmp_3_0_0_2_2_reg_7145.read());
}

void matrix_conv::thread_grp_fu_5364_p0() {
    grp_fu_5364_p0 =  (sc_lv<8>) (tmp_1_4_2_2_fu_3156_p1.read());
}

void matrix_conv::thread_grp_fu_5364_p1() {
    grp_fu_5364_p1 =  (sc_lv<8>) (tmp_3_0_0_0_1_reg_7902.read());
}

void matrix_conv::thread_grp_fu_5370_p0() {
    grp_fu_5370_p0 =  (sc_lv<8>) (tmp_3_0_2_2_reg_7438.read());
}

void matrix_conv::thread_grp_fu_5370_p1() {
    grp_fu_5370_p1 =  (sc_lv<8>) (tmp_3_0_0_1_reg_7926.read());
}

void matrix_conv::thread_grp_fu_5375_p0() {
    grp_fu_5375_p0 =  (sc_lv<8>) (tmp_4_0_2_2_reg_7520.read());
}

void matrix_conv::thread_grp_fu_5375_p1() {
    grp_fu_5375_p1 =  (sc_lv<8>) (tmp_3_0_0_2_reg_7960.read());
}

void matrix_conv::thread_grp_fu_5381_p0() {
    grp_fu_5381_p0 =  (sc_lv<8>) (tmp_3_1_2_2_reg_7470.read());
}

void matrix_conv::thread_grp_fu_5381_p1() {
    grp_fu_5381_p1 =  (sc_lv<8>) (tmp_3_0_0_1_reg_7926.read());
}

void matrix_conv::thread_grp_fu_5386_p0() {
    grp_fu_5386_p0 =  (sc_lv<8>) (tmp_3_3_2_2_reg_8467.read());
}

void matrix_conv::thread_grp_fu_5386_p1() {
    grp_fu_5386_p1 =  (sc_lv<8>) (tmp_3_0_0_1_2_reg_7093.read());
}

void matrix_conv::thread_grp_fu_5392_p0() {
    grp_fu_5392_p0 =  (sc_lv<8>) (tmp_4_1_2_2_reg_7552.read());
}

void matrix_conv::thread_grp_fu_5392_p1() {
    grp_fu_5392_p1 =  (sc_lv<8>) (tmp_3_0_0_2_reg_7960.read());
}

void matrix_conv::thread_grp_fu_5398_p0() {
    grp_fu_5398_p0 =  (sc_lv<8>) (tmp_4_3_2_2_reg_8588.read());
}

void matrix_conv::thread_grp_fu_5398_p1() {
    grp_fu_5398_p1 =  (sc_lv<8>) (tmp_3_0_0_2_2_reg_7145.read());
}

void matrix_conv::thread_grp_fu_5404_p0() {
    grp_fu_5404_p0 =  (sc_lv<8>) (tmp_2_3_2_2_reg_8347.read());
}

void matrix_conv::thread_grp_fu_5404_p1() {
    grp_fu_5404_p1 =  (sc_lv<8>) (tmp_3_0_0_0_1_reg_7902.read());
}

void matrix_conv::thread_grp_fu_5409_p0() {
    grp_fu_5409_p0 =  (sc_lv<8>) (tmp_3_4_2_2_fu_3328_p1.read());
}

void matrix_conv::thread_grp_fu_5409_p1() {
    grp_fu_5409_p1 =  (sc_lv<8>) (tmp_3_0_0_1_2_reg_7093.read());
}

void matrix_conv::thread_grp_fu_5415_p0() {
    grp_fu_5415_p0 =  (sc_lv<8>) (tmp_4_4_2_2_fu_3414_p1.read());
}

void matrix_conv::thread_grp_fu_5415_p1() {
    grp_fu_5415_p1 =  (sc_lv<8>) (tmp_3_0_0_2_2_reg_7145.read());
}

void matrix_conv::thread_grp_fu_5421_p0() {
    grp_fu_5421_p0 =  (sc_lv<8>) (tmp_2_4_2_2_fu_3242_p1.read());
}

void matrix_conv::thread_grp_fu_5421_p1() {
    grp_fu_5421_p1 =  (sc_lv<8>) (tmp_3_0_0_0_1_reg_7902.read());
}

void matrix_conv::thread_grp_fu_5427_p0() {
    grp_fu_5427_p0 =  (sc_lv<8>) (tmp_4_0_2_2_reg_7520.read());
}

void matrix_conv::thread_grp_fu_5427_p1() {
    grp_fu_5427_p1 =  (sc_lv<8>) (tmp_3_5_1_1_reg_8668.read());
}

void matrix_conv::thread_grp_fu_5432_p0() {
    grp_fu_5432_p0 =  (sc_lv<8>) (tmp_5_0_2_2_reg_7602.read());
}

void matrix_conv::thread_grp_fu_5432_p1() {
    grp_fu_5432_p1 =  (sc_lv<8>) (tmp_3_5_2_2_2_reg_8739.read());
}

void matrix_conv::thread_grp_fu_5438_p0() {
    grp_fu_5438_p0 =  (sc_lv<8>) (tmp_4_1_2_2_reg_7552.read());
}

void matrix_conv::thread_grp_fu_5438_p1() {
    grp_fu_5438_p1 =  (sc_lv<8>) (tmp_3_5_1_1_reg_8668.read());
}

void matrix_conv::thread_grp_fu_5443_p0() {
    grp_fu_5443_p0 =  (sc_lv<8>) (tmp_4_3_2_2_reg_8588.read());
}

void matrix_conv::thread_grp_fu_5443_p1() {
    grp_fu_5443_p1 =  (sc_lv<8>) (tmp_3_5_1_1_2_reg_8692.read());
}

void matrix_conv::thread_grp_fu_5449_p0() {
    grp_fu_5449_p0 =  (sc_lv<8>) (tmp_5_1_2_2_reg_7679.read());
}

void matrix_conv::thread_grp_fu_5449_p1() {
    grp_fu_5449_p1 =  (sc_lv<8>) (tmp_3_5_2_2_2_reg_8739.read());
}

void matrix_conv::thread_grp_fu_5455_p0() {
    grp_fu_5455_p0 =  (sc_lv<8>) (tmp_5_3_2_2_reg_8822.read());
}

void matrix_conv::thread_grp_fu_5455_p1() {
    grp_fu_5455_p1 =  (sc_lv<8>) (tmp_3_5_2_2_2_3_reg_8770.read());
}

void matrix_conv::thread_grp_fu_5461_p0() {
    grp_fu_5461_p0 =  (sc_lv<8>) (tmp_3_3_2_2_reg_8467.read());
}

void matrix_conv::thread_grp_fu_5461_p1() {
    grp_fu_5461_p1 =  (sc_lv<8>) (tmp_3_5_1_0_1_reg_8647.read());
}

void matrix_conv::thread_grp_fu_5466_p0() {
    grp_fu_5466_p0 =  (sc_lv<8>) (tmp_4_4_2_2_fu_3414_p1.read());
}

void matrix_conv::thread_grp_fu_5466_p1() {
    grp_fu_5466_p1 =  (sc_lv<8>) (tmp_3_5_1_1_2_reg_8692.read());
}

void matrix_conv::thread_grp_fu_5472_p0() {
    grp_fu_5472_p0 =  (sc_lv<8>) (tmp_5_4_2_2_fu_3500_p1.read());
}

void matrix_conv::thread_grp_fu_5472_p1() {
    grp_fu_5472_p1 =  (sc_lv<8>) (tmp_3_5_2_2_2_3_reg_8770.read());
}

void matrix_conv::thread_grp_fu_5478_p0() {
    grp_fu_5478_p0 =  (sc_lv<8>) (tmp_3_4_2_2_fu_3328_p1.read());
}

void matrix_conv::thread_grp_fu_5478_p1() {
    grp_fu_5478_p1 =  (sc_lv<8>) (tmp_3_5_1_0_1_reg_8647.read());
}

void matrix_conv::thread_grp_fu_5484_p0() {
    grp_fu_5484_p0 =  (sc_lv<8>) (tmp_5_0_2_2_reg_7602.read());
}

void matrix_conv::thread_grp_fu_5484_p1() {
    grp_fu_5484_p1 =  (sc_lv<8>) (tmp_3_5_1_1_reg_8668.read());
}

void matrix_conv::thread_grp_fu_5490_p0() {
    grp_fu_5490_p0 =  (sc_lv<8>) (tmp_4_2_2_2_reg_8551.read());
}

void matrix_conv::thread_grp_fu_5490_p1() {
    grp_fu_5490_p1 =  (sc_lv<8>) (tmp_3_5_1_0_1_reg_8647.read());
}

void matrix_conv::thread_grp_fu_5495_p0() {
    grp_fu_5495_p0 =  (sc_lv<8>) (tmp_5_1_2_2_reg_7679.read());
}

void matrix_conv::thread_grp_fu_5495_p1() {
    grp_fu_5495_p1 =  (sc_lv<8>) (tmp_3_5_1_1_reg_8668.read());
}

void matrix_conv::thread_grp_fu_5500_p0() {
    grp_fu_5500_p0 =  (sc_lv<8>) (tmp_5_3_2_2_reg_8822.read());
}

void matrix_conv::thread_grp_fu_5500_p1() {
    grp_fu_5500_p1 =  (sc_lv<8>) (tmp_3_5_1_1_2_reg_8692.read());
}

void matrix_conv::thread_grp_fu_5506_p0() {
    grp_fu_5506_p0 =  (sc_lv<8>) (tmp_6_1_2_2_reg_7771.read());
}

void matrix_conv::thread_grp_fu_5506_p1() {
    grp_fu_5506_p1 =  (sc_lv<8>) (tmp_3_5_2_2_2_reg_8739.read());
}

void matrix_conv::thread_grp_fu_5512_p0() {
    grp_fu_5512_p0 =  (sc_lv<8>) (tmp_6_3_2_2_reg_8936.read());
}

void matrix_conv::thread_grp_fu_5512_p1() {
    grp_fu_5512_p1 =  (sc_lv<8>) (tmp_3_5_2_2_2_3_reg_8770.read());
}

void matrix_conv::thread_grp_fu_5518_p0() {
    grp_fu_5518_p0 =  (sc_lv<8>) (tmp_4_3_2_2_reg_8588.read());
}

void matrix_conv::thread_grp_fu_5518_p1() {
    grp_fu_5518_p1 =  (sc_lv<8>) (tmp_3_5_1_0_1_reg_8647.read());
}

void matrix_conv::thread_grp_fu_5523_p0() {
    grp_fu_5523_p0 =  (sc_lv<8>) (tmp_5_4_2_2_fu_3500_p1.read());
}

void matrix_conv::thread_grp_fu_5523_p1() {
    grp_fu_5523_p1 =  (sc_lv<8>) (tmp_3_5_1_1_2_reg_8692.read());
}

void matrix_conv::thread_grp_fu_5529_p0() {
    grp_fu_5529_p0 =  (sc_lv<8>) (tmp_6_2_2_2_reg_7795.read());
}

void matrix_conv::thread_grp_fu_5529_p1() {
    grp_fu_5529_p1 =  (sc_lv<8>) (tmp_3_5_2_2_2_reg_8739.read());
}

void matrix_conv::thread_grp_fu_5534_p0() {
    grp_fu_5534_p0 =  (sc_lv<8>) (tmp_6_4_2_2_reg_8959.read());
}

void matrix_conv::thread_grp_fu_5534_p1() {
    grp_fu_5534_p1 =  (sc_lv<8>) (tmp_3_5_2_2_2_3_reg_8770.read());
}

void matrix_conv::thread_grp_fu_5540_p0() {
    grp_fu_5540_p0 =  (sc_lv<8>) (tmp_4_4_2_2_fu_3414_p1.read());
}

void matrix_conv::thread_grp_fu_5540_p1() {
    grp_fu_5540_p1 =  (sc_lv<8>) (tmp_3_5_1_0_1_reg_8647.read());
}

void matrix_conv::thread_grp_fu_5546_p0() {
    grp_fu_5546_p0 =  (sc_lv<8>) (tmp_6_5_2_2_fu_3591_p1.read());
}

void matrix_conv::thread_grp_fu_5546_p1() {
    grp_fu_5546_p1 =  (sc_lv<8>) (tmp_3_5_2_2_2_3_reg_8770.read());
}

void matrix_conv::thread_grp_fu_5552_p0() {
    grp_fu_5552_p0 =  (sc_lv<8>) (tmp_5_0_2_1_reg_6929.read());
}

void matrix_conv::thread_grp_fu_5552_p1() {
    grp_fu_5552_p1 =  (sc_lv<8>) (tmp_3_5_1_0_1_reg_8647.read());
}

void matrix_conv::thread_grp_fu_5557_p0() {
    grp_fu_5557_p0 =  (sc_lv<8>) (tmp_6_0_2_2_reg_6988.read());
}

void matrix_conv::thread_grp_fu_5557_p1() {
    grp_fu_5557_p1 =  (sc_lv<8>) (tmp_3_5_1_1_2_reg_8692.read());
}

void matrix_conv::thread_grp_fu_5562_p0() {
    grp_fu_5562_p0 =  (sc_lv<8>) (tmp_7_0_2_2_6_reg_7844.read());
}

void matrix_conv::thread_grp_fu_5562_p1() {
    grp_fu_5562_p1 =  (sc_lv<8>) (tmp_3_5_2_2_2_3_reg_8770.read());
}

void matrix_conv::thread_grp_fu_5567_p0() {
    grp_fu_5567_p0 =  (sc_lv<8>) (tmp_5_0_2_2_reg_7602.read());
}

void matrix_conv::thread_grp_fu_5567_p1() {
    grp_fu_5567_p1 =  (sc_lv<8>) (tmp_3_5_1_0_1_reg_8647.read());
}

void matrix_conv::thread_grp_fu_5572_p0() {
    grp_fu_5572_p0 =  (sc_lv<8>) (tmp_6_0_2_1_reg_6981.read());
}

void matrix_conv::thread_grp_fu_5572_p1() {
    grp_fu_5572_p1 =  (sc_lv<8>) (tmp_3_5_1_1_reg_8668.read());
}

void matrix_conv::thread_grp_fu_5577_p0() {
    grp_fu_5577_p0 =  (sc_lv<8>) (tmp_6_1_2_2_reg_7771.read());
}

void matrix_conv::thread_grp_fu_5577_p1() {
    grp_fu_5577_p1 =  (sc_lv<8>) (tmp_3_5_1_1_2_reg_8692.read());
}

void matrix_conv::thread_grp_fu_5583_p0() {
    grp_fu_5583_p0 =  (sc_lv<8>) (tmp_7_0_2_1_5_reg_7834.read());
}

void matrix_conv::thread_grp_fu_5583_p1() {
    grp_fu_5583_p1 =  (sc_lv<8>) (tmp_3_5_2_2_2_reg_8739.read());
}

void matrix_conv::thread_grp_fu_5589_p0() {
    grp_fu_5589_p0 =  (sc_lv<8>) (tmp_7_1_2_2_7_reg_7865.read());
}

void matrix_conv::thread_grp_fu_5589_p1() {
    grp_fu_5589_p1 =  (sc_lv<8>) (tmp_3_5_2_2_2_3_reg_8770.read());
}

void matrix_conv::thread_grp_fu_5595_p0() {
    grp_fu_5595_p0 =  (sc_lv<8>) (tmp_5_1_2_2_reg_7679.read());
}

void matrix_conv::thread_grp_fu_5595_p1() {
    grp_fu_5595_p1 =  (sc_lv<8>) (tmp_3_5_1_0_1_reg_8647.read());
}

void matrix_conv::thread_grp_fu_5600_p0() {
    grp_fu_5600_p0 =  (sc_lv<8>) (tmp_6_0_2_2_reg_6988.read());
}

void matrix_conv::thread_grp_fu_5600_p1() {
    grp_fu_5600_p1 =  (sc_lv<8>) (tmp_3_5_1_1_reg_8668.read());
}

void matrix_conv::thread_grp_fu_5605_p0() {
    grp_fu_5605_p0 =  (sc_lv<8>) (tmp_6_2_2_2_reg_7795.read());
}

void matrix_conv::thread_grp_fu_5605_p1() {
    grp_fu_5605_p1 =  (sc_lv<8>) (tmp_3_5_1_1_2_reg_8692.read());
}

void matrix_conv::thread_grp_fu_5611_p0() {
    grp_fu_5611_p0 =  (sc_lv<8>) (tmp_7_0_2_2_6_reg_7844.read());
}

void matrix_conv::thread_grp_fu_5611_p1() {
    grp_fu_5611_p1 =  (sc_lv<8>) (tmp_3_5_2_2_2_reg_8739.read());
}

void matrix_conv::thread_grp_fu_5617_p0() {
    grp_fu_5617_p0 =  (sc_lv<8>) (tmp_7_2_2_2_8_reg_7881.read());
}

void matrix_conv::thread_grp_fu_5617_p1() {
    grp_fu_5617_p1 =  (sc_lv<8>) (tmp_3_5_2_2_2_3_reg_8770.read());
}

void matrix_conv::thread_grp_fu_5623_p0() {
    grp_fu_5623_p0 =  (sc_lv<8>) (tmp_0_2_1_2_reg_8034.read());
}

void matrix_conv::thread_grp_fu_5623_p1() {
    grp_fu_5623_p1 =  (sc_lv<8>) (tmp_3_0_0_1_reg_7926.read());
}

void matrix_conv::thread_grp_fu_5628_p0() {
    grp_fu_5628_p0 =  (sc_lv<8>) (tmp_0_2_2_2_reg_8039.read());
}

void matrix_conv::thread_grp_fu_5628_p1() {
    grp_fu_5628_p1 =  (sc_lv<8>) (tmp_3_0_0_2_reg_7960.read());
}

void matrix_conv::thread_grp_fu_5634_p0() {
    grp_fu_5634_p0 =  (sc_lv<8>) (tmp_0_3_1_2_reg_8075.read());
}

void matrix_conv::thread_grp_fu_5634_p1() {
    grp_fu_5634_p1 =  (sc_lv<8>) (tmp_3_0_0_1_reg_7926.read());
}

void matrix_conv::thread_grp_fu_5639_p0() {
    grp_fu_5639_p0 =  (sc_lv<8>) (tmp_0_5_1_2_reg_9130.read());
}

void matrix_conv::thread_grp_fu_5639_p1() {
    grp_fu_5639_p1 =  (sc_lv<8>) (tmp_3_0_0_1_2_reg_7093.read());
}

void matrix_conv::thread_grp_fu_5645_p0() {
    grp_fu_5645_p0 =  (sc_lv<8>) (tmp_0_3_2_2_reg_8087.read());
}

void matrix_conv::thread_grp_fu_5645_p1() {
    grp_fu_5645_p1 =  (sc_lv<8>) (tmp_3_0_0_2_reg_7960.read());
}

void matrix_conv::thread_grp_fu_5651_p0() {
    grp_fu_5651_p0 =  (sc_lv<8>) (tmp_0_5_2_2_reg_9142.read());
}

void matrix_conv::thread_grp_fu_5651_p1() {
    grp_fu_5651_p1 =  (sc_lv<8>) (tmp_3_0_0_2_2_reg_7145.read());
}

void matrix_conv::thread_grp_fu_5657_p0() {
    grp_fu_5657_p0 =  (sc_lv<8>) (tmp_0_5_0_2_reg_9115.read());
}

void matrix_conv::thread_grp_fu_5657_p1() {
    grp_fu_5657_p1 =  (sc_lv<8>) (tmp_3_0_0_0_1_reg_7902.read());
}

void matrix_conv::thread_grp_fu_5662_p0() {
    grp_fu_5662_p0 =  (sc_lv<8>) (tmp_0_6_1_2_fu_3717_p1.read());
}

void matrix_conv::thread_grp_fu_5662_p1() {
    grp_fu_5662_p1 =  (sc_lv<8>) (tmp_3_0_0_1_2_reg_7093.read());
}

void matrix_conv::thread_grp_fu_5668_p0() {
    grp_fu_5668_p0 =  (sc_lv<8>) (tmp_0_6_2_2_fu_3721_p1.read());
}

void matrix_conv::thread_grp_fu_5668_p1() {
    grp_fu_5668_p1 =  (sc_lv<8>) (tmp_3_0_0_2_2_reg_7145.read());
}

void matrix_conv::thread_grp_fu_5674_p0() {
    grp_fu_5674_p0 =  (sc_lv<8>) (tmp_0_6_0_2_fu_3708_p1.read());
}

void matrix_conv::thread_grp_fu_5674_p1() {
    grp_fu_5674_p1 =  (sc_lv<8>) (tmp_3_0_0_0_1_reg_7902.read());
}

void matrix_conv::thread_grp_fu_5680_p0() {
    grp_fu_5680_p0 =  (sc_lv<8>) (tmp_0_2_2_2_reg_8039.read());
}

void matrix_conv::thread_grp_fu_5680_p1() {
    grp_fu_5680_p1 =  (sc_lv<8>) (tmp_3_0_0_1_reg_7926.read());
}

void matrix_conv::thread_grp_fu_5685_p0() {
    grp_fu_5685_p0 =  (sc_lv<8>) (tmp_1_2_2_2_reg_8191.read());
}

void matrix_conv::thread_grp_fu_5685_p1() {
    grp_fu_5685_p1 =  (sc_lv<8>) (tmp_3_0_0_2_reg_7960.read());
}

void matrix_conv::thread_grp_fu_5691_p0() {
    grp_fu_5691_p0 =  (sc_lv<8>) (tmp_0_3_2_2_reg_8087.read());
}

void matrix_conv::thread_grp_fu_5691_p1() {
    grp_fu_5691_p1 =  (sc_lv<8>) (tmp_3_0_0_1_reg_7926.read());
}

void matrix_conv::thread_grp_fu_5696_p0() {
    grp_fu_5696_p0 =  (sc_lv<8>) (tmp_0_5_2_2_reg_9142.read());
}

void matrix_conv::thread_grp_fu_5696_p1() {
    grp_fu_5696_p1 =  (sc_lv<8>) (tmp_3_0_0_1_2_reg_7093.read());
}

void matrix_conv::thread_grp_fu_5702_p0() {
    grp_fu_5702_p0 =  (sc_lv<8>) (tmp_1_3_2_2_reg_8227.read());
}

void matrix_conv::thread_grp_fu_5702_p1() {
    grp_fu_5702_p1 =  (sc_lv<8>) (tmp_3_0_0_2_reg_7960.read());
}

void matrix_conv::thread_grp_fu_5708_p0() {
    grp_fu_5708_p0 =  (sc_lv<8>) (tmp_1_5_2_2_reg_9267.read());
}

void matrix_conv::thread_grp_fu_5708_p1() {
    grp_fu_5708_p1 =  (sc_lv<8>) (tmp_3_0_0_2_2_reg_7145.read());
}

void matrix_conv::thread_grp_fu_5714_p0() {
    grp_fu_5714_p0 =  (sc_lv<8>) (tmp_0_5_1_2_reg_9130.read());
}

void matrix_conv::thread_grp_fu_5714_p1() {
    grp_fu_5714_p1 =  (sc_lv<8>) (tmp_3_0_0_0_1_reg_7902.read());
}

void matrix_conv::thread_grp_fu_5719_p0() {
    grp_fu_5719_p0 =  (sc_lv<8>) (tmp_0_6_2_2_fu_3721_p1.read());
}

void matrix_conv::thread_grp_fu_5719_p1() {
    grp_fu_5719_p1 =  (sc_lv<8>) (tmp_3_0_0_1_2_reg_7093.read());
}

void matrix_conv::thread_grp_fu_5725_p0() {
    grp_fu_5725_p0 =  (sc_lv<8>) (tmp_1_6_2_2_fu_3785_p1.read());
}

void matrix_conv::thread_grp_fu_5725_p1() {
    grp_fu_5725_p1 =  (sc_lv<8>) (tmp_3_0_0_2_2_reg_7145.read());
}

void matrix_conv::thread_grp_fu_5731_p0() {
    grp_fu_5731_p0 =  (sc_lv<8>) (tmp_0_6_1_2_fu_3717_p1.read());
}

void matrix_conv::thread_grp_fu_5731_p1() {
    grp_fu_5731_p1 =  (sc_lv<8>) (tmp_3_0_0_0_1_reg_7902.read());
}

void matrix_conv::thread_grp_fu_5737_p0() {
    grp_fu_5737_p0 =  (sc_lv<8>) (tmp_1_2_2_2_reg_8191.read());
}

void matrix_conv::thread_grp_fu_5737_p1() {
    grp_fu_5737_p1 =  (sc_lv<8>) (tmp_3_0_0_1_reg_7926.read());
}

void matrix_conv::thread_grp_fu_5742_p0() {
    grp_fu_5742_p0 =  (sc_lv<8>) (tmp_2_2_2_2_reg_8311.read());
}

void matrix_conv::thread_grp_fu_5742_p1() {
    grp_fu_5742_p1 =  (sc_lv<8>) (tmp_3_0_0_2_reg_7960.read());
}

void matrix_conv::thread_grp_fu_5748_p0() {
    grp_fu_5748_p0 =  (sc_lv<8>) (tmp_1_3_2_2_reg_8227.read());
}

void matrix_conv::thread_grp_fu_5748_p1() {
    grp_fu_5748_p1 =  (sc_lv<8>) (tmp_3_0_0_1_reg_7926.read());
}

void matrix_conv::thread_grp_fu_5753_p0() {
    grp_fu_5753_p0 =  (sc_lv<8>) (tmp_1_5_2_2_reg_9267.read());
}

void matrix_conv::thread_grp_fu_5753_p1() {
    grp_fu_5753_p1 =  (sc_lv<8>) (tmp_3_0_0_1_2_reg_7093.read());
}

void matrix_conv::thread_grp_fu_5759_p0() {
    grp_fu_5759_p0 =  (sc_lv<8>) (tmp_2_3_2_2_reg_8347.read());
}

void matrix_conv::thread_grp_fu_5759_p1() {
    grp_fu_5759_p1 =  (sc_lv<8>) (tmp_3_0_0_2_reg_7960.read());
}

void matrix_conv::thread_grp_fu_5765_p0() {
    grp_fu_5765_p0 =  (sc_lv<8>) (tmp_2_5_2_2_reg_9372.read());
}

void matrix_conv::thread_grp_fu_5765_p1() {
    grp_fu_5765_p1 =  (sc_lv<8>) (tmp_3_0_0_2_2_reg_7145.read());
}

void matrix_conv::thread_grp_fu_5771_p0() {
    grp_fu_5771_p0 =  (sc_lv<8>) (tmp_0_5_2_2_reg_9142.read());
}

void matrix_conv::thread_grp_fu_5771_p1() {
    grp_fu_5771_p1 =  (sc_lv<8>) (tmp_3_0_0_0_1_reg_7902.read());
}

void matrix_conv::thread_grp_fu_5776_p0() {
    grp_fu_5776_p0 =  (sc_lv<8>) (tmp_1_6_2_2_fu_3785_p1.read());
}

void matrix_conv::thread_grp_fu_5776_p1() {
    grp_fu_5776_p1 =  (sc_lv<8>) (tmp_3_0_0_1_2_reg_7093.read());
}

void matrix_conv::thread_grp_fu_5782_p0() {
    grp_fu_5782_p0 =  (sc_lv<8>) (tmp_2_6_2_2_fu_3841_p1.read());
}

void matrix_conv::thread_grp_fu_5782_p1() {
    grp_fu_5782_p1 =  (sc_lv<8>) (tmp_3_0_0_2_2_reg_7145.read());
}

void matrix_conv::thread_grp_fu_5788_p0() {
    grp_fu_5788_p0 =  (sc_lv<8>) (tmp_0_6_2_2_fu_3721_p1.read());
}

void matrix_conv::thread_grp_fu_5788_p1() {
    grp_fu_5788_p1 =  (sc_lv<8>) (tmp_3_0_0_0_1_reg_7902.read());
}

void matrix_conv::thread_grp_fu_5794_p0() {
    grp_fu_5794_p0 =  (sc_lv<8>) (tmp_2_2_2_2_reg_8311.read());
}

void matrix_conv::thread_grp_fu_5794_p1() {
    grp_fu_5794_p1 =  (sc_lv<8>) (tmp_3_0_0_1_reg_7926.read());
}

void matrix_conv::thread_grp_fu_5799_p0() {
    grp_fu_5799_p0 =  (sc_lv<8>) (tmp_3_2_2_2_reg_8431.read());
}

void matrix_conv::thread_grp_fu_5799_p1() {
    grp_fu_5799_p1 =  (sc_lv<8>) (tmp_3_0_0_2_reg_7960.read());
}

void matrix_conv::thread_grp_fu_5805_p0() {
    grp_fu_5805_p0 =  (sc_lv<8>) (tmp_2_3_2_2_reg_8347.read());
}

void matrix_conv::thread_grp_fu_5805_p1() {
    grp_fu_5805_p1 =  (sc_lv<8>) (tmp_3_0_0_1_reg_7926.read());
}

void matrix_conv::thread_grp_fu_5810_p0() {
    grp_fu_5810_p0 =  (sc_lv<8>) (tmp_2_5_2_2_reg_9372.read());
}

void matrix_conv::thread_grp_fu_5810_p1() {
    grp_fu_5810_p1 =  (sc_lv<8>) (tmp_3_0_0_1_2_reg_7093.read());
}

void matrix_conv::thread_grp_fu_5816_p0() {
    grp_fu_5816_p0 =  (sc_lv<8>) (tmp_3_3_2_2_reg_8467.read());
}

void matrix_conv::thread_grp_fu_5816_p1() {
    grp_fu_5816_p1 =  (sc_lv<8>) (tmp_3_0_0_2_reg_7960.read());
}

void matrix_conv::thread_grp_fu_5822_p0() {
    grp_fu_5822_p0 =  (sc_lv<8>) (tmp_3_5_2_2_reg_9477.read());
}

void matrix_conv::thread_grp_fu_5822_p1() {
    grp_fu_5822_p1 =  (sc_lv<8>) (tmp_3_0_0_2_2_reg_7145.read());
}

void matrix_conv::thread_grp_fu_5828_p0() {
    grp_fu_5828_p0 =  (sc_lv<8>) (tmp_1_5_2_2_reg_9267.read());
}

void matrix_conv::thread_grp_fu_5828_p1() {
    grp_fu_5828_p1 =  (sc_lv<8>) (tmp_3_0_0_0_1_reg_7902.read());
}

void matrix_conv::thread_grp_fu_5833_p0() {
    grp_fu_5833_p0 =  (sc_lv<8>) (tmp_2_6_2_2_fu_3841_p1.read());
}

void matrix_conv::thread_grp_fu_5833_p1() {
    grp_fu_5833_p1 =  (sc_lv<8>) (tmp_3_0_0_1_2_reg_7093.read());
}

void matrix_conv::thread_grp_fu_5839_p0() {
    grp_fu_5839_p0 =  (sc_lv<8>) (tmp_3_6_2_2_fu_3897_p1.read());
}

void matrix_conv::thread_grp_fu_5839_p1() {
    grp_fu_5839_p1 =  (sc_lv<8>) (tmp_3_0_0_2_2_reg_7145.read());
}

void matrix_conv::thread_grp_fu_5845_p0() {
    grp_fu_5845_p0 =  (sc_lv<8>) (tmp_1_6_2_2_fu_3785_p1.read());
}

void matrix_conv::thread_grp_fu_5845_p1() {
    grp_fu_5845_p1 =  (sc_lv<8>) (tmp_3_0_0_0_1_reg_7902.read());
}

void matrix_conv::thread_grp_fu_5851_p0() {
    grp_fu_5851_p0 =  (sc_lv<8>) (tmp_3_2_2_2_reg_8431.read());
}

void matrix_conv::thread_grp_fu_5851_p1() {
    grp_fu_5851_p1 =  (sc_lv<8>) (tmp_3_0_0_1_reg_7926.read());
}

void matrix_conv::thread_grp_fu_5856_p0() {
    grp_fu_5856_p0 =  (sc_lv<8>) (tmp_4_2_2_2_reg_8551.read());
}

void matrix_conv::thread_grp_fu_5856_p1() {
    grp_fu_5856_p1 =  (sc_lv<8>) (tmp_3_0_0_2_reg_7960.read());
}

void matrix_conv::thread_grp_fu_5862_p0() {
    grp_fu_5862_p0 =  (sc_lv<8>) (tmp_3_3_2_2_reg_8467.read());
}

void matrix_conv::thread_grp_fu_5862_p1() {
    grp_fu_5862_p1 =  (sc_lv<8>) (tmp_3_0_0_1_reg_7926.read());
}

void matrix_conv::thread_grp_fu_5867_p0() {
    grp_fu_5867_p0 =  (sc_lv<8>) (tmp_3_5_2_2_reg_9477.read());
}

void matrix_conv::thread_grp_fu_5867_p1() {
    grp_fu_5867_p1 =  (sc_lv<8>) (tmp_3_0_0_1_2_reg_7093.read());
}

void matrix_conv::thread_grp_fu_5873_p0() {
    grp_fu_5873_p0 =  (sc_lv<8>) (tmp_4_3_2_2_reg_8588.read());
}

void matrix_conv::thread_grp_fu_5873_p1() {
    grp_fu_5873_p1 =  (sc_lv<8>) (tmp_3_0_0_2_reg_7960.read());
}

void matrix_conv::thread_grp_fu_5879_p0() {
    grp_fu_5879_p0 =  (sc_lv<8>) (tmp_4_5_2_2_reg_9582.read());
}

void matrix_conv::thread_grp_fu_5879_p1() {
    grp_fu_5879_p1 =  (sc_lv<8>) (tmp_3_0_0_2_2_reg_7145.read());
}

void matrix_conv::thread_grp_fu_5885_p0() {
    grp_fu_5885_p0 =  (sc_lv<8>) (tmp_2_5_2_2_reg_9372.read());
}

void matrix_conv::thread_grp_fu_5885_p1() {
    grp_fu_5885_p1 =  (sc_lv<8>) (tmp_3_0_0_0_1_reg_7902.read());
}

void matrix_conv::thread_grp_fu_5890_p0() {
    grp_fu_5890_p0 =  (sc_lv<8>) (tmp_3_6_2_2_fu_3897_p1.read());
}

void matrix_conv::thread_grp_fu_5890_p1() {
    grp_fu_5890_p1 =  (sc_lv<8>) (tmp_3_0_0_1_2_reg_7093.read());
}

void matrix_conv::thread_grp_fu_5896_p0() {
    grp_fu_5896_p0 =  (sc_lv<8>) (tmp_4_6_2_2_fu_3953_p1.read());
}

void matrix_conv::thread_grp_fu_5896_p1() {
    grp_fu_5896_p1 =  (sc_lv<8>) (tmp_3_0_0_2_2_reg_7145.read());
}

void matrix_conv::thread_grp_fu_5902_p0() {
    grp_fu_5902_p0 =  (sc_lv<8>) (tmp_2_6_2_2_fu_3841_p1.read());
}

void matrix_conv::thread_grp_fu_5902_p1() {
    grp_fu_5902_p1 =  (sc_lv<8>) (tmp_3_0_0_0_1_reg_7902.read());
}

void matrix_conv::thread_grp_fu_5908_p0() {
    grp_fu_5908_p0 =  (sc_lv<8>) (tmp_4_2_2_2_reg_8551.read());
}

void matrix_conv::thread_grp_fu_5908_p1() {
    grp_fu_5908_p1 =  (sc_lv<8>) (tmp_3_5_1_1_reg_8668.read());
}

void matrix_conv::thread_grp_fu_5913_p0() {
    grp_fu_5913_p0 =  (sc_lv<8>) (tmp_5_2_2_2_reg_8763.read());
}

void matrix_conv::thread_grp_fu_5913_p1() {
    grp_fu_5913_p1 =  (sc_lv<8>) (tmp_3_5_2_2_2_reg_8739.read());
}

void matrix_conv::thread_grp_fu_5919_p0() {
    grp_fu_5919_p0 =  (sc_lv<8>) (tmp_4_3_2_2_reg_8588.read());
}

void matrix_conv::thread_grp_fu_5919_p1() {
    grp_fu_5919_p1 =  (sc_lv<8>) (tmp_3_5_1_1_reg_8668.read());
}

void matrix_conv::thread_grp_fu_5924_p0() {
    grp_fu_5924_p0 =  (sc_lv<8>) (tmp_4_5_2_2_reg_9582.read());
}

void matrix_conv::thread_grp_fu_5924_p1() {
    grp_fu_5924_p1 =  (sc_lv<8>) (tmp_3_5_1_1_2_reg_8692.read());
}

void matrix_conv::thread_grp_fu_5930_p0() {
    grp_fu_5930_p0 =  (sc_lv<8>) (tmp_5_3_2_2_reg_8822.read());
}

void matrix_conv::thread_grp_fu_5930_p1() {
    grp_fu_5930_p1 =  (sc_lv<8>) (tmp_3_5_2_2_2_reg_8739.read());
}

void matrix_conv::thread_grp_fu_5936_p0() {
    grp_fu_5936_p0 =  (sc_lv<8>) (tmp_5_5_2_2_reg_9688.read());
}

void matrix_conv::thread_grp_fu_5936_p1() {
    grp_fu_5936_p1 =  (sc_lv<8>) (tmp_3_5_2_2_2_3_reg_8770.read());
}

void matrix_conv::thread_grp_fu_5942_p0() {
    grp_fu_5942_p0 =  (sc_lv<8>) (tmp_3_5_2_2_reg_9477.read());
}

void matrix_conv::thread_grp_fu_5942_p1() {
    grp_fu_5942_p1 =  (sc_lv<8>) (tmp_3_5_1_0_1_reg_8647.read());
}

void matrix_conv::thread_grp_fu_5947_p0() {
    grp_fu_5947_p0 =  (sc_lv<8>) (tmp_4_6_2_2_fu_3953_p1.read());
}

void matrix_conv::thread_grp_fu_5947_p1() {
    grp_fu_5947_p1 =  (sc_lv<8>) (tmp_3_5_1_1_2_reg_8692.read());
}

void matrix_conv::thread_grp_fu_5953_p0() {
    grp_fu_5953_p0 =  (sc_lv<8>) (tmp_5_6_2_2_fu_4009_p1.read());
}

void matrix_conv::thread_grp_fu_5953_p1() {
    grp_fu_5953_p1 =  (sc_lv<8>) (tmp_3_5_2_2_2_3_reg_8770.read());
}

void matrix_conv::thread_grp_fu_5959_p0() {
    grp_fu_5959_p0 =  (sc_lv<8>) (tmp_3_6_2_2_fu_3897_p1.read());
}

void matrix_conv::thread_grp_fu_5959_p1() {
    grp_fu_5959_p1 =  (sc_lv<8>) (tmp_3_5_1_0_1_reg_8647.read());
}

void matrix_conv::thread_grp_fu_5965_p0() {
    grp_fu_5965_p0 =  (sc_lv<8>) (tmp_6_0_2_fu_4032_p1.read());
}

void matrix_conv::thread_grp_fu_5965_p1() {
    grp_fu_5965_p1 =  (sc_lv<8>) (tmp_3_5_2_2_2_reg_8739.read());
}

void matrix_conv::thread_grp_fu_5971_p0() {
    grp_fu_5971_p0 =  (sc_lv<8>) (tmp_5_2_2_2_reg_8763.read());
}

void matrix_conv::thread_grp_fu_5971_p1() {
    grp_fu_5971_p1 =  (sc_lv<8>) (tmp_3_5_1_1_reg_8668.read());
}

void matrix_conv::thread_grp_fu_5977_p0() {
    grp_fu_5977_p0 =  (sc_lv<8>) (tmp_5_3_2_2_reg_8822.read());
}

void matrix_conv::thread_grp_fu_5977_p1() {
    grp_fu_5977_p1 =  (sc_lv<8>) (tmp_3_5_1_1_reg_8668.read());
}

void matrix_conv::thread_grp_fu_5982_p0() {
    grp_fu_5982_p0 =  (sc_lv<8>) (tmp_5_5_2_2_reg_9688.read());
}

void matrix_conv::thread_grp_fu_5982_p1() {
    grp_fu_5982_p1 =  (sc_lv<8>) (tmp_3_5_1_1_2_reg_8692.read());
}

void matrix_conv::thread_grp_fu_5988_p0() {
    grp_fu_5988_p0 =  (sc_lv<8>) (tmp_6_3_2_2_reg_8936.read());
}

void matrix_conv::thread_grp_fu_5988_p1() {
    grp_fu_5988_p1 =  (sc_lv<8>) (tmp_3_5_2_2_2_reg_8739.read());
}

void matrix_conv::thread_grp_fu_5994_p0() {
    grp_fu_5994_p0 =  (sc_lv<8>) (tmp_4_5_2_2_reg_9582.read());
}

void matrix_conv::thread_grp_fu_5994_p1() {
    grp_fu_5994_p1 =  (sc_lv<8>) (tmp_3_5_1_0_1_reg_8647.read());
}

void matrix_conv::thread_grp_fu_5999_p0() {
    grp_fu_5999_p0 =  (sc_lv<8>) (tmp_5_6_2_2_fu_4009_p1.read());
}

void matrix_conv::thread_grp_fu_5999_p1() {
    grp_fu_5999_p1 =  (sc_lv<8>) (tmp_3_5_1_1_2_reg_8692.read());
}

void matrix_conv::thread_grp_fu_6005_p0() {
    grp_fu_6005_p0 =  (sc_lv<8>) (tmp_6_4_2_2_reg_8959.read());
}

void matrix_conv::thread_grp_fu_6005_p1() {
    grp_fu_6005_p1 =  (sc_lv<8>) (tmp_3_5_2_2_2_reg_8739.read());
}

void matrix_conv::thread_grp_fu_6010_p0() {
    grp_fu_6010_p0 =  (sc_lv<8>) (tmp_6_6_2_2_reg_9819.read());
}

void matrix_conv::thread_grp_fu_6010_p1() {
    grp_fu_6010_p1 =  (sc_lv<8>) (tmp_3_5_2_2_2_3_reg_8770.read());
}

void matrix_conv::thread_grp_fu_6016_p0() {
    grp_fu_6016_p0 =  (sc_lv<8>) (tmp_4_6_2_2_fu_3953_p1.read());
}

void matrix_conv::thread_grp_fu_6016_p1() {
    grp_fu_6016_p1 =  (sc_lv<8>) (tmp_3_5_1_0_1_reg_8647.read());
}

void matrix_conv::thread_grp_fu_6022_p1() {
    grp_fu_6022_p1 =  (sc_lv<8>) (tmp_3_5_2_2_2_3_reg_8770.read());
}

void matrix_conv::thread_grp_fu_6028_p0() {
    grp_fu_6028_p0 =  (sc_lv<8>) (tmp_6_0_2_fu_4032_p1.read());
}

void matrix_conv::thread_grp_fu_6028_p1() {
    grp_fu_6028_p1 =  (sc_lv<8>) (tmp_3_5_1_1_reg_8668.read());
}

void matrix_conv::thread_grp_fu_6034_p1() {
    grp_fu_6034_p1 =  (sc_lv<8>) (tmp_3_5_2_2_2_reg_8739.read());
}

void matrix_conv::thread_grp_fu_6040_p0() {
    grp_fu_6040_p0 =  (sc_lv<8>) (tmp_5_2_2_2_reg_8763.read());
}

void matrix_conv::thread_grp_fu_6040_p1() {
    grp_fu_6040_p1 =  (sc_lv<8>) (tmp_3_5_1_0_1_reg_8647.read());
}

void matrix_conv::thread_grp_fu_6045_p0() {
    grp_fu_6045_p0 =  (sc_lv<8>) (tmp_6_1_2_2_reg_7771.read());
}

void matrix_conv::thread_grp_fu_6045_p1() {
    grp_fu_6045_p1 =  (sc_lv<8>) (tmp_3_5_1_1_reg_8668.read());
}

void matrix_conv::thread_grp_fu_6050_p0() {
    grp_fu_6050_p0 =  (sc_lv<8>) (tmp_6_3_2_2_reg_8936.read());
}

void matrix_conv::thread_grp_fu_6050_p1() {
    grp_fu_6050_p1 =  (sc_lv<8>) (tmp_3_5_1_1_2_reg_8692.read());
}

void matrix_conv::thread_grp_fu_6056_p0() {
    grp_fu_6056_p0 =  (sc_lv<8>) (tmp_7_1_2_2_7_reg_7865.read());
}

void matrix_conv::thread_grp_fu_6056_p1() {
    grp_fu_6056_p1 =  (sc_lv<8>) (tmp_3_5_2_2_2_reg_8739.read());
}

void matrix_conv::thread_grp_fu_6062_p0() {
    grp_fu_6062_p0 =  (sc_lv<8>) (tmp_7_3_2_2_9_reg_9012.read());
}

void matrix_conv::thread_grp_fu_6062_p1() {
    grp_fu_6062_p1 =  (sc_lv<8>) (tmp_3_5_2_2_2_3_reg_8770.read());
}

void matrix_conv::thread_grp_fu_6068_p0() {
    grp_fu_6068_p0 =  (sc_lv<8>) (tmp_5_3_2_2_reg_8822.read());
}

void matrix_conv::thread_grp_fu_6068_p1() {
    grp_fu_6068_p1 =  (sc_lv<8>) (tmp_3_5_1_0_1_reg_8647.read());
}

void matrix_conv::thread_grp_fu_6073_p0() {
    grp_fu_6073_p0 =  (sc_lv<8>) (tmp_6_2_2_2_reg_7795.read());
}

void matrix_conv::thread_grp_fu_6073_p1() {
    grp_fu_6073_p1 =  (sc_lv<8>) (tmp_3_5_1_1_reg_8668.read());
}

void matrix_conv::thread_grp_fu_6078_p0() {
    grp_fu_6078_p0 =  (sc_lv<8>) (tmp_6_4_2_2_reg_8959.read());
}

void matrix_conv::thread_grp_fu_6078_p1() {
    grp_fu_6078_p1 =  (sc_lv<8>) (tmp_3_5_1_1_2_reg_8692.read());
}

void matrix_conv::thread_grp_fu_6084_p0() {
    grp_fu_6084_p0 =  (sc_lv<8>) (tmp_7_2_2_2_8_reg_7881.read());
}

void matrix_conv::thread_grp_fu_6084_p1() {
    grp_fu_6084_p1 =  (sc_lv<8>) (tmp_3_5_2_2_2_reg_8739.read());
}

void matrix_conv::thread_grp_fu_6090_p0() {
    grp_fu_6090_p0 =  (sc_lv<8>) (tmp_7_4_2_2_10_reg_9033.read());
}

void matrix_conv::thread_grp_fu_6090_p1() {
    grp_fu_6090_p1 =  (sc_lv<8>) (tmp_3_5_2_2_2_3_reg_8770.read());
}

void matrix_conv::thread_grp_fu_6096_p0() {
    grp_fu_6096_p0 =  (sc_lv<8>) (tmp_5_4_2_2_reg_9651.read());
}

void matrix_conv::thread_grp_fu_6096_p1() {
    grp_fu_6096_p1 =  (sc_lv<8>) (tmp_3_5_1_0_1_reg_8647.read());
}

void matrix_conv::thread_grp_fu_6101_p0() {
    grp_fu_6101_p0 =  (sc_lv<8>) (tmp_6_3_2_2_reg_8936.read());
}

void matrix_conv::thread_grp_fu_6101_p1() {
    grp_fu_6101_p1 =  (sc_lv<8>) (tmp_3_5_1_1_reg_8668.read());
}

void matrix_conv::thread_grp_fu_6106_p0() {
    grp_fu_6106_p0 =  (sc_lv<8>) (tmp_0_4_1_2_reg_9089.read());
}

void matrix_conv::thread_grp_fu_6106_p1() {
    grp_fu_6106_p1 =  (sc_lv<8>) (tmp_3_0_0_1_reg_7926.read());
}

void matrix_conv::thread_grp_fu_6111_p0() {
    grp_fu_6111_p0 =  (sc_lv<8>) (tmp_0_4_2_2_reg_9094.read());
}

void matrix_conv::thread_grp_fu_6111_p1() {
    grp_fu_6111_p1 =  (sc_lv<8>) (tmp_3_0_0_2_reg_7960.read());
}

void matrix_conv::thread_grp_fu_6117_p0() {
    grp_fu_6117_p0 =  (sc_lv<8>) (tmp_0_5_1_2_reg_9130.read());
}

void matrix_conv::thread_grp_fu_6117_p1() {
    grp_fu_6117_p1 =  (sc_lv<8>) (tmp_3_0_0_1_reg_7926.read());
}

void matrix_conv::thread_grp_fu_6122_p0() {
    grp_fu_6122_p0 =  (sc_lv<8>) (tmp_0_7_1_2_reg_9996.read());
}

void matrix_conv::thread_grp_fu_6122_p1() {
    grp_fu_6122_p1 =  (sc_lv<8>) (tmp_3_0_0_1_2_reg_7093.read());
}

void matrix_conv::thread_grp_fu_6128_p0() {
    grp_fu_6128_p0 =  (sc_lv<8>) (tmp_0_5_2_2_reg_9142.read());
}

void matrix_conv::thread_grp_fu_6128_p1() {
    grp_fu_6128_p1 =  (sc_lv<8>) (tmp_3_0_0_2_reg_7960.read());
}

void matrix_conv::thread_grp_fu_6134_p0() {
    grp_fu_6134_p0 =  (sc_lv<8>) (tmp_0_7_2_2_reg_10006.read());
}

void matrix_conv::thread_grp_fu_6134_p1() {
    grp_fu_6134_p1 =  (sc_lv<8>) (tmp_3_0_0_2_2_reg_7145.read());
}

void matrix_conv::thread_grp_fu_6140_p0() {
    grp_fu_6140_p0 =  (sc_lv<8>) (tmp_0_4_2_2_reg_9094.read());
}

void matrix_conv::thread_grp_fu_6140_p1() {
    grp_fu_6140_p1 =  (sc_lv<8>) (tmp_3_0_0_1_reg_7926.read());
}

void matrix_conv::thread_grp_fu_6145_p0() {
    grp_fu_6145_p0 =  (sc_lv<8>) (tmp_1_4_2_2_reg_9231.read());
}

void matrix_conv::thread_grp_fu_6145_p1() {
    grp_fu_6145_p1 =  (sc_lv<8>) (tmp_3_0_0_2_reg_7960.read());
}

void matrix_conv::thread_grp_fu_6151_p0() {
    grp_fu_6151_p0 =  (sc_lv<8>) (tmp_0_5_2_2_reg_9142.read());
}

void matrix_conv::thread_grp_fu_6151_p1() {
    grp_fu_6151_p1 =  (sc_lv<8>) (tmp_3_0_0_1_reg_7926.read());
}

void matrix_conv::thread_grp_fu_6156_p0() {
    grp_fu_6156_p0 =  (sc_lv<8>) (tmp_0_7_2_2_reg_10006.read());
}

void matrix_conv::thread_grp_fu_6156_p1() {
    grp_fu_6156_p1 =  (sc_lv<8>) (tmp_3_0_0_1_2_reg_7093.read());
}

void matrix_conv::thread_grp_fu_6162_p0() {
    grp_fu_6162_p0 =  (sc_lv<8>) (tmp_1_5_2_2_reg_9267.read());
}

void matrix_conv::thread_grp_fu_6162_p1() {
    grp_fu_6162_p1 =  (sc_lv<8>) (tmp_3_0_0_2_reg_7960.read());
}

void matrix_conv::thread_grp_fu_6168_p0() {
    grp_fu_6168_p0 =  (sc_lv<8>) (tmp_1_7_2_2_reg_10072.read());
}

void matrix_conv::thread_grp_fu_6168_p1() {
    grp_fu_6168_p1 =  (sc_lv<8>) (tmp_3_0_0_2_2_reg_7145.read());
}

void matrix_conv::thread_grp_fu_6174_p0() {
    grp_fu_6174_p0 =  (sc_lv<8>) (tmp_1_4_2_2_reg_9231.read());
}

void matrix_conv::thread_grp_fu_6174_p1() {
    grp_fu_6174_p1 =  (sc_lv<8>) (tmp_3_0_0_1_reg_7926.read());
}

void matrix_conv::thread_grp_fu_6179_p0() {
    grp_fu_6179_p0 =  (sc_lv<8>) (tmp_2_4_2_2_reg_9336.read());
}

void matrix_conv::thread_grp_fu_6179_p1() {
    grp_fu_6179_p1 =  (sc_lv<8>) (tmp_3_0_0_2_reg_7960.read());
}

void matrix_conv::thread_grp_fu_6185_p0() {
    grp_fu_6185_p0 =  (sc_lv<8>) (tmp_1_5_2_2_reg_9267.read());
}

void matrix_conv::thread_grp_fu_6185_p1() {
    grp_fu_6185_p1 =  (sc_lv<8>) (tmp_3_0_0_1_reg_7926.read());
}

void matrix_conv::thread_grp_fu_6190_p0() {
    grp_fu_6190_p0 =  (sc_lv<8>) (tmp_1_7_2_2_reg_10072.read());
}

void matrix_conv::thread_grp_fu_6190_p1() {
    grp_fu_6190_p1 =  (sc_lv<8>) (tmp_3_0_0_1_2_reg_7093.read());
}

void matrix_conv::thread_grp_fu_6196_p0() {
    grp_fu_6196_p0 =  (sc_lv<8>) (tmp_2_5_2_2_reg_9372.read());
}

void matrix_conv::thread_grp_fu_6196_p1() {
    grp_fu_6196_p1 =  (sc_lv<8>) (tmp_3_0_0_2_reg_7960.read());
}

void matrix_conv::thread_grp_fu_6202_p0() {
    grp_fu_6202_p0 =  (sc_lv<8>) (tmp_2_7_2_2_reg_10138.read());
}

void matrix_conv::thread_grp_fu_6202_p1() {
    grp_fu_6202_p1 =  (sc_lv<8>) (tmp_3_0_0_2_2_reg_7145.read());
}

void matrix_conv::thread_grp_fu_6208_p0() {
    grp_fu_6208_p0 =  (sc_lv<8>) (tmp_2_4_2_2_reg_9336.read());
}

void matrix_conv::thread_grp_fu_6208_p1() {
    grp_fu_6208_p1 =  (sc_lv<8>) (tmp_3_0_0_1_reg_7926.read());
}

void matrix_conv::thread_grp_fu_6213_p0() {
    grp_fu_6213_p0 =  (sc_lv<8>) (tmp_3_4_2_2_reg_9441.read());
}

void matrix_conv::thread_grp_fu_6213_p1() {
    grp_fu_6213_p1 =  (sc_lv<8>) (tmp_3_0_0_2_reg_7960.read());
}

void matrix_conv::thread_grp_fu_6219_p0() {
    grp_fu_6219_p0 =  (sc_lv<8>) (tmp_2_5_2_2_reg_9372.read());
}

void matrix_conv::thread_grp_fu_6219_p1() {
    grp_fu_6219_p1 =  (sc_lv<8>) (tmp_3_0_0_1_reg_7926.read());
}

void matrix_conv::thread_grp_fu_6224_p0() {
    grp_fu_6224_p0 =  (sc_lv<8>) (tmp_2_7_2_2_reg_10138.read());
}

void matrix_conv::thread_grp_fu_6224_p1() {
    grp_fu_6224_p1 =  (sc_lv<8>) (tmp_3_0_0_1_2_reg_7093.read());
}

void matrix_conv::thread_grp_fu_6230_p0() {
    grp_fu_6230_p0 =  (sc_lv<8>) (tmp_3_5_2_2_reg_9477.read());
}

void matrix_conv::thread_grp_fu_6230_p1() {
    grp_fu_6230_p1 =  (sc_lv<8>) (tmp_3_0_0_2_reg_7960.read());
}

void matrix_conv::thread_grp_fu_6236_p0() {
    grp_fu_6236_p0 =  (sc_lv<8>) (tmp_3_7_2_2_reg_10204.read());
}

void matrix_conv::thread_grp_fu_6236_p1() {
    grp_fu_6236_p1 =  (sc_lv<8>) (tmp_3_0_0_2_2_reg_7145.read());
}

void matrix_conv::thread_grp_fu_6242_p0() {
    grp_fu_6242_p0 =  (sc_lv<8>) (tmp_3_4_2_2_reg_9441.read());
}

void matrix_conv::thread_grp_fu_6242_p1() {
    grp_fu_6242_p1 =  (sc_lv<8>) (tmp_3_0_0_1_reg_7926.read());
}

void matrix_conv::thread_grp_fu_6247_p0() {
    grp_fu_6247_p0 =  (sc_lv<8>) (tmp_4_4_2_2_reg_9546.read());
}

void matrix_conv::thread_grp_fu_6247_p1() {
    grp_fu_6247_p1 =  (sc_lv<8>) (tmp_3_0_0_2_reg_7960.read());
}

void matrix_conv::thread_grp_fu_6253_p0() {
    grp_fu_6253_p0 =  (sc_lv<8>) (tmp_3_5_2_2_reg_9477.read());
}

void matrix_conv::thread_grp_fu_6253_p1() {
    grp_fu_6253_p1 =  (sc_lv<8>) (tmp_3_0_0_1_reg_7926.read());
}

void matrix_conv::thread_grp_fu_6258_p0() {
    grp_fu_6258_p0 =  (sc_lv<8>) (tmp_3_7_2_2_reg_10204.read());
}

void matrix_conv::thread_grp_fu_6258_p1() {
    grp_fu_6258_p1 =  (sc_lv<8>) (tmp_3_0_0_1_2_reg_7093.read());
}

void matrix_conv::thread_grp_fu_6264_p0() {
    grp_fu_6264_p0 =  (sc_lv<8>) (tmp_4_5_2_2_reg_9582.read());
}

void matrix_conv::thread_grp_fu_6264_p1() {
    grp_fu_6264_p1 =  (sc_lv<8>) (tmp_3_0_0_2_reg_7960.read());
}

void matrix_conv::thread_grp_fu_6270_p0() {
    grp_fu_6270_p0 =  (sc_lv<8>) (tmp_4_7_2_2_reg_10270.read());
}

void matrix_conv::thread_grp_fu_6270_p1() {
    grp_fu_6270_p1 =  (sc_lv<8>) (tmp_3_0_0_2_2_reg_7145.read());
}

void matrix_conv::thread_grp_fu_6276_p0() {
    grp_fu_6276_p0 =  (sc_lv<8>) (tmp_4_4_2_2_reg_9546.read());
}

void matrix_conv::thread_grp_fu_6276_p1() {
    grp_fu_6276_p1 =  (sc_lv<8>) (tmp_3_5_1_1_reg_8668.read());
}

void matrix_conv::thread_grp_fu_6281_p0() {
    grp_fu_6281_p0 =  (sc_lv<8>) (tmp_5_4_2_2_reg_9651.read());
}

void matrix_conv::thread_grp_fu_6281_p1() {
    grp_fu_6281_p1 =  (sc_lv<8>) (tmp_3_5_2_2_2_reg_8739.read());
}

void matrix_conv::thread_grp_fu_6287_p0() {
    grp_fu_6287_p0 =  (sc_lv<8>) (tmp_4_5_2_2_reg_9582.read());
}

void matrix_conv::thread_grp_fu_6287_p1() {
    grp_fu_6287_p1 =  (sc_lv<8>) (tmp_3_5_1_1_reg_8668.read());
}

void matrix_conv::thread_grp_fu_6292_p0() {
    grp_fu_6292_p0 =  (sc_lv<8>) (tmp_4_7_2_2_reg_10270.read());
}

void matrix_conv::thread_grp_fu_6292_p1() {
    grp_fu_6292_p1 =  (sc_lv<8>) (tmp_3_5_1_1_2_reg_8692.read());
}

void matrix_conv::thread_grp_fu_6298_p0() {
    grp_fu_6298_p0 =  (sc_lv<8>) (tmp_5_5_2_2_reg_9688.read());
}

void matrix_conv::thread_grp_fu_6298_p1() {
    grp_fu_6298_p1 =  (sc_lv<8>) (tmp_3_5_2_2_2_reg_8739.read());
}

void matrix_conv::thread_grp_fu_6304_p0() {
    grp_fu_6304_p0 =  (sc_lv<8>) (tmp_5_7_2_2_reg_10341.read());
}

void matrix_conv::thread_grp_fu_6304_p1() {
    grp_fu_6304_p1 =  (sc_lv<8>) (tmp_3_5_2_2_2_3_reg_8770.read());
}

void matrix_conv::thread_grp_fu_6310_p0() {
    grp_fu_6310_p0 =  (sc_lv<8>) (tmp_5_4_2_2_reg_9651.read());
}

void matrix_conv::thread_grp_fu_6310_p1() {
    grp_fu_6310_p1 =  (sc_lv<8>) (tmp_3_5_1_1_reg_8668.read());
}

void matrix_conv::thread_grp_fu_6316_p0() {
    grp_fu_6316_p0 =  (sc_lv<8>) (tmp_5_5_2_2_reg_9688.read());
}

void matrix_conv::thread_grp_fu_6316_p1() {
    grp_fu_6316_p1 =  (sc_lv<8>) (tmp_3_5_1_1_reg_8668.read());
}

void matrix_conv::thread_grp_fu_6321_p0() {
    grp_fu_6321_p0 =  (sc_lv<8>) (tmp_5_7_2_2_reg_10341.read());
}

void matrix_conv::thread_grp_fu_6321_p1() {
    grp_fu_6321_p1 =  (sc_lv<8>) (tmp_3_5_1_1_2_reg_8692.read());
}

void matrix_conv::thread_grp_fu_6327_p0() {
    grp_fu_6327_p0 =  (sc_lv<8>) (tmp_6_5_2_2_reg_9787.read());
}

void matrix_conv::thread_grp_fu_6327_p1() {
    grp_fu_6327_p1 =  (sc_lv<8>) (tmp_3_5_2_2_2_reg_8739.read());
}

void matrix_conv::thread_grp_fu_6333_p0() {
    grp_fu_6333_p0 =  (sc_lv<8>) (tmp_6_5_2_2_reg_9787.read());
}

void matrix_conv::thread_grp_fu_6333_p1() {
    grp_fu_6333_p1 =  (sc_lv<8>) (tmp_3_5_1_1_2_reg_8692.read());
}

void matrix_conv::thread_grp_fu_6339_p0() {
    grp_fu_6339_p0 =  (sc_lv<8>) (tmp_7_3_2_2_9_reg_9012.read());
}

void matrix_conv::thread_grp_fu_6339_p1() {
    grp_fu_6339_p1 =  (sc_lv<8>) (tmp_3_5_2_2_2_reg_8739.read());
}

void matrix_conv::thread_grp_fu_6345_p0() {
    grp_fu_6345_p0 =  (sc_lv<8>) (tmp_7_5_2_2_11_reg_9900.read());
}

void matrix_conv::thread_grp_fu_6345_p1() {
    grp_fu_6345_p1 =  (sc_lv<8>) (tmp_3_5_2_2_2_3_reg_8770.read());
}

void matrix_conv::thread_grp_fu_6351_p0() {
    grp_fu_6351_p0 =  (sc_lv<8>) (tmp_5_5_2_2_reg_9688.read());
}

void matrix_conv::thread_grp_fu_6351_p1() {
    grp_fu_6351_p1 =  (sc_lv<8>) (tmp_3_5_1_0_1_reg_8647.read());
}

void matrix_conv::thread_grp_fu_6356_p0() {
    grp_fu_6356_p0 =  (sc_lv<8>) (tmp_6_4_2_2_reg_8959.read());
}

void matrix_conv::thread_grp_fu_6356_p1() {
    grp_fu_6356_p1 =  (sc_lv<8>) (tmp_3_5_1_1_reg_8668.read());
}

void matrix_conv::thread_grp_fu_6361_p0() {
    grp_fu_6361_p0 =  (sc_lv<8>) (tmp_6_6_2_2_reg_9819.read());
}

void matrix_conv::thread_grp_fu_6361_p1() {
    grp_fu_6361_p1 =  (sc_lv<8>) (tmp_3_5_1_1_2_reg_8692.read());
}

void matrix_conv::thread_grp_fu_6367_p0() {
    grp_fu_6367_p0 =  (sc_lv<8>) (tmp_7_4_2_2_10_reg_9033.read());
}

void matrix_conv::thread_grp_fu_6367_p1() {
    grp_fu_6367_p1 =  (sc_lv<8>) (tmp_3_5_2_2_2_reg_8739.read());
}

void matrix_conv::thread_grp_fu_6373_p0() {
    grp_fu_6373_p0 =  (sc_lv<8>) (tmp_7_6_2_2_12_reg_9921.read());
}

void matrix_conv::thread_grp_fu_6373_p1() {
    grp_fu_6373_p1 =  (sc_lv<8>) (tmp_3_5_2_2_2_3_reg_8770.read());
}

void matrix_conv::thread_grp_fu_6379_p0() {
    grp_fu_6379_p0 =  (sc_lv<8>) (tmp_5_6_2_2_reg_10306.read());
}

void matrix_conv::thread_grp_fu_6379_p1() {
    grp_fu_6379_p1 =  (sc_lv<8>) (tmp_3_5_1_0_1_reg_8647.read());
}

void matrix_conv::thread_grp_fu_6384_p0() {
    grp_fu_6384_p0 =  (sc_lv<8>) (tmp_6_5_2_2_reg_9787.read());
}

void matrix_conv::thread_grp_fu_6384_p1() {
    grp_fu_6384_p1 =  (sc_lv<8>) (tmp_3_5_1_1_reg_8668.read());
}

void matrix_conv::thread_grp_fu_6389_p0() {
    grp_fu_6389_p0 =  (sc_lv<8>) (tmp_6_7_2_2_reg_10402.read());
}

void matrix_conv::thread_grp_fu_6389_p1() {
    grp_fu_6389_p1 =  (sc_lv<8>) (tmp_3_5_1_1_2_reg_8692.read());
}

void matrix_conv::thread_grp_fu_6395_p0() {
    grp_fu_6395_p0 =  (sc_lv<8>) (tmp_7_5_2_2_11_reg_9900.read());
}

void matrix_conv::thread_grp_fu_6395_p1() {
    grp_fu_6395_p1 =  (sc_lv<8>) (tmp_3_5_2_2_2_reg_8739.read());
}

void matrix_conv::thread_grp_fu_6401_p1() {
    grp_fu_6401_p1 =  (sc_lv<8>) (tmp_3_5_2_2_2_3_reg_8770.read());
}

void matrix_conv::thread_res_0_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        res_0_address0 =  (sc_lv<3>) (ap_const_lv64_6);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        res_0_address0 =  (sc_lv<3>) (ap_const_lv64_4);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        res_0_address0 =  (sc_lv<3>) (ap_const_lv64_2);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        res_0_address0 =  (sc_lv<3>) (ap_const_lv64_0);
    } else {
        res_0_address0 =  (sc_lv<3>) ("XXX");
    }
}

void matrix_conv::thread_res_0_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        res_0_address1 =  (sc_lv<3>) (ap_const_lv64_7);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        res_0_address1 =  (sc_lv<3>) (ap_const_lv64_5);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        res_0_address1 =  (sc_lv<3>) (ap_const_lv64_3);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        res_0_address1 =  (sc_lv<3>) (ap_const_lv64_1);
    } else {
        res_0_address1 =  (sc_lv<3>) ("XXX");
    }
}

void matrix_conv::thread_res_0_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())))) {
        res_0_ce0 = ap_const_logic_1;
    } else {
        res_0_ce0 = ap_const_logic_0;
    }
}

void matrix_conv::thread_res_0_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())))) {
        res_0_ce1 = ap_const_logic_1;
    } else {
        res_0_ce1 = ap_const_logic_0;
    }
}

void matrix_conv::thread_res_0_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        res_0_d0 = sum_2_0_6_2_2_fu_4389_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        res_0_d0 = sum_2_0_4_2_2_fu_4129_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        res_0_d0 = sum_2_0_2_2_2_fu_3684_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        res_0_d0 = sum_2_0_0_2_2_fu_3019_p2.read();
    } else {
        res_0_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void matrix_conv::thread_res_0_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        res_0_d1 = sum_2_0_7_2_2_fu_4399_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        res_0_d1 = sum_2_0_5_2_2_fu_4139_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        res_0_d1 = sum_2_0_3_2_2_fu_3694_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        res_0_d1 = sum_2_0_1_2_2_fu_3034_p2.read();
    } else {
        res_0_d1 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void matrix_conv::thread_res_0_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())))) {
        res_0_we0 = ap_const_logic_1;
    } else {
        res_0_we0 = ap_const_logic_0;
    }
}

void matrix_conv::thread_res_0_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())))) {
        res_0_we1 = ap_const_logic_1;
    } else {
        res_0_we1 = ap_const_logic_0;
    }
}

void matrix_conv::thread_res_1_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        res_1_address0 =  (sc_lv<3>) (ap_const_lv64_6);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        res_1_address0 =  (sc_lv<3>) (ap_const_lv64_4);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        res_1_address0 =  (sc_lv<3>) (ap_const_lv64_2);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        res_1_address0 =  (sc_lv<3>) (ap_const_lv64_0);
    } else {
        res_1_address0 =  (sc_lv<3>) ("XXX");
    }
}

void matrix_conv::thread_res_1_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        res_1_address1 =  (sc_lv<3>) (ap_const_lv64_7);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        res_1_address1 =  (sc_lv<3>) (ap_const_lv64_5);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        res_1_address1 =  (sc_lv<3>) (ap_const_lv64_3);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        res_1_address1 =  (sc_lv<3>) (ap_const_lv64_1);
    } else {
        res_1_address1 =  (sc_lv<3>) ("XXX");
    }
}

void matrix_conv::thread_res_1_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())))) {
        res_1_ce0 = ap_const_logic_1;
    } else {
        res_1_ce0 = ap_const_logic_0;
    }
}

void matrix_conv::thread_res_1_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())))) {
        res_1_ce1 = ap_const_logic_1;
    } else {
        res_1_ce1 = ap_const_logic_0;
    }
}

void matrix_conv::thread_res_1_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        res_1_d0 = sum_2_1_6_2_2_fu_4409_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        res_1_d0 = sum_2_1_4_2_2_fu_4157_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        res_1_d0 = sum_2_1_2_2_2_fu_3756_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        res_1_d0 = sum_2_1_0_2_2_fu_3121_p2.read();
    } else {
        res_1_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void matrix_conv::thread_res_1_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        res_1_d1 = sum_2_1_7_2_2_fu_4419_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        res_1_d1 = sum_2_1_5_2_2_fu_4167_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        res_1_d1 = sum_2_1_3_2_2_fu_3766_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        res_1_d1 = sum_2_1_1_2_2_fu_3136_p2.read();
    } else {
        res_1_d1 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void matrix_conv::thread_res_1_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())))) {
        res_1_we0 = ap_const_logic_1;
    } else {
        res_1_we0 = ap_const_logic_0;
    }
}

void matrix_conv::thread_res_1_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())))) {
        res_1_we1 = ap_const_logic_1;
    } else {
        res_1_we1 = ap_const_logic_0;
    }
}

void matrix_conv::thread_res_2_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        res_2_address0 =  (sc_lv<3>) (ap_const_lv64_6);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        res_2_address0 =  (sc_lv<3>) (ap_const_lv64_4);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        res_2_address0 =  (sc_lv<3>) (ap_const_lv64_2);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        res_2_address0 =  (sc_lv<3>) (ap_const_lv64_0);
    } else {
        res_2_address0 =  (sc_lv<3>) ("XXX");
    }
}

void matrix_conv::thread_res_2_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        res_2_address1 =  (sc_lv<3>) (ap_const_lv64_7);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        res_2_address1 =  (sc_lv<3>) (ap_const_lv64_5);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        res_2_address1 =  (sc_lv<3>) (ap_const_lv64_3);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        res_2_address1 =  (sc_lv<3>) (ap_const_lv64_1);
    } else {
        res_2_address1 =  (sc_lv<3>) ("XXX");
    }
}

void matrix_conv::thread_res_2_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())))) {
        res_2_ce0 = ap_const_logic_1;
    } else {
        res_2_ce0 = ap_const_logic_0;
    }
}

void matrix_conv::thread_res_2_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())))) {
        res_2_ce1 = ap_const_logic_1;
    } else {
        res_2_ce1 = ap_const_logic_0;
    }
}

void matrix_conv::thread_res_2_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        res_2_d0 = sum_2_2_6_2_2_fu_4429_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        res_2_d0 = sum_2_2_4_2_2_fu_4185_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        res_2_d0 = sum_2_2_2_2_2_fu_3812_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        res_2_d0 = sum_2_2_0_2_2_fu_3207_p2.read();
    } else {
        res_2_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void matrix_conv::thread_res_2_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        res_2_d1 = sum_2_2_7_2_2_fu_4439_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        res_2_d1 = sum_2_2_5_2_2_fu_4195_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        res_2_d1 = sum_2_2_3_2_2_fu_3822_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        res_2_d1 = sum_2_2_1_2_2_fu_3222_p2.read();
    } else {
        res_2_d1 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void matrix_conv::thread_res_2_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())))) {
        res_2_we0 = ap_const_logic_1;
    } else {
        res_2_we0 = ap_const_logic_0;
    }
}

void matrix_conv::thread_res_2_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())))) {
        res_2_we1 = ap_const_logic_1;
    } else {
        res_2_we1 = ap_const_logic_0;
    }
}

void matrix_conv::thread_res_3_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        res_3_address0 =  (sc_lv<3>) (ap_const_lv64_6);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        res_3_address0 =  (sc_lv<3>) (ap_const_lv64_4);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        res_3_address0 =  (sc_lv<3>) (ap_const_lv64_2);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        res_3_address0 =  (sc_lv<3>) (ap_const_lv64_0);
    } else {
        res_3_address0 =  (sc_lv<3>) ("XXX");
    }
}

void matrix_conv::thread_res_3_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        res_3_address1 =  (sc_lv<3>) (ap_const_lv64_7);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        res_3_address1 =  (sc_lv<3>) (ap_const_lv64_5);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        res_3_address1 =  (sc_lv<3>) (ap_const_lv64_3);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        res_3_address1 =  (sc_lv<3>) (ap_const_lv64_1);
    } else {
        res_3_address1 =  (sc_lv<3>) ("XXX");
    }
}

void matrix_conv::thread_res_3_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())))) {
        res_3_ce0 = ap_const_logic_1;
    } else {
        res_3_ce0 = ap_const_logic_0;
    }
}

void matrix_conv::thread_res_3_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())))) {
        res_3_ce1 = ap_const_logic_1;
    } else {
        res_3_ce1 = ap_const_logic_0;
    }
}

void matrix_conv::thread_res_3_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        res_3_d0 = sum_2_3_6_2_2_fu_4449_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        res_3_d0 = sum_2_3_4_2_2_fu_4213_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        res_3_d0 = sum_2_3_2_2_2_fu_3868_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        res_3_d0 = sum_2_3_0_2_2_fu_3293_p2.read();
    } else {
        res_3_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void matrix_conv::thread_res_3_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        res_3_d1 = sum_2_3_7_2_2_fu_4459_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        res_3_d1 = sum_2_3_5_2_2_fu_4223_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        res_3_d1 = sum_2_3_3_2_2_fu_3878_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        res_3_d1 = sum_2_3_1_2_2_fu_3308_p2.read();
    } else {
        res_3_d1 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void matrix_conv::thread_res_3_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())))) {
        res_3_we0 = ap_const_logic_1;
    } else {
        res_3_we0 = ap_const_logic_0;
    }
}

void matrix_conv::thread_res_3_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())))) {
        res_3_we1 = ap_const_logic_1;
    } else {
        res_3_we1 = ap_const_logic_0;
    }
}

void matrix_conv::thread_res_4_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        res_4_address0 =  (sc_lv<3>) (ap_const_lv64_6);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        res_4_address0 =  (sc_lv<3>) (ap_const_lv64_4);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        res_4_address0 =  (sc_lv<3>) (ap_const_lv64_2);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        res_4_address0 =  (sc_lv<3>) (ap_const_lv64_0);
    } else {
        res_4_address0 =  (sc_lv<3>) ("XXX");
    }
}

void matrix_conv::thread_res_4_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        res_4_address1 =  (sc_lv<3>) (ap_const_lv64_7);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        res_4_address1 =  (sc_lv<3>) (ap_const_lv64_5);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        res_4_address1 =  (sc_lv<3>) (ap_const_lv64_3);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        res_4_address1 =  (sc_lv<3>) (ap_const_lv64_1);
    } else {
        res_4_address1 =  (sc_lv<3>) ("XXX");
    }
}

void matrix_conv::thread_res_4_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())))) {
        res_4_ce0 = ap_const_logic_1;
    } else {
        res_4_ce0 = ap_const_logic_0;
    }
}

void matrix_conv::thread_res_4_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())))) {
        res_4_ce1 = ap_const_logic_1;
    } else {
        res_4_ce1 = ap_const_logic_0;
    }
}

void matrix_conv::thread_res_4_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        res_4_d0 = sum_2_4_6_2_2_fu_4469_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        res_4_d0 = sum_2_4_4_2_2_fu_4241_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        res_4_d0 = sum_2_4_2_2_2_fu_3924_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        res_4_d0 = sum_2_4_0_2_2_fu_3379_p2.read();
    } else {
        res_4_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void matrix_conv::thread_res_4_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        res_4_d1 = sum_2_4_7_2_2_fu_4479_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        res_4_d1 = sum_2_4_5_2_2_fu_4251_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        res_4_d1 = sum_2_4_3_2_2_fu_3934_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        res_4_d1 = sum_2_4_1_2_2_fu_3394_p2.read();
    } else {
        res_4_d1 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void matrix_conv::thread_res_4_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())))) {
        res_4_we0 = ap_const_logic_1;
    } else {
        res_4_we0 = ap_const_logic_0;
    }
}

void matrix_conv::thread_res_4_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())))) {
        res_4_we1 = ap_const_logic_1;
    } else {
        res_4_we1 = ap_const_logic_0;
    }
}

void matrix_conv::thread_res_5_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        res_5_address0 =  (sc_lv<3>) (ap_const_lv64_6);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        res_5_address0 =  (sc_lv<3>) (ap_const_lv64_4);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        res_5_address0 =  (sc_lv<3>) (ap_const_lv64_2);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        res_5_address0 =  (sc_lv<3>) (ap_const_lv64_0);
    } else {
        res_5_address0 =  (sc_lv<3>) ("XXX");
    }
}

void matrix_conv::thread_res_5_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        res_5_address1 =  (sc_lv<3>) (ap_const_lv64_7);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        res_5_address1 =  (sc_lv<3>) (ap_const_lv64_5);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        res_5_address1 =  (sc_lv<3>) (ap_const_lv64_3);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        res_5_address1 =  (sc_lv<3>) (ap_const_lv64_1);
    } else {
        res_5_address1 =  (sc_lv<3>) ("XXX");
    }
}

void matrix_conv::thread_res_5_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())))) {
        res_5_ce0 = ap_const_logic_1;
    } else {
        res_5_ce0 = ap_const_logic_0;
    }
}

void matrix_conv::thread_res_5_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())))) {
        res_5_ce1 = ap_const_logic_1;
    } else {
        res_5_ce1 = ap_const_logic_0;
    }
}

void matrix_conv::thread_res_5_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        res_5_d0 = sum_2_5_6_2_2_fu_4489_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        res_5_d0 = sum_2_5_4_2_2_fu_4269_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        res_5_d0 = sum_2_5_2_2_2_fu_3980_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        res_5_d0 = sum_2_5_0_2_2_fu_3465_p2.read();
    } else {
        res_5_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void matrix_conv::thread_res_5_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        res_5_d1 = sum_2_5_7_2_2_fu_4499_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        res_5_d1 = sum_2_5_5_2_2_fu_4279_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        res_5_d1 = sum_2_5_3_2_2_fu_3990_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        res_5_d1 = sum_2_5_1_2_2_fu_3480_p2.read();
    } else {
        res_5_d1 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void matrix_conv::thread_res_5_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())))) {
        res_5_we0 = ap_const_logic_1;
    } else {
        res_5_we0 = ap_const_logic_0;
    }
}

void matrix_conv::thread_res_5_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())))) {
        res_5_we1 = ap_const_logic_1;
    } else {
        res_5_we1 = ap_const_logic_0;
    }
}

void matrix_conv::thread_res_6_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
            res_6_address0 =  (sc_lv<3>) (ap_const_lv64_7);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
            res_6_address0 =  (sc_lv<3>) (ap_const_lv64_5);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
            res_6_address0 =  (sc_lv<3>) (ap_const_lv64_0);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
            res_6_address0 =  (sc_lv<3>) (ap_const_lv64_2);
        } else {
            res_6_address0 =  (sc_lv<3>) ("XXX");
        }
    } else {
        res_6_address0 =  (sc_lv<3>) ("XXX");
    }
}

void matrix_conv::thread_res_6_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        res_6_address1 =  (sc_lv<3>) (ap_const_lv64_6);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        res_6_address1 =  (sc_lv<3>) (ap_const_lv64_4);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        res_6_address1 =  (sc_lv<3>) (ap_const_lv64_3);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        res_6_address1 =  (sc_lv<3>) (ap_const_lv64_1);
    } else {
        res_6_address1 =  (sc_lv<3>) ("XXX");
    }
}

void matrix_conv::thread_res_6_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)))) {
        res_6_ce0 = ap_const_logic_1;
    } else {
        res_6_ce0 = ap_const_logic_0;
    }
}

void matrix_conv::thread_res_6_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())))) {
        res_6_ce1 = ap_const_logic_1;
    } else {
        res_6_ce1 = ap_const_logic_0;
    }
}

void matrix_conv::thread_res_6_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
            res_6_d0 = sum_2_6_7_2_2_reg_10657.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
            res_6_d0 = sum_2_6_5_2_2_reg_10597.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
            res_6_d0 = sum_2_6_0_2_2_fu_4301_p2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
            res_6_d0 = sum_2_6_2_2_2_reg_9737.read();
        } else {
            res_6_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
        }
    } else {
        res_6_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void matrix_conv::thread_res_6_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        res_6_d1 = sum_2_6_6_2_2_reg_10602.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        res_6_d1 = sum_2_6_4_2_2_reg_10357.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        res_6_d1 = sum_2_6_3_2_2_fu_4040_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        res_6_d1 = sum_2_6_1_2_2_fu_3551_p2.read();
    } else {
        res_6_d1 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void matrix_conv::thread_res_6_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)))) {
        res_6_we0 = ap_const_logic_1;
    } else {
        res_6_we0 = ap_const_logic_0;
    }
}

void matrix_conv::thread_res_6_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())))) {
        res_6_we1 = ap_const_logic_1;
    } else {
        res_6_we1 = ap_const_logic_0;
    }
}

void matrix_conv::thread_res_7_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
            res_7_address0 =  (sc_lv<3>) (ap_const_lv64_6);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
            res_7_address0 =  (sc_lv<3>) (ap_const_lv64_4);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
            res_7_address0 =  (sc_lv<3>) (ap_const_lv64_0);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
            res_7_address0 =  (sc_lv<3>) (ap_const_lv64_1);
        } else {
            res_7_address0 =  (sc_lv<3>) ("XXX");
        }
    } else {
        res_7_address0 =  (sc_lv<3>) ("XXX");
    }
}

void matrix_conv::thread_res_7_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
            res_7_address1 =  (sc_lv<3>) (ap_const_lv64_7);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
            res_7_address1 =  (sc_lv<3>) (ap_const_lv64_5);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
            res_7_address1 =  (sc_lv<3>) (ap_const_lv64_3);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
            res_7_address1 =  (sc_lv<3>) (ap_const_lv64_2);
        } else {
            res_7_address1 =  (sc_lv<3>) ("XXX");
        }
    } else {
        res_7_address1 =  (sc_lv<3>) ("XXX");
    }
}

void matrix_conv::thread_res_7_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)))) {
        res_7_ce0 = ap_const_logic_1;
    } else {
        res_7_ce0 = ap_const_logic_0;
    }
}

void matrix_conv::thread_res_7_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)))) {
        res_7_ce1 = ap_const_logic_1;
    } else {
        res_7_ce1 = ap_const_logic_0;
    }
}

void matrix_conv::thread_res_7_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
            res_7_d0 = sum_2_7_6_2_2_reg_10662.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
            res_7_d0 = sum_2_7_4_2_2_reg_10617.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
            res_7_d0 = sum_2_7_0_2_2_fu_4343_p2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
            res_7_d0 = sum_2_7_1_2_2_fu_4091_p2.read();
        } else {
            res_7_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
        }
    } else {
        res_7_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void matrix_conv::thread_res_7_d1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
            res_7_d1 = sum_2_7_7_2_2_reg_10667.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
            res_7_d1 = sum_2_7_5_2_2_fu_4518_p2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
            res_7_d1 = sum_2_7_3_2_2_fu_4354_p2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
            res_7_d1 = sum_2_7_2_2_2_fu_4101_p2.read();
        } else {
            res_7_d1 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
        }
    } else {
        res_7_d1 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void matrix_conv::thread_res_7_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)))) {
        res_7_we0 = ap_const_logic_1;
    } else {
        res_7_we0 = ap_const_logic_0;
    }
}

void matrix_conv::thread_res_7_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)))) {
        res_7_we1 = ap_const_logic_1;
    } else {
        res_7_we1 = ap_const_logic_0;
    }
}

void matrix_conv::thread_sum_2_0_0_2_2_fu_3019_p2() {
    sum_2_0_0_2_2_fu_3019_p2 = (!tmp3_fu_3015_p2.read().is_01() || !tmp_fu_3011_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp3_fu_3015_p2.read()) + sc_biguint<16>(tmp_fu_3011_p2.read()));
}

void matrix_conv::thread_sum_2_0_1_2_2_fu_3034_p2() {
    sum_2_0_1_2_2_fu_3034_p2 = (!tmp10_fu_3030_p2.read().is_01() || !tmp7_fu_3026_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp10_fu_3030_p2.read()) + sc_biguint<16>(tmp7_fu_3026_p2.read()));
}

void matrix_conv::thread_sum_2_0_2_2_2_fu_3684_p2() {
    sum_2_0_2_2_2_fu_3684_p2 = (!tmp17_reg_9069.read().is_01() || !tmp14_fu_3680_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp17_reg_9069.read()) + sc_biguint<16>(tmp14_fu_3680_p2.read()));
}

void matrix_conv::thread_sum_2_0_3_2_2_fu_3694_p2() {
    sum_2_0_3_2_2_fu_3694_p2 = (!tmp24_reg_9079.read().is_01() || !tmp21_fu_3690_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp24_reg_9079.read()) + sc_biguint<16>(tmp21_fu_3690_p2.read()));
}

void matrix_conv::thread_sum_2_0_4_2_2_fu_4129_p2() {
    sum_2_0_4_2_2_fu_4129_p2 = (!tmp31_reg_9951.read().is_01() || !tmp28_fu_4125_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp31_reg_9951.read()) + sc_biguint<16>(tmp28_fu_4125_p2.read()));
}

void matrix_conv::thread_sum_2_0_5_2_2_fu_4139_p2() {
    sum_2_0_5_2_2_fu_4139_p2 = (!tmp38_reg_9961.read().is_01() || !tmp35_fu_4135_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp38_reg_9961.read()) + sc_biguint<16>(tmp35_fu_4135_p2.read()));
}

void matrix_conv::thread_sum_2_0_6_2_2_fu_4389_p2() {
    sum_2_0_6_2_2_fu_4389_p2 = (!tmp45_reg_10482.read().is_01() || !tmp42_fu_4385_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp45_reg_10482.read()) + sc_biguint<16>(tmp42_fu_4385_p2.read()));
}

void matrix_conv::thread_sum_2_0_7_2_2_fu_4399_p2() {
    sum_2_0_7_2_2_fu_4399_p2 = (!tmp52_reg_10492.read().is_01() || !tmp49_fu_4395_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp52_reg_10492.read()) + sc_biguint<16>(tmp49_fu_4395_p2.read()));
}

void matrix_conv::thread_sum_2_1_0_2_2_fu_3121_p2() {
    sum_2_1_0_2_2_fu_3121_p2 = (!tmp59_fu_3117_p2.read().is_01() || !tmp56_fu_3113_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp59_fu_3117_p2.read()) + sc_biguint<16>(tmp56_fu_3113_p2.read()));
}

void matrix_conv::thread_sum_2_1_1_2_2_fu_3136_p2() {
    sum_2_1_1_2_2_fu_3136_p2 = (!tmp66_fu_3132_p2.read().is_01() || !tmp63_fu_3128_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp66_fu_3132_p2.read()) + sc_biguint<16>(tmp63_fu_3128_p2.read()));
}

void matrix_conv::thread_sum_2_1_2_2_2_fu_3756_p2() {
    sum_2_1_2_2_2_fu_3756_p2 = (!tmp73_reg_9211.read().is_01() || !tmp70_fu_3752_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp73_reg_9211.read()) + sc_biguint<16>(tmp70_fu_3752_p2.read()));
}

void matrix_conv::thread_sum_2_1_3_2_2_fu_3766_p2() {
    sum_2_1_3_2_2_fu_3766_p2 = (!tmp80_reg_9221.read().is_01() || !tmp77_fu_3762_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp80_reg_9221.read()) + sc_biguint<16>(tmp77_fu_3762_p2.read()));
}

void matrix_conv::thread_sum_2_1_4_2_2_fu_4157_p2() {
    sum_2_1_4_2_2_fu_4157_p2 = (!tmp87_reg_10022.read().is_01() || !tmp84_fu_4153_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp87_reg_10022.read()) + sc_biguint<16>(tmp84_fu_4153_p2.read()));
}

void matrix_conv::thread_sum_2_1_5_2_2_fu_4167_p2() {
    sum_2_1_5_2_2_fu_4167_p2 = (!tmp94_reg_10032.read().is_01() || !tmp91_fu_4163_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp94_reg_10032.read()) + sc_biguint<16>(tmp91_fu_4163_p2.read()));
}

void matrix_conv::thread_sum_2_1_6_2_2_fu_4409_p2() {
    sum_2_1_6_2_2_fu_4409_p2 = (!tmp101_reg_10502.read().is_01() || !tmp98_fu_4405_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp101_reg_10502.read()) + sc_biguint<16>(tmp98_fu_4405_p2.read()));
}

void matrix_conv::thread_sum_2_1_7_2_2_fu_4419_p2() {
    sum_2_1_7_2_2_fu_4419_p2 = (!tmp108_reg_10512.read().is_01() || !tmp105_fu_4415_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp108_reg_10512.read()) + sc_biguint<16>(tmp105_fu_4415_p2.read()));
}

void matrix_conv::thread_sum_2_2_0_2_2_fu_3207_p2() {
    sum_2_2_0_2_2_fu_3207_p2 = (!tmp115_fu_3203_p2.read().is_01() || !tmp112_fu_3199_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp115_fu_3203_p2.read()) + sc_biguint<16>(tmp112_fu_3199_p2.read()));
}

void matrix_conv::thread_sum_2_2_1_2_2_fu_3222_p2() {
    sum_2_2_1_2_2_fu_3222_p2 = (!tmp122_fu_3218_p2.read().is_01() || !tmp119_fu_3214_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp122_fu_3218_p2.read()) + sc_biguint<16>(tmp119_fu_3214_p2.read()));
}

void matrix_conv::thread_sum_2_2_2_2_2_fu_3812_p2() {
    sum_2_2_2_2_2_fu_3812_p2 = (!tmp129_reg_9316.read().is_01() || !tmp126_fu_3808_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp129_reg_9316.read()) + sc_biguint<16>(tmp126_fu_3808_p2.read()));
}

void matrix_conv::thread_sum_2_2_3_2_2_fu_3822_p2() {
    sum_2_2_3_2_2_fu_3822_p2 = (!tmp136_reg_9326.read().is_01() || !tmp133_fu_3818_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp136_reg_9326.read()) + sc_biguint<16>(tmp133_fu_3818_p2.read()));
}

void matrix_conv::thread_sum_2_2_4_2_2_fu_4185_p2() {
    sum_2_2_4_2_2_fu_4185_p2 = (!tmp143_reg_10088.read().is_01() || !tmp140_fu_4181_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp143_reg_10088.read()) + sc_biguint<16>(tmp140_fu_4181_p2.read()));
}

void matrix_conv::thread_sum_2_2_5_2_2_fu_4195_p2() {
    sum_2_2_5_2_2_fu_4195_p2 = (!tmp150_reg_10098.read().is_01() || !tmp147_fu_4191_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp150_reg_10098.read()) + sc_biguint<16>(tmp147_fu_4191_p2.read()));
}

void matrix_conv::thread_sum_2_2_6_2_2_fu_4429_p2() {
    sum_2_2_6_2_2_fu_4429_p2 = (!tmp157_reg_10522.read().is_01() || !tmp154_fu_4425_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp157_reg_10522.read()) + sc_biguint<16>(tmp154_fu_4425_p2.read()));
}

void matrix_conv::thread_sum_2_2_7_2_2_fu_4439_p2() {
    sum_2_2_7_2_2_fu_4439_p2 = (!tmp164_reg_10532.read().is_01() || !tmp161_fu_4435_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp164_reg_10532.read()) + sc_biguint<16>(tmp161_fu_4435_p2.read()));
}

void matrix_conv::thread_sum_2_3_0_2_2_fu_3293_p2() {
    sum_2_3_0_2_2_fu_3293_p2 = (!tmp171_fu_3289_p2.read().is_01() || !tmp168_fu_3285_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp171_fu_3289_p2.read()) + sc_biguint<16>(tmp168_fu_3285_p2.read()));
}

void matrix_conv::thread_sum_2_3_1_2_2_fu_3308_p2() {
    sum_2_3_1_2_2_fu_3308_p2 = (!tmp178_fu_3304_p2.read().is_01() || !tmp175_fu_3300_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp178_fu_3304_p2.read()) + sc_biguint<16>(tmp175_fu_3300_p2.read()));
}

void matrix_conv::thread_sum_2_3_2_2_2_fu_3868_p2() {
    sum_2_3_2_2_2_fu_3868_p2 = (!tmp185_reg_9421.read().is_01() || !tmp182_fu_3864_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp185_reg_9421.read()) + sc_biguint<16>(tmp182_fu_3864_p2.read()));
}

void matrix_conv::thread_sum_2_3_3_2_2_fu_3878_p2() {
    sum_2_3_3_2_2_fu_3878_p2 = (!tmp192_reg_9431.read().is_01() || !tmp189_fu_3874_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp192_reg_9431.read()) + sc_biguint<16>(tmp189_fu_3874_p2.read()));
}

void matrix_conv::thread_sum_2_3_4_2_2_fu_4213_p2() {
    sum_2_3_4_2_2_fu_4213_p2 = (!tmp199_reg_10154.read().is_01() || !tmp196_fu_4209_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp199_reg_10154.read()) + sc_biguint<16>(tmp196_fu_4209_p2.read()));
}

void matrix_conv::thread_sum_2_3_5_2_2_fu_4223_p2() {
    sum_2_3_5_2_2_fu_4223_p2 = (!tmp206_reg_10164.read().is_01() || !tmp203_fu_4219_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp206_reg_10164.read()) + sc_biguint<16>(tmp203_fu_4219_p2.read()));
}

void matrix_conv::thread_sum_2_3_6_2_2_fu_4449_p2() {
    sum_2_3_6_2_2_fu_4449_p2 = (!tmp213_reg_10542.read().is_01() || !tmp210_fu_4445_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp213_reg_10542.read()) + sc_biguint<16>(tmp210_fu_4445_p2.read()));
}

void matrix_conv::thread_sum_2_3_7_2_2_fu_4459_p2() {
    sum_2_3_7_2_2_fu_4459_p2 = (!tmp220_reg_10552.read().is_01() || !tmp217_fu_4455_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp220_reg_10552.read()) + sc_biguint<16>(tmp217_fu_4455_p2.read()));
}

void matrix_conv::thread_sum_2_4_0_2_2_fu_3379_p2() {
    sum_2_4_0_2_2_fu_3379_p2 = (!tmp227_fu_3375_p2.read().is_01() || !tmp224_fu_3371_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp227_fu_3375_p2.read()) + sc_biguint<16>(tmp224_fu_3371_p2.read()));
}

void matrix_conv::thread_sum_2_4_1_2_2_fu_3394_p2() {
    sum_2_4_1_2_2_fu_3394_p2 = (!tmp234_fu_3390_p2.read().is_01() || !tmp231_fu_3386_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp234_fu_3390_p2.read()) + sc_biguint<16>(tmp231_fu_3386_p2.read()));
}

void matrix_conv::thread_sum_2_4_2_2_2_fu_3924_p2() {
    sum_2_4_2_2_2_fu_3924_p2 = (!tmp241_reg_9526.read().is_01() || !tmp238_fu_3920_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp241_reg_9526.read()) + sc_biguint<16>(tmp238_fu_3920_p2.read()));
}

void matrix_conv::thread_sum_2_4_3_2_2_fu_3934_p2() {
    sum_2_4_3_2_2_fu_3934_p2 = (!tmp248_reg_9536.read().is_01() || !tmp245_fu_3930_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp248_reg_9536.read()) + sc_biguint<16>(tmp245_fu_3930_p2.read()));
}

void matrix_conv::thread_sum_2_4_4_2_2_fu_4241_p2() {
    sum_2_4_4_2_2_fu_4241_p2 = (!tmp255_reg_10220.read().is_01() || !tmp252_fu_4237_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp255_reg_10220.read()) + sc_biguint<16>(tmp252_fu_4237_p2.read()));
}

void matrix_conv::thread_sum_2_4_5_2_2_fu_4251_p2() {
    sum_2_4_5_2_2_fu_4251_p2 = (!tmp262_reg_10230.read().is_01() || !tmp259_fu_4247_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp262_reg_10230.read()) + sc_biguint<16>(tmp259_fu_4247_p2.read()));
}

void matrix_conv::thread_sum_2_4_6_2_2_fu_4469_p2() {
    sum_2_4_6_2_2_fu_4469_p2 = (!tmp269_reg_10562.read().is_01() || !tmp266_fu_4465_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp269_reg_10562.read()) + sc_biguint<16>(tmp266_fu_4465_p2.read()));
}

void matrix_conv::thread_sum_2_4_7_2_2_fu_4479_p2() {
    sum_2_4_7_2_2_fu_4479_p2 = (!tmp276_reg_10572.read().is_01() || !tmp273_fu_4475_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp276_reg_10572.read()) + sc_biguint<16>(tmp273_fu_4475_p2.read()));
}

void matrix_conv::thread_sum_2_5_0_2_2_fu_3465_p2() {
    sum_2_5_0_2_2_fu_3465_p2 = (!tmp283_fu_3461_p2.read().is_01() || !tmp280_fu_3457_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp283_fu_3461_p2.read()) + sc_biguint<16>(tmp280_fu_3457_p2.read()));
}

void matrix_conv::thread_sum_2_5_1_2_2_fu_3480_p2() {
    sum_2_5_1_2_2_fu_3480_p2 = (!tmp290_fu_3476_p2.read().is_01() || !tmp287_fu_3472_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp290_fu_3476_p2.read()) + sc_biguint<16>(tmp287_fu_3472_p2.read()));
}

void matrix_conv::thread_sum_2_5_2_2_2_fu_3980_p2() {
    sum_2_5_2_2_2_fu_3980_p2 = (!tmp297_reg_9631.read().is_01() || !tmp294_fu_3976_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp297_reg_9631.read()) + sc_biguint<16>(tmp294_fu_3976_p2.read()));
}

void matrix_conv::thread_sum_2_5_3_2_2_fu_3990_p2() {
    sum_2_5_3_2_2_fu_3990_p2 = (!tmp304_reg_9641.read().is_01() || !tmp301_fu_3986_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp304_reg_9641.read()) + sc_biguint<16>(tmp301_fu_3986_p2.read()));
}

void matrix_conv::thread_sum_2_5_4_2_2_fu_4269_p2() {
    sum_2_5_4_2_2_fu_4269_p2 = (!tmp311_reg_10286.read().is_01() || !tmp308_fu_4265_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp311_reg_10286.read()) + sc_biguint<16>(tmp308_fu_4265_p2.read()));
}

void matrix_conv::thread_sum_2_5_5_2_2_fu_4279_p2() {
    sum_2_5_5_2_2_fu_4279_p2 = (!tmp318_reg_10296.read().is_01() || !tmp315_fu_4275_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp318_reg_10296.read()) + sc_biguint<16>(tmp315_fu_4275_p2.read()));
}

void matrix_conv::thread_sum_2_5_6_2_2_fu_4489_p2() {
    sum_2_5_6_2_2_fu_4489_p2 = (!tmp325_reg_10582.read().is_01() || !tmp322_fu_4485_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp325_reg_10582.read()) + sc_biguint<16>(tmp322_fu_4485_p2.read()));
}

void matrix_conv::thread_sum_2_5_7_2_2_fu_4499_p2() {
    sum_2_5_7_2_2_fu_4499_p2 = (!tmp332_reg_10592.read().is_01() || !tmp329_fu_4495_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp332_reg_10592.read()) + sc_biguint<16>(tmp329_fu_4495_p2.read()));
}

void matrix_conv::thread_sum_2_6_0_2_2_fu_4301_p2() {
    sum_2_6_0_2_2_fu_4301_p2 = (!tmp339_fu_4297_p2.read().is_01() || !tmp336_fu_4293_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp339_fu_4297_p2.read()) + sc_biguint<16>(tmp336_fu_4293_p2.read()));
}

void matrix_conv::thread_sum_2_6_1_2_2_fu_3551_p2() {
    sum_2_6_1_2_2_fu_3551_p2 = (!tmp346_fu_3547_p2.read().is_01() || !tmp343_fu_3543_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp346_fu_3547_p2.read()) + sc_biguint<16>(tmp343_fu_3543_p2.read()));
}

void matrix_conv::thread_sum_2_6_2_2_2_fu_3566_p2() {
    sum_2_6_2_2_2_fu_3566_p2 = (!tmp353_fu_3562_p2.read().is_01() || !tmp350_fu_3558_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp353_fu_3562_p2.read()) + sc_biguint<16>(tmp350_fu_3558_p2.read()));
}

void matrix_conv::thread_sum_2_6_3_2_2_fu_4040_p2() {
    sum_2_6_3_2_2_fu_4040_p2 = (!tmp360_reg_9752.read().is_01() || !tmp357_fu_4036_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp360_reg_9752.read()) + sc_biguint<16>(tmp357_fu_4036_p2.read()));
}

void matrix_conv::thread_sum_2_6_4_2_2_fu_4054_p2() {
    sum_2_6_4_2_2_fu_4054_p2 = (!tmp367_fu_4050_p2.read().is_01() || !tmp364_fu_4046_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp367_fu_4050_p2.read()) + sc_biguint<16>(tmp364_fu_4046_p2.read()));
}

void matrix_conv::thread_sum_2_6_5_2_2_fu_4312_p2() {
    sum_2_6_5_2_2_fu_4312_p2 = (!tmp374_reg_10367.read().is_01() || !tmp371_fu_4308_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp374_reg_10367.read()) + sc_biguint<16>(tmp371_fu_4308_p2.read()));
}

void matrix_conv::thread_sum_2_6_6_2_2_fu_4325_p2() {
    sum_2_6_6_2_2_fu_4325_p2 = (!tmp381_fu_4321_p2.read().is_01() || !tmp378_fu_4317_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp381_fu_4321_p2.read()) + sc_biguint<16>(tmp378_fu_4317_p2.read()));
}

void matrix_conv::thread_sum_2_6_7_2_2_fu_4509_p2() {
    sum_2_6_7_2_2_fu_4509_p2 = (!tmp388_reg_10612.read().is_01() || !tmp385_fu_4505_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp388_reg_10612.read()) + sc_biguint<16>(tmp385_fu_4505_p2.read()));
}

void matrix_conv::thread_sum_2_7_0_2_2_fu_4343_p2() {
    sum_2_7_0_2_2_fu_4343_p2 = (!tmp395_fu_4339_p2.read().is_01() || !tmp392_fu_4335_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp395_fu_4339_p2.read()) + sc_biguint<16>(tmp392_fu_4335_p2.read()));
}

void matrix_conv::thread_sum_2_7_1_2_2_fu_4091_p2() {
    sum_2_7_1_2_2_fu_4091_p2 = (!tmp402_reg_9870.read().is_01() || !tmp399_fu_4087_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp402_reg_9870.read()) + sc_biguint<16>(tmp399_fu_4087_p2.read()));
}

void matrix_conv::thread_sum_2_7_2_2_2_fu_4101_p2() {
    sum_2_7_2_2_2_fu_4101_p2 = (!tmp409_reg_9885.read().is_01() || !tmp406_fu_4097_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp409_reg_9885.read()) + sc_biguint<16>(tmp406_fu_4097_p2.read()));
}

void matrix_conv::thread_sum_2_7_3_2_2_fu_4354_p2() {
    sum_2_7_3_2_2_fu_4354_p2 = (!tmp416_reg_10437.read().is_01() || !tmp413_fu_4350_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp416_reg_10437.read()) + sc_biguint<16>(tmp413_fu_4350_p2.read()));
}

void matrix_conv::thread_sum_2_7_4_2_2_fu_4364_p2() {
    sum_2_7_4_2_2_fu_4364_p2 = (!tmp423_reg_10452.read().is_01() || !tmp420_fu_4360_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp423_reg_10452.read()) + sc_biguint<16>(tmp420_fu_4360_p2.read()));
}

void matrix_conv::thread_sum_2_7_5_2_2_fu_4518_p2() {
    sum_2_7_5_2_2_fu_4518_p2 = (!tmp430_reg_10622.read().is_01() || !tmp427_fu_4514_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp430_reg_10622.read()) + sc_biguint<16>(tmp427_fu_4514_p2.read()));
}

void matrix_conv::thread_sum_2_7_6_2_2_fu_4528_p2() {
    sum_2_7_6_2_2_fu_4528_p2 = (!tmp437_reg_10637.read().is_01() || !tmp434_fu_4524_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp437_reg_10637.read()) + sc_biguint<16>(tmp434_fu_4524_p2.read()));
}

void matrix_conv::thread_sum_2_7_7_2_2_fu_4537_p2() {
    sum_2_7_7_2_2_fu_4537_p2 = (!tmp444_reg_10652.read().is_01() || !tmp441_fu_4533_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp444_reg_10652.read()) + sc_biguint<16>(tmp441_fu_4533_p2.read()));
}

void matrix_conv::thread_tmp101_fu_4173_p2() {
    tmp101_fu_4173_p2 = (!grp_fu_6145_p3.read().is_01() || !tmp102_reg_10047.read().is_01())? sc_lv<16>(): (sc_bigint<16>(grp_fu_6145_p3.read()) + sc_bigint<16>(tmp102_reg_10047.read()));
}

void matrix_conv::thread_tmp105_fu_4415_p2() {
    tmp105_fu_4415_p2 = (!tmp107_reg_10507.read().is_01() || !tmp106_reg_10078.read().is_01())? sc_lv<16>(): (sc_bigint<16>(tmp107_reg_10507.read()) + sc_bigint<16>(tmp106_reg_10078.read()));
}

void matrix_conv::thread_tmp108_fu_4177_p2() {
    tmp108_fu_4177_p2 = (!grp_fu_6162_p3.read().is_01() || !grp_fu_6156_p3.read().is_01())? sc_lv<16>(): (sc_bigint<16>(grp_fu_6162_p3.read()) + sc_bigint<16>(grp_fu_6156_p3.read()));
}

void matrix_conv::thread_tmp10_fu_3030_p2() {
    tmp10_fu_3030_p2 = (!tmp12_reg_8024.read().is_01() || !tmp11_reg_8019.read().is_01())? sc_lv<16>(): (sc_bigint<16>(tmp12_reg_8024.read()) + sc_bigint<16>(tmp11_reg_8019.read()));
}

void matrix_conv::thread_tmp112_fu_3199_p2() {
    tmp112_fu_3199_p2 = (!tmp114_reg_8276.read().is_01() || !tmp113_reg_8271.read().is_01())? sc_lv<16>(): (sc_bigint<16>(tmp114_reg_8276.read()) + sc_bigint<16>(tmp113_reg_8271.read()));
}

void matrix_conv::thread_tmp115_fu_3203_p2() {
    tmp115_fu_3203_p2 = (!tmp117_reg_8281.read().is_01() || !tmp116_reg_7369.read().is_01())? sc_lv<16>(): (sc_bigint<16>(tmp117_reg_8281.read()) + sc_bigint<16>(tmp116_reg_7369.read()));
}

void matrix_conv::thread_tmp119_fu_3214_p2() {
    tmp119_fu_3214_p2 = (!tmp121_reg_8291.read().is_01() || !tmp120_reg_8286.read().is_01())? sc_lv<16>(): (sc_bigint<16>(tmp121_reg_8291.read()) + sc_bigint<16>(tmp120_reg_8286.read()));
}

void matrix_conv::thread_tmp122_fu_3218_p2() {
    tmp122_fu_3218_p2 = (!tmp124_reg_8301.read().is_01() || !tmp123_reg_8296.read().is_01())? sc_lv<16>(): (sc_bigint<16>(tmp124_reg_8301.read()) + sc_bigint<16>(tmp123_reg_8296.read()));
}

void matrix_conv::thread_tmp126_fu_3808_p2() {
    tmp126_fu_3808_p2 = (!tmp128_reg_9311.read().is_01() || !tmp127_reg_8317.read().is_01())? sc_lv<16>(): (sc_bigint<16>(tmp128_reg_9311.read()) + sc_bigint<16>(tmp127_reg_8317.read()));
}

void matrix_conv::thread_tmp129_fu_3229_p2() {
    tmp129_fu_3229_p2 = (!grp_fu_5261_p3.read().is_01() || !tmp130_reg_8322.read().is_01())? sc_lv<16>(): (sc_bigint<16>(grp_fu_5261_p3.read()) + sc_bigint<16>(tmp130_reg_8322.read()));
}

void matrix_conv::thread_tmp133_fu_3818_p2() {
    tmp133_fu_3818_p2 = (!tmp135_reg_9321.read().is_01() || !tmp134_reg_8356.read().is_01())? sc_lv<16>(): (sc_bigint<16>(tmp135_reg_9321.read()) + sc_bigint<16>(tmp134_reg_8356.read()));
}

void matrix_conv::thread_tmp136_fu_3233_p2() {
    tmp136_fu_3233_p2 = (!grp_fu_5278_p3.read().is_01() || !grp_fu_5272_p3.read().is_01())? sc_lv<16>(): (sc_bigint<16>(grp_fu_5278_p3.read()) + sc_bigint<16>(grp_fu_5272_p3.read()));
}

void matrix_conv::thread_tmp140_fu_4181_p2() {
    tmp140_fu_4181_p2 = (!tmp142_reg_10083.read().is_01() || !tmp141_reg_9342.read().is_01())? sc_lv<16>(): (sc_bigint<16>(tmp142_reg_10083.read()) + sc_bigint<16>(tmp141_reg_9342.read()));
}

void matrix_conv::thread_tmp143_fu_3828_p2() {
    tmp143_fu_3828_p2 = (!grp_fu_5742_p3.read().is_01() || !tmp144_reg_9347.read().is_01())? sc_lv<16>(): (sc_bigint<16>(grp_fu_5742_p3.read()) + sc_bigint<16>(tmp144_reg_9347.read()));
}

void matrix_conv::thread_tmp147_fu_4191_p2() {
    tmp147_fu_4191_p2 = (!tmp149_reg_10093.read().is_01() || !tmp148_reg_9381.read().is_01())? sc_lv<16>(): (sc_bigint<16>(tmp149_reg_10093.read()) + sc_bigint<16>(tmp148_reg_9381.read()));
}

void matrix_conv::thread_tmp14_fu_3680_p2() {
    tmp14_fu_3680_p2 = (!tmp16_reg_9064.read().is_01() || !tmp15_reg_8045.read().is_01())? sc_lv<16>(): (sc_bigint<16>(tmp16_reg_9064.read()) + sc_bigint<16>(tmp15_reg_8045.read()));
}

void matrix_conv::thread_tmp150_fu_3832_p2() {
    tmp150_fu_3832_p2 = (!grp_fu_5759_p3.read().is_01() || !grp_fu_5753_p3.read().is_01())? sc_lv<16>(): (sc_bigint<16>(grp_fu_5759_p3.read()) + sc_bigint<16>(grp_fu_5753_p3.read()));
}

void matrix_conv::thread_tmp154_fu_4425_p2() {
    tmp154_fu_4425_p2 = (!tmp156_reg_10517.read().is_01() || !tmp155_reg_10108.read().is_01())? sc_lv<16>(): (sc_bigint<16>(tmp156_reg_10517.read()) + sc_bigint<16>(tmp155_reg_10108.read()));
}

void matrix_conv::thread_tmp157_fu_4201_p2() {
    tmp157_fu_4201_p2 = (!grp_fu_6179_p3.read().is_01() || !tmp158_reg_10113.read().is_01())? sc_lv<16>(): (sc_bigint<16>(grp_fu_6179_p3.read()) + sc_bigint<16>(tmp158_reg_10113.read()));
}

void matrix_conv::thread_tmp161_fu_4435_p2() {
    tmp161_fu_4435_p2 = (!tmp163_reg_10527.read().is_01() || !tmp162_reg_10144.read().is_01())? sc_lv<16>(): (sc_bigint<16>(tmp163_reg_10527.read()) + sc_bigint<16>(tmp162_reg_10144.read()));
}

void matrix_conv::thread_tmp164_fu_4205_p2() {
    tmp164_fu_4205_p2 = (!grp_fu_6196_p3.read().is_01() || !grp_fu_6190_p3.read().is_01())? sc_lv<16>(): (sc_bigint<16>(grp_fu_6196_p3.read()) + sc_bigint<16>(grp_fu_6190_p3.read()));
}

void matrix_conv::thread_tmp168_fu_3285_p2() {
    tmp168_fu_3285_p2 = (!tmp170_reg_8396.read().is_01() || !tmp169_reg_8391.read().is_01())? sc_lv<16>(): (sc_bigint<16>(tmp170_reg_8396.read()) + sc_bigint<16>(tmp169_reg_8391.read()));
}

void matrix_conv::thread_tmp171_fu_3289_p2() {
    tmp171_fu_3289_p2 = (!tmp173_reg_8401.read().is_01() || !tmp172_reg_7445.read().is_01())? sc_lv<16>(): (sc_bigint<16>(tmp173_reg_8401.read()) + sc_bigint<16>(tmp172_reg_7445.read()));
}

void matrix_conv::thread_tmp175_fu_3300_p2() {
    tmp175_fu_3300_p2 = (!tmp177_reg_8411.read().is_01() || !tmp176_reg_8406.read().is_01())? sc_lv<16>(): (sc_bigint<16>(tmp177_reg_8411.read()) + sc_bigint<16>(tmp176_reg_8406.read()));
}

void matrix_conv::thread_tmp178_fu_3304_p2() {
    tmp178_fu_3304_p2 = (!tmp180_reg_8421.read().is_01() || !tmp179_reg_8416.read().is_01())? sc_lv<16>(): (sc_bigint<16>(tmp180_reg_8421.read()) + sc_bigint<16>(tmp179_reg_8416.read()));
}

void matrix_conv::thread_tmp17_fu_3041_p2() {
    tmp17_fu_3041_p2 = (!grp_fu_5147_p3.read().is_01() || !tmp18_reg_8050.read().is_01())? sc_lv<16>(): (sc_bigint<16>(grp_fu_5147_p3.read()) + sc_bigint<16>(tmp18_reg_8050.read()));
}

void matrix_conv::thread_tmp182_fu_3864_p2() {
    tmp182_fu_3864_p2 = (!tmp184_reg_9416.read().is_01() || !tmp183_reg_8437.read().is_01())? sc_lv<16>(): (sc_bigint<16>(tmp184_reg_9416.read()) + sc_bigint<16>(tmp183_reg_8437.read()));
}

void matrix_conv::thread_tmp185_fu_3315_p2() {
    tmp185_fu_3315_p2 = (!grp_fu_5318_p3.read().is_01() || !tmp186_reg_8442.read().is_01())? sc_lv<16>(): (sc_bigint<16>(grp_fu_5318_p3.read()) + sc_bigint<16>(tmp186_reg_8442.read()));
}

void matrix_conv::thread_tmp189_fu_3874_p2() {
    tmp189_fu_3874_p2 = (!tmp191_reg_9426.read().is_01() || !tmp190_reg_8476.read().is_01())? sc_lv<16>(): (sc_bigint<16>(tmp191_reg_9426.read()) + sc_bigint<16>(tmp190_reg_8476.read()));
}

void matrix_conv::thread_tmp192_fu_3319_p2() {
    tmp192_fu_3319_p2 = (!grp_fu_5335_p3.read().is_01() || !grp_fu_5329_p3.read().is_01())? sc_lv<16>(): (sc_bigint<16>(grp_fu_5335_p3.read()) + sc_bigint<16>(grp_fu_5329_p3.read()));
}

void matrix_conv::thread_tmp196_fu_4209_p2() {
    tmp196_fu_4209_p2 = (!tmp198_reg_10149.read().is_01() || !tmp197_reg_9447.read().is_01())? sc_lv<16>(): (sc_bigint<16>(tmp198_reg_10149.read()) + sc_bigint<16>(tmp197_reg_9447.read()));
}

void matrix_conv::thread_tmp199_fu_3884_p2() {
    tmp199_fu_3884_p2 = (!grp_fu_5799_p3.read().is_01() || !tmp200_reg_9452.read().is_01())? sc_lv<16>(): (sc_bigint<16>(grp_fu_5799_p3.read()) + sc_bigint<16>(tmp200_reg_9452.read()));
}

void matrix_conv::thread_tmp203_fu_4219_p2() {
    tmp203_fu_4219_p2 = (!tmp205_reg_10159.read().is_01() || !tmp204_reg_9486.read().is_01())? sc_lv<16>(): (sc_bigint<16>(tmp205_reg_10159.read()) + sc_bigint<16>(tmp204_reg_9486.read()));
}

void matrix_conv::thread_tmp206_fu_3888_p2() {
    tmp206_fu_3888_p2 = (!grp_fu_5816_p3.read().is_01() || !grp_fu_5810_p3.read().is_01())? sc_lv<16>(): (sc_bigint<16>(grp_fu_5816_p3.read()) + sc_bigint<16>(grp_fu_5810_p3.read()));
}

void matrix_conv::thread_tmp210_fu_4445_p2() {
    tmp210_fu_4445_p2 = (!tmp212_reg_10537.read().is_01() || !tmp211_reg_10174.read().is_01())? sc_lv<16>(): (sc_bigint<16>(tmp212_reg_10537.read()) + sc_bigint<16>(tmp211_reg_10174.read()));
}

void matrix_conv::thread_tmp213_fu_4229_p2() {
    tmp213_fu_4229_p2 = (!grp_fu_6213_p3.read().is_01() || !tmp214_reg_10179.read().is_01())? sc_lv<16>(): (sc_bigint<16>(grp_fu_6213_p3.read()) + sc_bigint<16>(tmp214_reg_10179.read()));
}

void matrix_conv::thread_tmp217_fu_4455_p2() {
    tmp217_fu_4455_p2 = (!tmp219_reg_10547.read().is_01() || !tmp218_reg_10210.read().is_01())? sc_lv<16>(): (sc_bigint<16>(tmp219_reg_10547.read()) + sc_bigint<16>(tmp218_reg_10210.read()));
}

void matrix_conv::thread_tmp21_fu_3690_p2() {
    tmp21_fu_3690_p2 = (!tmp23_reg_9074.read().is_01() || !tmp22_reg_8096.read().is_01())? sc_lv<16>(): (sc_bigint<16>(tmp23_reg_9074.read()) + sc_bigint<16>(tmp22_reg_8096.read()));
}

void matrix_conv::thread_tmp220_fu_4233_p2() {
    tmp220_fu_4233_p2 = (!grp_fu_6230_p3.read().is_01() || !grp_fu_6224_p3.read().is_01())? sc_lv<16>(): (sc_bigint<16>(grp_fu_6230_p3.read()) + sc_bigint<16>(grp_fu_6224_p3.read()));
}

void matrix_conv::thread_tmp224_fu_3371_p2() {
    tmp224_fu_3371_p2 = (!tmp226_reg_8516.read().is_01() || !tmp225_reg_8511.read().is_01())? sc_lv<16>(): (sc_bigint<16>(tmp226_reg_8516.read()) + sc_bigint<16>(tmp225_reg_8511.read()));
}

void matrix_conv::thread_tmp227_fu_3375_p2() {
    tmp227_fu_3375_p2 = (!tmp229_reg_8521.read().is_01() || !tmp228_reg_7527.read().is_01())? sc_lv<16>(): (sc_bigint<16>(tmp229_reg_8521.read()) + sc_bigint<16>(tmp228_reg_7527.read()));
}

void matrix_conv::thread_tmp231_fu_3386_p2() {
    tmp231_fu_3386_p2 = (!tmp233_reg_8531.read().is_01() || !tmp232_reg_8526.read().is_01())? sc_lv<16>(): (sc_bigint<16>(tmp233_reg_8531.read()) + sc_bigint<16>(tmp232_reg_8526.read()));
}

void matrix_conv::thread_tmp234_fu_3390_p2() {
    tmp234_fu_3390_p2 = (!tmp236_reg_8541.read().is_01() || !tmp235_reg_8536.read().is_01())? sc_lv<16>(): (sc_bigint<16>(tmp236_reg_8541.read()) + sc_bigint<16>(tmp235_reg_8536.read()));
}

void matrix_conv::thread_tmp238_fu_3920_p2() {
    tmp238_fu_3920_p2 = (!tmp240_reg_9521.read().is_01() || !tmp239_reg_8558.read().is_01())? sc_lv<16>(): (sc_bigint<16>(tmp240_reg_9521.read()) + sc_bigint<16>(tmp239_reg_8558.read()));
}

void matrix_conv::thread_tmp241_fu_3401_p2() {
    tmp241_fu_3401_p2 = (!grp_fu_5375_p3.read().is_01() || !tmp242_reg_8563.read().is_01())? sc_lv<16>(): (sc_bigint<16>(grp_fu_5375_p3.read()) + sc_bigint<16>(tmp242_reg_8563.read()));
}

void matrix_conv::thread_tmp245_fu_3930_p2() {
    tmp245_fu_3930_p2 = (!tmp247_reg_9531.read().is_01() || !tmp246_reg_8597.read().is_01())? sc_lv<16>(): (sc_bigint<16>(tmp247_reg_9531.read()) + sc_bigint<16>(tmp246_reg_8597.read()));
}

void matrix_conv::thread_tmp248_fu_3405_p2() {
    tmp248_fu_3405_p2 = (!grp_fu_5392_p3.read().is_01() || !grp_fu_5386_p3.read().is_01())? sc_lv<16>(): (sc_bigint<16>(grp_fu_5392_p3.read()) + sc_bigint<16>(grp_fu_5386_p3.read()));
}

void matrix_conv::thread_tmp24_fu_3045_p2() {
    tmp24_fu_3045_p2 = (!grp_fu_5164_p3.read().is_01() || !grp_fu_5158_p3.read().is_01())? sc_lv<16>(): (sc_bigint<16>(grp_fu_5164_p3.read()) + sc_bigint<16>(grp_fu_5158_p3.read()));
}

void matrix_conv::thread_tmp252_fu_4237_p2() {
    tmp252_fu_4237_p2 = (!tmp254_reg_10215.read().is_01() || !tmp253_reg_9552.read().is_01())? sc_lv<16>(): (sc_bigint<16>(tmp254_reg_10215.read()) + sc_bigint<16>(tmp253_reg_9552.read()));
}

void matrix_conv::thread_tmp255_fu_3940_p2() {
    tmp255_fu_3940_p2 = (!grp_fu_5856_p3.read().is_01() || !tmp256_reg_9557.read().is_01())? sc_lv<16>(): (sc_bigint<16>(grp_fu_5856_p3.read()) + sc_bigint<16>(tmp256_reg_9557.read()));
}

void matrix_conv::thread_tmp259_fu_4247_p2() {
    tmp259_fu_4247_p2 = (!tmp261_reg_10225.read().is_01() || !tmp260_reg_9591.read().is_01())? sc_lv<16>(): (sc_bigint<16>(tmp261_reg_10225.read()) + sc_bigint<16>(tmp260_reg_9591.read()));
}

void matrix_conv::thread_tmp262_fu_3944_p2() {
    tmp262_fu_3944_p2 = (!grp_fu_5873_p3.read().is_01() || !grp_fu_5867_p3.read().is_01())? sc_lv<16>(): (sc_bigint<16>(grp_fu_5873_p3.read()) + sc_bigint<16>(grp_fu_5867_p3.read()));
}

void matrix_conv::thread_tmp266_fu_4465_p2() {
    tmp266_fu_4465_p2 = (!tmp268_reg_10557.read().is_01() || !tmp267_reg_10240.read().is_01())? sc_lv<16>(): (sc_bigint<16>(tmp268_reg_10557.read()) + sc_bigint<16>(tmp267_reg_10240.read()));
}

void matrix_conv::thread_tmp269_fu_4257_p2() {
    tmp269_fu_4257_p2 = (!grp_fu_6247_p3.read().is_01() || !tmp270_reg_10245.read().is_01())? sc_lv<16>(): (sc_bigint<16>(grp_fu_6247_p3.read()) + sc_bigint<16>(tmp270_reg_10245.read()));
}

void matrix_conv::thread_tmp273_fu_4475_p2() {
    tmp273_fu_4475_p2 = (!tmp275_reg_10567.read().is_01() || !tmp274_reg_10276.read().is_01())? sc_lv<16>(): (sc_bigint<16>(tmp275_reg_10567.read()) + sc_bigint<16>(tmp274_reg_10276.read()));
}

void matrix_conv::thread_tmp276_fu_4261_p2() {
    tmp276_fu_4261_p2 = (!grp_fu_6264_p3.read().is_01() || !grp_fu_6258_p3.read().is_01())? sc_lv<16>(): (sc_bigint<16>(grp_fu_6264_p3.read()) + sc_bigint<16>(grp_fu_6258_p3.read()));
}

void matrix_conv::thread_tmp280_fu_3457_p2() {
    tmp280_fu_3457_p2 = (!tmp282_reg_8637.read().is_01() || !tmp281_reg_8632.read().is_01())? sc_lv<16>(): (sc_bigint<16>(tmp282_reg_8637.read()) + sc_bigint<16>(tmp281_reg_8632.read()));
}

void matrix_conv::thread_tmp283_fu_3461_p2() {
    tmp283_fu_3461_p2 = (!tmp285_reg_8642.read().is_01() || !tmp284_reg_7610.read().is_01())? sc_lv<16>(): (sc_bigint<16>(tmp285_reg_8642.read()) + sc_bigint<16>(tmp284_reg_7610.read()));
}

void matrix_conv::thread_tmp287_fu_3472_p2() {
    tmp287_fu_3472_p2 = (!tmp289_reg_8719.read().is_01() || !tmp288_reg_8714.read().is_01())? sc_lv<16>(): (sc_bigint<16>(tmp289_reg_8719.read()) + sc_bigint<16>(tmp288_reg_8714.read()));
}

void matrix_conv::thread_tmp28_fu_4125_p2() {
    tmp28_fu_4125_p2 = (!tmp30_reg_9946.read().is_01() || !tmp29_reg_9100.read().is_01())? sc_lv<16>(): (sc_bigint<16>(tmp30_reg_9946.read()) + sc_bigint<16>(tmp29_reg_9100.read()));
}

void matrix_conv::thread_tmp290_fu_3476_p2() {
    tmp290_fu_3476_p2 = (!tmp292_reg_8729.read().is_01() || !tmp291_reg_8724.read().is_01())? sc_lv<16>(): (sc_bigint<16>(tmp292_reg_8729.read()) + sc_bigint<16>(tmp291_reg_8724.read()));
}

void matrix_conv::thread_tmp294_fu_3976_p2() {
    tmp294_fu_3976_p2 = (!tmp296_reg_9626.read().is_01() || !tmp295_reg_8792.read().is_01())? sc_lv<16>(): (sc_bigint<16>(tmp296_reg_9626.read()) + sc_bigint<16>(tmp295_reg_8792.read()));
}

void matrix_conv::thread_tmp297_fu_3487_p2() {
    tmp297_fu_3487_p2 = (!grp_fu_5432_p3.read().is_01() || !tmp298_reg_8797.read().is_01())? sc_lv<16>(): (sc_bigint<16>(grp_fu_5432_p3.read()) + sc_bigint<16>(tmp298_reg_8797.read()));
}

void matrix_conv::thread_tmp301_fu_3986_p2() {
    tmp301_fu_3986_p2 = (!tmp303_reg_9636.read().is_01() || !tmp302_reg_8831.read().is_01())? sc_lv<16>(): (sc_bigint<16>(tmp303_reg_9636.read()) + sc_bigint<16>(tmp302_reg_8831.read()));
}

void matrix_conv::thread_tmp304_fu_3491_p2() {
    tmp304_fu_3491_p2 = (!grp_fu_5449_p3.read().is_01() || !grp_fu_5443_p3.read().is_01())? sc_lv<16>(): (sc_bigint<16>(grp_fu_5449_p3.read()) + sc_bigint<16>(grp_fu_5443_p3.read()));
}

void matrix_conv::thread_tmp308_fu_4265_p2() {
    tmp308_fu_4265_p2 = (!tmp310_reg_10281.read().is_01() || !tmp309_reg_9658.read().is_01())? sc_lv<16>(): (sc_bigint<16>(tmp310_reg_10281.read()) + sc_bigint<16>(tmp309_reg_9658.read()));
}

void matrix_conv::thread_tmp311_fu_3996_p2() {
    tmp311_fu_3996_p2 = (!grp_fu_5913_p3.read().is_01() || !tmp312_reg_9663.read().is_01())? sc_lv<16>(): (sc_bigint<16>(grp_fu_5913_p3.read()) + sc_bigint<16>(tmp312_reg_9663.read()));
}

void matrix_conv::thread_tmp315_fu_4275_p2() {
    tmp315_fu_4275_p2 = (!tmp317_reg_10291.read().is_01() || !tmp316_reg_9697.read().is_01())? sc_lv<16>(): (sc_bigint<16>(tmp317_reg_10291.read()) + sc_bigint<16>(tmp316_reg_9697.read()));
}

void matrix_conv::thread_tmp318_fu_4000_p2() {
    tmp318_fu_4000_p2 = (!grp_fu_5930_p3.read().is_01() || !grp_fu_5924_p3.read().is_01())? sc_lv<16>(): (sc_bigint<16>(grp_fu_5930_p3.read()) + sc_bigint<16>(grp_fu_5924_p3.read()));
}

void matrix_conv::thread_tmp31_fu_3700_p2() {
    tmp31_fu_3700_p2 = (!grp_fu_5628_p3.read().is_01() || !tmp32_reg_9105.read().is_01())? sc_lv<16>(): (sc_bigint<16>(grp_fu_5628_p3.read()) + sc_bigint<16>(tmp32_reg_9105.read()));
}

void matrix_conv::thread_tmp322_fu_4485_p2() {
    tmp322_fu_4485_p2 = (!tmp324_reg_10577.read().is_01() || !tmp323_reg_10311.read().is_01())? sc_lv<16>(): (sc_bigint<16>(tmp324_reg_10577.read()) + sc_bigint<16>(tmp323_reg_10311.read()));
}

void matrix_conv::thread_tmp325_fu_4285_p2() {
    tmp325_fu_4285_p2 = (!grp_fu_6281_p3.read().is_01() || !tmp326_reg_10316.read().is_01())? sc_lv<16>(): (sc_bigint<16>(grp_fu_6281_p3.read()) + sc_bigint<16>(tmp326_reg_10316.read()));
}

void matrix_conv::thread_tmp329_fu_4495_p2() {
    tmp329_fu_4495_p2 = (!tmp331_reg_10587.read().is_01() || !tmp330_reg_10347.read().is_01())? sc_lv<16>(): (sc_bigint<16>(tmp331_reg_10587.read()) + sc_bigint<16>(tmp330_reg_10347.read()));
}

void matrix_conv::thread_tmp332_fu_4289_p2() {
    tmp332_fu_4289_p2 = (!grp_fu_6298_p3.read().is_01() || !grp_fu_6292_p3.read().is_01())? sc_lv<16>(): (sc_bigint<16>(grp_fu_6298_p3.read()) + sc_bigint<16>(grp_fu_6292_p3.read()));
}

void matrix_conv::thread_tmp336_fu_4293_p2() {
    tmp336_fu_4293_p2 = (!tmp338_reg_8871.read().is_01() || !tmp337_reg_8866.read().is_01())? sc_lv<16>(): (sc_bigint<16>(tmp338_reg_8871.read()) + sc_bigint<16>(tmp337_reg_8866.read()));
}

void matrix_conv::thread_tmp339_fu_4297_p2() {
    tmp339_fu_4297_p2 = (!tmp341_reg_10352.read().is_01() || !tmp340_reg_8876.read().is_01())? sc_lv<16>(): (sc_bigint<16>(tmp341_reg_10352.read()) + sc_bigint<16>(tmp340_reg_8876.read()));
}

void matrix_conv::thread_tmp343_fu_3543_p2() {
    tmp343_fu_3543_p2 = (!tmp345_reg_8891.read().is_01() || !tmp344_reg_8886.read().is_01())? sc_lv<16>(): (sc_bigint<16>(tmp345_reg_8891.read()) + sc_bigint<16>(tmp344_reg_8886.read()));
}

void matrix_conv::thread_tmp346_fu_3547_p2() {
    tmp346_fu_3547_p2 = (!tmp348_reg_8901.read().is_01() || !tmp347_reg_8896.read().is_01())? sc_lv<16>(): (sc_bigint<16>(tmp348_reg_8901.read()) + sc_bigint<16>(tmp347_reg_8896.read()));
}

void matrix_conv::thread_tmp350_fu_3558_p2() {
    tmp350_fu_3558_p2 = (!grp_fu_5484_p3.read().is_01() || !tmp351_reg_8911.read().is_01())? sc_lv<16>(): (sc_bigint<16>(grp_fu_5484_p3.read()) + sc_bigint<16>(tmp351_reg_8911.read()));
}

void matrix_conv::thread_tmp353_fu_3562_p2() {
    tmp353_fu_3562_p2 = (!tmp355_reg_8921.read().is_01() || !tmp354_reg_8916.read().is_01())? sc_lv<16>(): (sc_bigint<16>(tmp355_reg_8921.read()) + sc_bigint<16>(tmp354_reg_8916.read()));
}

void matrix_conv::thread_tmp357_fu_4036_p2() {
    tmp357_fu_4036_p2 = (!tmp359_reg_9747.read().is_01() || !tmp358_reg_9742.read().is_01())? sc_lv<16>(): (sc_bigint<16>(tmp359_reg_9747.read()) + sc_bigint<16>(tmp358_reg_9742.read()));
}

void matrix_conv::thread_tmp35_fu_4135_p2() {
    tmp35_fu_4135_p2 = (!tmp37_reg_9956.read().is_01() || !tmp36_reg_9151.read().is_01())? sc_lv<16>(): (sc_bigint<16>(tmp37_reg_9956.read()) + sc_bigint<16>(tmp36_reg_9151.read()));
}

void matrix_conv::thread_tmp360_fu_3572_p2() {
    tmp360_fu_3572_p2 = (!grp_fu_5506_p3.read().is_01() || !grp_fu_5500_p3.read().is_01())? sc_lv<16>(): (sc_bigint<16>(grp_fu_5506_p3.read()) + sc_bigint<16>(grp_fu_5500_p3.read()));
}

void matrix_conv::thread_tmp364_fu_4046_p2() {
    tmp364_fu_4046_p2 = (!grp_fu_5971_p3.read().is_01() || !tmp365_reg_9762.read().is_01())? sc_lv<16>(): (sc_bigint<16>(grp_fu_5971_p3.read()) + sc_bigint<16>(tmp365_reg_9762.read()));
}

void matrix_conv::thread_tmp367_fu_4050_p2() {
    tmp367_fu_4050_p2 = (!tmp369_reg_9772.read().is_01() || !tmp368_reg_9767.read().is_01())? sc_lv<16>(): (sc_bigint<16>(tmp369_reg_9772.read()) + sc_bigint<16>(tmp368_reg_9767.read()));
}

void matrix_conv::thread_tmp371_fu_4308_p2() {
    tmp371_fu_4308_p2 = (!tmp373_reg_10362.read().is_01() || !tmp372_reg_9794.read().is_01())? sc_lv<16>(): (sc_bigint<16>(tmp373_reg_10362.read()) + sc_bigint<16>(tmp372_reg_9794.read()));
}

void matrix_conv::thread_tmp374_fu_4060_p2() {
    tmp374_fu_4060_p2 = (!grp_fu_5988_p3.read().is_01() || !grp_fu_5982_p3.read().is_01())? sc_lv<16>(): (sc_bigint<16>(grp_fu_5988_p3.read()) + sc_bigint<16>(grp_fu_5982_p3.read()));
}

void matrix_conv::thread_tmp378_fu_4317_p2() {
    tmp378_fu_4317_p2 = (!grp_fu_6310_p3.read().is_01() || !tmp379_reg_10377.read().is_01())? sc_lv<16>(): (sc_bigint<16>(grp_fu_6310_p3.read()) + sc_bigint<16>(tmp379_reg_10377.read()));
}

void matrix_conv::thread_tmp381_fu_4321_p2() {
    tmp381_fu_4321_p2 = (!tmp383_reg_10387.read().is_01() || !tmp382_reg_10382.read().is_01())? sc_lv<16>(): (sc_bigint<16>(tmp383_reg_10387.read()) + sc_bigint<16>(tmp382_reg_10382.read()));
}

void matrix_conv::thread_tmp385_fu_4505_p2() {
    tmp385_fu_4505_p2 = (!tmp387_reg_10607.read().is_01() || !tmp386_reg_10407.read().is_01())? sc_lv<16>(): (sc_bigint<16>(tmp387_reg_10607.read()) + sc_bigint<16>(tmp386_reg_10407.read()));
}

void matrix_conv::thread_tmp388_fu_4331_p2() {
    tmp388_fu_4331_p2 = (!grp_fu_6327_p3.read().is_01() || !grp_fu_6321_p3.read().is_01())? sc_lv<16>(): (sc_bigint<16>(grp_fu_6327_p3.read()) + sc_bigint<16>(grp_fu_6321_p3.read()));
}

void matrix_conv::thread_tmp38_fu_3704_p2() {
    tmp38_fu_3704_p2 = (!grp_fu_5645_p3.read().is_01() || !grp_fu_5639_p3.read().is_01())? sc_lv<16>(): (sc_bigint<16>(grp_fu_5645_p3.read()) + sc_bigint<16>(grp_fu_5639_p3.read()));
}

void matrix_conv::thread_tmp392_fu_4335_p2() {
    tmp392_fu_4335_p2 = (!tmp394_reg_10417.read().is_01() || !tmp393_reg_9845.read().is_01())? sc_lv<16>(): (sc_bigint<16>(tmp394_reg_10417.read()) + sc_bigint<16>(tmp393_reg_9845.read()));
}

void matrix_conv::thread_tmp395_fu_4339_p2() {
    tmp395_fu_4339_p2 = (!tmp397_reg_10422.read().is_01() || !tmp396_reg_9850.read().is_01())? sc_lv<16>(): (sc_bigint<16>(tmp397_reg_10422.read()) + sc_bigint<16>(tmp396_reg_9850.read()));
}

void matrix_conv::thread_tmp399_fu_4087_p2() {
    tmp399_fu_4087_p2 = (!tmp401_reg_9865.read().is_01() || !tmp400_reg_9860.read().is_01())? sc_lv<16>(): (sc_bigint<16>(tmp401_reg_9865.read()) + sc_bigint<16>(tmp400_reg_9860.read()));
}

void matrix_conv::thread_tmp3_fu_3015_p2() {
    tmp3_fu_3015_p2 = (!tmp5_reg_8004.read().is_01() || !tmp4_reg_7185.read().is_01())? sc_lv<16>(): (sc_bigint<16>(tmp5_reg_8004.read()) + sc_bigint<16>(tmp4_reg_7185.read()));
}

void matrix_conv::thread_tmp402_fu_3624_p2() {
    tmp402_fu_3624_p2 = (!grp_fu_5583_p3.read().is_01() || !grp_fu_5577_p3.read().is_01())? sc_lv<16>(): (sc_bigint<16>(grp_fu_5583_p3.read()) + sc_bigint<16>(grp_fu_5577_p3.read()));
}

void matrix_conv::thread_tmp406_fu_4097_p2() {
    tmp406_fu_4097_p2 = (!tmp408_reg_9880.read().is_01() || !tmp407_reg_9875.read().is_01())? sc_lv<16>(): (sc_bigint<16>(tmp408_reg_9880.read()) + sc_bigint<16>(tmp407_reg_9875.read()));
}

void matrix_conv::thread_tmp409_fu_3628_p2() {
    tmp409_fu_3628_p2 = (!grp_fu_5611_p3.read().is_01() || !grp_fu_5605_p3.read().is_01())? sc_lv<16>(): (sc_bigint<16>(grp_fu_5611_p3.read()) + sc_bigint<16>(grp_fu_5605_p3.read()));
}

void matrix_conv::thread_tmp413_fu_4350_p2() {
    tmp413_fu_4350_p2 = (!tmp415_reg_10432.read().is_01() || !tmp414_reg_10427.read().is_01())? sc_lv<16>(): (sc_bigint<16>(tmp415_reg_10432.read()) + sc_bigint<16>(tmp414_reg_10427.read()));
}

void matrix_conv::thread_tmp416_fu_4107_p2() {
    tmp416_fu_4107_p2 = (!grp_fu_6056_p3.read().is_01() || !grp_fu_6050_p3.read().is_01())? sc_lv<16>(): (sc_bigint<16>(grp_fu_6056_p3.read()) + sc_bigint<16>(grp_fu_6050_p3.read()));
}

void matrix_conv::thread_tmp420_fu_4360_p2() {
    tmp420_fu_4360_p2 = (!tmp422_reg_10447.read().is_01() || !tmp421_reg_10442.read().is_01())? sc_lv<16>(): (sc_bigint<16>(tmp422_reg_10447.read()) + sc_bigint<16>(tmp421_reg_10442.read()));
}

void matrix_conv::thread_tmp423_fu_4111_p2() {
    tmp423_fu_4111_p2 = (!grp_fu_6084_p3.read().is_01() || !grp_fu_6078_p3.read().is_01())? sc_lv<16>(): (sc_bigint<16>(grp_fu_6084_p3.read()) + sc_bigint<16>(grp_fu_6078_p3.read()));
}

void matrix_conv::thread_tmp427_fu_4514_p2() {
    tmp427_fu_4514_p2 = (!tmp429_reg_10462.read().is_01() || !tmp428_reg_10457.read().is_01())? sc_lv<16>(): (sc_bigint<16>(tmp429_reg_10462.read()) + sc_bigint<16>(tmp428_reg_10457.read()));
}

void matrix_conv::thread_tmp42_fu_4385_p2() {
    tmp42_fu_4385_p2 = (!tmp44_reg_10477.read().is_01() || !tmp43_reg_9971.read().is_01())? sc_lv<16>(): (sc_bigint<16>(tmp44_reg_10477.read()) + sc_bigint<16>(tmp43_reg_9971.read()));
}

void matrix_conv::thread_tmp430_fu_4369_p2() {
    tmp430_fu_4369_p2 = (!grp_fu_6339_p3.read().is_01() || !grp_fu_6333_p3.read().is_01())? sc_lv<16>(): (sc_bigint<16>(grp_fu_6339_p3.read()) + sc_bigint<16>(grp_fu_6333_p3.read()));
}

void matrix_conv::thread_tmp434_fu_4524_p2() {
    tmp434_fu_4524_p2 = (!tmp436_reg_10632.read().is_01() || !tmp435_reg_10627.read().is_01())? sc_lv<16>(): (sc_bigint<16>(tmp436_reg_10632.read()) + sc_bigint<16>(tmp435_reg_10627.read()));
}

void matrix_conv::thread_tmp437_fu_4373_p2() {
    tmp437_fu_4373_p2 = (!grp_fu_6367_p3.read().is_01() || !grp_fu_6361_p3.read().is_01())? sc_lv<16>(): (sc_bigint<16>(grp_fu_6367_p3.read()) + sc_bigint<16>(grp_fu_6361_p3.read()));
}

void matrix_conv::thread_tmp441_fu_4533_p2() {
    tmp441_fu_4533_p2 = (!tmp443_reg_10647.read().is_01() || !tmp442_reg_10642.read().is_01())? sc_lv<16>(): (sc_bigint<16>(tmp443_reg_10647.read()) + sc_bigint<16>(tmp442_reg_10642.read()));
}

void matrix_conv::thread_tmp444_fu_4381_p2() {
    tmp444_fu_4381_p2 = (!grp_fu_6395_p3.read().is_01() || !grp_fu_6389_p3.read().is_01())? sc_lv<16>(): (sc_bigint<16>(grp_fu_6395_p3.read()) + sc_bigint<16>(grp_fu_6389_p3.read()));
}

void matrix_conv::thread_tmp45_fu_4145_p2() {
    tmp45_fu_4145_p2 = (!grp_fu_6111_p3.read().is_01() || !tmp46_reg_9976.read().is_01())? sc_lv<16>(): (sc_bigint<16>(grp_fu_6111_p3.read()) + sc_bigint<16>(tmp46_reg_9976.read()));
}

void matrix_conv::thread_tmp49_fu_4395_p2() {
    tmp49_fu_4395_p2 = (!tmp51_reg_10487.read().is_01() || !tmp50_reg_10012.read().is_01())? sc_lv<16>(): (sc_bigint<16>(tmp51_reg_10487.read()) + sc_bigint<16>(tmp50_reg_10012.read()));
}

void matrix_conv::thread_tmp52_fu_4149_p2() {
    tmp52_fu_4149_p2 = (!grp_fu_6128_p3.read().is_01() || !grp_fu_6122_p3.read().is_01())? sc_lv<16>(): (sc_bigint<16>(grp_fu_6128_p3.read()) + sc_bigint<16>(grp_fu_6122_p3.read()));
}

void matrix_conv::thread_tmp56_fu_3113_p2() {
    tmp56_fu_3113_p2 = (!tmp58_reg_8156.read().is_01() || !tmp57_reg_8151.read().is_01())? sc_lv<16>(): (sc_bigint<16>(tmp58_reg_8156.read()) + sc_bigint<16>(tmp57_reg_8151.read()));
}

void matrix_conv::thread_tmp59_fu_3117_p2() {
    tmp59_fu_3117_p2 = (!tmp61_reg_8161.read().is_01() || !tmp60_reg_7293.read().is_01())? sc_lv<16>(): (sc_bigint<16>(tmp61_reg_8161.read()) + sc_bigint<16>(tmp60_reg_7293.read()));
}

void matrix_conv::thread_tmp63_fu_3128_p2() {
    tmp63_fu_3128_p2 = (!tmp65_reg_8171.read().is_01() || !tmp64_reg_8166.read().is_01())? sc_lv<16>(): (sc_bigint<16>(tmp65_reg_8171.read()) + sc_bigint<16>(tmp64_reg_8166.read()));
}

void matrix_conv::thread_tmp66_fu_3132_p2() {
    tmp66_fu_3132_p2 = (!tmp68_reg_8181.read().is_01() || !tmp67_reg_8176.read().is_01())? sc_lv<16>(): (sc_bigint<16>(tmp68_reg_8181.read()) + sc_bigint<16>(tmp67_reg_8176.read()));
}

void matrix_conv::thread_tmp70_fu_3752_p2() {
    tmp70_fu_3752_p2 = (!tmp72_reg_9206.read().is_01() || !tmp71_reg_8197.read().is_01())? sc_lv<16>(): (sc_bigint<16>(tmp72_reg_9206.read()) + sc_bigint<16>(tmp71_reg_8197.read()));
}

void matrix_conv::thread_tmp73_fu_3143_p2() {
    tmp73_fu_3143_p2 = (!grp_fu_5204_p3.read().is_01() || !tmp74_reg_8202.read().is_01())? sc_lv<16>(): (sc_bigint<16>(grp_fu_5204_p3.read()) + sc_bigint<16>(tmp74_reg_8202.read()));
}

void matrix_conv::thread_tmp77_fu_3762_p2() {
    tmp77_fu_3762_p2 = (!tmp79_reg_9216.read().is_01() || !tmp78_reg_8236.read().is_01())? sc_lv<16>(): (sc_bigint<16>(tmp79_reg_9216.read()) + sc_bigint<16>(tmp78_reg_8236.read()));
}

void matrix_conv::thread_tmp7_fu_3026_p2() {
    tmp7_fu_3026_p2 = (!tmp9_reg_8014.read().is_01() || !tmp8_reg_8009.read().is_01())? sc_lv<16>(): (sc_bigint<16>(tmp9_reg_8014.read()) + sc_bigint<16>(tmp8_reg_8009.read()));
}

void matrix_conv::thread_tmp80_fu_3147_p2() {
    tmp80_fu_3147_p2 = (!grp_fu_5221_p3.read().is_01() || !grp_fu_5215_p3.read().is_01())? sc_lv<16>(): (sc_bigint<16>(grp_fu_5221_p3.read()) + sc_bigint<16>(grp_fu_5215_p3.read()));
}

void matrix_conv::thread_tmp84_fu_4153_p2() {
    tmp84_fu_4153_p2 = (!tmp86_reg_10017.read().is_01() || !tmp85_reg_9237.read().is_01())? sc_lv<16>(): (sc_bigint<16>(tmp86_reg_10017.read()) + sc_bigint<16>(tmp85_reg_9237.read()));
}

void matrix_conv::thread_tmp87_fu_3772_p2() {
    tmp87_fu_3772_p2 = (!grp_fu_5685_p3.read().is_01() || !tmp88_reg_9242.read().is_01())? sc_lv<16>(): (sc_bigint<16>(grp_fu_5685_p3.read()) + sc_bigint<16>(tmp88_reg_9242.read()));
}

void matrix_conv::thread_tmp91_fu_4163_p2() {
    tmp91_fu_4163_p2 = (!tmp93_reg_10027.read().is_01() || !tmp92_reg_9276.read().is_01())? sc_lv<16>(): (sc_bigint<16>(tmp93_reg_10027.read()) + sc_bigint<16>(tmp92_reg_9276.read()));
}

void matrix_conv::thread_tmp94_fu_3776_p2() {
    tmp94_fu_3776_p2 = (!grp_fu_5702_p3.read().is_01() || !grp_fu_5696_p3.read().is_01())? sc_lv<16>(): (sc_bigint<16>(grp_fu_5702_p3.read()) + sc_bigint<16>(grp_fu_5696_p3.read()));
}

void matrix_conv::thread_tmp98_fu_4405_p2() {
    tmp98_fu_4405_p2 = (!tmp100_reg_10497.read().is_01() || !tmp99_reg_10042.read().is_01())? sc_lv<16>(): (sc_bigint<16>(tmp100_reg_10497.read()) + sc_bigint<16>(tmp99_reg_10042.read()));
}

void matrix_conv::thread_tmp_0_0_0_1_fu_1850_p1() {
    tmp_0_0_0_1_fu_1850_p1 = esl_sext<16,8>(a_0_q1.read());
}

void matrix_conv::thread_tmp_0_0_0_2_fu_2072_p1() {
    tmp_0_0_0_2_fu_2072_p1 = esl_sext<16,8>(a_0_q0.read());
}

void matrix_conv::thread_tmp_0_0_1_1_fu_1858_p1() {
    tmp_0_0_1_1_fu_1858_p1 = esl_sext<16,8>(a_1_q1.read());
}

void matrix_conv::thread_tmp_0_0_1_2_fu_2085_p1() {
    tmp_0_0_1_2_fu_2085_p1 = esl_sext<16,8>(a_1_q0.read());
}

void matrix_conv::thread_tmp_0_0_1_fu_1854_p1() {
    tmp_0_0_1_fu_1854_p1 = esl_sext<16,8>(a_1_q0.read());
}

void matrix_conv::thread_tmp_0_0_2_1_fu_1876_p1() {
    tmp_0_0_2_1_fu_1876_p1 = esl_sext<16,8>(a_2_q1.read());
}

void matrix_conv::thread_tmp_0_0_2_2_fu_2093_p1() {
    tmp_0_0_2_2_fu_2093_p1 = esl_sext<16,8>(a_2_q0.read());
}

void matrix_conv::thread_tmp_0_0_2_fu_1872_p1() {
    tmp_0_0_2_fu_1872_p1 = esl_sext<16,8>(a_2_q0.read());
}

void matrix_conv::thread_tmp_0_1_0_2_fu_2101_p1() {
    tmp_0_1_0_2_fu_2101_p1 = esl_sext<16,8>(a_0_q1.read());
}

void matrix_conv::thread_tmp_0_1_1_2_fu_2116_p1() {
    tmp_0_1_1_2_fu_2116_p1 = esl_sext<16,8>(a_1_q1.read());
}

void matrix_conv::thread_tmp_0_1_2_2_fu_2125_p1() {
    tmp_0_1_2_2_fu_2125_p1 = esl_sext<16,8>(a_2_q1.read());
}

void matrix_conv::thread_tmp_0_2_0_2_fu_2579_p1() {
    tmp_0_2_0_2_fu_2579_p1 = esl_sext<16,8>(a_0_q0.read());
}

}

