#include <stdio.h>

int main(void) {
    int num1, num2, mayor, menor, remainder = 1;

    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);

    if (num1 == 0) {
        printf("The GCD is %d", num2);
        return 0;
    } else if (num2 == 0) {
        printf("The GCD is %d", num1);
        return 0;
    }

    if (num1 > num2) {
        mayor = num1;
        menor = num2;
    } else {
        mayor = num2;
        menor = num1;
    }


    while (remainder != 0) {
        remainder = mayor % menor;
        mayor = menor;
        menor = remainder;
    }

    printf("The GCD is %d \n", mayor);

    return 0;
}