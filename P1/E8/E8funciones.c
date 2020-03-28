#include <ctype.h>
#include <stdio.h>
#include "E8.h"

void estadisticasCadena(char cadena[], int *numeroDigitos, int *mayusculas, int *minusculas, int *espacios){
	for(int i=0; cadena[i] != '\0'; i++){
		if( isdigit(cadena[i]) !=0 ){
			++*numeroDigitos;
		}
		if( isupper(cadena[i]) !=0 ){
			++*mayusculas;
		}
		if( islower(cadena[i]) !=0 ){
			++*minusculas;
		}
		if( cadena[i] == ' ' ){
			++*espacios;
		}
		
	}
}