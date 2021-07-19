#include "header.h"

int main()
{
    char cadena[20];

      printf("Ingrese una cadena de texto: ");
      gets(cadena);
      printf("\nLa cadena es: %s",cadena);


//        int isAlnum(char c);
//        int isAlpha(char c);
//        int isAscii(int n);   este es en entero en la tabla ascii.
//        int isCntrl(int n);   este es en entero en la tabla ascii.
//        int isAdigit(int n);
//        int isAgraph(int x);  este es en entero en la tabla ascii.
//        int isLower(char c);
//        int isPrint(char c);  este es en entero en la tabla ascii.
//        int isPunct(char c);
//        int isSpace(char c);
//        int isUpper(char c);
//        int isXdigit(char c);

    int f=strlen(cadena);


    for(int i=0;i<f;i++)
    {
         if(isAlnum(cadena[i])>0)
        ;
         else
            printf("\n1° %c No es un caracter admisible.",cadena[i]);
            printf("\n");
    }

     printf("\n");
     printf("\n");

    for(int i=0;i<f;i++)
    {
          if(isAlpha(cadena[i])>0)
                ;
            else
                printf("\n2° %c No es una letra Alfabetica.",cadena[i]);
                printf("\n");
    }

     printf("\n");
     printf("\n");

    for(int i=0;i<f;i++)
    {
            if(isAscii(cadena[i])>0)
            ;
            else
             printf("\n3° %c No es Caracter Ascii Imprimible.",cadena[i]);
             printf("\n");
    }

     printf("\n");
     printf("\n");

    for(int i=0;i<f;i++)
    {
            if(isCntrl(cadena[i])>0)
                ;
            else
                printf("\n4° %d No es caracter de control.",cadena[i]);
                printf("\n");
    }

     printf("\n");
     printf("\n");

    for(int i=0;i<f;i++)
    {
            if(isAdigit((int)cadena[i])>0)
                ;
            else
                printf("\n5° %c No es un digito.",cadena[i]);
                printf("\n");
    }

     printf("\n");
     printf("\n");

    for(int i=0;i<f;i++)
    {
            if(isAgraph(cadena[i])>0)
              ;
              else
                printf("\n6° %c No es una representacion grafica.",cadena[i]);
                printf("\n");
    }

     printf("\n");
     printf("\n");

    for(int i=0;i<f;i++)
    {
           if(isLower(cadena[i])>0)
              ;
              else
                printf("\n7° %c No es una letra minuscula.",cadena[i]);
                printf("\n");
    }

     printf("\n");
     printf("\n");

    for(int i=0;i<f;i++)
    {
           if(isPrint(cadena[i])>0)
            ;
              else
                printf("\n8° %d No es un caracter del rango imprimible.",cadena[i]);
                printf("\n");
    }

     printf("\n");
     printf("\n");

    for(int i=0;i<f;i++)
    {
           if(isPunct(cadena[i])>0)
            ;
              else
                printf("\n9° %c No es un caracter de puntuacion.",cadena[i]);
                printf("\n");
    }

     printf("\n");
     printf("\n");

    for(int i=0;i<f;i++)
    {
           if(isSpace(cadena[i])>0)
            ;
              else
                printf("\n10° %c No es un caracter de Tabulacion.",cadena[i]);
                printf("\n");
    }

     printf("\n");
     printf("\n");

    for(int i=0;i<f;i++)
    {
           if(isUpper(cadena[i])>0)
            ;
            else
                printf("\n11° %c No es un caracter Mayuscula.",cadena[i]);
                printf("\n");
    }

     printf("\n");
     printf("\n");

    for(int i=0;i<f;i++)
    {
           if(isXdigit(cadena[i])>0)
            ;
            else
                printf("\n12° %c No es un caracter admisible.",cadena[i]);
                printf("\n");
    }
    return 0;
}
