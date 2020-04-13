/**
	@file funciones.c
	@brief En este archivo está la implementación de las funciones que aparecen en el archivo funciones.h
	@author Marcos Rivera Gavilán
	@date 13/04/2020
*/

#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

void rellenaMatriz (int **matriz, int nFil, int nCol)
{
	for (int i = 0; i < nFil; ++i)
	{
		for (int j = 0; j < nCol; ++j)
		{
			system("clear");
			printf("Introduzca el valor del elemento [%d][%d]\n", i+1, j+1);
			scanf("%d", &matriz[i][j]);
		}
	}
	system("clear");
}

void imprimeMatriz (int **matriz, int nFil, int nCol)
{
	printf("La matriz es:\n");
	printf("\n");
	for (int i = 0; i < nFil; ++i)
	{
		printf("|");
		for (int j = 0; j < nCol; ++j)
		{
			printf(" %d ",matriz[i][j]);
		}
		printf("|\n");
	}
}

void divisibleSuma (int **matriz, int nFil, int nCol, int *divibles, int *suma)
{
	for (int i = 0; i < nFil; ++i)
	{
		for (int j = 0; j < nCol; ++j)
		{
			if ((matriz[i][j]%3)==0)
			{
				*divibles = *divibles+1;
				*suma = *suma + matriz[i][j];
			}
		}
	}
}

int ** reservarMemoria (int nFil, int nCol)
{
	int **matriz;
	matriz = (int **)malloc (nFil*sizeof(int *));
	for (int i=0;i<nFil;i++)
	{
		matriz[i] = (int *) malloc (nCol*sizeof(int));
	}
	return matriz;
}

void liberarMemoria(int **matriz, int nFil)
{
	for (int i = 0; i < nFil; ++i)
	{
		free(matriz[i]);	
	}
	free(matriz);
}