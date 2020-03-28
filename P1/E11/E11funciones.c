#include "E11.h"
#include <stdio.h>
#include <string.h>

int es_prefijo(char *cadena, char *prefijo)
{
	char *answ=strstr(cadena, prefijo);
	if (answ == cadena)
	{
		return 1;
	}
	
	
	return 0;
}

int es_sufijo(char *cadena, char *sufijo)
{
	char *answ=strstr(cadena, sufijo);
	int distance=answ-cadena+sizeof(char);
	int i=0, longitud=strlen(cadena);

	if (distance ==(longitud*sizeof(char)))
	{
		return 1;
	}
	
	
	return 0;
}