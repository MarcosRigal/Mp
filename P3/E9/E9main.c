#include <stdio.h>
#include <stdlib.h>
#include "E9funciones.h"

//argv[0] = E9.exe
//argv[1] = fichero.txt
//argv[2] = nº de numeros
//argv[3] = mayor
//argv[4] = menor

int main(int argc, char const *argv[])
{
	if (argc<5)
	{
		printf("Error al ejecutar el programa debe de incluir el nombre del fichero donde desea guardar los numeros así como el nº de números que desea almacenar, el limite superior del intervalo y el inferior, en ese orden.\n");
	}
	if (atoi(argv[2])<1)
	{
		printf("Error introduzca un nº de numeros mayor que 0\n");
	}
	if (atoi(argv[4])>atoi(argv[3]))
	{
		printf("Error la cota inferior no puede ser mayor que la cota superior\n");
	}
	if(rellenaFichero(argv[1], atoi(argv[2]), atoi(argv[4]), atoi(argv[3]))==-1)
	{
		printf("Se ha producido un error al crear el fichero\n");
		return (-1);
	}
	return 0;
}