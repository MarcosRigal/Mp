#include <stdio.h>
#include <stdlib.h>
#include "E7funciones.h"

int main(int argc, char const *argv[])
{
	system("clear");
	if (argc<2)
	{
		printf("Error introduzca el nombre del fichero que desea abrir.\n");
		return -1;
	}
	printf("Este programa calcula la media de los numeros pares que hay en un fichero.\n");
	printf("La media de los valores pares del fichero %s es: %f\n",argv[1], mediaFichero(argv[1]));

	return 0;
}