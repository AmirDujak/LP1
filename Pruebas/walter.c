#include <stdio.h>
#include <stdlib.h>

int main(void) {

    int i = 0;
    char s[100];

    printf("Ingrese su edad: ");
    scanf("%d", &i);

    printf("Eres %s de edad\n", (i >= 18) ? "mayor" : "menor");

    return 0;
}