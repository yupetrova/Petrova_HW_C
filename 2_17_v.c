//
// 2_17(в)
//

#include <math.h>
#include <stdio.h>

double softSign(double x) {
    return x / (1.0 + fabs(x));
}

double result(double x) {
    double denominator = 1.0 + fabs(x);
    return 1.0 / (denominator * denominator);
}

int main() {
    double x = 2.5;
    printf("softSign(%.2f) = %.2f\n", x, softSign(x));
    printf("softSign'(%.2f) = %.2f\n", x, result(x));
    return 0;
}
