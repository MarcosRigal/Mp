/**
  @file E6.h
  @brief Fichero que incluye la cabecera de las funciones.
  @author Marcos Rivera Gavilán
*/

/* Se introducen las guardas de seguridad del fichero de cabecera*/
#ifndef E6
#define E6

/**
	@fn void rellenaMatriz (int **matriz, int nFil, int nCol)
	@brief Funcion que rellena la matriz
	@param **matriz Matriz que se va a rellenar
	@param nFil Numero de filas de la matriz
	@param nCol Numero de columnas de la matriz
	@return No devuelve nada

	La función recibe una matriz y la rellena con elementos 
*/

void rellenaMatriz (int **matriz, int nFil, int nCol);

/**
	@fn void imprimeMatriz (int **matriz, int nFil, int nCol)
	@brief Funion que imprimer por terminal los valores de la matriz
	@param **matriz Matriz que se va a imprimir
	@param nFil Numero de filas de la Matriz
	@param nCol Numero de columnas de la matriz

	La función recibe una matriz y la imprime por pantalla.
*/

void imprimeMatriz (int **matriz, int nFil, int nCol);

/**
	@fn int * minCol (int **matriz, int nFil, int nCol)
	@brief Funcion que busca el minimo de cada columna de la matriz
	@param **matriz Matriz en la que se va a buscar
	@param nFil Numero de filas de la matriz
	@param nCol Numero de columnas de la matriz
	@return Un puntero simple que apunta a la dirección de la memoria reservada para el vector de enteros que
	almacena los minimos.

	La función recibe el numero de filas y de columnas y reserva memoria para una matriz de esas dimensiones
*/
int * minCol (int **matriz, int nFil, int nCol);

/**
	@fn int ** reservarMemoria (int nFil, int nCol)
	@brief Funcion que reserva memoria para la matriz
	@param nFil Numero de filas de la matriz
	@param nCol Numero de columnas de la matriz
	@return Un puntero doble que apunta a la dirección de la memoria reservada

	La función recibe el numero de filas y de columnas y reserva memoria para una matriz de esas dimensiones
*/

int ** reservarMemoria (int nFil, int nCol);

/**
	@fn void liberarMemoria (int **matriz, int nFil)
	@brief Funcion que libera la memoria reservada para la matriz
	@param **matriz Matriz que se va a liberar
	@param nFil Numero de filas de la matriz
	@return No devuelve nada

	La función recibe una matriz y su numero de filas y libera dicha memoria.
*/

void liberarMemoria(int **matriz, int nFil);

/*!_E6 */
#endif
