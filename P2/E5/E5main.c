#include <stdio.h>
#include <stdlib.h>
#include "E5.h"

int main()
{
	int nEle=0, lMayor=0, lMenor=99, nPalabras=0, nAux=0;
	char aux, *frase=NULL;
	palabra *vpalabras=NULL;
	printf("\nIntroduce una cadena de caracateres\n");
	while((aux=getchar())!='\n')
	{
		frase = (char*) realloc(frase, (nEle+1)*sizeof(char));
		frase[nEle]=aux;
		nEle++;
	}	
	frase = (char*) realloc(frase, (nEle+1)*sizeof(char));
	frase[nEle]='\0';
	printf("\nLa longitud media es: %f", media(frase, &lMayor, &lMenor, &nPalabras, vpalabras, &nAux));
	printf(" la mayor mide: %d y la menor mide: %d\n", lMayor, lMenor);

}