#include <stdio.h>

int main(void) {
    float amount, tax = 0.05f;

    printf("Enter amount in dollars: ");
    scanf("%f", &amount);
    printf("Amount in dollars after taxes: %.2f \n", amount + amount*tax);

    return 0;
}