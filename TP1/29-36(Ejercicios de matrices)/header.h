#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>


#define FILA 3
#define COL  3
#define FILAA 3
#define COLL 1
#define TAM 20



int SumArribDiagPrin(int mat[][TAM],int fil,int col);
int SumArribInclDiagPrin(int mat[][TAM],int fil,int col);
int SumArribDiagSecu(int mat[][TAM],int fil,int col);
int SumArribInclDiagSecu(int mat[][TAM],int fil,int col);
int SumAbajoDiagPrin(int mat[][TAM],int fil,int col);
int SumAbajoInclDiagPrin(int mat[][TAM],int fil,int col);
int SumAbajoDiagSecu(int mat[][TAM],int fil,int col);
int SumAbajoInclDiagSecu(int mat[][TAM],int fil,int col);                 // Aca termina el punto 29

int trazaMatriz(int mat[][TAM],int fil,int col);
int sumaDiagSecu(int mat[][TAM],int fil,int col);                        //Aca termina el punto 30

int matDiagonal(int mat[][TAM],int fil,int col);                        //Punto 31

int matIdentidad(int mat[][TAM],int fil,int col);                       //Punto 32

int matSimetrica(int mat[][TAM],int fil,int col);                      //Punto 33

int transponerMat(int mat[][TAM],int fil,int col);                     //Punto 34

void transpMat(int mat[][TAM],int fil,int col);                        //Punto 35

void multiplicarMatrices(int mat[][TAM],int mat1[][TAM],int fila,int col,int fila1,int col1);     //Punto 36

void mostrarMat(int mat[][TAM],int fil,int col);


#endif // HEADER_H_INCLUDED
