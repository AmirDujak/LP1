/*
 * funciones.c
 *
 *  Created on: Mar 21, 2025
 *      Author: amirdujak
 */

#include "contrasena.h"
#include <stdio.h>
#include <stdlib.h>

int crearContrasena(char contrasena[50], char c, int longitud) {
	printf("Ingrese una contraseña: ");
	longitud = 0;
	for (int i = 0; i<50 && c!='\n'; i++) {
		c = getchar();
		contrasena[i] = c;
		longitud++;
	}

	while (longitud < 13) { //Pongo con 13 porque me toma el Enter como un espacio
		printf("Ingrese una contraseña con 12 o más carácteres: \n");
		longitud = 0;
		c = '\0';
		for (int i = 0; i<50 && c!='\n'; i++) {
			c = getchar();
			contrasena[i] = c;
			longitud++;
		}
	}
	return longitud;
}


void fortaleza(char contrasena[50], char c, int longitud) {
	int minus=0, mayus=0, digit=0, simb=0;
	for (int i=0; i<longitud; i++) {
		if (contrasena[i] >= '0' && contrasena[i] <= '9') {
			digit = 1;
		} else if (contrasena[i] >= 'A' && contrasena[i] <= 'Z') {
			mayus = 1;
		} else if(contrasena[i] >= 'a' && contrasena[i] <= 'z') {
			minus = 1;
		} else if ((contrasena[i] >= '!' && contrasena[i] <= '/') || (contrasena[i] >= ':' && contrasena[i] <= '@')
		|| (contrasena[i] >= '[' && contrasena[i] <= '`')) {
			simb = 1;
		}
	}
	printf("Digit %d, mayus %d, minus %d, simb %d", digit, mayus, minus, simb);

	int total = digit+mayus+minus+simb+1;
	printf("Total: %d", total);

	if (total <= 2) {
		printf("Fortaleza: [Débil] \n");
	} else if (total == 3) {
		printf("Fortaleza: [Media] \n");
	} else {
		printf("Fortaleza: [Fuerte] \n");
	}
}

void detalles(char contrasena[50], char c, int longitud) {
	int minus=0, mayus=0, digit=0, simb=0;
	for (int i=0; i<longitud; i++) {
		if (contrasena[i] >= '0' && contrasena[i] <= '9') {
			digit = 1;
		} else if (contrasena[i] >= 'A' && contrasena[i] <= 'Z') {
			mayus = 1;
		} else if(contrasena[i] >= 'a' && contrasena[i] <= 'z') {
			minus = 1;
		} else if ((contrasena[i] >= '!' && contrasena[i] <= '/') || (contrasena[i] >= ':' && contrasena[i] <= '@')
		|| (contrasena[i] >= '[' && contrasena[i] <= '`')) {
			simb = 1;
		}
	}

	printf("[✓] Longitud mínima (+12 carácteres) \n");

	if (mayus != 0) {
		printf("[✓] Mayúsculas \n");
	} else {
		printf("[X] Mayúsculas \n");
	}

	if (minus != 0) {
		printf("[✓] Minúsculas \n");
	} else {
		printf("[X] Minúsculas \n");
	}

	if (digit != 0) {
		printf("[✓] Dígitos \n");
	} else {
		printf("[X] Dígitos \n");
	}

	if (simb != 0) {
		printf("[✓] Símbolos \n");
	} else {
		printf("[X] Símbolos \n");
	}

}
