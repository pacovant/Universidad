#include "header.h"

int cargarArch1(char*pArch)
{

    int cant;
    tEmpleado emp[] =  {{90, "Agustin Alderete",10000},
                         {120, "Axel Austen",20000},
                         {140, "Bruno Sosa",30000},
                         {150, "Cristina Vera",40000},
                         {160, "Lucas Veron",50000}
                         };

    FILE*pf=fopen(pArch,"wt");

    if(!pf)
    {
        printf("\nERROR AL ABRIR EL ARCHIVO.");
        return 0;
    }

    cant=sizeof(emp)/sizeof(tEmpleado);
    /**000000090AgustinAlderete              10000
      000000120AxelAusten                   20000
      000000140BrunoSosa                    30000
      **/

    for(int i=0;i<cant;i++)
    {
       fprintf(pf,"%09d%-29s%02.0f\n",emp[i].dni,emp[i].apyn,emp[i].sueldo);
    }
    fclose(pf);
    return 1;
}

int cargarArch2(char*pArch)
{
    FILE*pf;
     tAlumno alu[] = {{90, "Agustin Alderete",5.1},
                        {120, "Axel Austen",4.8},
                        {140, "Bruno Sosa",9.1},
                        {150, "Cristina Vera",6.9},
                        {160, "Lucas Veron",10.0},
                        };

   int cant=sizeof(alu)/sizeof(tAlumno);
    pf=fopen(pArch,"wt");
    if(!pf)
    {
        printf("\nERROR AL ABRIR EL ARCHIVO.");
        return 0;
    }
   /**000000090AgustinAlderete              5.1
      000000120AxelAusten                   4.8
      000000140BrunoSosa                    9.1
      **/
      for(int i=0;i<cant;i++)
      {
          fprintf(pf,"%08d%-29s%02.0f\n",alu[i].dni,alu[i].apyn,alu[i].promedio);
      }
      fclose(pf);
      return 1;
}

int leerArchivo1(FILE *pf,tEmpleado *emp,int cant)
{
    return fscanf(pf,"%9d%29[^\n]%lf",&emp->dni,&emp->apyn,&emp->sueldo)==cant;
}

int leerArchivo2(FILE *pf,tAlumno *alu,int cant)
{
    return fscanf(pf,"%9d%29[^\n]%f",&alu->dni,&alu->apyn,&alu->promedio);
}
