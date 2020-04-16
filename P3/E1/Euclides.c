#include "Euclides.h"

int calculaEuclides(int x, int y)
{
	if (y == 0)
	{
		return x;
	}
	else if(y>0 && x>=y)
	{
		calculaEuclides(y, ((x)%(y)) );
	}
}