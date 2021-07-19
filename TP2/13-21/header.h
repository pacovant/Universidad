#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>

#define TAM 20
typedef struct
{
    int dni;
    char ap[TAM];
    char nom[TAM];
    double  sueldo;
}tEmpleado;

typedef struct
{
    int dni;
    char ap[TAM];
    char nom[TAM];
    float promedio;
}tAlumno;

int cargarArch1(char*pAlu);
int cargarArch2(char*pEmpl);
#endif // HEADER_H_INCLUDED
