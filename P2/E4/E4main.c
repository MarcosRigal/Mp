#include <stdlib.h>
#include <stdio.h>
#include "E4.h"

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