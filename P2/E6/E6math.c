/**
	@file E6math.c
	@brief En este archivo estan las funciones que buscan cosas en la matriz
*/

#include <stdlib.h>
#include "E6.h"


int * minCol (int **matriz, int nFil, int nCol)
{
	int *min;
	min = (int *) malloc (nCol*sizeof(int));

	for (int i = 0; i < nCol; ++i)
	{
		min[i] = matriz[0][i];
		for (int j = 0; j < nFil; ++j)
		{
			if(matriz[j][i]<min[i])
			{
				min[i]=matriz[j][i];
			}			
		}
	}
	return min;
}
