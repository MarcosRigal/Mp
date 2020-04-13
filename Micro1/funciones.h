/**
 	@file funciones.h
 	@brief Fichero que incluye la cabecera de las funciones.
	@author Marcos Rivera Gavilán
	@date 13/04/2020
*/

/* Se introducen las guardas de seguridad del fichero de cabecera.*/
#ifndef __M1__
#define __M1__

/**
	@fn void rellenaMatriz (int **matriz, int nFil, int nCol)
	@brief Funcion que rellena la matriz.
	@param **matriz Matriz que se va a rellenar.
	@param nFil Numero de filas de la matriz.
	@param nCol Numero de columnas de la matriz.
	@return No devuelve nada.

	La función recibe una matriz y la rellena con elementos. 
*/

void rellenaMatriz (int **matriz, int nFil, int nCol);

/**
	@fn void imprimeMatriz (int **matriz, int nFil, int nCol)
	@brief Funion que imprimer por terminal los valores de la matriz.
	@param **matriz Matriz que se va a imprimir.
	@param nFil Numero de filas de la Matriz.
	@param nCol Numero de columnas de la matriz.
	@return No devuelve nada.

	La función recibe una matriz y la imprime por pantalla.
*/

void imprimeMatriz (int **matriz, int nFil, int nCol);

/**
	@fn void divisibleSuma (int **matriz, int nFil, int nCol, int *divibles, int *suma)
	@brief Funcion que calcula los elementos que son divisibles entre tres de la matriz y los suma.
	@param **matriz Matriz con la que vamos a trabajar.
	@param nFil Numero de filas de la matriz.
	@param nCol Numero de columnas de la matriz.
	@param *divisibles Numero de elementos divisibles entre tres.
	@param *suma Resultado de sumar los elementos divisibles entre 3.
	@return No devuelve nada.

	La función recibe la matriz, su numero de filas y su numero de columnas y calcula el numero de elementos divisibles entre tres y la suma de estos.
*/

void divisibleSuma (int **matriz, int nFil, int nCol, int *divibles, int *suma);


/**
	@fn int ** reservarMemoria (int nFil, int nCol)
	@brief Funcion que reserva memoria para la matriz.
	@param nFil Numero de filas de la matriz.
	@param nCol Numero de columnas de la matriz.
	@return Un puntero doble que apunta a la dirección de la memoria reservada.

	La función recibe el numero de filas y de columnas y reserva memoria para una matriz de esas dimensiones.
*/

int ** reservarMemoria (int nFil, int nCol);

/**
	@fn void liberarMemoria (int **matriz, int nFil)
	@brief Funcion que libera la memoria reservada para la matriz.
	@param **matriz Matriz que se va a liberar.
	@param nFil Numero de filas de la matriz.
	@return No devuelve nada.

	La función recibe una matriz y su numero de filas y libera dicha memoria.
*/

void liberarMemoria(int **matriz, int nFil);

/*!__M1__ */
#endif
