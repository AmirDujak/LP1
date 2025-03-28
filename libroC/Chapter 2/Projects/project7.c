#include <stdio.h>

int main(void) {
    int amount, Y, a, b, c, d;

    printf("Enter amount of USD: ");
    scanf("%d", &amount);

    a = amount/20;
    amount = amount - a*20;
    b = amount/10;
    amount = amount - b*10;
    c = amount/5;
    amount = amount - c*5;
    d = amount;

    printf("You need %d bills of 20, %d bills of 10, %d bills of 5, and %d bills of 1 \n", a, b, c, d);

    return 0;
}