// 9_9_г
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int N, M;
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

    M++;
    matrix = (double **)realloc(matrix, N * sizeof(double *));
    for (int i = 0; i < N; i++) {
        matrix[i] = (double *)realloc(matrix[i], M * sizeof(double));
        matrix[i][M - 1] = (double)rand() / RAND_MAX * 100.0; // Заповнення нового стовпця випадковими числами
    }

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
