#include "header.h"


int main()
{
  static int mat[][TAM]={ {1,2,3},
                          {4,5,6},
                          {7,8,9}};

  static int mat1[][TAM]={{4},
                          {5},
                          {6}};

  int suma=0,suma1=0,suma2=0,suma3=0,suma4=0,suma5=0,suma6=0,suma7=0,opcion;

   printf("Ejercicio 29:\n-Suma de elementos encima de la diagonal principal(excluyendo esta).\n-Lo mismo para la diagonal secundaria.\n-Lo mismo incluyendo la diagonal.\n-Lo mismo con lo que esta por debajo de la diagonal.\n\nEjercicio 30:Calcule la traza y la suma de la diagonal secundaria.\nEjercicio 31:Determinar si la matriz es diagonal.\nEjercicio 32:Determinar si la matriz es identidad.\nEjercicio 33:Determinar si la matriz cuadrada de orden NxN es simetrica.\nEjercicio 34:Realizar la transpuesta de la matriz cuadrada.\nEjercicio 35:Realizar transpuesta de la matriz.\nEjercicio 36:Realizar el producto de dos matrices de enteros dadas.");
   printf("\n\nIngrese la consigna a realizar: ");
   scanf("%d",&opcion);

   switch(opcion)
   {
        case 29:
                 printf("\n");
                 suma=SumArribDiagPrin(mat,FILA,COL);
                 printf("La suma de elementos superior a la diagonal principal excluyendola es:  %d",suma);
                 suma1=SumArribInclDiagPrin(mat,FILA,COL);
                 printf("\nLa suma de elementos superior a la diagonal principal incluyendola es:  %d",suma1);
                 suma2=SumArribDiagSecu(mat,FILA,COL);
                 printf("\nLa suma de elementos superior a la diagonal secundaria excluyendola es: %d",suma2);
                 suma3=SumArribInclDiagSecu(mat,FILA,COL);
                 printf("\nLa suma de elementos superior a la diagonal secundaria incluyendola es: %d",suma3);
                 suma4=SumAbajoDiagPrin(mat,FILA,COL);
                 printf("\nLa suma de elementos inferior a la diagonal principal excluyendola es:  %d",suma4);
                 suma5=SumAbajoInclDiagPrin(mat,FILA,COL);
                 printf("\nLa suma de elementos superior a la diagonal principal incluyendola es:  %d",suma5);
                 suma6=SumAbajoDiagSecu(mat,FILA,COL);
                 printf("\nLa suma de elementos superior a la diagonal principal excluyendola es:  %d",suma6);
                 suma7=SumAbajoInclDiagSecu(mat,FILA,COL);
                 printf("\nLa suma de elementos superior a la diagonal principal incluyendola es:  %d",suma7);

            break;

        case 30:
                printf("\n");
                suma=trazaMatriz(mat,FILA,COL);
                suma1=sumaDiagSecu(mat,FILA,COL);

                printf("\nEL RESULTADO DE LA TRAZA ES:      %d",suma);
                printf("\nLA SUMA DE DIAGONAL SECUNDARIA ES: %d",suma1);

            break;

        case 31:
                printf("\n");
                if(matDiagonal(mat,FILA,COL)>0)
                {
                    printf("\nLA MATRIZ ES DIAGONAL.");
                }else
                    {
                        printf("\nLA MATRIZ NO ES DIAGONAL.");
                    }
            break;

        case 32:
                printf("\n");


                if(matIdentidad(mat,FILA,COL)>0)
                {
                    printf("\nLA MATRIZ ES LA IDENTIDAD.");
                }else
                    {
                        printf("\nLA MATRIZ NO ES IDENTIDAD.");
                    }
            break;

        case 33:
                printf("\n");
                if(matSimetrica(mat,FILA,COL)>0)
                    printf("\nLA MATRIZ ES SIMETRICA.");
                 else
                    printf("\nLA MATRIZ NO ES SIMETRICA.");
            break;

        case 34:
                printf("\n");
                if(transponerMat(mat,FILA,COL)>0)
               {
                 printf("\nLA MATRIZ TRANSPUESTA ES: \n");
                 mostrarMat(mat,FILA,COL);
               } else
                    printf("\nLA MATRIZ NO ES CUADRADA.");
            break;

        case 35:
                printf("\n");
                transpMat(mat,FILA,COL);
                printf("\nLA MATRIZ TRANSPUESTA ES: ");
                mostrarMat(mat,FILA,COL);
            break;

        case 36:
                printf("\n");
                    multiplicarMatrices(mat,mat1,FILA,COL,FILAA,COLL);

   }
   printf("\n");
    return 0;
}
