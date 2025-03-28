#include <stdio.h>

int main(void) {
    int x, y;

    printf("Enter the time in a 24-hour format: ");
    scanf("%d:%d", &x, &y);

    printf("The time is ");
    switch (x) {
        default: 
            printf("%d:%.2d AM\n", x, y);
            break;
        case 12: 
            printf("%d:%.2d PM\n", x, y);
            break;
        case 13: 
            printf("%d:%.2d PM\n", x-12, y);
            break;
        case 14: 
            printf("%d:%.2d PM\n", x-12, y);
            break;
        case 15: 
            printf("%d:%.2d PM\n", x-12, y);
            break;
        case 16: 
            printf("%d:%.2d PM\n", x-12, y);
            break;
        case 17: 
            printf("%d:%.2d PM\n", x-12, y);
            break;
        case 18: 
            printf("%d:%.2d PM\n", x-12, y);
            break;
        case 19: 
            printf("%d:%.2d PM\n", x-12, y);
            break;
        case 20: 
            printf("%d:%.2d PM\n", x-12, y);
            break;
        case 21: 
            printf("%d:%.2d PM\n", x-12, y);
            break;
        case 22: 
            printf("%d:%.2d PM\n", x-12, y);
            break;
        case 23: 
            printf("%d:%.2d PM\n", x-12, y);
            break;
        case 24: 
            printf("%d:%.2d AM\n", 00, y);
            break;
    }

    return 0;
}