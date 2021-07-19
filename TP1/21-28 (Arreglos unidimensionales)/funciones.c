#include "header.h"

int vecInsert(int *pVec,int ce,int tam,int num,unsigned pos)
{
    int *pVec1=pVec+pos;
    pVec=pVec+ce;

   if(ce==tam)
    return 0;
   if(pos>ce || pos<0)
    return 0;

   while(pVec!=pVec1)
   {
       *pVec=(*(pVec-1));
       pVec--;
   }
   *pVec=num;

    return 1;
}

int eliminarPos(int *pVec,int ce,unsigned pos)
{
int *pVec1=pVec+ce-1;
    pVec=pVec+pos;

    if(pos>ce || pos<0)
        return 0;

    while(pVec<=pVec1)
    {
        *pVec=*(pVec+1);
        pVec++;
    }
    return 1;
}

int eliminarElem(int *pVec,int ce,int num)
{
    int pos=0;
    int *pVec1=pVec+ce;
    int *pVec2=pVec;

    while((*pVec!=num) && (pVec!=pVec1))
    {
        pVec++;
        pos++;
    }

    if(pVec==pVec1)
        return 0;
     else
        eliminarPos(pVec2,ce,pos);

     return 1;
}

int eliminarElemRep(int *pVec,int ce,int num)   // a la funcion eliminarElem le paso pVec2 porque siempre tiene que iniciar en el principio del vector si le pasaba pVec entonce este se iba a incrementar en esta funcion pero al pasarselo entonces siempre iba a empezar mas adelante de la posicion 0 del vector (porque es un puntero y se modifica siempre).
{                                               //ademas ese pVec2 que seria 403000 se va a guardar para la otra funcion que utiliza eliminarElem que es eliminarPos y asi siempre que se llamen a estas funciones se va a corroborar desde el principio del vector (403000).
    int v,j=0;
    int *pVec2=pVec;
    int *pVec1=pVec+ce;
    while(pVec!=pVec1)
        {
            v=eliminarElem(pVec2,ce,num);
            if(v>0)
            {
              j++;
            }
            pVec++;
        }
        if(j>0)
            return j;
        else
            return 0;
}

void mostrarVec(int *pVec,int ce)
{
  int *pVec1=pVec+ce;
     while(pVec<pVec1)
        {
            printf(" %d ",*pVec);
            pVec++;
        }
}




int cantidadCaracteres(char *pCad)
{
   char *pCad1=pCad;
   int i=0;
   while(*pCad1!='\0')
    {
       i++;
       pCad1++;
    }

   return i;
}
void quitarEspacio(char *pCad)
{
    char *pCad1=pCad;
    char *pCad2=pCad;

    while(*pCad1!='\0')
    {
         if(*pCad1==' ')
         {
             pCad2=pCad1;
             while(*pCad1!='\0')
             {
               *pCad1=*(pCad1+1);
               pCad1++;
             }
             pCad1=pCad2;
         }
        pCad1++;
    }
}

char *invertirCadena(char *pCad)             //copio  cadena en forma invertida a cadenaInv de esta forma en cadenaInv tengo a cadena invertida.
{
    int i=0;
    char cadenaInv[]={};
    char *pCad1=cadenaInv;
    *pCad1=*pCad;           // esta linea la hago porque nose porque me copia el '\0' en ves de la v. luego de esto me copia la v en el while como primer elemento.

    while(*pCad!='\0')
    {
        *pCad1=*pCad;
        pCad1++;
        pCad++;
        i++;
    }
    pCad=pCad-i;
    pCad1--;

    while(*pCad1!='\0')
    {
        *pCad=*pCad1;
        pCad++;
        pCad1--;
        if(*pCad=='\0')
        {
            *pCad1='\0';            //en esta linea pregunto si *pCad es '\0' entonces le asigno '\0' a *pCad1 asi sale del while.
        }
    }
    pCad=pCad-i;
    return pCad;
}

char*copiarCadena(char *pCad1,char const *pCad)
{
    int i=0;
    while(*pCad!='\0')
    {
        *pCad1=*pCad;
        pCad++;
        pCad1++;
        i++;
    }
    pCad1-=i;

    return pCad1;
}

int compararCadena(char *pCad,char *pCad1)
{
    int j=0;
    int i=cantidadCaracteres(pCad);
    while(*pCad!='\0')
    {
        if(*pCad==*pCad1)
        {
            j++;
        }
        pCad++;
        pCad1++;
    }

    return j==i? 1: 0;
}


int caracterAentero(char* pDig)
{
    int pos=1,numero=0;
    int cant=cantidadCaracteres(pDig);

    if(digitoValido(pDig)<1)
        return 0;
    else
       {
        pDig+=cant-1;
        while(cant!=0)
        {
          numero= numero + ((*pDig-'0') * pos);
          pDig--;
          pos*=10;
          cant--;
        }
        return numero;
        }
}

int digitoValido(char *pDig)
{
    int i=cantidadCaracteres(pDig),j=0;

    while(*pDig!='\0')
    {
        if(*pDig>='0' && *pDig<='9')
        {
            j++;
        }
        pDig++;
    }

     if(j==i)
        return 1;
     else
        return 0;
}
