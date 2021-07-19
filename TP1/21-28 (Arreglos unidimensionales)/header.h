#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
//#define TAM 7

int vecInsert(int *pVec,int ce,int tam,int num,unsigned pos);   //-
int eliminarPos(int *pVec,int ce,unsigned pos);
int eliminarElem(int *pVec,int ce,int num);
int eliminarElemRep(int *pVec,int ce,int num);
void mostrarVec(int *pVec,int ce);                              //- estas 5 funciones son de los puntos 21 - 26

int cantidadCaracteres(char *pCad);                 //*
void quitarEspacio(char *pCad);
char*invertirCadena(char *pCad);
char*copiarCadena(char *pCad1,char const*pCad);
int compararCadena(char *pCad,char *pCad1);         //* estas 5 funciones la hice para ejercicio 27

int digitoValido(char *pDig);
int caracterAentero(char* pDig);                    // esta funcion es del punto 28

#endif // HEADER_H_INCLUDED
