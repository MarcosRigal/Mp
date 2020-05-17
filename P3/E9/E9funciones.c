#include <time.h>
#include <stdlib.h>
#include <stdio.h>
#include "E9funciones.h"

int rellenaFichero(const char *nombre, int nNumeros, int menor, int mayor)
{
	int *vector;
	int aux= mayor-menor;
	FILE* f;
	srand (time(NULL));
	if((f= fopen(nombre, "wb"))== NULL)
	{
		return (-1);
	}
	vector = (int *) malloc(nNumeros * sizeof(int));
	printf("Los valores almacenados en el fichero son:\n");
	for (int i = 0; i < nNumeros; ++i)
	{	
		vector[i] = ((rand()%(aux))+menor);
		printf("%d\n", vector[i]);
	}
	fwrite(vector, sizeof(int), nNumeros, f);
	fclose(f);
	return 0;
}