#include "header.h"
int main()
{
    char cadena[]={"    biONDI ,   pEPE Alberto"};


    printf("LA CADENA ORIGINAL ES:");
    printf("\n%s",cadena);

    if(cadenaCorrecta(cadena)>0)
    {
        printf("\n\nLA CADENA ES VALIDA.");

        printf("\n\nQUITAMOS ESPACIOS EN BLANCO.");
        quitarEspacio(cadena);
        printf("\n%s",cadena);
        printf("\n\nTRANSFORMAMOS PRIMER LETRA DE CADA PALABRA A MAYUSCULA Y LAS DEMAS A MINUSCULA.");
        transformarLetras(cadena);
        printf("\n%s",cadena);
        printf("\n\nNORMALIZAMOS CADENA A FORMATO (APELLIDO(S)), (Nombre)");
        normalizarCadena(cadena);
        printf("\n%s",cadena);
    } else
        {
            printf("\n\nLA CADENA CONTIENE CARACTERES NO VALIDOS.");
        }


    printf("\n\n");
    return 0;
}
