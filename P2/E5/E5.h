#ifndef E5
#define E5

typedef struct 
{
	int longitud;
	int aparicion;
}palabra;
palabra *estalongitud(palabra *vpalabras, int *longitud, int **nAux);
float media(char *frase, int *lMayor, int *lMenor, int *nPalabras, palabra *vpalabras, int *nAux);

#endif