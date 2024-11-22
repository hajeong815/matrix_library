#ifndef MATRIX_H
#define MATRIX_H

#define MAX_MATRIX_SIZE 10

typedef struct {
    int rows;
    int cols;
    double data[MAX_MATRIX_SIZE][MAX_MATRIX_SIZE];
} Matrix;

#endif // MATRIX_H
