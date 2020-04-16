#include <stdio.h>
#include <stdlib.h>
#include "SumaDigitos.h"

int main()
{
	int nEle=0, suma=0;
	char aux, *snumero=NULL;
	system("clear");
	printf("Este programa devuelve la suma de los digitos del numero introducido por teclado.\n");
	printf("\nIntroduce un numero\n");
	while((aux=getchar())!='\n')
	{
		snumero = (char*) realloc(snumero, (nEle+1)*sizeof(char));
		snumero[nEle]=aux;
		nEle++;
	}	
	snumero = (char*) realloc(snumero, (nEle+1)*sizeof(char));
	snumero[nEle]='\0';
	int numero[nEle];
	for (int i = 0; i < nEle; ++i)
	{
		numero[i] = snumero[i]-48;
	}
	nEle= nEle-1;
	sumaDigitos(numero, &nEle, &suma);
	printf("\nLa suma de los digitos del numero introducido es: %d\n", suma);

	return 0;
}