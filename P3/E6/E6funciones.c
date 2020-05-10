#include <time.h>
#include <stdlib.h>
#include <stdio.h>
#include "E6funciones.h"

int rellenaFichero(char *nombre, int nNumeros, int menor, int mayor)
{
	int aux= mayor-menor;
	FILE* f;
	srand (time(NULL));
	if((f= fopen(nombre, "w"))== NULL)
	{
		return (-1);
	}
	for (int i = 0; i < nNumeros; ++i)
	{	
		fprintf(f, "%d\n",((rand()%(aux))+menor));
	}
	fclose(f);
	return 0;
}