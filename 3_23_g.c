// 3_23_г

#include <math.h>
#include <float.h>
#include <stdio.h>

double eReLu(double a, double x) {
    if (x < 0) {
        return a * (exp(x) - 1);
    } else {
        return 0;
    }
}

double eRuLu(double a, double x) {
    if (x >= 0) {
        return 0;
    } else {
        return a * (exp(x) - 1);
    }
}

double eReLu_derivative(double a, double x) {
    if (x < 0) {
        return a * exp(x);
    } else {
        return 0;
    }
}

double eRuLu_derivative(double a, double x) {
    if (x >= 0) {
        return 0;
    } else {
        return a * exp(x);
    }
}

int main() {
    double a = 2.0;
    double x = -1.5;
    printf("eReLu(%.2f, %.2f) = %.2f\n", a, x, eReLu(a, x));
    printf("eReLu'(%.2f, %.2f) = %.2f\n", a, x, eReLu_derivative(a, x));
    printf("eRuLu(%.2f, %.2f) = %.2f\n", a, x, eRuLu(a, x));
    printf("eRuLu'(%.2f, %.2f) = %.2f\n", a, x, eRuLu_derivative(a, x));
    return 0;
}
