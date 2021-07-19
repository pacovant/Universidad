#include "header.h"

void triangIzq_Dp_Ds(int mat[][TAM],int fila,int col)
{
    for(int i=1;i<(fila/2)-1;i++)
    {
        printf("\n");
        for(int j=i-1;j<(col/2)-i-2;j++)
        {
            printf("%d",mat[i][j]);
        }
    }
    printf("\n");
    for(int i=fila-1;i<(fila/2)-1;i--)
    {
        printf("\n");
        for(int j=0;j<fila-i-2;j++)
        {
            printf("%d",mat[i][j]);
        }
    }
}
void triangSup_Dp_Ds(int mat[][TAM],int fila,int col)
{

}
void triangDer_Dp_Ds(int mat[][TAM],int fila,int col)
{

}
void triangInf_Dp_Ds(int mat[][TAM],int fila,int col)
{

}

