#include "header.h"

int ingresoElem(float vec[],int tam)
{
    int cant;
    printf("\nIngrese cantidad de elementos: ");
    scanf("%d",&cant);

    if(cant<1 || cant>tam)
        return 0;

    for(int i=0;i<cant;i++)
    {
        printf("Elemento[%d]: ",i);
        scanf("%f",&vec[i]);
    }

    return cant;
}

float valorMin(float vec[],int cant)
{
    int i=0;
    float min,*pVec=vec;

    min=*pVec;
    while(i!=cant)
    {
        if(*pVec<min)
        {
            min=*pVec;
        }
        pVec++;
        i++;
    }
    return min;
}

float promedio(float vec[],int cant)
{
    int i=0,j=0;
    float prom=0;
    float *pVec=vec;

    while(cant>0)
    {
        if(i%2==0)
        {
            prom+=*pVec;
            j++;
        }
        pVec++;
        i++;
        cant--;
    }

    return (prom/j);
}

void invertirVec(float vec[],int cant)
{
    float *pVec1=vec;
    float *pVec=vec;
    int i=cant,j=0;
    float aux;
    int cantidad=cant;

    pVec=pVec+(cant-1);
    i/=2;
    while(i>0)
    {
        cant--;
        aux=*(pVec-(cant+j));
        *(pVec-(cant+j))=*pVec;
        *pVec=aux;
        i--;
        pVec--;
        j--;
    }

    for(int i=0;i<cantidad;i++)
    {
        printf(" %.2f ",*pVec1);
        pVec1++;
    }
}

void grabarVec(float vec[],int cant,FILE *pf)
{
    pf=fopen("texto.txt","wt");
      if(!pf)
       {
         printf("\nError al abrir el archivo.");
       }
      for(int i=0;i<cant;i++)
      {
        fprintf(pf,"[%d]: %.2f\n",i,vec[i]);
      }

 //   fwrite(vec,sizeof(float),1,pf);   esto es en binario.
    printf("\n");
    system("pause");
    printf("\n");
    fclose(pf);
}



char*buscarCaracter(char*pVec,char letra)
{
    char*pVec1=pVec;
    int j=0;

    while(*pVec!='\0')
    {
        if(letra==*pVec)
        {
            pVec1=pVec;
            j++;
        }
        pVec++;
    }
    return j>0? pVec1: NULL;
}


int pedirDatos(int *pVec,int tam)
{
    int cant,i=0;
    printf("\nIngrese cantidad de elementos: ");
    scanf("%d",&cant);
    int cantt=cant;
    if(cant>tam || cant==0)
        return 0;

    while(cant!=0)
    {
        printf("Elemento[%d]: ",i);
        scanf("%d",&(*pVec));
        pVec++;
        i++;
        cant--;
    }
    return cantt;
}

int calcularVec(int*pVec,int cant,long int*suma)
{
    int i=cant;
    float promedio=0;

    while(cant!=0)
    {
        *suma+=*pVec;
        promedio+=*pVec;
        pVec++;
        cant--;
    }
    return (promedio/i);
}


vec1 calcularVec1(int *pVec,vec1 x,int cant)
{
    int i=cant;
    x.suma=0;
    x.promedio=0;
    while(i!=0)
    {
        x.suma+=*pVec;
        x.promedio+=*pVec;
        pVec++;
        i--;
    }
    x.promedio/=cant;
    return x;
}


int valorMenor(int n1,int n2)
{
    return n1>n2?n2:n1;
}

void intercambiar(int*n1,int*n2)
{
    int aux;
    aux=*n1;
    *n1=*n2;
    *n2=aux;
}


bool funcion(FILE *pf)
{
    pf=fopen("texto.txt","rt");

    if(!pf)
    {
        return false;
    } return true;

    system("pause");
    fclose(pf);
}

int validarCaracter(char*pVec)
{
   return ((*pVec>='A' && *pVec<='Z')|| (*pVec>='a' && *pVec<='z') || (*pVec=='.'))? 1:0;
}

int puntoA(char *pVec,int fil,int col,int*pRep,char*pVec2,int*pLong)
{
   char*pVecIni=pVec2;
   int cantidad=0,cant=0,contador,cantLetra=0;
        for(int i=0;i<fil;i++)
        {
            printf("\n");
            if(contador==cantidad)
            {
             *pRep+=1;
            }
            pVec2=pVecIni;
            contador=0;
            if(*pLong<cantLetra)
            {
                *pLong=cantLetra;
            }
            cantLetra=0;
            for(int j=0;j<col;j++)
            {
              if(i!=0)
              {
                if(validarCaracter(pVec)>0)
                {
                 if(*pVec2==*pVec && *pVec!='.')
                    {
                     contador++;
                     pVec2++;
                    }
                 printf("%c",*pVec);
                 pVec++;
                 cantLetra++;
                 if(*(pVec-1)=='.')
                 {
                     cantLetra--;
                 }
                }else
                   {
                    printf("\r\t\t");
                    i+=(fil-i);
                   }

              }else
                {
                    printf("%c",*pVec);
                    *pVec2=*pVec;
                    pVec2++;
                    pVec++;
                    cantidad++;
                    if(*(pVec2-1)=='.')
                    {
                        cantidad--;
                        *pLong=cantidad;
                    }
                    *pVec2='\0';
                }
              if(*pVec=='\0')
              {
                  cant++;
                  pVec+=(col-j-1);
                  j+=(col-j-1);
              }
            }
        }
        return cant;
}
