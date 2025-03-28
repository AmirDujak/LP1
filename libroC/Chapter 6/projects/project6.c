#include <stdio.h>

int main(void) {
    int i, n, m;

    printf("Enter the top number: ");
    scanf("%d", &n);

    for(i = 2; i < n; i+=2) {
        m = i*i;
        if (m > n) {
            return 0;
        }
        printf("%d\n", m);
    }

    return 0;
}