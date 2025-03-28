#include <stdio.h>

int main(void) {
    int i, n, sum;
    n = 0;
    sum = 0;
    while (n < 10) {
        scanf("%d", &i);
        if (i == 0) {
            continue;
        }
        sum += i;
        n++;
    }
    return 0;
}

//? the goto statement will "break" out of the loop and go to the desired loop