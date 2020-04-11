/**
  @file E6memory.h
  @brief Cabecera de las funciones que interactuan con la memoria de la matriz
  @author Marcos Rivera Gavilán
*/

/* Se introducen las guardas de seguridad del fichero de cabecera*/
#ifndef E6memory
#define E6memory

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

/*!_E6memory */
#endif