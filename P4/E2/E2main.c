#include <stdio.h>
#include <stdlib.h>
#include "E2funciones.h"

//argv[1] = orden(Ascendente = 1, Descendente = 2)
//argv[2] = datos.bin


int main(int argc, char const *argv[])
{
	system("clear");
	if (argc<3)
	{
		printf("Error faltan datos para ejecutar el programa. Por favor llame al programa de esta forma:\n\n");
		printf("./E2.exe (Si desea ordenarlos de forma ascedente ponga aquí 1, si desea ordenarlos de forma descendente) nombre_del_fichero_de_alumnos\n\n");
		printf("Pulse enter para salir...\n");
		getchar();
		system("clear");
		return (-1);
	}
	int existen = existeFichero(argv[2]);
   	switch(existen)
   	{    	
  		case 0:
  			printf("Error no existen los archivos pasados como argumento.\n");
			printf("Pulse enter para continuar...");
    		getchar();
    		return 0;
   		break;
   		case 1: ;
   			alumno *clase;
   			clase = reservaMemoriaClase(numeroDeAlumnos(argv[2]));
   			rellenaClase(argv[2], clase, numeroDeAlumnos(argv[2]));
   			int orden = atoi(argv[1]);
   			int (*funcion) (alumno, alumno);
   			switch(orden)
   			{
   				case 1:
   					funcion = &ascendente;
   					ordenaClase(clase, numeroDeAlumnos(argv[2]), funcion);
   				break;

   				case 2:
   					funcion = &descendente;
   					ordenaClase(clase, numeroDeAlumnos(argv[2]), funcion);
   				break;

   				default:
   					printf("Error el numero introducido no se corresponde con ninún orden.\n");
   					printf("Introduzca 1 para ordenarlos de forma ascedente\n");
   					printf("Introduzca 2 para ordenarlos de forma descendente\n");
   			}
 			free(clase);
		break;
   	}
	return 0;
}