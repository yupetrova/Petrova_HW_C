#include <stdio.h>
#include <string.h>

int main() {
    char string1[100];
    char string2[100];
    printf("Введіть перший рядок: ");
    fgets(string1, sizeof(string1), stdin);

    printf("Введіть другий рядок: ");
    fgets(string2, sizeof(string2), stdin);

    string1[strcspn(string1, "\n")] = 0;
    string2[strcspn(string2, "\n")] = 0;
    printf("!!! %s , %s !!!\n", string1, string2);

    return 0;
}