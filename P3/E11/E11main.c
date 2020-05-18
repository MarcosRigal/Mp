#include <stdio.h>
#include <stdlib.h>
#include "E11funciones.h"
int main(int argc, char const *argv[])
{
	system("clear");
	if (argc<2)
	{
		printf("Error introduzca el nombre del fichero.\n");
		printf("Pulse enter para salir\n");
		getchar();
		system("clear");
		return (-1);
	}
	int seleccion;
	do
	{

		printf("Introduzca el numero que corresponde a la operación que desea realizar\n");
		printf("Pulse 1 para comprobar la existencia de un determinado libro en el stock. \n");
		printf("Pulse 2 para introducir un nuevo libro en el stock.\n");
		printf("Pulse 3 para contar el número de libros diferentes que hay en el stock.\n");
		printf("Pulse 4 para listar los libros en el stock.\n");
		printf("Pulse 5 para vender n unidades de un libro\n");
		printf("Pulse 6 para borrar aquellos registros con 0 unidades disponibles.\n");
		printf("Pulse 0 para salir\n");
		printf("Su elección: ");
		scanf("%d", &seleccion);
		system("clear");
		switch (seleccion)
		{
		    case 1:
		    	printf("Introduzca el titulo del libro que desea buscar:\n");
		    	getchar();
		    	char titulo[100];
				fgets(titulo, 100, stdin);
		    	int estado = existeLibro(argv[1], titulo);
		    	switch(estado)
		    	{    	
		    		case 0:
		    			printf("Error no existe el archivo de almacenamiento\n");
						printf("Pulse enter para continuar...");
			    		getchar();
		    		break;
		    		case 1:
		    			printf("No, el libro no esta en stock\n");
						printf("Pulse enter para continuar...");
			    		getchar();
		    		break;

		    		case 2:
		    			printf("Si, el libro esta en stock\n");
			    		printf("Pulse enter para continuar...");
			    		getchar();
		    		break;

		    	}
		      break;

		    case 2:
		    	introducirNuevoLibro(argv[1]);
		      break;

		    case 3:
		    	printf("Hay: %d libros en stock\n", numeroDeLibros(argv[1]));
		      	printf("\nPulse enter para continuar...");
			    getchar();
			    getchar();
		      break;

		    case 4:
		    	imprimeLibros(argv[1]);
		    	printf("\nPulse enter para continuar...");
			    getchar();
			    getchar();
		      break;
		    case 5:
		    	printf("Introduzca el titulo del libro que desea vender:\n");
		    	getchar();
		    	char title[100];
				fgets(title, 100, stdin);
		    	int status = existeLibro(argv[1], title);
		    	switch(status)
		    	{    	
		    		case 0:
		    			printf("Error no existe el archivo de almacenamiento\n");
						printf("Pulse enter para continuar...");
			    		getchar();
		    		break;
		    		case 1:
		    			printf("No se puede vender, el libro pues este no se encuentra en stock\n");
						printf("Pulse enter para continuar...");
			    		getchar();
		    		break;

		    		case 2:
		    			printf("¿Cuantas unidades del libro desea vender?\n");
		    			int unidades;
		    			scanf("%d",&unidades);
		    			getchar();
						vendeLibro(argv[1], title, unidades);
						printf("La venta se comletó con exito.\n");
			    		printf("Pulse enter para continuar...");
			    		getchar();
		    		break;

		    	}
		      break;

		    case 6:
		    	borraLibro(argv[1]);
		     	printf("Borrado completado.\n");
		     	printf("Pulse enter para continuar...");
		     	getchar();
		     	getchar();			  
			  break;
		    
		    case 0:		    
		    
		      break;

		    default:
		     	printf("Error no existe ninguna operación asociada al numero introducido.\n");
		     	printf("Pulse enter para continuar...");
		     	getchar();
		     	getchar();
		}
		system("clear");
	}while(seleccion!=0);
	return 0;
}