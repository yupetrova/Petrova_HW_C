#include <stdio.h>

double polinom(double x) {
    double x_squared = x * x;
    double x_cubed = x_squared * x;
    double x_to_the_4th = x_cubed * x;
    return x_to_the_4th + x_cubed + x_squared + x + 1;
}

int main() {
    double x;
    printf("Введіть значення x: ");
    scanf("%lf", &x);
    double result = polinom(x);
    printf("Значення многочлена: %.2f\n", result);
    return 0;
}
