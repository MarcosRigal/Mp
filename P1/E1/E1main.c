#include <stdio.h>
#include <stdlib.h>

int main(){
	int a, *b, **c;
	double d, *e, **f;
	char g, *h, **i;
	printf("\n El tamaño de un entero es de: %zu bytes", sizeof(a));
	printf("\n El tamaño de un puntero a entero es de: %zu bytes", sizeof(b));
	printf("\n El tamaño de un doble puntero a entero es de: %zu bytes", sizeof(c));
	printf("\n El tamaño de un flotante es de: %zu bytes", sizeof(d));
	printf("\n El tamaño de un puntero a flotante es de: %zu bytes", sizeof(e));
	printf("\n El tamaño de un doble puntero a flotante es de: %zu bytes", sizeof(f));
	printf("\n El tamaño de un character es de: %zu byte", sizeof(g));
	printf("\n El tamaño de un puntero a un caracter es de: %zu bytes", sizeof(h));
	printf("\n El tamaño de un doble puntero a un caracter es de: %zu bytes", sizeof(i));
	printf("\n");
	return 0;
}