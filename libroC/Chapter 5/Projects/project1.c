#include <stdio.h>

int main(void) {
    
    int x;

    printf("Enter a number: ");
    scanf("%d", &x);

    printf("The number %d has ", x);
    if (x < 10) {
        printf("one digit");
    } else if (x >= 10 && x < 100) {
        printf("two digits");
    }   else if (x >= 100 && x < 1000) {
        printf("three digits");
    }   else printf("four or more digits");
}