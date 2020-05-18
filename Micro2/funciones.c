#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funciones.h"

int existenFicheros(const char* notas, const char* alumnos)
{
	FILE *fnotas, *falumnos;
	fnotas = fopen(notas, "r");
	if(fnotas==NULL)
	{
		return 0;
	}
	fclose(fnotas);
	falumnos = fopen(alumnos, "r");
	if(falumnos==NULL)
	{
		return 0;
	}
	fclose(falumnos);
	return 1;
}

int numeroDeAlumnos(const char* nombre)
{
	FILE *f;
	f = fopen(nombre, "r");
	char aux[256];
	int contador=0;
	if (fgets(aux,256,f)!=NULL || !feof(f))
	{
		do
		{
			contador++;
			int i=0;
			do
			{
				i++;
			} while (fgets(aux,256,f)!=NULL && i<1);
		}while(fgets(aux,256,f)!=NULL);
		fclose(f);
		return contador;	
	}
}

alumno *reservaMemoriaClase(int nAlumnos)
{
	alumno *clase;
	clase = (alumno *) malloc (nAlumnos*sizeof(alumno));
	return clase;
}

void rellenaClase(const char* notas, const char* alumnos, alumno *clase, int nAlumnos)
{
	FILE *fnotas, *falumnos;
	fnotas = fopen(notas, "r");
	falumnos = fopen(alumnos, "r");
	char aux[256];
	for (int i = 0; i < nAlumnos; ++i)
	{
		fscanf(fnotas, "%ld %f %f %f", &clase[i].dni, &clase[i].nota1, &clase[i].nota2, &clase[i].nota3);
		fgets(clase[i].nombre_apellidos, 256, falumnos);
		strtok(clase[i].nombre_apellidos, "\n");
		fgets(aux, 256, falumnos);
		clase[i].media = ((clase[i].nota1+clase[i].nota2+clase[i].nota3)/3);
	}
	fclose(falumnos);
	fclose(fnotas);
}

void calculaMedia(const char* nota_media, alumno *clase, int nAlumnos)
{
	FILE *fmedia;
	fmedia = fopen(nota_media, "w");
	for (int i = 0; i < nAlumnos; ++i)
	{
		fprintf(fmedia, "%ld <%s> %f\n", clase[i].dni, clase[i].nombre_apellidos, clase[i].media);
	}
	fclose (fmedia);
}
