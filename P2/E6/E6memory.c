/**
	@file E6memory.c
	@brief En este archivo estan las funciones que trabajan con memoria
*/

#include <stdlib.h>
#include "E6.h"

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