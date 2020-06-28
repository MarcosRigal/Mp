#include <stdio.h>
#include <stdlib.h>
#include "E4funciones.h"

int main()
{
	int nMonomios;
	printf("¿Cuantos monomios tendrá el polinomio?\n");
	scanf("%d", &nMonomios);
	getchar();
	if (nMonomios > 0)
	{
		monomio *primero;
		primero = (monomio*) malloc(sizeof(monomio));
		anyadeMonomio(primero, primero, 0, nMonomios);
		system("clear");
		muestraPolinomio(primero, nMonomios);		
		muestraTabla(primero, nMonomios);
		int seleccion;
		printf("Si desea eliminar un monomio, pulse 1. Si desea salir pulse 0: ");
		scanf("%d", &seleccion);
		getchar();
		printf("\n");
		system("clear");
		switch(seleccion)
		{
			int aux;
			monomio *temp;
			case 1:
				temp = primero;
				do
				{
					temp = temp->sig;
				} while (temp->sig != NULL);
				printf("Introduzca el grado del monomio que desea eliminar: ");
				scanf("%d", &aux);
				getchar();
				printf("\n");
				if ((contieneMonomio(primero, aux, nMonomios) == 1) || (temp->grado == aux))
				{
					primero = eliminaMonomio(primero, aux, &nMonomios);
					system("clear");
					muestraPolinomio(primero, nMonomios);
					muestraTabla(primero, nMonomios);
				}
				else
				{
					printf("Error no existe un monomio con dicho grado.\n");
				}

			break;
			
			case 0:
				return 0;
			break;
		}
	}
	else
	{
		printf("Error introduzca un número mayor que 0\n");
	}
	return 0;
}