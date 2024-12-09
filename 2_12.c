#include <stdio.h>
#include <math.h>

#define PI 3.14159265358979323846

double calculateConeVolume(double radius, double height) {
    return (1.0 / 3.0) * PI * pow(radius, 2) * height;
}
int validateInput(double radius, double height) {
    return (radius > 0 && height > 0);
}

int main() {
    double radius, height;

    printf("Введіть радіус основи конуса (см): ");
    scanf("%lf", &radius);

    printf("Введіть висоту конуса (см): ");
    scanf("%lf", &height);

    if (!validateInput(radius, height)) {
        printf("Помилка: радіус та висота мають бути додатними числами!\n");
        return 1;
    }

    double volume = calculateConeVolume(radius, height);

    printf("\nОб'єм конуса:\n");
    printf("Радіус основи: %.2f см\n", radius);
    printf("Висота: %.2f см\n", height);
    printf("Об'єм: %.2f куб. см\n", volume);
    printf("Об'єм (науковий формат): %e куб. см\n", volume);

    return 0;
}