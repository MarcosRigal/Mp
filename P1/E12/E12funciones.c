
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "E12.h"

void rellenarVectorAleatorio(int v[])
{
	srand (time(NULL));
	int max;
	printf("\nIntroduzca el maximo para el intervalo de numeros aleatorios\n");
	scanf("%d",&max);
	for (int i = 0; i < 8; ++i)
	{
		v[i] = (rand()%(max+1));
	}
}

void imprimirVector(int v[])
{
	printf("\n");
	for (int i = 0; i < 8; ++i)
	{
		printf("%d",v[i] );
		if (i<7)
		{
			printf(", ");
		}
	}
	printf("\n");
}

void crearIndicePares(int v[], int p[], int *np)
{
	for (int i = 0; i < 8; ++i)
	{
		if (v[i]%2 == 0)
		{
			p[*np] = v[i];
			++*np;
		}
	}
}

void crearIndiceImpares(int v[], int ip[], int *nip)
{
	for (int i = 0; i < 8; ++i)
	{
		if (v[i]%2 != 0)
		{
			ip[*nip] = v[i];
			++*nip;
		}
	}
}

void imprimeIndice(int p[], int *np, int ip[], int *nip)
{
	printf("\nEl indice de los numeros pares es:\n");
	for (int i = 0; i < *np; ++i)
	{
		printf("%d",p[i] );
		if (i<*np-1)
		{
			printf(", ");
		}
	}
	printf("\n");
	printf("\nEl indice de los numeros impares es:\n");
	for (int i = 0; i < *nip; ++i)
	{
		printf("%d",ip[i] );
		if (i<*nip-1)
		{
			printf(", ");
		}
	}
	printf("\n");

}