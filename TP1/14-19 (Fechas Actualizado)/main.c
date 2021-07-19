#include "header.h"

int main()
{
    tFecha f;
    int opcion,n1,n2,diaSig,diaActual_1,diaActual_2;

    printf("Ejercicio 14: Validar Fecha.\nEjercicio 15: Obtener el dia siguiente.\nEjercicio 16: Obtener fecha luego de sumarle N dias.\nEjercicio 17: Obtener fecha luego de restarle N dias.\nEjercicio 18: Obtener fecha resultante luego de restar dos fechas.\nEjercicio 19: Obtener el dia correpondiente de la fecha.");
    printf("\n\nIngrese ejercicio de la guia a realizar: ");
    scanf("%d",&opcion);

    printf("\nIngrese una fecha en formato XX/XX/XX: ");
    scanf("%d %d %d",&f.d,&f.m,&f.a);

    switch(opcion)
    {
      case 14:
                /// PUNTO 14 DE LA GUIA
                    if(validarFecha(&f)>0)
                        printf("\nPunto 14° \tFecha Correcta.");
                    else
                        printf("\nPunto 14° \tFecha Incorrecta.");
                break;

      case 15:
               /// PUNTO 15 DE LA GUIA
                  printf("\n");
                  diaSig=diaSiguiente(&f);
                  printf("\nPunto 15° \tEl dia siguiente es: %02d/%02d/%d",diaSig,f.m,f.a);

                break;

      case 16:
              /// PUNTO 16 DE LA GUIA
                printf("\n");
                if(validarFecha(&f)>0)
                {
                    printf("\nPunto 16°");
                    printf("\tIngrese cantidad de dias a sumar: ");
                    scanf("\n%d",&n1);

                    diaActual_1=sumarFecha(&f,n1);
                    printf("\t\tLa fecha actual es: %02d/%02d/%d ",diaActual_1,f.m,f.a);
                }
                    else
                        return 0;

                break;

      case 17:
                /// PUNTO 17 DE LA GUIA.
                    printf("\n");
                if(validarFecha(&f)>0)
                {
                    printf("\nPunto 17° \tIngrese cantidad de dias a restar: ");
                    scanf("%d",&n2);
                    diaActual_2=restarFecha(&f,n2);

                    printf("\t\tLa fecha modificada es: %02d/%02d/%d",diaActual_2,f.m,f.a);

                }

                break;

      case 18:
                /// PUNTO 18 DE LA GUIA.
                printf("\n");
                tFecha p;
                int primero,segundo;
                printf("Punto 18° \tIngrese la 2da fecha en formato XX/XX/XX: ");
                scanf("%d %d %d",&p.d,&p.m,&p.a);

                if(validarFecha(&f)<1 || validarFecha(&p)<1)
                {
                        printf("\nLa fecha ingresada es incorrecta.");
                } else
                        primero=totalDias(&f);
                        segundo=totalDias(&p);
                        printf("\n%d",primero); // para saber cuantos dias tiene cada uno
                        printf("\n%d",segundo); // para saber cuantos dias tiene cada uno
                        printf("\nLa cantidad de dias que tiene la fecha elegida es: %d",difFechas(primero,segundo));
            break;


      case 19:
                /// PUNTO 19 DE LA GUIA.
                printf("\n");
                int dias,m,d;
                static char  *v[]={"Domingo","Lunes","Martes","Miercoles","Jueves","Viernes","Sabado"};
                m=f.m;
                d=f.d;
                if(validarFecha(&f)>0)
                {
                    dias=totalDias(&f);

                    printf("\nPunto 19° \tEl dia de la fecha es: %s %02d, %02d del %d",v[diaFecha(dias,sizeof(v)/sizeof(int))],d,m,f.a);
                }

    }
        printf("\n\n");
        return 0;
}
