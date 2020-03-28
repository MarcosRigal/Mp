#include <stdio.h>
#include "E10.h"

void leeVector(double v[])
{
	printf("\nIntroduzca valores para rellenar el vector\n");
	for (int i = 0; i < 4 ; ++i)
	{
		scanf("%lf", &(*(v+i)));
	}
}

void escribeVector(double v[])
{
	for (int i = 0; i < 4; ++i)
	{
		printf("\n%f\n", *(v+i) );
	}
}

double sumamayor0(double v[])
{
	double suma = 0;
	for (int i = 0; i < 4; ++i)
	{
		if (*(v+i)>0)
		{
			suma = suma + *(v+i);
		}
	}
	return suma;
}