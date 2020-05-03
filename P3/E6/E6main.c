#include <stdio.h>
#include <stdlib.h>
#include "E6funciones.h"

int main()
{
	int longitud=0, nNumeros, menor, mayor;
	char aux, *nombre=NULL;
	system("clear");
	printf("Este programa rellena con numeros aleatorios un fichero.\n");
	printf("Inserte el nombre del fichero donde se van a guardar los numeros.\n");
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
	printf("Cuantos numeros aleatorios desea introducir en el archivo:\n");
	scanf("%d", &nNumeros);
	printf("\nIntroduzca el elemento mas pequeño del intervalo en el que se generarán los numeros aleatorios\n");
	scanf("%d,",&menor);
	printf("\nIntroduzca el elemento mas grande del intervalo en el que se generarán los numeros aleatorios\n");
	scanf("%d", &mayor);
	if((rellenaFichero(nombre, nNumeros, menor, mayor))==-1)
	{
		printf("Se ha producido un error al crear el fichero\n");
		return (-1);
	}
	return 0;
}