#include <stdio.h>
#include <stdbool.h>

bool checkUniqueDigits(int number) {
    int d1 = number / 100;
    int d2 = (number / 10) % 10;
    int d3 = number % 10;

    return (d1 != d2 && d1 != d3 && d2 != d3);
}

void printPermutations(int number) {
    int d1 = number / 100;
    int d2 = (number / 10) % 10;
    int d3 = number % 10;

    int permutations[6][3] = {
        {d1, d2, d3},
        {d1, d3, d2},
        {d2, d1, d3},
        {d2, d3, d1},
        {d3, d1, d2},
        {d3, d2, d1}
    };

    printf("Всі перестановки:\n");
    for (int i = 0; i < 6; i++) {
        int perm = permutations[i][0] * 100 +
                   permutations[i][1] * 10 +
                   permutations[i][2];
        printf("%d\n", perm);
    }
}

int main() {
    int number;

    do {
        printf("Введіть тризначне число (100-999): ");
        scanf("%d", &number);

        if (number < 100 || number > 999) {
            printf("Помилка: число має бути тризначним!\n");
            continue;
        }

        if (checkUniqueDigits(number)) {
            printPermutations(number);
            break;
        } else {
            printf("Помилка: цифри числа мають бути різними!\n");
        }
    } while (1);

    return 0;
}