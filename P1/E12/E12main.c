#include <stdio.h>
#include "E12.h"

int main()
{
	int npares=0, nimpares=0;
	int vrand[8], pares[8], impares[8];
	rellenarVectorAleatorio(vrand);
	imprimirVector(vrand);
	crearIndicePares(vrand, pares, &npares);
	crearIndiceImpares(vrand, impares, &nimpares);
	imprimeIndice(pares, &npares, impares, &nimpares);
	return 0;
}