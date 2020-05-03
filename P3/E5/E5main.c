#include <stdio.h>
#include <stdlib.h>
#include "E5funciones.h"

int main()
{
	int longitud=0;
	char aux, *nombre1=NULL, *nombre2;
	system("clear");
	printf("Este programa devuelve una copia en mayúsculas del archivo introducido.\n");
	printf("Inserte el nombre del archivo que desea poner en mayúsculas:\n");
	while((aux=getchar())!='\n')
	{
		if((nombre1 = (char*) realloc(nombre1, (longitud+1)*sizeof(char))) == NULL)
		{
			printf("Error al guardar el nombre introducido\n");
			return (-1);
		}
		nombre1[longitud]=aux;
		longitud++;
	}
	nombre2 = reservaMemoriaNombre(longitud);
	creaNombre(nombre1, nombre2);
	int n= copiaArchivo(nombre1, nombre2);
	switch(n){
		
		case 0:
			printf("La operación se completó correctamente.\n");
			break;
		
		case 1:
			printf("Error al abrir el archivo de origen.\n");
			break;

		case 2:
			printf("Error al abrir el archivo de destino.\n");
			break;
	}
	return 0;
}