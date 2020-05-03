#include <stdio.h>
#include <ctype.h>
#include "E7funciones.h"

float mediaFichero(char const *nombre)
{
	float media=0, n=0,aux;
	char c;
	FILE *f;
	if((f= fopen(nombre, "r"))== NULL)
	{
		printf("Error al abrir el archivo.\n");
		return -1;
	}
	while((c=getc(f))!=EOF)
	{
 		if(isdigit(c))
 		{
 			aux = c-48;
 			c=getc(f);
			if(c!=EOF)
			{
 				if (isdigit(c))
 				{
 					media= media+ ((aux*10)+(c-48));
 					n++;
 				}
 				else
 				{
 					media=media+aux;
 					n++;
 				}
 			}
 		}
	}
	fclose(f);
	return (media/n);
}