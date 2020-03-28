#include <stdio.h>
#include "E11.h"

int main()
{
	char str[256], prefijo[256], sufijo[256];
	printf("\nIntroduzca la cadena de caracteres con la que desea trabajar\n");
	gets(str);
	printf("\nIntroduzca la cadena de caracteres correspondiente al prefijo\n");
	gets(prefijo);
	if (es_prefijo(str, prefijo)==1)
	{
		printf("\nSi, %s es prefijo de: %s\n",prefijo, str);
	}
	else
	{
		printf("\nNo, %s no es prefijo de: %s\n", prefijo, str);
	}
	printf("\nIntroduzca la cadena de caracteres correspondiente al sufijo\n");
	gets(sufijo);
	es_sufijo(str, sufijo);
	if (es_sufijo(str, sufijo)==1)
	{
		printf("\nSi, %s es sufijo de: %s\n", sufijo,str);
	}
	else
	{
		printf("\nNo, %s no es sufijo de: %s\n", sufijo, str);
	}
	return 0;
}