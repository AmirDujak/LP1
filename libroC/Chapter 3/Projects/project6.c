#include <stdio.h>

int main(void) {
    int num1, denom1, num2, denom2, result_num, result_denom;

    printf("Enter the first and second fractions separated only by a + sign: ");
    scanf("%d/%d+%d/%d", &num1, &denom1, &num2, &denom2);

    result_num = num1 * denom2 + num2 * denom1;
    result_denom = denom1 * denom2;

    printf("The results is: %d/%d\n", result_num, result_denom);

    return 0;
}