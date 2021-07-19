#include "header.h"

//int bisiesto(f_info *p)
//{
//    //f_info fecha;
//
//    if(p->anio%4==0 && (p->anio%100!=0 || p->anio%400==0))
//    {
//        return 1;
//    }else
//      {
//        return 0;
//      }
//}


int validar(f_info*p)
{


    if(p->anio>=1600 && (p->mes>=1 && p->mes<=12))
    {
        switch(p->mes)
        {
            case 1:
            case 3:
            case 5:
            case 7:
            case 8:
            case 10:
            case 12:
            if(p->dia>=1 && p->dia<=31)
            {
                return 1;
            } else
                {
                    printf("\nEl dia ingresado es invalido.");
                    return 0;
                }
            break;

            case 4:
            case 6:
            case 9:
            case 11:
             if(p->dia>=1 && p->dia<=30)
             {
                return 1;
             } else
                {
                   printf("\nEl dia ingresado es invalido.");
                   return 0;
                }
            break;

            case 2:
            if(p->anio%4==0 && (p->anio%100!=0 || p->anio%400==0))
            {
              if(p->dia>=1 && p->dia<=29)
              {
                  return 1;
              } else
                 {
                  printf("\nEl dia ingresado es invalido.");
                  return 0;
                 }
            } else
                 {
                   if(p->dia>=1 && p->dia<=28)
                    {
                        return 1;
                    }
                  else
                    {
                        printf("\nEl dia ingresado es invalido.");
                        return 0;
                    }
                }
                break;
        }

    }else
        {
            printf("\nFecha incorrecta.");
            return 0;
        }
}
void mostrar(f_info*p)
{
    printf("\nLa fecha ingresada es: %02d/%02d/%d",p->dia,p->mes,p->anio);
}


void sumar(f_info*p, int *n)
{

    *n=p->dia+*n;

    switch(p->mes)
    {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:

        if(*n<=31)
        {
        }
         else
            {
               do{
                *n=*n-31;
                p->mes++;
                if(p->mes>12)
                {
                p->mes=1;
                p->anio++;
                }
               }while(*n>31);
            }
          break;

        case 4:
        case 6:
        case 9:
        case 11:

    if(*n<=30)
    {
    }
     else
        {
           do{
            *n=*n-30;
            p->mes++;
            if(p->mes>12)
            {
              p->mes=1;
              p->anio++;
            }
           }while(*n>30);
        }
          break;



         case 2:


    if(p->anio%4==0 && (p->anio%100!=0 || p->anio%400==0))
    {
        if(*n<=29)
        {
        }
        else
          {
        do {
                *n=*n-29;
                p->mes++;
                if(p->mes>12)
                {
                p->mes=1;
                p->anio++;
                }

            }while(*n>29);
          }

     } else
        {
            if(*n<=28)
            {
            }
              else

                   {
                      do{
                        *n=*n-28;
                        p->mes++;
                        if(p->mes>12)
                        {
                            p->mes=1;
                            p->anio++;
                        }
                      }while(*n>28);
                   }
        }
        break;
    }
    printf("\nLa fecha actualizada es:%d/%d/%d ",*n,p->mes,p->anio);

}




