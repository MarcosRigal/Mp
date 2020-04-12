/**
	@file E6main.c
	@brief Este archivo almacena el main del programa correspondiente al ejercicio 6
	@author Marcos Rivera Gavilán
	@date 11/04/2020
*/

#include <stdlib.h>
#include <stdio.h>
#include "E6.h"

/**
	@fn void main ()
	@brief Funcion main()
	@return nada
*/

int main()
{
	int nFil, nCol;
	int *min;	
	int **matriz;
	printf("\nIntroduzca el numero de filas\n");
	scanf("%d",&nFil);
	printf("\nIntroduzca el numero de columnas\n");
	scanf("%d",&nCol);
	matriz = reservarMemoria ( nFil, nCol);
	rellenaMatriz(matriz, nFil, nCol);
	printf("\n");
	imprimeMatriz(matriz, nFil, nCol);
	min = minCol(matriz, nFil, nCol);
	printf("\nLos menores de cada columna son:\n[");
	for (int i = 0; i < nCol; ++i)
	{
		printf(" %d ",min[i]);
	}
	printf("]\n");
	free(min);
	liberarMemoria( matriz, nFil);
	return 0;
}

/**
	@mainpage Introducción
	Este programa implementa de manera secuencial una serie de funciones relacionadas con matrices dinámicas
*/