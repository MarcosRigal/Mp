
#include <stdio.h>
#include "E8.h"

int main(){
	int numeroDigitos=0, mayusculas=0, minusculas=0, espacios=0;
	char cadena[256];
	printf("\nIntroduzca una cadena de caracteres para obtener sus estadísticas");
	printf("\n");	
	printf("\n");
	scanf(" %[^\n]", cadena);
	estadisticasCadena(cadena, &numeroDigitos, &mayusculas, &minusculas, &espacios);
	printf("\nEl numero de digitos es: %d.", numeroDigitos);
	printf("\nHay: %d mayusculas.", mayusculas);
	printf("\nHay: %d minusculas.", minusculas);
	printf("\nHay: %d espacios.", espacios);
	printf("\n");
	printf("\n");
	return 0;
}