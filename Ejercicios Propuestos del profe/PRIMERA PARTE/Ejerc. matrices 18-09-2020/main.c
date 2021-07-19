#include "header.h"

/*  Mostrar por pantalla el triangulo que se forma a la lizquierda de las diagonales principal y secundaria.
    Mostrar por pantalla el triangulo que se forma a arriba de las diagonales principal y secundaria.
    Mostrar por pantalla el triangulo que se forma abajo de las diagonales principal y secundaria.
    Mostrar por pantalla el triangulo que se forma a la derecha de las diagonales principal y secundaria.  */

int main()
{

    static int mat[][TAM]={{1,2,3,4,5,6,7,8},
                           {9,0,1,2,3,4,5,6},
                           {7,8,9,0,1,2,3,4},
                           {5,6,7,8,9,0,1,2},
                           {3,4,5,6,7,8,9,0},
                           {1,2,3,4,5,6,7,8},
                           {9,0,1,2,3,4,5,6},
                           {7,8,9,0,1,2,3,4}};



    triangIzq_Dp_Ds(mat,FILA,COL);

    printf("\n\n");
    return 0;
}
