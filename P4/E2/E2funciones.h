#ifndef __E2__
#define __E2__

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
int ascendente(alumno A1, alumno A2);
int descendente(alumno A1, alumno A2);
void ordenaClase(alumno *clase, int nAlumnos, int (*orden)(alumno, alumno));


#endif