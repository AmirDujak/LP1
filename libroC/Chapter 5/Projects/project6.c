#include <stdio.h>

int main(void) {
    int d, i1, i2, i3, i4, i5, j1, j2, j3, j4, j5, j6, sum1, sum2, total, check_digit;

    printf("Enter the 12 digits of the bar code: ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &d, &i1, &i2, &i3, &i4, &i5, &j1, &j2, &j3, &j4, &j5, &j6);

    sum1 = d + i2 + i4 + j1 + j3 + j5;
    sum2 = i1 + i3 + i5 + j2 + j4;
    total = sum1*3 + sum2;
    check_digit = 9 - ((total-1) % 10);

    if (check_digit == j6) {
        printf("Valid\n");
    } else {
        printf("Invalid\n"); 
    }

    return 0;
}