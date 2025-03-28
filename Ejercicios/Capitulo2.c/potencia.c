#include <stdio.h>
#include <stdlib.h>

int power(int base, int exponent) {
    int result = base;
    for (int i = 1; i < exponent; i++) {
        result = result*base;
    }

    return result;
}

int main(void) {
    int num, exponente;

    printf("Ingrese un numero y la potencia a la que sera elevada: \n");
    scanf("%d/%d", &num, &exponente);

    printf("El numero %d elevado a la potencia %d es %d \n", num, exponente, power(num, exponente));

    return 0;
}