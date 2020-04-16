#include <stdio.h>
#include "SumaDigitos.h"

void sumaDigitos(int * numero, int *nEle, int *suma)
{
	if(*nEle>=0)
	{
		*suma = *suma + numero[*nEle];
		--*nEle;
	sumaDigitos(numero, &(*nEle), &(*suma));
	}
}