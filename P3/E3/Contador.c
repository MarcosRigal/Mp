#include <ctype.h>
#include "Contador.h"

void cuantoSale(char *frase, char aux, int *contador, int *i)
{
	if(toupper(frase[*i])==toupper(aux))
	{
		++*contador;
	}
	++*i;
	if(frase[*i]!='\0')
	{
		cuantoSale(frase, aux, &(*contador), &(*i));
	}
}