#ifndef __E4__
#define __E4__

struct polinomio
{

	int coeficiente;
	int grado;
	struct polinomio *sig;

};

typedef struct polinomio monomio;

void anyadeMonomio(monomio *nuevo, monomio *primero,int aux, int nMonomios);
int contieneMonomio(monomio *primero, int grado, int nMonomios);
void muestraPolinomio(monomio *primero, int nMonomios);
void muestraTabla(monomio *primero, int nMonomios);
float evaluaPolinomio(monomio *primero, int nMonomios, float x);
monomio* eliminaMonomio(monomio *primero, int grado, int *nMonomios);

#endif