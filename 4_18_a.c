// 4_18_а

#include <stdio.h>

double calculate_sequence_element(double x, int k) {
    double result = 1.0;
    for (int i = 1; i <= k; i++) {
        result *= x;
        result /= i;
    }
    return result;
}

int main() {
    double x = 2.0;
    for (int k = 1; k <= 10; k++) {
        double element = calculate_sequence_element(x, k);
        printf("x_%d = %.4f\n", k, element);
    }
    return 0;
}
