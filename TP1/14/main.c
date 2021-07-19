#include "header.h"

int main()
{
    int n;
    f_info fecha;

    printf("Ingresar dia: ");
    scanf("%d",&fecha.dia);
    printf("\nIngrese mes: ");
    scanf("%d",&fecha.mes);
    printf("\nIngrese anio: ");
    scanf("%d",&fecha.anio);

    printf("\nIngrese la cantidad de dias a sumarle a la fecha actual: ");
    scanf("%d",&n);

    if(validar(&fecha)>0)
    {
        mostrar(&fecha);
        sumar(&fecha,&n);
    }

    return 0;
}
