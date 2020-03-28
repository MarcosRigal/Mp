#include <stdio.h>
#include "E9.h"

int main()
{
	int x;
	monomio mayor;
	monomio polinomio[4];
	leerMonomio(polinomio);
	monomioMayor(polinomio, &mayor);
	imprimirMonomio(polinomio);
	printf("\nEl monomio mayor es: %dx^%d\n", mayor.coeficiente, mayor.grado);
	printf("\nIntroduzca el valor de x para el que desea calcular el polinomio\n");
	scanf("%d",&x);
	evaluaPolinomio(polinomio, x);
	return 0;
}