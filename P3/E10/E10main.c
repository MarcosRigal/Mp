#include <stdio.h>
#include <stdlib.h>
#include "E10funciones.h"

int main()
{
	int longitud=0;
	char aux, *nombre=NULL;
	system("clear");
	printf("Este programa calcula la media de los numeros pares que hay en un fichero.\n");
	printf("Introduzca el nombre del fichero donde se encuentran los numeros\n");
	while((aux=getchar())!='\n')
	{
		if((nombre = (char*) realloc(nombre, (longitud+1)*sizeof(char))) == NULL)
		{
			printf("Error al guardar el nombre introducido\n");
			return (-1);
		}
		nombre[longitud]=aux;
		longitud++;
	}
	printf("La media de los valores pares del fichero %s es: %f\n",nombre, mediaFichero(nombre));

	return 0;
}