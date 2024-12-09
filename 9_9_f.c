// 9_9_ф
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int N, M, m, k;
    printf("Введіть розміри матриці (N M): ");
    scanf("%d %d", &N, &M);

    double **matrix = (double **)malloc(N * sizeof(double *));
    for (int i = 0; i < N; i++) {
        matrix[i] = (double *)malloc(M * sizeof(double));
    }

    srand(time(NULL));
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            matrix[i][j] = (double)rand() / RAND_MAX * 100.0;
        }
    }

    printf("Початкова матриця:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            printf("%.2f ", matrix[i][j]);
        }
        printf("\n");
    }

    printf("\nВведіть номер рядка (m) та кількість рядків (k) для додавання: ");
    scanf("%d %d", &m, &k);

    if (m < 0 || m >= N || k < 1) {
        printf("Некоректні значення m або k.\n");
        return 1;
    }

    matrix = (double **)realloc(matrix, (N + k) * sizeof(double *));
    for (int i = N + k - 1; i >= m + k; i--) {
        matrix[i] = matrix[i - k];
    }
    for (int i = m; i < m + k; i++) {
        matrix[i] = (double *)malloc(M * sizeof(double));
        for (int j = 0; j < M; j++) {
            matrix[i][j] = (double)rand() / RAND_MAX * 100.0;
        }
    }
    N += k;

    printf("\nОновлена матриця:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            printf("%.2f ", matrix[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < N; i++) {
        free(matrix[i]);
    }
    free(matrix);

    return 0;
}
