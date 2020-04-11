/**
  @file E6math.h
  @brief Cabecera de las funciones que calculan algo relacionado con la matriz
  @author Marcos Rivera Gavilán
*/

/* Se introducen las guardas de seguridad del fichero de cabecera*/
#ifndef E6math
#define E6math

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

/*!_E6math */
#endif