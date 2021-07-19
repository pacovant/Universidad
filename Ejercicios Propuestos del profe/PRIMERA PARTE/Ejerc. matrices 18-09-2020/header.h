#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>

#define TAM 50
#define FILA 8
#define COL 8

void triangIzq_Dp_Ds(int mat[][TAM],int fila,int col);
void triangSup_Dp_Ds(int mat[][TAM],int fila,int col);
void triangDer_Dp_Ds(int mat[][TAM],int fila,int col);
void triangInf_Dp_Ds(int mat[][TAM],int fila,int col);
#endif // HEADER_H_INCLUDED
