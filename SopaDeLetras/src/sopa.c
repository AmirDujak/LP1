/*
 ============================================================================
 Name        : SopaDeLetras.c
 Author      : Amir
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#include "letras.h"

void minusMayus(char array[M][N], int n) {
	for (int i = 0; i<10; i++) {
		for (int j = 0; j<10; j++) {
			if (array[i][j] >= 'A' && array[i][j] <= 'Z') {
				array[i][j] += 'a' - 'A';
			}
		}
	}
}


int main(void) {

	char c;
	char palabra[10];
	int longitud = 0;
	printf("Ingrese una palabra a buscar en la matriz: ");
	for (int i = 0; i<10 && c!='\n'; i++) {
		c = getchar();
		if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) {
			if (c >= 'A' && c <= 'Z') {
				c += 'a' - 'A';
				palabra[i] = c;
				longitud++;
			}
		} else {
			i--;
		}
	}



	minusMayus(letras, 10);

	//Esta parte busca si la letra ingresada se encuentra en la matriz
	char letra;
	for (int i = 0; i<10; i++) {
		for (int j=0; j<10; j++) {
			letra = letras[i][j];
			if (palabra[longitud-1] == letra) {
				printf("La letra %s se encuentra en la fila %d columna %d \n", palabra, i+1, j+1);
			}
		}
	}


	return EXIT_SUCCESS;
}
