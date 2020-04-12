#include "E7.h"

int ** multiplicaMatrices(int **matriz, int **matriz2, int nFil, int nCol, int nFil2, int nCol2)
{
	int **matriz3;
	matriz3 = reservarMemoria(nFil, nCol2);
	for (int i = 0; i < nFil; ++i)
	{
		for (int j = 0; j < nCol2; ++j)
		{
			matriz3[i][j] = 0; 
			for (int k = 0; k < nCol; ++k)
			{
				matriz3[i][j] = matriz3[i][j] + (matriz[i][k]*matriz2[k][j]);
			}
		}
	}
	return matriz3;
}