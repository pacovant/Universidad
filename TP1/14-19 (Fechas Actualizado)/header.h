#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#define TAM 7
typedef struct
{
    int d,m,a;
} tFecha;

int Bisiesto(int anio);
int cantDias(int mes,int anio);
int validarFecha(tFecha *f);
int diaSiguiente(tFecha *f);
int sumarFecha(tFecha *f,int n1);
int restarFecha(tFecha *f,int n2);
int totalDias(tFecha *f);
int difFechas(int primero,int segundo);
int diaFecha(int dias,int cant);
#endif // HEADER_H_INCLUDED
