/**
	@file E6inputoutput.c
	@brief En este archivo estan las funciones que modifican e imprimen la matriz
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "E6inputoutput.h"

void rellenaMatriz (int **matriz, int nFil, int nCol)
{
	srand (time(NULL));
	for (int i = 0; i < nFil; ++i)
	{
		for (int j = 0; j < nCol; ++j)
		{
			matriz[i][j] = ((rand()%(20))+1);
		}
	}
}

void imprimeMatriz (int **matriz, int nFil, int nCol)
{
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
