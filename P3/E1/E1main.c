#include <stdio.h>
#include <stdlib.h>
#include "Euclides.h"

int main()
{
	system("clear");
	int x,y;
	printf("Este programa calcula el mínimo como un múltiplo de dos números siguiendo el algoritmo de Euclides\n");
	printf("Introduzca el primer número:\n");
	scanf("%d", &x);
	printf("Introduzca el segundo número\n");
	scanf("%d", &y);
	printf("El maximo como un divisor es: %d\n", calculaEuclides(x,y));
	return 0;
}