//
// 5_11_в
//

#include <stdio.h>

double calculate_a(int k) {
    if (k <= 2) {
        return 1.0;
    } else {
        double a_prev = calculate_a(k - 1);
        return a_prev + a_prev / (1 << k);
    }
}

double find_sum(int n) {
    double sum = 0.0;
    for (int k = 1; k <= n; k++) {
        double factorial = 1.0;
        for (int i = 1; i <= k; i++) {
            factorial *= i;
        }
        sum += factorial / calculate_a(k);
    }
    return sum;
}

int main() {
    int n = 10;
    double result = find_sum(n);
    printf("Сума S_%d = %.6f\n", n, result);
    return 0;
}
