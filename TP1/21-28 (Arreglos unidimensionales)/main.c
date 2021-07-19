#include "header.h"
#define TAM 20
int main()
{
    int v,ce=7,num,pos,opcion;
    static  int vec[TAM]={1,2,3,4,5,6,7};            //del ejercicio 21 a 26
    static char cadena[]= "mana come chocolate";
    static char copia[TAM];
    char *r;                                        // del ejercicio 27
    char digitos[]="1234567890";                    //ME PERMITE HASTA NUEVE CARACTERES NADA MAS. NOSE PORQUE!!!!!!
    int numero;                                     //del ejercicio 28
    printf("\nEjercicio 22:Inserte elemento en vector dada la posicion.\nEjercicio 23:Inserte elemento dentro de vector ordenado sin alterar el orden. \nEjercicio 24:Eliminar elemento dada la posicion.\nEjercicio 25:Eliminar elemento de vector dado el elemento.\nEjercicio 26:Eliminar todas las apariciones de un elemento dado el elemento.\nEjercicio 27:Determinar si la cadena es palindromo.\nEjercicio 28:Dado digitos en caracter transformar a entero.");
    printf("\n\nIngrese el ejercicio a realizar: ");
    scanf("%d",&opcion);

    switch(opcion)
    {
    case 22:
            printf("\n");
            printf("Ingrese posicion: ");
            scanf("%d",&pos);
            printf("\nIngrese elemento a insertar: ");
            scanf("%d",&num);

            printf("\nEl vector original es:\t");
            for(int i=0;i<ce;i++)
                {
                    printf(" %d ",vec[i]);
                }


            v=vecInsert(vec,ce,sizeof(vec)/sizeof(int),num,pos);

            if(v>0)
                {
                    ce++;                                               //incremento a ce porque en esta linea el vector tendra 8 elementos.
                    printf("\n\nEl vector modificado es:");
                    mostrarVec(vec,ce);
                } else
                    {
                        printf("\nNo se pudo realizar el cambio de vector.");
                    }
            break;

    case 23:
            printf("\n");
        break;

    case 24:
            printf("\n");
            printf("\nIngrese posicion a eliminar: ");
            scanf("%d",&pos);

            v=eliminarPos(vec,ce,pos);
            printf("\n");
            if(v>0)
            {
             ce--;
             printf("\nEl vector modificado es: \t");
             mostrarVec(vec,ce);
            }else
                printf("\nError.");
        break;

    case 25:
            printf("\n");
            printf("Ingrese elemento a eliminar: ");
            scanf("%d",&num);


            v=eliminarElem(vec,ce,num);
            if(v>0)
             {
                ce--;
                printf("\nEl vector nuevo es:\t ");
                mostrarVec(vec,ce);
             } else
                 {
                     printf("\nElemento no encontrado.");
                 }

    case 26:
            printf("\n");
            printf("Ingrese elemento a eliminar del vector:");
            scanf("%d",&num);

            v=eliminarElemRep(vec,ce,num);

            if(v<1)
                printf("\nEl valor ingresado no se encuentra en el vector.");
            else
                {
                    ce=ce-v;
                    if(ce==0)                                               //aca me fijo si j=7 entonces quiere decir que todos los elementos del vector son iguales.
                    {
                        printf("\nTodos los elementos han sido eliminados.");
                    }else
                        printf("\nEl vector modificado es:\t ");
                        mostrarVec(vec,ce);
                }
        break;

    case 27:
            printf("\n");

           printf("\xa8%s es palindromo?",cadena);
           quitarEspacio(cadena);
           copiarCadena(copia,cadena);
           r=invertirCadena(cadena);
           printf("\n\nLa cadena original es: %s",copia);
           printf("\nLa cadena invertida es: %s",r);
           if(compararCadena(copia,cadena)>0)
           {
               printf("\n\nLA PALABRA ES POLINDROMA.");
           }else
            {
                printf("\n\nLA PALABRA NO ES POLINDROMA.");
            }

         break;

    case 28:
            printf("\n");

            printf("\nTransformacion de cadena de caracteres de digitos a  numero entero.");

            numero=caracterAentero(digitos);
            if(numero>0)
               printf("\n\nEL NUMERO ENTERO ES: %d",numero);
             else
               printf("\n\nLA CADENA CONTIENE DIGITOS QUE NO ESTAN EN EL RANGO DE 0-9.");

        break;


    }
    printf("\n\n");
    return 0;
}
