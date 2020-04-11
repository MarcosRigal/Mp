#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "E5.h"

palabra *estalongitud(palabra vpalabras[], int *longitud, int **nAux)
{
	if ((**nAux)==0)
	{
		vpalabras = (palabra *) realloc(vpalabras, ((**nAux)+1)*sizeof(palabra));
		vpalabras[0].longitud = *longitud;
		vpalabras[0].aparicion = 1;
		++**nAux;
		return vpalabras;
	}
	else
	{
		for (int i = 0; i < (**nAux); ++i)
		{
			if (vpalabras[i].longitud==*longitud)
			{
				vpalabras[i].aparicion= vpalabras[i].aparicion + 1;
				return vpalabras;
			}
		}
		vpalabras = (palabra *) realloc(vpalabras, ((**nAux)+1)*sizeof(palabra));
		vpalabras[**nAux].longitud = *longitud;
		vpalabras[**nAux].aparicion = 1;	
		++(**nAux);
		return vpalabras;
	}
}

float media(char *frase, int *lMayor, int *lMenor, int *nPalabras, palabra vpalabras[], int *nAux)
{
	float suma=0;
	for (int i = 0; i < strlen(frase);)
	{
		int longitud=0;
		if (i==0 || frase[i]==' ')
		{
			if (frase[i]==' ')
			{
				i++;
			}
			do
			{
				longitud++;
				i++;
			} while (frase[i]!=' ' && frase[i]!='\0');
			vpalabras=  estalongitud(vpalabras, &longitud, &nAux);

			if (longitud>*lMayor)
			{
				*lMayor=longitud;
			}
			if (longitud<*lMenor)
			{
				*lMenor=longitud;
			}
			suma=suma+longitud;
			++*nPalabras;
		}
	}
	for (int i = 0; i < *nAux; ++i)
	{
		printf("\nLas palabras de: %d letras, aparecen: %d veces en el texto\n",vpalabras[i].longitud, vpalabras[i].aparicion );
	}
	return (suma/(*nPalabras));
}
