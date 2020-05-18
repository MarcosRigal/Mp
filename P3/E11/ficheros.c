#include <stdio.h>
#include "ficheros.h"

FILE *abreLectura(const char* nombre)
{
	FILE *f;
	f = fopen(nombre, "rb");
	return f;
}

FILE *abreNuevo(const char* nombre)
{
	FILE *f;
	f = fopen(nombre, "wb");
	return f;
}

FILE *abreAdjuntar(const char* nombre)
{
	FILE *f;
	f = fopen(nombre, "ab");
	return f;
}

FILE *abreEditar(const char* nombre)
{
	FILE *f;
	f = fopen(nombre, "r+b");
	return f;
}