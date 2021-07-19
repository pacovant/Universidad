#include "header.h"

int validarFecha(tFecha *f)
{
    int mes,anio;

    mes=f->m;
    anio=f->a;

    if (f->a >1600 )
        if(f->m>=1 && f->m<=12)
           if(f->d>=1 && f->d<=cantDias(mes,anio))
            return 1;

            return 0;

}

int cantDias(int mes,int anio)
{
    static const int DiasMes[12]={31,28,31,30,31,30,31,31,30,31,30,31};

    return Bisiesto(anio)&& mes==2? 29:DiasMes[mes-1];
}


int Bisiesto(int anio)
{
     return anio %4==0 && (anio%100!=0 || anio%400==0);
}

int diaSiguiente(tFecha *f)
{
    f->d++;
    if(f->d>cantDias(f->m,f->a))
       {
         f->d=1;
         f->m++;
         if(f->m>12)
         f->m=1;
         f->a++;
       }

       return f->d;
}

int sumarFecha(tFecha *f,int n1)  //NOTA!! SI NO MODIFICO LAS VARIABLES DE LAS ESTRUCTURAS ME VA A TOMAR LA FECHA QUE RESULTO DE LA SUMA DEBIDO A QUE CAMBIA EL VALOR REAL DEL MAIN POR SER PUNTEROS.
{
    int nuevaFecha;

    nuevaFecha=f->d+n1;

    while(nuevaFecha>cantDias(f->m,f->a))
    {
        nuevaFecha=nuevaFecha-cantDias(f->m,f->a);
        f->m++;
        if(f->m>12)
            {
             f->m=1;
             f->a++;
            }
    }

      return nuevaFecha;
}

int restarFecha(tFecha *f,int n2) //NOTA!! SI NO MODIFICO LAS VARIABLES DE LAS ESTRUCTURAS ME VA A TOMAR LA FECHA QUE RESULTO DE LA SUMA DEBIDO A QUE CAMBIA EL VALOR REAL DEL MAIN POR SER PUNTEROS.
{
    int nuevaFecha;

    nuevaFecha=f->d-n2;

    while(nuevaFecha<1)
    {
        f->m--;
        if(f->m<1)
            {
             f->m=12;
             f->a--;
            }
        nuevaFecha=nuevaFecha+cantDias(f->m,f->a);
    }

      return nuevaFecha;
}


int totalDias(tFecha *f)
{
    int dias=0,d=0;

    if(f->m>=2)
      {
        f->m--;
         while(f->m>0)
         {
           f->d+=cantDias(f->m,f->a);
           f->m--;
         }
      }

    for(int i=1601;i<f->a;i++)
       if(Bisiesto(i)>0)
         dias+=366;
            else
              dias+=365;

    return f->d+dias-1+d;         // este -1 indica que empieza desde el 1/1/1601 entonces los calculos me dara siempre un dia mas debido a que  considera el dia 1 de 1601 para sacarle este dia le resto 1. Caso contrario sacaria el -1 si yo empezaria a contar desde el 31 12 1600 cosa de que no seria correcto debido a que el profe dijo que empezmos desde 1601.
}


int difFechas(int primero,int segundo)
{

    int diferencia;
    diferencia= primero-segundo;

    return diferencia<0? diferencia*(-1):diferencia;
}


int diaFecha(int dias,int cant)  // nos basamos en que el lunes es el dia numero 1 desde el primer dia de 1601.
{
//  int k;
    int i=0,j;
    for(j=0;j<=dias;j++)   //j empieza de 0 porque incluimos que el dia 1 es lunes hasta el dia XX.
     {
         i++;               //i empieza en 1 porque el dia lunes es 1.
        if(i==cant)
          i=0;              // cuando se completa los 7 dias entonces domingo es 0.
     }
 //   k=i;
//    return k;
   return i;
}
