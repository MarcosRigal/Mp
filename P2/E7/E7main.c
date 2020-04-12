/**
	@file E7main.c
	@brief Este archivo almacena el main del programa correspondiente al ejercicio 6
	@author Marcos Rivera Gavilán
	@date 11/04/2020
*/

#include <stdlib.h>
#include <stdio.h>
#include "E7.h"

/**
	@fn void main ()
	@brief Funcion main()
	@return nada
*/

int main()
{
	int nFil, nCol, nFil2, nCol2;	
	int **matriz, **matriz2, **matriz3;
	printf("\nEste programa multiplica dos matrices\n");
	do
	{
		printf("\nIntroduzca el numero de filas de la primera matriz\n");
		scanf("%d",&nFil);
		printf("\nIntroduzca el numero de columnas de la segunda matriz\n");
		scanf("%d",&nCol);
		printf("\nIntroduzca el numero de filas de la primera matriz\n");
		scanf("%d",&nFil2);
		printf("\nIntroduzca el numero de columnas de la segunda matriz\n");
		scanf("%d",&nCol2);
		system("clear");
		if(nCol!=nFil2)
		{
			printf("\nError de dimensión\n");
		}
	}while(nCol!=nFil2);
	matriz = reservarMemoria ( nFil, nCol);
	matriz2 = reservarMemoria (nFil2, nCol2);
	rellenaMatriz(matriz, nFil, nCol);
	rellenaMatriz(matriz2, nFil2, nCol2);
	printf("\n");
	imprimeMatriz(matriz, nFil, nCol);
	printf("\n");
	printf("\n");
	imprimeMatriz(matriz2, nFil2, nCol2);
	printf("\n");
	matriz3 = multiplicaMatrices(matriz, matriz2, nFil, nCol, nFil2, nCol2);
	printf("\nEl resultado del producto es:\n");
	imprimeMatriz(matriz3, nFil, nCol2);
	liberarMemoria( matriz, nFil);
	liberarMemoria( matriz2, nFil2);
	liberarMemoria( matriz3, nFil);
	return 0;
}

/**
	@mainpage Introducción
	Este programa implementa de manera secuencial una serie de funciones relacionadas con matrices dinámicas
*/