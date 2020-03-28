#include <stdio.h>
#include "E7.h"

int main(){
	int n;
	float media, varianza, desviaciontipica;
	printf("\nEste programa devuelve las estadísticas del vector introducido por pantalla");
	printf("\nIntroduzca el tamaño del vector: ");
	scanf("%d", &n);
	int v[n];
	lee(v, n);
	imprime(v, n);
	estadisticasVector(v, n, &media, &varianza, &desviaciontipica);
	printf("\nLa media es:%f", media);
	printf("\nLa varianza es: %f", varianza);
	printf("\nLa desviacion tipica es: %f", desviaciontipica);
	printf("\n");
}