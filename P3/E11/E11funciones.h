#ifndef __E11__
#define __E11__

typedef struct
{
    char titulo [100];
    char autor [50];
    float precio;
    int stock;
} libro;

int existeLibro(const char* nombre, char *titulo);
void introducirNuevoLibro(const char* nombre);
int numeroDeLibros(const char* nombre);
void imprimeLibros(const char* nombre, int nLibros);
int vendeLibro(const char* nombre, char *titulo, int unidades);
int borraLibro(const char* nombre);

#endif