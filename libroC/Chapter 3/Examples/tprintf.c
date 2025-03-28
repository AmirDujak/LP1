#include <stdio.h>

int main(void) {

    int i = 40;
    float x = 839.21f;

    printf("|%d|%5d|%-5d|%5.3d|\n", i, i, i, i);
    printf("|%10.3f|%10.3e|%-10g|\n\a", x, x, x);

    return 0;
}

//? /a = alert, \b = moves the cursor back one position, \n = moves cursor to the next line, \t = moves cursor to the next tab line