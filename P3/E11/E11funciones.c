#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "E11funciones.h"

int existeLibro(const char* nombre, char *titulo)
{
	FILE *f;
	f = fopen(nombre, "rb");
	if(f==NULL)
	{
		return 0;
	}
	fclose(f);
	f = fopen(nombre, "rb");
	libro aux;
	while((fread(&aux, sizeof(libro), 1, f))==1)
	{
		if (strcmp(aux.titulo, titulo)==0)
		{
			fclose (f);
			return 2;
		}
	}
	fclose (f);
	return 1;
}

void introducirNuevoLibro(const char* nombre)
{
	FILE *f;
	f = fopen(nombre, "ab");
	if(f==NULL)
	{
		printf("Error no se puede abrir el archivo.\n");
		printf("Pulse enter para salir\n");
		getchar();
		exit(-1);
	}
	fclose(f);
	libro aux;
	printf("Introduzca el título del libro\n");
	getchar();
	fgets(aux.titulo, 100, stdin);
	int estado = existeLibro(nombre, aux.titulo);
   	switch(estado)
   	{    	
		case 0:
 			printf("Error no existe el archivo de almacenamiento\n");
   		break;

		case 1:
			printf("Introduzca el nombre del autor\n");
			fgets(aux.autor, 50, stdin);
			printf("Introduzca el precio del libro\n");
			scanf("%f", &aux.precio);
			printf("Introduzca el numero de unidades del libro\n");
			scanf("%d", &aux.stock);
			f = fopen(nombre, "ab");
			fwrite(&aux, sizeof(libro), 1, f);
			fclose(f);
		break;
   		case 2:
			printf("El libro que desea añadir ya existe. ¿Desea añadir mas unidades?\n");
			printf("Pulse 1 para añadir mas unidades.\n");
			printf("Pulse 0 para volver al menu.\n");
			int respuesta;
			scanf("%d",&respuesta);
			getchar();
			if (respuesta==1)
			{
				char titulo[100];
				strcpy(titulo, aux.titulo);
				f = fopen(nombre, "r+b");
				while((fread(&aux, sizeof(libro), 1, f))==1)
				{
					if (strcmp(aux.titulo, titulo)==0)
					{
						fseek(f, -(int)sizeof(libro), SEEK_CUR);
						printf("Introduzca el numero de unidades que desea añadir:\n");
						int nUds;
						scanf("%d", &nUds);
						getchar();
						aux.stock= aux.stock+ nUds;
						fwrite(&aux, sizeof(libro), 1, f);				
						fflush(f);

					}
				}
				fclose(f);
			}
   		break;
   	}

}


int numeroDeLibros(const char* nombre)
{
	int nLibros;
	FILE *f;
	f = fopen(nombre, "rb");
	if(f==NULL)
	{
		return 0;
	}
	fseek(f, 0, SEEK_END);
	nLibros = (ftell(f)/sizeof(libro));
	fclose(f);
	return nLibros;
}

void imprimeLibros(const char* nombre, int nLibros)
{
	FILE *f;
	f = fopen(nombre, "rb");
	if(f==NULL)
	{
		printf("Error no se puede abrir el archivo.\n");
		printf("Pulse enter para salir\n");
		getchar();
		exit(-1);
	}
	libro *libros;
	libros = (libro *) malloc(nLibros * sizeof(libro));
	fread(libros, sizeof(libro), nLibros, f);
	for (int i = 0; i < nLibros; ++i)
	{
		printf("\n--------------------------\n");
		printf("Titulo: %s\n", libros[i].titulo);
		printf("Autor: %s\n", libros[i].autor);
		printf("Precio: %f€\n\n", libros[i].precio);
		printf("Stock: %duds\n", libros[i].stock);
		printf("--------------------------\n");
	}
	free(libros);
	fclose(f);
}

int vendeLibro(const char* nombre, char *titulo, int unidades)
{
	FILE *f;
	f = fopen(nombre, "r+b");
	libro aux;
	while((fread(&aux, sizeof(libro), 1, f))==1)
	{
		if (strcmp(aux.titulo, titulo)==0)
		{
			fseek(f, -(int)sizeof(libro), SEEK_CUR);
			if (aux.stock<=unidades)
			{
				printf("ATENCIÓN: Si continua con la venta se quedará sin existencias de %s\n", titulo);
				printf("¿Esta seguro que desea continuar?\n");
				printf("Pulse 1 para continuar con la venta.\n");
				printf("Pulse 0 para cancelar la operción.\n");
				int respuesta;
				scanf("%d",&respuesta);
				if (respuesta==1)
				{
					aux.stock = 0;
					fwrite(&aux, sizeof(libro), 1, f);				
					fflush(f);
					fclose(f);
					return 0;
				}
				else
				{
					fclose(f);
					return (0);
				}
			}
			else
			{
				aux.stock = (aux.stock - unidades);
				fwrite(&aux, sizeof(libro), 1, f);				
				fflush(f);
				fclose(f);
				return 0;	
			}
		}
	}
}

int borraLibro(const char* nombre)
{
	FILE *f;
	f = fopen(nombre, "rb");
	if(f==NULL)
	{
		return 0;
	}
	FILE *ftemp;
	ftemp = fopen("temp.bin", "wb");
	libro aux;
	while((fread(&aux, sizeof(libro), 1, f))==1)
	{
		if (aux.stock > 0)
		{
			fwrite(&aux, sizeof(libro), 1, ftemp);		
		}
	}
	fclose(f);
	remove(nombre);
	fclose(ftemp);
	rename("temp.bin", nombre);
	return 1;	
}
