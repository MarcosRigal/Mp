#include <stdio.h>
#include <stdlib.h>
#include "RestasSucesivas.h"

int main()
{
	int x, y, aux=0;
	system("clear");
	printf("Este programa calcula la división entera de dos número a través del método de restas sucesivas\n");
	printf("Introduzca el numerador:\n");
	scanf("%d", &x);
	printf("\nIntroduzca el denominador:\n");
	scanf("%d", &y);
	restasSucesivas(&x, y, &aux);
	printf("\nEl resultado de la división es el siguiente:\n");
	printf("El cociente es: %d, y el resto es: %d\n", aux, x );

	return 0;
}