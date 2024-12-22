#include <stdio.h>

float add_numbers(float num1, float num2) {
    float result = num1 + num2;

    return result;  
}

int main() {
    float num1, num2;
    
    printf("Ikkita haqiqiy son kiriting: ");
    scanf("%f", &num1);
    scanf("%f", &num2);

    printf("%.2f\n", add_numbers(num1, num2)); 

    return 0;
}
