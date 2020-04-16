#include "RestasSucesivas.h"

void restasSucesivas(int *x, int y, int *aux)
{
	if(*x>y)
	{
		++*aux;
		*x=*x-y;
		restasSucesivas(&(*x), y , &(*aux));
	}
}