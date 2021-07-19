#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED

#include <stdio.h>

typedef struct
{
    int dia;
    int mes;
    int anio;
}  f_info;

f_info fecha;

//int bisiesto(f_info*p);
int validar(f_info*p);
void mostrar(f_info*p);
void sumar(f_info*p, int *n);

#endif // HEADER_H_INCLUDED
