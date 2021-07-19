#include "header.h"

int cargarArch1(char*pEmp)
{
     tEmpleado emp[] =  {{90, "Agustin","Alderete",10000},
                         {120, "Axel","Austen",20000},
                         {140, "Bruno","Sosa",30000},
                         {150, "Cristina","Vera",40000},
                         {160, "Lucas","Veron",50000}
                         };
    FILE*pf=fopen(pEmp,"wb");
    if(pf==NULL)
    {
        printf("\nNO SE PUEDO ABRIR EL ARCHIVO.");
        return 0;
    }

    fwrite(&emp,sizeof(tEmpleado),5,pf);
    fclose(pf);
    return 1;
}

int cargarArch2(char*pAlu)
{
        tAlumno alu[] = {{90, "Agustin","Alderete",5.1},
                        {120, "Axel","Austen",4.8},
                        {140, "Bruno","Sosa",9.1},
                        {150, "Cristina","Vera",6.9},
                        {160, "Lucas","Veron",10.0},
                        };

    FILE*pf=fopen(pAlu,"wb");
    if(pf==NULL)
    {
        printf("\nNO SE PUEDO ABRIR EL ARCHIVO.");
        return 0;
    }

    fwrite(&alu,sizeof(tAlumno),5,pf);
    fclose(pf);
    return 1;

}
