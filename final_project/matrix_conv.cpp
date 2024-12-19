
#include "matrix_conv.h"

#define way2

void matrix_conv(
      mat_a_t a[INPUT_ROWS][INPUT_COLS],
      mat_b_t b[KERNEL_ROWS][KERNEL_COLS],
      result_t res[OUTPUT_ROWS][OUTPUT_COLS]) {
#ifdef way1

    outer:for (int i = 0; i < OUTPUT_ROWS; i++) {
        output:for (int j = 0; j < OUTPUT_COLS; j++) {
            result_t sum = 0;
            kernel:for (int k = 0; k < KERNEL_ROWS * KERNEL_COLS; k++) {
                sum += a[i + (k / KERNEL_COLS)][j + (k % KERNEL_COLS)] * b[k / KERNEL_COLS][k % KERNEL_COLS];
            }

            res[i][j] = sum;
        }
    }
#else
    OUTPUT_ROW: for (int i = 0; i < OUTPUT_ROWS; i++) {
             OUTPUT_COL: for (int j = 0; j < OUTPUT_COLS; j++) {
                result_t sum = 0;
                KERNEL_ROW: for (int m = 0; m < KERNEL_ROWS; m++) {
                	KERNEL_COL:for (int n = 0; n < KERNEL_COLS; n++) {
                        sum += a[i + m][j + n] * b[m][n];
                    }
                }
                res[i][j] = sum;
            }
        }
#endif
}
