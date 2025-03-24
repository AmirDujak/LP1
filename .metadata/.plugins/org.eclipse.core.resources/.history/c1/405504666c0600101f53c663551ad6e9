/*
 ============================================================================
 Name        : Lab4Amir.c
 Author      : Amir
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "contrasena.h"

int main(void) {

	char contrasena[50];
	char c;
	int longitud;
	printf("Hola \n");

	longitud = crearContrasena(contrasena, c, longitud);

	int opcion = 1;
	while (opcion != 4) {
		printf("=== Menú Principal === \n");
		printf("1. Ver fortaleza de la contraseña \n");
		printf("2. Mostrar detalles de los criterios \n");
		printf("3. Ingresar una nueva contraseña \n");
		printf("4. Salir \n");
		printf("Ingrese una opción: ");
		scanf("%d", &opcion);
		printf("\n");

		while (opcion < 1 || opcion > 4) {
			printf("Ingrese una opción válida: ");
			scanf("%d", &opcion);
		}

		if (opcion == 1) {
			fortaleza(contrasena, c, longitud);
		} else if (opcion == 2) {
			detalles(contrasena, c, longitud);
		} else if (opcion == 3 ) {
			crearContrasena(contrasena, c, longitud);
		}
	}

	printf("La contraseña es %s \n", contrasena); //SACAR DESPUÉS

	return EXIT_SUCCESS;
}
