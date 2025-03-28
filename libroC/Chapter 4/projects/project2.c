#include <stdio.h>

int main(void) {
    int x, y, z;

    printf("Enter a three digit number: ");
    scanf("%1d%1d%1d", &x, &y, &z);

    printf("The reverse of %1d%1d%1d is %1d%1d%1d", x, y, z, z, y, x);

    return 0;
}