#include <stdio.h>

int main(void) {
    int x, y, z;

    printf("Enter phone number in the format (xxx) xxx-xxxx: ");
    scanf("(%d) %d-%d", &x, &y, &z);

    printf("You entered %d.%d.%d", x, y, z);

    return 0;
}