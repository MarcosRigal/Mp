#include <stdio.h>
#include <stdlib.h>
#include "Contador.h"

int main()
{
	int nEle=0, i=0, contador=0;
	char aux, *frase=NULL;
	system("clear");
	printf("Este programa devuelve el numero de veces que aparece un caracter en una cadena:\n");
	printf("\nIntroduce una cadena de caracateres\n");
	while((aux=getchar())!='\n')
	{
		frase = (char*) realloc(frase, (nEle+1)*sizeof(char));
		frase[nEle]=aux;
		nEle++;
	}	
	frase = (char*) realloc(frase, (nEle+1)*sizeof(char));
	frase[nEle]='\0';
	printf("\nIntroduzca el caracater que desea buscar:\n");
	aux=getchar();
	cuantoSale(frase, aux, &contador, &i);
	printf("El caracater: %c, aparece: %d veces.\n", aux, contador);
	return 0;
}
