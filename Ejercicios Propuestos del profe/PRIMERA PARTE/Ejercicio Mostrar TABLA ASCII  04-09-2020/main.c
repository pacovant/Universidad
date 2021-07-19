/* Ejercicio de Chars:

Deben imprimir por pantalla, en formato de tabla, con titulos y bien tabulado todos los caracteres visualizables de la tabla ASCII, con sus valores decimal, hexadecimal, octal, binario y caracter.

Luego pueden empezar a resolver su version de las funciones de la biblioteca ctype.  */
#include "header.h"

int main()
{
    printf("\n Decimal\tHexadecimal\t Octal\t   Caracter   Binario");

    printf("\n");
    for(int i=0;i<256;i++)
    {

        printf("\n  %d \t\t %x \t\t   %o\t",i,i,i);

        if(i>=33)
        {
            printf("\t%c\t",i);
        } else
            {
                printf("\t\t");
            }
        if(i>=1)
        {
          printf("\t",dectoBin(i));
        }

    }

}


