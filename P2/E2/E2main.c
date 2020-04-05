#include <stdio.h>
#include <stdlib.h>
#include "E2.h"

int main()
{
	int *vector, longitud, numero, nmenornumero = 0, nmayornumero = 0, *menornumero, *mayornumero;
	printf("\nIntroduzca el tamaño del vector\n");
	scanf("%d", &longitud);
	vector = (int *) malloc(longitud * sizeof(int));
	printf("\nIntroduzca los valores del vector\n");
	for (int i = 0; i < longitud; ++i)
	{
		scanf("%d", &vector[i]);
	}
	printf("\nIntroduzca un numero para hacer la división: \n");
	scanf("%d", &numero);
	comparaN(vector, &longitud, &numero, &nmenornumero, &nmayornumero);
	menornumero = (int *) malloc(nmenornumero * sizeof(int));
	mayornumero = (int *) malloc(nmayornumero * sizeof(int));
	divideV(vector, &longitud, &numero, menornumero, mayornumero);
	printf("\nLos numeros menores o iguales a n son:\n");
	for (int i = 0; i < nmenornumero; ++i)
	{
		printf("%d", menornumero[i]);
		if (i<(nmenornumero-1))
		{
			printf(", ");
		}
	}
	printf("\nLos numeros mayores que n son:\n");
	for (int i = 0; i < nmayornumero; ++i)
	{
		printf("%d", mayornumero[i]);
		if (i<(nmayornumero-1))
		{
			printf(", ");
		}
	}
	printf("\n");
	return 0;
}