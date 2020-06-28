#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "E4funciones.h"

int contieneMonomio(monomio *primero, int grado, int nMonomios)
{
	monomio *aux;
	aux = (monomio*) malloc(sizeof(monomio));
	aux = primero;
	for (int i = 1; i < nMonomios; ++i)
	{
		if (aux->grado == grado)
		{
			return 1;
		}
		aux = aux->sig;
	}	
	return 0;	
}

void anyadeMonomio(monomio *nuevo, monomio *primero,int aux, int nMonomios)
{
	aux++;
	int coeficiente, grado;
	if (aux < nMonomios)
	{
		do
		{
			system("clear");
			printf("Introduzca el coeficiente del monomio\n");
			scanf("%d", &coeficiente);
			getchar();
			printf("Introduzca el grado del monomio\n");
			scanf("%d", &grado);
			getchar();
			if (contieneMonomio(primero, grado, aux) != 0)
			{
				printf("Error, ya existe un monomio con este grado.\n");
				printf("Pulse enter para continuar...\n");
				getchar();
			}
		} while (contieneMonomio(primero, grado, aux) != 0);		
		nuevo->coeficiente = coeficiente;
		nuevo->grado = grado;
		nuevo->sig = (monomio*) malloc(sizeof(monomio));
		anyadeMonomio(nuevo->sig, primero, aux, nMonomios);
	}
	else
	{
		do
		{
			system("clear");
			printf("Introduzca el coeficiente del monomio\n");
			scanf("%d", &coeficiente);
			getchar();
			printf("Introduzca el grado del monomio\n");
			scanf("%d", &grado);
			getchar();
			if (contieneMonomio(primero, grado, aux) != 0)
			{
				printf("Error, ya existe un monomio con este grado.\n");
				printf("Pulse enter para continuar...\n");
				getchar();
			}
		} while (contieneMonomio(primero, grado, aux) != 0);		
		nuevo->coeficiente = coeficiente;
		nuevo->grado = grado;
		nuevo->sig = (monomio*) malloc(sizeof(monomio));
		nuevo->sig = NULL;
	}
}

void muestraPolinomio(monomio *primero, int nMonomios)
{
	monomio *aux;
	aux = (monomio*) malloc(sizeof(monomio));
	aux = primero;
	printf("\n   f(x) = ");
	for (int i = 1; i <= nMonomios; ++i)
	{
		if (i<nMonomios)
		{
			switch (aux->grado)
			{
				case 1:
					printf("%dx + ", aux->coeficiente);
					aux = aux->sig;
				break;

				case 0:
					printf("%d + ", aux->coeficiente);
					aux = aux->sig;
				break;

				default:
					printf("%dx^(%d) + ", aux->coeficiente, aux->grado);
					aux = aux->sig;

			}

		}
		else
		{
			switch (aux->grado)
			{
				case 1:
					printf("%dx\n", aux->coeficiente);
					aux = aux->sig;
				break;

				case 0:
					printf("%d\n", aux->coeficiente);
					aux = aux->sig;
				break;

				default:
					printf("%dx^(%d)\n", aux->coeficiente, aux->grado);
					aux = aux->sig;

			}
		}
	}
	printf("\n");	
}

float evaluaPolinomio(monomio *primero, int nMonomios, float x)
{
	float fx = 0;
	monomio *aux;
	aux = (monomio*) malloc(sizeof(monomio));
	aux = primero;
	for (int i = 1; i <= nMonomios; ++i)
	{
		fx = fx + ((aux->coeficiente)*(pow(x,aux->grado)));
		aux = aux->sig;
	}	
	return fx;		
}

void muestraTabla(monomio *primero,  int nMonomios)
{
	printf(" -------------------------------------------\n");
	printf("|          x          |        f(x)         |\n");
	printf(" -------------------------------------------\n");	
	printf("|         0.0         |      %f      |\n",evaluaPolinomio(primero, nMonomios, 0.0));
	printf(" -------------------------------------------\n");
	printf(" -------------------------------------------\n");	
	printf("|         0.5         |      %f      |\n",evaluaPolinomio(primero, nMonomios, 0.5));
	printf(" -------------------------------------------\n");
	printf(" -------------------------------------------\n");	
	printf("|         1.0         |      %f      |\n",evaluaPolinomio(primero, nMonomios, 1.0));
	printf(" -------------------------------------------\n");
	printf(" -------------------------------------------\n");	
	printf("|         1.5         |      %f      |\n",evaluaPolinomio(primero, nMonomios, 1.5));
	printf(" -------------------------------------------\n");
	printf(" -------------------------------------------\n");	
	printf("|         2.0         |      %f      |\n",evaluaPolinomio(primero, nMonomios, 2.0));
	printf(" -------------------------------------------\n");	
	printf(" -------------------------------------------\n");	
	printf("|         2.5         |      %f      |\n",evaluaPolinomio(primero, nMonomios, 2.5));
	printf(" -------------------------------------------\n");		
	printf(" -------------------------------------------\n");	
	printf("|         3.0         |      %f      |\n",evaluaPolinomio(primero, nMonomios, 3.0));
	printf(" -------------------------------------------\n");
	printf(" -------------------------------------------\n");	
	printf("|         3.5         |      %f      |\n",evaluaPolinomio(primero, nMonomios, 3.5));
	printf(" -------------------------------------------\n");
	printf(" -------------------------------------------\n");	
	printf("|         4.0         |      %f      |\n",evaluaPolinomio(primero, nMonomios, 4.0));
	printf(" -------------------------------------------\n");
	printf(" -------------------------------------------\n");	
	printf("|         4.5         |      %f      |\n",evaluaPolinomio(primero, nMonomios, 4.5));
	printf(" -------------------------------------------\n");
	printf(" -------------------------------------------\n");	
	printf("|         5.0         |      %f      |\n",evaluaPolinomio(primero, nMonomios, 5.0));
	printf(" -------------------------------------------\n");	
	printf("Pulse enter para continuar...");
	getchar();
	system("clear");
}

monomio* eliminaMonomio(monomio *primero, int grado, int *nMonomios)
{
	monomio *temp;
	if (primero->grado == grado)
	{
		temp = primero->sig;
		free(primero);
		primero = temp;
		--*nMonomios;
	}
	else
	{
		int contador = 0, control = 0;
		monomio *aux;
		aux = (monomio*) malloc(sizeof(monomio));
		aux = primero;
		for (int i = 1; i <= *nMonomios; ++i)
		{
			if (control == 0)
			{
				contador++;
			}
			if (aux->grado == grado)
			{
				control = 1;
			}
			aux = aux->sig;
		}
		contador--;
		aux = primero;
		for (int i = 1; i < contador; ++i)
		{
			aux = aux->sig;
		}
		temp = aux->sig->sig;
		free(aux->sig);
		aux->sig = temp;
		--*nMonomios;
	}
	return primero;
}