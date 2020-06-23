#ifndef __E3__
#define __E3__

typedef struct
{
	char nombre[50];
	int dni;
	float nota;
} alumno;

int existeFichero(const char* alumnos);
int numeroDeAlumnos(const char* nombre);
alumno *reservaMemoriaClase(int nAlumnos);
void rellenaClase(const char* alumnos, alumno *clase, int nAlumnos);
int ascendente(const void *A1, const void *A2);

#endif