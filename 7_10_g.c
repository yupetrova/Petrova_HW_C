// 7_9_ж
//

#include <stdio.h>
#include <math.h>

int main() {
    int n;
    printf("Введіть кількість чисел: ");
    scanf("%d", &n);

    double a[n];
    printf("Введіть %d дійсних чисел:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%lf", &a[i]);
    }

    double min_a = a[0];
    for (int i = 1; i < n; i++) {
        if (a[i] < min_a) {
            min_a = a[i];
        }
    }

    double min_a_squared = a[0] * a[0];
    for (int i = 1; i < n; i++) {
        if (a[i] * a[i] < min_a_squared) {
            min_a_squared = a[i] * a[i];
        }
    }

    double result = pow(min_a, 2) - min_a_squared;
    printf("Результат: %.2f\n", result);

    return 0;
}
