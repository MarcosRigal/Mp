#include <math.h>
#include <stdio.h>
#include "E1funciones.h"

float mediafx(int max)
{
	float media = 0,x = 0;
	for (int i = 0; i <= (max*5); ++i)
	{
		media = media +((3*exp(x)) - (2*x));
		x = x+0.2;
	}
	return media/(max*5);
}

float mediagx(int max)
{
	float media = 0,x = 0;
	for (int i = 0; i <=(max*5); ++i)
	{
		media = media +((-x*sin(x))+1.5);
		x = x+0.2;
	}
	return media/(max*5);
}
float mediazx(int max)
{
	float media = 0,x = 0;
	for (int i = 0; i <=(max*5); ++i)
	{
		media = media +(pow(x,3)-(2*x)+1);
		x = x+0.2;
	}
	return media/(max*5);
}