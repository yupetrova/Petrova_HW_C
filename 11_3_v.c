// 11_3_в

#include <stdio.h>
#include <math.h>

int main() {
    FILE *file_f, *file_g;
    int num, i;

    file_f = fopen("file_f.txt", "w");
    if (file_f == NULL) {
        printf("Помилка при створенні файлу F.\n");
        return 1;
    }

    printf("Введіть цілі числа (0 для завершення):\n");
    while (1) {
        scanf("%d", &num);
        if (num == 0) {
            break;
        }
        fprintf(file_f, "%d\n", num);
    }
    fclose(file_f);

    file_g = fopen("file_g.txt", "w");
    if (file_g == NULL) {
        printf("Помилка при створенні файлу G.\n");
        return 1;
    }

    file_f = fopen("file_f.txt", "r");
    if (file_f == NULL) {
        printf("Помилка при відкритті файлу F.\n");
        fclose(file_g);
        return 1;
    }

    while (fscanf(file_f, "%d", &num) != EOF) {
        i = (int)sqrt(num);
        if (i * i == num) {
            fprintf(file_g, "%d\n", num);
        }
    }
    fclose(file_f);
    fclose(file_g);

    printf("Файли F та G створено успішно.\n");
    return 0;
}

