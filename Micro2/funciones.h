#ifndef __funciones__
#define __funciones__

typedef struct
{
    long int dni;
    char nombre_apellidos [256];
    float nota1;
    float nota2;
    float nota3;
    float media;
} alumno;

int existenFicheros(const char* notas, const char* alumnos);
int numeroDeAlumnos(const char* nombre);
alumno *reservaMemoriaClase(int nAlumnos);
void rellenaClase(const char* notas, const char* alumnos, alumno *clase, int nAlumnos);
void calculaMedia(const char* nota_media, alumno *clase, int nAlumnos);

#endif