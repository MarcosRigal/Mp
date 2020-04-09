#ifndef E4
#define E4

int ** reservarMemoria (int nFil, int nCol);
void rellenaMatriz (int **matriz, int nFil, int nCol);
void imprimeMatriz (int **matriz, int nFil, int nCol);
int * minCol (int **matriz, int nFil, int nCol);
void liberarMemoria(int **matriz, int nFil);

#endif