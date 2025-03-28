#include <stdio.h>

int main(void) {
    float num, mayor = 0;

    printf("Enter a number: ");
    scanf("%f", &num);

    while (num > 0) {
        if (num > mayor) {
            mayor = num;
        }
        printf("Enter a number: ");
        scanf("%f", &num);
    }

    printf("The largest number is: %.2f \n", mayor);

    return 0;
}