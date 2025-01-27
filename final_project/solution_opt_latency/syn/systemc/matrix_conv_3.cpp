#include "matrix_conv.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void matrix_conv::thread_hdltv_gen() {
    const char* dump_tv = std::getenv("AP_WRITE_TV");
    if (!(dump_tv && string(dump_tv) == "on")) return;

    wait();

    mHdltvinHandle << "[ " << endl;
    mHdltvoutHandle << "[ " << endl;
    int ap_cycleNo = 0;
    while (1) {
        wait();
        const char* mComma = ap_cycleNo == 0 ? " " : ", " ;
        mHdltvinHandle << mComma << "{"  <<  " \"ap_rst\" :  \"" << ap_rst.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"ap_start\" :  \"" << ap_start.read() << "\" ";
        mHdltvoutHandle << mComma << "{"  <<  " \"ap_done\" :  \"" << ap_done.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"ap_idle\" :  \"" << ap_idle.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"ap_ready\" :  \"" << ap_ready.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"a_0_address0\" :  \"" << a_0_address0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"a_0_ce0\" :  \"" << a_0_ce0.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"a_0_q0\" :  \"" << a_0_q0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"a_0_address1\" :  \"" << a_0_address1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"a_0_ce1\" :  \"" << a_0_ce1.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"a_0_q1\" :  \"" << a_0_q1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"a_1_address0\" :  \"" << a_1_address0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"a_1_ce0\" :  \"" << a_1_ce0.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"a_1_q0\" :  \"" << a_1_q0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"a_1_address1\" :  \"" << a_1_address1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"a_1_ce1\" :  \"" << a_1_ce1.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"a_1_q1\" :  \"" << a_1_q1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"a_2_address0\" :  \"" << a_2_address0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"a_2_ce0\" :  \"" << a_2_ce0.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"a_2_q0\" :  \"" << a_2_q0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"a_2_address1\" :  \"" << a_2_address1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"a_2_ce1\" :  \"" << a_2_ce1.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"a_2_q1\" :  \"" << a_2_q1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"a_3_address0\" :  \"" << a_3_address0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"a_3_ce0\" :  \"" << a_3_ce0.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"a_3_q0\" :  \"" << a_3_q0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"a_3_address1\" :  \"" << a_3_address1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"a_3_ce1\" :  \"" << a_3_ce1.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"a_3_q1\" :  \"" << a_3_q1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"a_4_address0\" :  \"" << a_4_address0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"a_4_ce0\" :  \"" << a_4_ce0.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"a_4_q0\" :  \"" << a_4_q0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"a_4_address1\" :  \"" << a_4_address1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"a_4_ce1\" :  \"" << a_4_ce1.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"a_4_q1\" :  \"" << a_4_q1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"a_5_address0\" :  \"" << a_5_address0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"a_5_ce0\" :  \"" << a_5_ce0.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"a_5_q0\" :  \"" << a_5_q0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"a_5_address1\" :  \"" << a_5_address1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"a_5_ce1\" :  \"" << a_5_ce1.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"a_5_q1\" :  \"" << a_5_q1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"a_6_address0\" :  \"" << a_6_address0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"a_6_ce0\" :  \"" << a_6_ce0.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"a_6_q0\" :  \"" << a_6_q0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"a_6_address1\" :  \"" << a_6_address1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"a_6_ce1\" :  \"" << a_6_ce1.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"a_6_q1\" :  \"" << a_6_q1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"a_7_address0\" :  \"" << a_7_address0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"a_7_ce0\" :  \"" << a_7_ce0.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"a_7_q0\" :  \"" << a_7_q0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"a_7_address1\" :  \"" << a_7_address1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"a_7_ce1\" :  \"" << a_7_ce1.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"a_7_q1\" :  \"" << a_7_q1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"a_8_address0\" :  \"" << a_8_address0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"a_8_ce0\" :  \"" << a_8_ce0.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"a_8_q0\" :  \"" << a_8_q0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"a_8_address1\" :  \"" << a_8_address1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"a_8_ce1\" :  \"" << a_8_ce1.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"a_8_q1\" :  \"" << a_8_q1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"a_9_address0\" :  \"" << a_9_address0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"a_9_ce0\" :  \"" << a_9_ce0.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"a_9_q0\" :  \"" << a_9_q0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"a_9_address1\" :  \"" << a_9_address1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"a_9_ce1\" :  \"" << a_9_ce1.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"a_9_q1\" :  \"" << a_9_q1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"b_0_address0\" :  \"" << b_0_address0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"b_0_ce0\" :  \"" << b_0_ce0.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"b_0_q0\" :  \"" << b_0_q0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"b_0_address1\" :  \"" << b_0_address1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"b_0_ce1\" :  \"" << b_0_ce1.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"b_0_q1\" :  \"" << b_0_q1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"b_1_address0\" :  \"" << b_1_address0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"b_1_ce0\" :  \"" << b_1_ce0.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"b_1_q0\" :  \"" << b_1_q0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"b_1_address1\" :  \"" << b_1_address1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"b_1_ce1\" :  \"" << b_1_ce1.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"b_1_q1\" :  \"" << b_1_q1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"b_2_address0\" :  \"" << b_2_address0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"b_2_ce0\" :  \"" << b_2_ce0.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"b_2_q0\" :  \"" << b_2_q0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"b_2_address1\" :  \"" << b_2_address1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"b_2_ce1\" :  \"" << b_2_ce1.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"b_2_q1\" :  \"" << b_2_q1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"res_0_address0\" :  \"" << res_0_address0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"res_0_ce0\" :  \"" << res_0_ce0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"res_0_we0\" :  \"" << res_0_we0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"res_0_d0\" :  \"" << res_0_d0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"res_0_address1\" :  \"" << res_0_address1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"res_0_ce1\" :  \"" << res_0_ce1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"res_0_we1\" :  \"" << res_0_we1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"res_0_d1\" :  \"" << res_0_d1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"res_1_address0\" :  \"" << res_1_address0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"res_1_ce0\" :  \"" << res_1_ce0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"res_1_we0\" :  \"" << res_1_we0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"res_1_d0\" :  \"" << res_1_d0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"res_1_address1\" :  \"" << res_1_address1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"res_1_ce1\" :  \"" << res_1_ce1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"res_1_we1\" :  \"" << res_1_we1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"res_1_d1\" :  \"" << res_1_d1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"res_2_address0\" :  \"" << res_2_address0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"res_2_ce0\" :  \"" << res_2_ce0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"res_2_we0\" :  \"" << res_2_we0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"res_2_d0\" :  \"" << res_2_d0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"res_2_address1\" :  \"" << res_2_address1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"res_2_ce1\" :  \"" << res_2_ce1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"res_2_we1\" :  \"" << res_2_we1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"res_2_d1\" :  \"" << res_2_d1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"res_3_address0\" :  \"" << res_3_address0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"res_3_ce0\" :  \"" << res_3_ce0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"res_3_we0\" :  \"" << res_3_we0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"res_3_d0\" :  \"" << res_3_d0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"res_3_address1\" :  \"" << res_3_address1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"res_3_ce1\" :  \"" << res_3_ce1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"res_3_we1\" :  \"" << res_3_we1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"res_3_d1\" :  \"" << res_3_d1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"res_4_address0\" :  \"" << res_4_address0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"res_4_ce0\" :  \"" << res_4_ce0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"res_4_we0\" :  \"" << res_4_we0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"res_4_d0\" :  \"" << res_4_d0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"res_4_address1\" :  \"" << res_4_address1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"res_4_ce1\" :  \"" << res_4_ce1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"res_4_we1\" :  \"" << res_4_we1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"res_4_d1\" :  \"" << res_4_d1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"res_5_address0\" :  \"" << res_5_address0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"res_5_ce0\" :  \"" << res_5_ce0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"res_5_we0\" :  \"" << res_5_we0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"res_5_d0\" :  \"" << res_5_d0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"res_5_address1\" :  \"" << res_5_address1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"res_5_ce1\" :  \"" << res_5_ce1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"res_5_we1\" :  \"" << res_5_we1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"res_5_d1\" :  \"" << res_5_d1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"res_6_address0\" :  \"" << res_6_address0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"res_6_ce0\" :  \"" << res_6_ce0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"res_6_we0\" :  \"" << res_6_we0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"res_6_d0\" :  \"" << res_6_d0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"res_6_address1\" :  \"" << res_6_address1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"res_6_ce1\" :  \"" << res_6_ce1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"res_6_we1\" :  \"" << res_6_we1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"res_6_d1\" :  \"" << res_6_d1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"res_7_address0\" :  \"" << res_7_address0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"res_7_ce0\" :  \"" << res_7_ce0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"res_7_we0\" :  \"" << res_7_we0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"res_7_d0\" :  \"" << res_7_d0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"res_7_address1\" :  \"" << res_7_address1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"res_7_ce1\" :  \"" << res_7_ce1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"res_7_we1\" :  \"" << res_7_we1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"res_7_d1\" :  \"" << res_7_d1.read() << "\" ";
        mHdltvinHandle << "}" << std::endl;
        mHdltvoutHandle << "}" << std::endl;
        ap_cycleNo++;
    }
}

}

