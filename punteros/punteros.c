#include <stdio.h>
#include <stdlib.h>


//? En este caso, se utiliza punteros para cambiar el valor de las variables que se encuentran fuera de la función
void intercambiar (int *a, int *b) {
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

int main(void) {
    int x=10, y = 20;

    printf("Antes de intercambiar \nX = %d \nY = %d\n", x, y);
    intercambiar(&x, &y);
    printf("Después de intercambiar \nX = %d \nY = %d\n", x, y);
}