/**
  @file E6inputoutput.h
  @brief Cabecera de las funciones que introducen o leen datos de la matriz
  @author Marcos Rivera Gavilán
*/

/* Se introducen las guardas de seguridad del fichero de cabecera*/
#ifndef E6inputoutput
#define E6inputoutput

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


/*!_E6inputoutput */
#endif