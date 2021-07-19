#include "header.h"

int SumArribDiagPrin(int mat[][TAM],int fil,int col)
{
    int suma=0;
    for(int i=0;i<fil-1;i++)
    {
        for(int j=i+1;j<col;j++)
        {
            suma+=mat[i][j];
        }
    }

    return suma;
}

int SumArribInclDiagPrin(int mat[][TAM],int fil,int col)
{
    int suma=0;
    for(int i=0;i<fil;i++)
    {
        for(int j=i;j<col;j++)
        {
            suma+=mat[i][j];
        }
    }

    return suma;
}

int SumArribDiagSecu(int mat[][TAM],int fil,int col)
{
    int suma=0;
    for(int i=0;i<fil;i++)
    {
        for(int j=0;j<col-1-i;j++)
        {
            suma+=mat[i][j];
        }
    }

    return suma;
}

int SumArribInclDiagSecu(int mat[][TAM],int fil,int col)
{
    int suma=0;
    for(int i=0;i<fil;i++)
    {
        for(int j=0;j<col-i;j++)
        {
            suma+=mat[i][j];
        }
    }

    return suma;
}


int SumAbajoDiagPrin(int mat[][TAM],int fil,int col)
{
    int suma=0;
    for(int i=1;i<fil;i++)
    {
        for(int j=0;j<i;j++)
        {
            suma+=mat[i][j];
        }
    }

    return suma;
}

int SumAbajoInclDiagPrin(int mat[][TAM],int fil,int col)
{
    int suma=0;
    for(int i=0;i<fil;i++)
    {
        for(int j=0;j<=i;j++)
        {
            suma+=mat[i][j];
        }
    }

    return suma;
}

int SumAbajoDiagSecu(int mat[][TAM],int fil,int col)
{
    int suma=0;
    for(int i=2;i>0;i--)
    {
        for(int j=2;j>=col-i;j--)
        {
            suma+=mat[i][j];
        }
    }

    return suma;
}

int SumAbajoInclDiagSecu(int mat[][TAM],int fil,int col)
{
    int suma=0;
    for(int i=0;i<fil;i++)
    {
        for(int j=col-1;j>=col-1-i;j--)
        {
            suma+=mat[i][j];
        }
    }

    return suma;
}

int trazaMatriz(int mat[][TAM],int fil,int col)
{
    int suma=0;
    for(int i=0;i<fil;i++)
    {
        for(int j=i;j<=i;j++)
        {
            suma+=mat[i][j];
        }
    }
     return suma;
}
int sumaDiagSecu(int mat[][TAM],int fil,int col)
{
    int suma=0;
    for(int i=0;i<fil;i++)
    {
        for(int j=col-1-i;j<=col-1-i;j++)
        {
            suma+=mat[i][j];
        }
    }
     return suma;
}

int matDiagonal(int mat[][TAM],int fil,int col)
{
    int cont=0,suma=0;

    if(fil==col)
    {
        for(int i=0;i<fil;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(i==j && mat[i][j]!=0)
            {
                cont++;
            } else
              {
                 suma+=mat[i][j];
              }
        }
    }
     return suma==0 && cont==fil ? 1:0 ;
    } else
        return 0;

}


int matIdentidad(int mat[][TAM],int fil,int col)
{
    int cont=0,suma=0;

    if(fil==col)
    {
        for(int i=0;i<fil;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(i==j && mat[i][j]==1)
            {
                cont++;
            } else
              {
                 suma+=mat[i][j];
              }
        }
    }
     return suma==0 && cont==fil ? 1:0 ;
    } else
        return 0;

}


int matSimetrica(int mat[][TAM],int fil,int col)
{
    int mat1[FILA][COL]={0};
    int cont=0;

     if(fil==col)
     {
       for(int i=0;i<fil;i++)
        {
          for(int j=0;j<col;j++)
           {
             mat1[i][j]=mat[j][i];
           }
        }

         for(int i=0;i<fil;i++)
         {
           for(int j=0;j<col;j++)
            {
              if(mat[i][j]==mat1[i][j])
              {
                cont++;
              }
            }
         }
        return cont==fil*col ? 1:0;
    } else
        return 0;
}

int transponerMat(int mat[][TAM],int fil,int col)
{
   int mat1[FILA][COL]={};

   if(fil==col)
   {
     for(int i=0;i<fil;i++)
      {
        for(int j=0;j<col;j++)
         {
            mat1[i][j]=mat[j][i];
         }
      }

     for(int i=0;i<fil;i++)
     {
        for(int j=0;j<col;j++)
         {
            mat[i][j]=mat1[i][j];
         }
     }
   } else
      {
        return 0;
      }

    return 1;
}

void transpMat(int mat[][TAM],int fil,int col)
{
       int mat1[FILA][COL]={};

    for(int i=0;i<fil;i++)
    {
      for(int j=0;j<col;j++)
       {
          mat1[i][j]=mat[j][i];
       }
    }

    for(int i=0;i<fil;i++)
    {
        for(int j=0;j<col;j++)
        {
            mat[i][j]=mat1[i][j];
        }
    }
}


void multiplicarMatrices(int mat[][TAM],int mat1[][TAM],int fila,int col,int fila1,int col1)
{
    int mat2[TAM][TAM]={0};          //si a la fila no le pongo un valor no se inicializa todo en 0 y me da mal la segunda fila en mat2.

    if(col==fila1)
     {
        for(int i=0;i<fila;i++)
        {
            for(int j=0;j<col1;j++)
            {
                for(int k=0;k<fila;k++)
                {
                    mat2[i][j]=mat2[i][j]+ mat[i][k]*mat1[k][j];
                }
            }
        }
        printf("\nLA MATRIZ RESULTANTE ES:\n");
        mostrarMat(mat2,fila,col1);
     } else
        {
          printf("\nEL PRODUCTO DE MATRICES NO SE PUEDE REALIZAR.");
        }

}

void mostrarMat(int mat[][TAM],int fil,int col)
{

    for(int i=0;i<fil;i++)
    {
        printf("\n");
        printf("\t");
        for(int j=0;j<col;j++)
        {
            printf(" %d ",mat[i][j]);
        }
    }
}
