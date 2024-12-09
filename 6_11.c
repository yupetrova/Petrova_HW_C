// 6_11
//

#include <stdio.h>

void lbits_zero(unsigned int num, int k) {
    unsigned int mask = ~((1 << k) - 1);
    unsigned int result = num & mask;
    printf("Число з нульовими лівими %d бітами: %u\n", k, result);
}

void rbits_zero(unsigned int num, int k) {
    unsigned int mask = (1 << k) - 1;
    unsigned int result = num & ~mask;
    printf("Число з нульовими правими %d бітами: %u (0%o)\n", k, result, result);
}

void lbits_zero_long(unsigned long long num, int k) {
    unsigned long long mask = ~((1LL << k) - 1);
    unsigned long long result = num & mask;
    printf("Число з нульовими лівими %d бітами: %llu\n", k, result);
}

void rbits_zero_long(unsigned long long num, int k) {
    unsigned long long mask = (1LL << k) - 1;
    unsigned long long result = num & ~mask;
    printf("Число з нульовими правими %d бітами: %llu (0%llo)\n", k, result, result);
}

int main() {
    unsigned int m = 12345;
    int k = 4;
    lbits_zero(m, k);
    rbits_zero(m, k);

    unsigned long long m_long = 12345678901234LL;
    lbits_zero_long(m_long, k);
    rbits_zero_long(m_long, k);

    return 0;
}
