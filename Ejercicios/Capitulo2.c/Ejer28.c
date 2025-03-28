#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int power(int base, int exponent) {
    int result = base;
    if (exponent == 0) {
        result = 1;
    } else {
        for (int i = 1; i < exponent; i++) {
            result = result*base;
        }
    }

    return result;
}

void htoi(char hex[], int longitud) {
    int decimal = 0;

    for (int i = longitud-1; i >= 2; i--) {
        if (hex[i] >= 'A' && hex[i] <= 'F') {
            decimal += (hex[i]-55) * power(16, i-2);
        } else {
            decimal += ((hex[i]-48) * power(16, i-2));
        }
    }

    printf("El número %s en decimal es %d \n", hex, decimal);
}

int main(void) {
    char hex[100];
    char c;
    int longitud = 0;


    printf("Ingrese el número hexadecimal: ");
    for (int i = 0; i < 100 && c != '\n'; i++) {
        c = getchar();
        hex[i] = c;
        longitud++;
        if (c == '\n') {
            longitud--;
        }
    }


    htoi(hex, longitud);

    return 0;
}