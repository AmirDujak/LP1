#include <stdio.h>

int main(void) {
    int x, y;

    printf("Enter a number of two digits: ");
    scanf("%1d%1d", &x, &y);
    
    printf("The reverse of %1d%1d is %1d%1d\n", x, y, y, x);

    return 0;
}
