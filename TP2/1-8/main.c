#include "header.h"

int main()
{
    int opcion,dato,cant;
    FILE *pf=NULL;
    float min,prom,vec[TAM]={7.2,4.6,4.3,7.8,9.1,4.7,9.8};

    char letra,array[]={"mike wasauski"};
    char*ltr;

    int vector1[TAM],opc;
    long int suma=0;
    vec1 y;

    float N;
    int M,num1,num2;

    char array1[][TAM]={{"Maria."},{"Juan."},{"Maria."},{"Maria"},{"Jose."},{"Maria."}};
    char array2[TAM];
    int cantPal,repetida=0,longitud=0;


    printf("Ejercicio 1:Ingrese algunas de las siguientes opciones:\n 1°Buscar minimo elemento  del array float.\n 2°Calcular promedio de posiciones pares.\n 3°Mostrar el array en orden inverso.\n 4°Salir.\n\nEjercicio 2:Devuelva la direccion de memoria del caracter hallado en el array.\n\nEjercicio 3:\n a)Pida datos de vector con cantidad variable de elementos.\n b)Calcule suma de elementos y el promedio.\n c)Idem item b) pero utilizando estructura.\n\nEjercicio 4:SALTEADO.\n\nEjercicio 5:SALTEADO.\n\nEjercicio 6:\n a)Redondear un numero al entero mas cercano(USE MACRO).\n b)Realice funcion que que devuelva el menor de dos numeros.\n c)IDEM b) pero con MACRO.\n d)Intercambie dos variables utilizando punteros.\n e)IDEM d) pero con MACRO.\nEjercicio 7:\n a)Funcion booleana que retorna un mensaje con stodut.\n b)IDEM a) pero con MACRO.\nEjercicio 8: Dado un array de texto compuesto informe\n a)La primera palabra y cuantas veces aparece.\n b)Cantidad de palabras.\n c)Longitud de la palabra mas larga.\n");
    printf("\n\nIngrese Ejercicio a realizar:");
    scanf("%d",&opcion);




    switch(opcion)
    {
        case 1:
               printf("\n");
               cant=ingresoElem(vec,TAM);
               printf("\nINGRESE UNA OPCION: ");
               scanf("%d",&dato);

               switch(dato)
               {
                case 1:
                       printf("\n");
                       min=valorMin(vec,cant);
                       printf("\nEL VALOR MINIMO ES : %.2f",min);

                    break;

                case 2:
                       printf("\n");
                       prom=promedio(vec,cant);
                       printf("\nEL PROMEDIO ES: %.2f",prom);

                    break;

                case 3:
                       printf("\n");
                       printf("\nVECTOR ORIGINAL: ");
                       for(int i=0;i<cant;i++)
                       {
                           printf(" %.2f ",vec[i]);
                       }

                       printf("\n\nVECTOR INVERSO ES: ");
                       invertirVec(vec,cant);

                    break;

                case 4:
                       return 1;
                    break;
               }

            grabarVec(vec,cant, pf);

        break;

     case 2:
            printf("\n");
            printf("\nINGRESE CARACTER A BUSCAR EN EL ARRAY: ");
            fflush(stdin);
            scanf("%c",&letra);

            ltr=buscarCaracter(array,letra);

            if(ltr!=NULL)
            {
                printf("\nLA DIRECCION DE MEMORIA DE LA LETRA ENCONTRADA ES: %p",ltr);
            }else
            {
                printf("\nLA LETRA NO FUE ENCONTRADA.");
            }


        break;

     case 3:
            printf("\n");
            printf("\n1°ITEM a) y b)\n2°ITEM a) y c)");
            printf("\nINGRESE LA OPCION A REALIZAR: ");
            scanf("%d",&opc);

            switch(opc)
            {
              case 1:
              printf("\n");
              printf("\nINGRESE ELEMENTOS DEL VECTOR: ");
              cant=pedirDatos(vector1,TAM);

              prom=calcularVec(vector1,cant,&suma);
              printf("\nEL RESULTADO DE LA SUMA ES: %ld\nEL RESULTADO DEL PROMEDIO ES: %.2f",suma,prom);

            break;

              case 2:
              printf("\n");
              printf("\nINGRESE ELEMENTOS DEL VECTOR: ");
              cant=pedirDatos(vector1,TAM);

              y=calcularVec1(vector1,y,cant);
              printf("\nLA SUMA ES: %ld\nEL PROMEDIO ES:%.2f",y.suma,y.promedio);

            break;
            }

         break;

     case 4:
            printf("\n");
         break;

     case 5:
            printf("\n");
         break;

     case 6:
            printf("\n");
            fflush(stdin);
            printf("\nINGRESE UNA OPCION: ");
            scanf("%c",&letra);
            switch(letra)
            {
             case 'a':
                printf("\nINGRESE UN VALOR REAL: ");
                scanf("%f",&N);
                M=(int)N;
                printf("\nEL VALOR REDONDEADO DE %f ES: %d",N,(int)REDONDEAR(N,M));
                break;

             case 'b':
                printf("\nINGRESE DOS VALORES:");
                scanf("%d%d",&num1,&num2);
                printf("\nEL VALOR MENOR ES: %d",valorMenor(num1,num2));
                break;

             case 'c':
                printf("\nINGRESE DOS VALORES: ");
                scanf("%d%d",&num1,&num2);
                printf("\nEL VALOR MENOR ES: %d",MENOR(num1,num2));

             case 'd':
                fflush(stdin);
                printf("\nINGRESE DOS VALORES: ");
                scanf("%d%d",&num1,&num2);
                printf("\nNUM1=%d\nNUM2=%d",num1,num2);
                intercambiar(&num1,&num2);
                printf("\n\nEL VALOR DE NUM1 ES: %d\nEL VALOR DE NUM2 ES:%d",num1,num2);

/*             case 'e':
                printf("\nINGRESE DOS VALORES: ");
                scanf("%d%d",&num1,&num2);
                int aux;
                printf("\nNUM1=%d\nNUM2=%d",num1,num2);
                INTERCAMBIO(aux,num1,num2);
                printf("\n EL VALOR DE NUM1 ES: %d \nEL VALOR DE NUM2 ES:%d",num1,num2);  NO ME SALIO VER!!!!!
*/

                break;
            }

            break;

     case 7:
            printf("\n");
            if(funcion(pf)==true)
            {
                fprintf(stdout,"\nEL ARCHIVO SE ABRIO CON EXITO.");
            }else
             {
                fprintf(stderr,"\nERROR AL ABRIR EL ARCHIVO.");
             }
            break;

     case 8:
            printf("\n");
            cantPal=puntoA(array1[0],FIL,TAM,&repetida,array2,&longitud);
            printf("\na) LA PRIMERA PALABRA ES: %s",array2);
            printf("\n   LA CANTIDAD DE VECES QUE SE REPITE LA PRIMERA PALABRA ES: %d",repetida);
            printf("\nb) LA CANTIDAD DE PALABRAS QUE HAY EN LA MATRIZ DE CADENAS ES: %d",cantPal);
            printf("\nc) LA LONGITUD DE LA PALABRA MAS LARGA ES:%d",longitud);
    }

    printf("\n\n");
    return 0;
}
