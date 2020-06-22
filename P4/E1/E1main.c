#include <stdlib.h>
#include <stdio.h>
#include "E1funciones.h"

int main(int argc, char const *argv[])
{
	system("clear");
	int max, seleccion;
	float (*funcion) (int);
	printf("Este programa calcula la media de los valores de la función seleccionada en el intervalo seleccionado.\n");
	printf("Introduzca el límite superior del intervalo: ");
	scanf("%d", &max);
	do
	{
		system("clear");
		printf("De que función desea calcular la media:\n");
		printf(" (1). f(x) = 3*e^(x) – 2x\n");
		printf(" (2). g(x) = -x * sin(x) +1.5 (Atención el seno está en radianes)\n");
		printf(" (3). z(x) = x^(3) -2x +1\n");
		printf(" (0). Salir\n");
		printf(" Su elección: ");
		scanf("%d", &seleccion);
		getchar();
		switch(seleccion)
		{
			case 1:
				funcion = &mediafx;
			break;
			
			case 2:
				funcion = &mediagx;
			break;
			
			case 3:
				funcion = &mediazx;
			break;

			case 0:
				return 0;
			break;
			
			default:
				system("clear");
				printf("Error seleccione una opción valida\n");
				printf("Pulse enter para volver al menu de seleccion\n");
				getchar();
		}
		system("clear");	
		printf("La media es: %f\n", (*funcion)(max));
		printf("Pulse enter para continuar:");
		getchar();
	}while(seleccion!=0);
	return 0;
}