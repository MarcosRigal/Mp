#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "E3funciones.h"

int existeFichero(const char* alumnos)
{
	FILE *falumnos;
	falumnos = fopen(alumnos, "rb");
	if(falumnos==NULL)
	{
		return 0;
	}
	fclose(falumnos);
	return 1;
}

int numeroDeAlumnos(const char* nombre)
{
	int nAlumnos;
	FILE *falumnos;
	falumnos = fopen(nombre, "rb");
	fseek(falumnos, 0, SEEK_END);
	nAlumnos = (ftell(falumnos)/sizeof(alumno));
	fclose(falumnos);
	return nAlumnos;
}

alumno *reservaMemoriaClase(int nAlumnos)
{
	alumno *clase;
	clase = (alumno *) malloc (nAlumnos*sizeof(alumno));
	return clase;
}

void rellenaClase(const char* alumnos, alumno *clase, int nAlumnos)
{
	FILE *falumnos;
	falumnos = fopen(alumnos, "rb");
	fread(clase, sizeof(alumno), nAlumnos, falumnos);

	for (int i = 0; i < nAlumnos; ++i)
	{
		strtok(clase[i].nombre, "\n");
		printf("%s\n",clase[i].nombre);
		printf("%d\n",clase[i].dni);
		printf("%f\n",clase[i].nota);
		printf("\n");
	}
	fclose(falumnos);
}

int ascendente(const void *A1, const void *A2)
{

	alumno *a, *b;
	a = (alumno*) A1;
	b = (alumno*) A2;
	if (a->nota > b->nota)
	{
		return 1;
	}
	else if(a->nota == b->nota)
	{
		return 0;
	}
	return (-1);

}