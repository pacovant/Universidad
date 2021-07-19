#include "header.h"

void quitarEspacio(char *pCad)
{
    char *pCad1=pCad;
    *(pCad-1)=' ';     // esto lo hago para que cuando en el while le diga que empiece a partir de la direccion pCad-1 no lea el '\0' y salga del while ( en la parte de pCad1=pCad-1).

    while(*pCad1!='\0')
    {
         if(*pCad1==' ')
         {
             while(*pCad1!='\0')
             {
               *pCad1=*(pCad1+1);
               pCad1++;
             }
            pCad1=pCad-1;
         }
        pCad1++;
    }
}

int cantidadCaracter(char*pCad)
{
    int i=0;
    while(*pCad!='\0')
    {
        i++;
        pCad++;
    }
    return i;
}

int validarCaracter(char*pCad)
{
   return ((*pCad>='A' && *pCad<='Z')|| (*pCad>='a' && *pCad<='z') || (*pCad==',') || (*pCad==' '))? 1:0;

}


int cadenaCorrecta(char*pCad)
{
    int i=0,j=0;
    i=cantidadCaracter(pCad);

    while(*pCad!='\0')
    {
        if(validarCaracter(pCad)>0)
        {
            j++;
        }
        pCad++;
    }
    return j==i? 1: 0;
}

char* transformarLetras(char*pCad)
{
  int i=0;

     if(*pCad>='a' && *pCad<='z')
      {
        *pCad=*pCad-('a'-'A');              // estas lineas la cambie porque justo cuando ponia L y le restaba 32 entonces me daba ',' y este es un caracter valido de la cadena por eso tuve que preguntar directamente si pertenece a las minusculas de ser asi restarle 32.
      }
      pCad++;
    while(*pCad!='\0')
    {
        if(*(pCad-1)==',')
        {
            *pCad=*pCad-('a'-'A');
          if(validarCaracter(pCad)==0)
          {
            *pCad=*pCad+('a'-'A');
          }
        } else
            {
                if(*pCad>='A' && *pCad<='Z')
                {
                    *pCad=*pCad+('a'-'A');
                }
            }
            pCad++;
            i++;
    }
    pCad=pCad-i;
    return pCad;
}

char* normalizarCadena(char*pCad)
{
    int i=cantidadCaracter(pCad);

    *(pCad+i+2)='\0';
    pCad+=i;

      while(*pCad!=',')
        {
            if(*(pCad-1)==',')
            {
                *pCad=' ';
            } else
                {
                    *pCad=*(pCad-1);
                }
                pCad--;
        }

        while(*pCad!='\0')
        {
            if(*pCad>='a' && *pCad<='z')
            {
            *pCad=*pCad-('a'-'A');
            }
            pCad--;
        }

        return pCad;
}
