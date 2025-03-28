#include <stdio.h>

int main(void) {
    float X;

    printf("Enter X: ");
    scanf("%f", &X);

    printf("The result is: %.2f \n", ((((3*X + 2)*X - 5)*X - 1)*X + 7)*X - 6);

    return 0;
}