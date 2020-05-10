#ifndef __E8__
#define __E8__

typedef struct
{
    char titulo [256];
    char autor [256];
    float precio;
    int stock;
} libro;
int existeLibro(const char* nombre, char *titulo);
void introducirNuevoLibro(const char* nombre);
int numeroDeLibros(const char* nombre);
void imprimeLibros(const char* nombre, int nLibros);
int vendeLibro(const char* nombre, char *titulo, int unidades);
void borraLibro(const char* nombre);

#endif