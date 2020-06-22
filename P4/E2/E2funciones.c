#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "E2funciones.h"

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

int ascendente(alumno A1, alumno A2)
{
	if (A1.dni > A2.dni)
	{
		return 1;
	}
	return 0;
}

int descendente(alumno A1, alumno A2)
{
	if (A1.dni < A2.dni)
	{
		return 1;
	}
	return 0;
}

void ordenaClase(alumno *clase, int nAlumnos, int (*orden)(alumno, alumno))
{
	for (int i = 0; i < nAlumnos; ++i)
	{
		for (int j = i+1; j < nAlumnos; ++j)
		{
			if((*orden)(clase[i], clase[j])==1)
			{
				alumno aux;
				aux = clase[i];
				clase[i]= clase[j];
				clase[j]= aux;
			}
		}
	}
	for (int i = 0; i < nAlumnos; ++i)
	{
		printf("%s\n",clase[i].nombre);
		printf("%d\n",clase[i].dni);
		printf("%f\n",clase[i].nota);
		printf("\n");
	}
}