#include <stdio.h>
#include <stdlib.h>
#include "E3funciones.h"

//argv[1] = datos.bin


int main(int argc, char const *argv[])
{
	system("clear");
	if (argc<2)
	{
		printf("Error faltan datos para ejecutar el programa. Por favor llame al programa de esta forma:\n\n");
		printf("./E2.exe nombre_del_fichero_de_alumnos\n\n");
		printf("Pulse enter para salir...\n");
		getchar();
		system("clear");
		return (-1);
	}
	int existe = existeFichero(argv[1]);
   	switch(existe)
   	{    	
  		case 0:
  			printf("Error no existen los archivos pasados como argumento.\n");
			printf("Pulse enter para continuar...");
    		getchar();
    		return 0;
   		break;
   		case 1: ;
   			alumno *clase;
   			clase = reservaMemoriaClase(numeroDeAlumnos(argv[1]));
   			rellenaClase(argv[1], clase, numeroDeAlumnos(argv[1]));
        qsort(clase,numeroDeAlumnos(argv[1]), sizeof(alumno), ascendente);
 	  		for (int i = 0; i < numeroDeAlumnos(argv[1]); ++i)
        {
          printf("%s\n",clase[i].nombre);
          printf("%d\n",clase[i].dni);
          printf("%f\n",clase[i].nota);
          printf("\n");
        }
        free(clase);
  		break;
   	}
	return 0;
}