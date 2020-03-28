#include <stdio.h>
#include <math.h>
#include "E9.h"

void leerMonomio(monomio polinomio[])
{
	for (int i = 0; i < 4; ++i)
	{
		printf("\nIntroduzca el coeficiente del monomio\n");
		scanf("%d", &polinomio[i].coeficiente);
		printf("\nIntroduzca el	grado del monomio\n");
		scanf("%d", &polinomio[i].grado);		
	}

}

void imprimirMonomio(monomio polinomio[])
{
	printf("\nEl polinomio introducido es:\n");
	for (int i = 0; i < 4; ++i)
	{
    	printf("%dx^%d ", polinomio[i].coeficiente, polinomio[i].grado);
		if(i<3)
		{
			printf("+ ");
		}
	}
}

void monomioMayor(monomio polinomio[], monomio *mayor)
{
	for (int i = 0; i <3 ; ++i)
	{
		if(polinomio[i].grado<polinomio[i+1].grado)
		{
			mayor->grado = polinomio[i+1].grado;
			mayor->coeficiente = polinomio[i+1].coeficiente;
		}
	}
}

void evaluaPolinomio(monomio polinomio[], int x){
	int resultado=0;
	for (int i = 0; i < 4; ++i)
	{
		resultado = resultado + (polinomio[i].coeficiente * pow(x, polinomio[i].grado));
	}
	printf("\nEl valor del polinomio para %d es: %d\n", x, resultado );
}