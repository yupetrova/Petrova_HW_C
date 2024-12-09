// 8_23

#include <stdio.h>
#include <stdlib.h>

void rotate_matrix(int **matrix, int n) {
    int size = 2 * n;
    int **temp_matrix = (int **)malloc(size * sizeof(int *));
    for (int i = 0; i < size; i++) {
        temp_matrix[i] = (int *)malloc(size * sizeof(int));
    }

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            temp_matrix[j][size - 1 - i] = matrix[i][j];
        }
    }

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            matrix[i][j] = temp_matrix[i][j];
        }
    }

    for (int i = 0; i < size; i++) {
        free(temp_matrix[i]);
    }
    free(temp_matrix);
}

int main() {
    int n;
    printf("Введіть значення n: ");
    scanf("%d", &n);

    int size = 2 * n;
    int **matrix = (int **)malloc(size * sizeof(int *));
    for (int i = 0; i < size; i++) {
        matrix[i] = (int *)malloc(size * sizeof(int));
    }

    printf("Введіть елементи матриці:\n");
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    rotate_matrix(matrix, n);

    printf("Повернута матриця:\n");
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < size; i++) {
        free(matrix[i]);
    }
    free(matrix);

    return 0;
}
