#include <stdio.h>
#include "E6.h"

int main(){
	int num1, num2, resultado;
	printf("\nIntroduce un numero: " );
	scanf("%d", &num1);
	printf("\nIntroduce otro numero: ");
	scanf("%d", &num2);
	printf("\nEl mínimo es: %d", minimo(num1, num2) );
	minimo_referencia(num1, num2, &resultado);
	printf("\nEl minimo por referencia es: %d", resultado);
	printf("\n");
}