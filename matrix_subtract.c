#include "matrix/matrix_subtract.h"
#include <stdio.h>

void matrix_subtract(const Matrix *a, const Matrix *b, Matrix *result) {
    if (a->rows != b->rows || a->cols != b->cols) {
        fprintf(stderr, "Error: Matrix dimensions must match for subtraction.\n");
        return;
    }
    result->rows = a->rows;
    result->cols = a->cols;
    for (int i = 0; i < a->rows; i++) {
        for (int j = 0; j < a->cols; j++) {
            result->data[i][j] = a->data[i][j] - b->data[i][j];
        }
    }
}
