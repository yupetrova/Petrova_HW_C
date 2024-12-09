// 6_15
//

#include <stdio.h>

int countCommonBits(unsigned int m, unsigned int n) {
    unsigned int commonBits = m & n;
    int count = 0;
    while (commonBits) {
        count += commonBits & 1;
        commonBits >>= 1;
    }
    return count;
}

int countMatchingBits(unsigned int m, unsigned int n) {
    unsigned int xor_result = m ^ n;
    int count = 0;
    while (xor_result) {
        count += !(xor_result & 1);
        xor_result >>= 1;
    }
    return 32 - count;
}

int main() {
    unsigned int m, n;
    printf("Введіть два 32-бітних натуральних числа: ");
    scanf("%x %x", &m, &n);

    int commonBits = countCommonBits(m, n);
    int matchingBits = countMatchingBits(m, n);

    printf("Кількість спільних одиничних бітів: %d\n", commonBits);
    printf("Кількість співпадаючих бітів: %d\n", matchingBits);

    return 0;
}
