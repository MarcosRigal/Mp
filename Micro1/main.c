/**
	@file main.c
	@brief Este archivo almacena el main del ejercicio propuesto para el micro 1.
	@author Marcos Rivera Gavilán
	@date 13/04/2020
*/

#include <stdlib.h>
#include <stdio.h>
#include "funciones.h"

/**
	@fn int main ()
	@brief Funcion main()
	@return Devuelve un 0 si todo ha funcionado correctamente.
*/

int main()
{
	system("clear");
	int nFil, nCol, divisibles=0, suma=0;
	int **matriz;
	printf("Introduzca el numero de filas\n");
	scanf("%d",&nFil);
	printf("\nIntroduzca el numero de columnas\n");
	scanf("%d",&nCol);
	matriz = reservarMemoria ( nFil, nCol);
	rellenaMatriz(matriz, nFil, nCol);
	imprimeMatriz(matriz, nFil, nCol);
	divisibleSuma(matriz, nFil, nCol, &divisibles, &suma);
	printf("\nLos numeros divisibles entre 3 son: %d y la suma de estos es: %d\n", divisibles, suma);
	liberarMemoria( matriz, nFil);
	printf("\n");
	return 0;
}

/**
	@mainpage Introducción
	Este programa implementa de manera secuencial las funciones solicitadas para la prueba.
*/