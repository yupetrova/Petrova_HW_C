// 4_27_в
//

#include <stdio.h>
#include <math.h>

double find_pi(double epsilon) {
    double term = sqrt(2.0) / 2.0;
    double pi = 2.0 / term;
    double prev_pi = 0.0;

    while (fabs(pi - prev_pi) > epsilon) {
        prev_pi = pi;
        term = sqrt(2.0 + term);
        pi = 2.0 / term;
    }

    return pi;
}

int main() {
    double epsilon = 1e-6;
    double pi = find_pi(epsilon);
    printf("Обчислене значення числа π з точністю %g: %.10f\n", epsilon, pi);
    return 0;
}
