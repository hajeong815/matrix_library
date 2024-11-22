#ifndef MATRIX_H
#define MATRIX_H

#define MATRIX_SIZE 3  // Example size

typedef struct {
    int rows;
    int cols;
    double data[MATRIX_SIZE][MATRIX_SIZE];
} Matrix;

void matrix_add(const Matrix *a, const Matrix *b, Matrix *result);
void matrix_multiply(const Matrix *a, const Matrix *b, Matrix *result);

#endif // MATRIX_H
