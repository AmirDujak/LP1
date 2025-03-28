#include <stdio.h>

int main(void) {
    int num1, num2, mayor, menor, remainder;

    printf("Enter the fraction: ");
    scanf("%d/%d", &num1, &num2);

    if (num1 == 0) {
        printf("0/%d is 0 \n", num2);
        return 0;
    } else if (num2 == 0) {
        printf("%d/0 is undefined \n", num1);
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

    printf("The fraction %d/%d simplified is %d/%d \n", num1, num2, num1/mayor, num2/mayor);
    return 0;
}