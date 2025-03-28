#include <stdio.h>

int main(void) {
    float x;

    printf("Enter a value for x: ");
    scanf("%f", &x);

    printf("|%8.1e|%-10.6e|%8.3f|%-6.0f|", x, x, x, x);

    return 0;
}