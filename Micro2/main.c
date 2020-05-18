#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

//argv[1] = notas.txt
//argv[2] = alumnos.txt
//argv[3] = nota_media.txt


int main(int argc, char const *argv[])
{
	system("clear");
	if (argc<4)
	{
		printf("Error faltan archivos para ejecutar el programa. Por favor llame al programa de esta forma:\n\n");
		printf("./Micro2.exe nombre_del_fichero_de_notas nombre_del_fichero_de_alumnos nombre_del_fichero_resultado\n\n");
		printf("Pulse enter para salir...\n");
		getchar();
		system("clear");
		return (-1);
	}
	int existen = existenFicheros(argv[1], argv[2]);
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
   			rellenaClase(argv[1], argv[2], clase, numeroDeAlumnos(argv[2]));
 			calculaMedia(argv[3], clase, numeroDeAlumnos(argv[2]));
 			free(clase);
		break;
   	}
	return 0;
}