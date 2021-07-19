#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define FIL 20
#define TAM 20

#define REDONDEAR(N,M) ((N-M)>=0.5)? M+1:M
#define MENOR(N1,N2) (N1>N2)? N2:N1

#define INTERCAMBIO(AUX,NUM1,NUM2)  AUX=NUM1\
                                    NUM1=NUM2\
                                    NUM2=AUX



typedef struct datVec
{
    long int suma;
    float promedio;
}vec1;

int ingresoElem(float vec[],int tam);
float valorMin(float vec[],int cant);
float promedio(float vec[],int cant);
void invertirVec(float vec[],int cant);
void grabarVec(float vec[],int cant,FILE *pf);

char*buscarCaracter(char*pVec,char letra);

int pedirDatos(int *pVec,int tam);
int calcularVec(int*pVec,int cant,long int*suma);
vec1 calcularVec1(int*pVec,vec1 x,int cant);

int valorMenor(int n1,int n2);
void intercambiar(int*n1,int*n2);

bool funcion(FILE *pf);

int validarCaracter(char*pVec);
int puntoA(char *pVec,int fil,int col,int*pRep,char*pVec2,int*pLong);
#endif // HEADER_H_INCLUDED
