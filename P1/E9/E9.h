#ifndef E9
#define E9
typedef struct
{
	int coeficiente;
	int grado;	
} monomio;
void leerMonomio(monomio polinomio[]);
void imprimirMonomio(monomio polinomio[]);
void monomioMayor(monomio polinomio[], monomio *mayor);
void evaluaPolinomio(monomio polinomio[], int x);
#endif