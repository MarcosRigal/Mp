#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "E8funciones.h"

int existeLibro(const char* nombre, char *titulo)
{
	FILE *f;
	f = fopen(nombre, "r");
	if(f==NULL)
	{
		return 0;
	}
	char aux[256];
	if (fgets(aux,256,f)!=NULL || !feof(f))
	{
		do
		{
			if (strcmp(aux,titulo)==0)
			{
				fclose(f);
				return 2;
			}
			int i=0;
			do
			{
				i++;
			} while (fgets(aux,256,f)!=NULL && i<2);
		}while(fgets(aux,256,f)!=NULL);
		fclose(f);
		return 1;	
	}
}

void introducirNuevoLibro(const char* nombre)
{
	FILE *f;
	f = fopen(nombre, "a");
	if(f==NULL)
	{
		printf("Error no se puede abrir el archivo.\n");
		printf("Pulse enter para salir\n");
		getchar();
		exit(-1);
	}
	fclose(f);	
	char aux[256];
	float precio;
	int unidades;
	printf("Introduzca el título del libro\n");
	getchar();
	fgets(aux, 256, stdin);
	int estado = existeLibro(nombre, aux);
	switch(estado)
	{
		case 0:
 			printf("Error no existe el archivo de almacenamiento\n");
   		break;

		case 1:
			f = fopen(nombre, "a");
			fputs(aux, f);
			printf("Introduzca el nombre del autor\n");
			fgets(aux, 256, stdin);
			fputs(aux, f);
			printf("Introduzca el precio del libro\n");
			scanf("%f", &precio);
			fprintf(f, "%f ", precio);
			printf("Introduzca el numero de unidades del libro\n");
			scanf("%d", &unidades);
			fprintf(f, "%d\n", unidades);
			fclose(f);
		break;

		case 2:
			printf("El libro que desea añadir ya existe. ¿Desea añadir mas unidades?\n");
			printf("Pulse 1 para añadir mas unidades.\n");
			printf("Pulse 0 para volver al menu.\n");
			int respuesta;
			scanf("%d",&respuesta);
			if (respuesta==1)
			{
				f = fopen(nombre, "r");
				char titulo[256];
				strcpy(titulo, aux);
				FILE *temp;
				temp = fopen("temp.txt", "w");
				if (fgets(aux,256,f)!=NULL)
				{
					do
					{
						
						if (strcmp(aux,titulo)==0)
						{
							fputs(aux,temp);
							fgets(aux,256,f);
							fputs(aux,temp);
							char x;
							fscanf(f, "%f %d%c", &precio, &unidades, &x);
							printf("Introduzca el numero de unidades que desea añadir:\n");
							int naux;
							scanf("%d", &naux);
							unidades= unidades+naux;
							fprintf(temp, "%f %d\n", precio, unidades);
						}
						else
						{
							fputs(aux, temp);

						}
					}while(fgets(aux,256,f)!=NULL);
				}
				fclose(f);
				remove(nombre);
				fclose(temp);
				rename("temp.txt", nombre);
			}
		break;
	}
}

int numeroDeLibros(const char* nombre)
{
	FILE *f;
	f = fopen(nombre, "r");
	if(f==NULL)
	{
		return 0;
	}
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
			} while (fgets(aux,256,f)!=NULL && i<2);
		}while(fgets(aux,256,f)!=NULL);
		fclose(f);
		return contador;	
	}
}

void imprimeLibros(const char* nombre, int nLibros)
{
	FILE *f;
	char aux;
	f = fopen(nombre, "r");
	libro *libros;
	libros = (libro *) malloc(nLibros * sizeof(libro));
	int i = 0;
	do
	{
		fgets(libros[i].titulo,256,f);
		fgets(libros[i].autor,256,f);
		fscanf(f, "%f %d%c", &libros[i].precio, &libros[i].stock, &aux);
		i++;
	}while(i<nLibros);
	fclose(f);
	system("clear");
	for (int i = 0; i < nLibros; ++i)
	{
		printf("\n--------------------------\n");
		printf("Titulo: %s\n", libros[i].titulo);
		printf("Autor: %s\n", libros[i].autor);
		printf("Precio: %f€\n", libros[i].precio);
		printf("Stock: %duds\n", libros[i].stock);
		printf("--------------------------\n");
	}
	free(libros);
}

int vendeLibro(const char* nombre, char *titulo,int unidades)
{
	char aux[256];
	float precio;
	int nUnidades;
	FILE *f;
	f = fopen(nombre, "r");
	FILE *temp;
	temp = fopen("temp.txt", "w");
	if (fgets(aux,256,f)!=NULL)
	{
		do
		{				
			if (strcmp(aux,titulo)==0)
			{
				fputs(aux,temp);
				fgets(aux,256,f);
				fputs(aux,temp);
				char x;
				fscanf(f, "%f %d%c", &precio, &nUnidades, &x);
				if(unidades>=nUnidades)
				{
					printf("ATENCIÓN: Si continua con la venta se quedará sin existencias de %s\n", titulo);
					printf("¿Esta seguro que desea continuar?\n");
					printf("Pulse 1 para continuar con la venta.\n");
					printf("Pulse 0 para cancelar la operción.\n");
					int respuesta;
					scanf("%d",&respuesta);
					if (respuesta==1)
					{
						nUnidades = 0;
						fprintf(temp, "%f %d\n", precio, nUnidades);
					}
					else
					{
						return (0);
					}
				}
				else
				{
				nUnidades=nUnidades- unidades;
				fprintf(temp, "%f %d\n", precio, nUnidades);	
				}	
			}
			else
			{
				fputs(aux, temp);
			}
		}while(fgets(aux,256,f)!=NULL);
	}
	fclose(f);
	remove(nombre);
	fclose(temp);
	rename("temp.txt", nombre);	
	return 0;
}

void borraLibro(const char* nombre)
{
	char aux[256];
	char aux2[256];
	float precio;
	int nUnidades;
	FILE *f;
	f = fopen(nombre, "r");
	FILE *temp;
	temp = fopen("temp.txt", "w");
	if (fgets(aux,256,f)!=NULL)
	{
		do
		{				
			fgets(aux2,256,f);
			char x;
			fscanf(f, "%f %d%c", &precio, &nUnidades, &x);
			if(nUnidades==0)
			{
				if (fgets(aux,256,f)!=NULL)
				{
					fputs(aux,temp);
					fgets(aux2,256,f);
					fputs(aux2,temp);
					fscanf(f, "%f %d%c", &precio, &nUnidades, &x);
					fprintf(temp, "%f %d\n", precio, nUnidades);	
				}
			}
			else
			{
				fputs(aux,temp);
				fputs(aux2,temp);
				fprintf(temp, "%f %d\n", precio, nUnidades);	
			}
			
		}while(fgets(aux,256,f)!=NULL);
	}
	fclose(f);
	remove(nombre);
	fclose(temp);
	rename("temp.txt", nombre);	
}
