#include <stdio.h>

int main(void) {
    float X;

    printf("Enter the value of X: ");
    scanf("%f", &X);
    printf("The result is: %.2f \n", 3*X*X*X*X*X + 2*X*X*X*X - 5*X*X*X - X*X + 7*X - 6);

    return 0;
}