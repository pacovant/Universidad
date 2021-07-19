#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>

#define TAM 20

typedef struct
{
    int dni;
    char apyn[TAM];
    double  sueldo;
}tEmpleado;

typedef struct
{
    int dni;
    char apyn[TAM];
    float promedio;
}tAlumno;

int cargarArch1(char*pArch1);
int cargarArch2(char*pArch2);

int leerArchivo1(FILE *pf,tEmpleado *emp,int cant);
int leerArchivo2(FILE *pf,tAlumno *alu,int cant);

#endif // HEADER_H_INCLUDED
