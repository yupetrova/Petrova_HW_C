#include <stdio.h>
#include <math.h>

double calculateDistance(double acceleration, double time) {
    return 0.5 * acceleration * pow(time, 2);
}

double calculateTimeToVelocity(double acceleration, double velocity) {
    return velocity / acceleration;
}

int main() {
    double acceleration, time, velocity;
    printf("Введіть прискорення (a) в м/с²: ");
    scanf("%lf", &acceleration);
    printf("Введіть час руху (t) в секундах: ");
    scanf("%lf", &time);
    printf("Введіть кінцеву швидкість (v) в м/с: ");
    scanf("%lf", &velocity);

    double distance = calculateDistance(acceleration, time);
    double timeToVelocity = calculateTimeToVelocity(acceleration, velocity);

    printf("\nРезультати:\n");
    printf("Відстань, пройдена за час t = %.2f с: %.2f м\n", time, distance);
    printf("Час досягнення швидкості %.2f м/с: %.2f с\n", velocity, timeToVelocity);

    return 0;
}