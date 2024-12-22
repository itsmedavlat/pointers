#include <stdio.h>

void swap(char *x , char *y) {
    char temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
    char a, b;

    printf("Char turdagi qiymat kiriting: ");
    scanf(" %c", &a);
    printf("yana: ");
    scanf(" %c", &b);

    printf("Kiritilgan qiymatlar: %c, %c\n", a, b);
    swap(&a, &b);
    printf("O'zgargan qiymatlar: %c, %c\n", a, b);

    return 0;
}
