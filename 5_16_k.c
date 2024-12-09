// 5_16_к
//

#include <stdio.h>
#include <math.h>

double calculate_term(double x, int k) {
    double numerator = 1.0;
    double denominator = 1.0;
    for (int i = 1; i <= k; i++) {
        numerator *= (2 * i - 1);
        denominator *= 2 * i;
    }
    return pow(x, k) * numerator / denominator;
}

double find_sum(double x, double epsilon) {
    double sum = 1.0;
    double term = x / 2.0;
    int k = 1;

    while (fabs(term) >= epsilon) {
        sum += term;
        k++;
        term = -term * x / (2 * k);
    }

    return sum;
}

int main() {
    double x = 0.5;
    double epsilon = 1e-6;
    double result = sqrt(1.0 + x);
    double approx_result = find_sum(x, epsilon);
    printf("Точне значення y = sqrt(1 + %.2f) = %.6f\n", x, result);
    printf("Наближене значення y = %.6f\n", approx_result);
    return 0;
}

