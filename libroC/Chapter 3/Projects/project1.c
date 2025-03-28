#include <stdio.h>

int main(void) {
    int mm, dd, yyyy;

    printf("Enter date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &mm, &dd, &yyyy);

    printf("You entered the date: %.2d%.2d%.2d", yyyy, mm, dd);

    return 0;
}