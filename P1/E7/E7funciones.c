#include <stdio.h>
#include <math.h>
#include "E7.h"

void lee(int *v, int n){
	for(int i=0; i<n; i++){
		printf("\nIntorduzca un valor: ");
		scanf("%d", &(*(v+i)));
	}	
}

void imprime(int *v, int n){
	printf("\n");
	for(int i=0; i<n; i++){
		printf("%d",*(v+i));
		printf(", ");
	}
	printf("\n");
}

void estadisticasVector(int *v, int n, float *media, float *varianza, float *desviaciontipica){
	*media=0;
	for(int i=0; i<n; i++){
		*media= (*media + *(v+i));
	}
	*media = *media/n;
	*varianza=0;
	for (int i = 0; i < n; ++i)
	{
		*varianza = *varianza + pow((*(v+i) - *media), 2);
	}
	*varianza = *varianza/n;
	*desviaciontipica = sqrt(*varianza);
}