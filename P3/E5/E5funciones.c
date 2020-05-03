#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "E5funciones.h"

char * reservaMemoriaNombre(int longitud)
{
	char *aux;
	aux = (char *) malloc((longitud+10)*sizeof(char));
	return aux;
}

void creaNombre(char * nombre1, char * nombre2)
{
	strcpy(nombre2, "mayusculas-");
	strcat(nombre2, nombre1);
}

int copiaArchivo(char * nombre1, char * nombre2)
{
	char c;
	FILE* f1;
	FILE* f2;
	if ((f1 = fopen(nombre1,"r"))== NULL)
	{
		return (1);
	}
	if ((f2 = fopen(nombre2, "w"))== NULL)
	{
		return (2);
	}
	while((c=getc(f1))!=EOF)
	{
		putc(toupper(c), f2);
	}
	fclose(f1);
	fclose(f2);
	return (0);
}