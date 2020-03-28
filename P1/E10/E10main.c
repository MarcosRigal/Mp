#include <stdio.h>
#include "E10.h"

int main()
{
	double  v[4];
	leeVector(v);
	escribeVector(v);
	printf("\nEl resultado de sumar todos los elementos mayores que 0 es: %f\n", sumamayor0(v));
	return 0;
}