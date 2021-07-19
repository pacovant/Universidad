#include "header.h"

int main()
{
    FILE*pf1,*pf2;
    tEmpleado emp;
    tAlumno alu;
    int cant=sizeof(emp)/sizeof(tEmpleado);

    if(!cargarArch1("1archivo.txt"))
    {
        printf("\nNO SE PUDO CARGAR ARCHIVO 1.");
        return 1;
    }
    if(!cargarArch2("2archivo.txt"))
    {
        printf("\nNO SE PUDO CARGAR ARCHIVO 2");
        return 2;
    }

    pf1=fopen("1archivo.txt","rt");
    if(!pf1)
    {
        printf("\nNO SE PUDO LEER EL ARCHIVO 1.");
        return 3;
    }

    pf2=fopen("2archivo.txt","rt");
    if(!pf2)
    {
        printf("\nNO SE PUDO LEER EL ARCHIVO 2.");
        return 4;
    }

//
//
//    fread(&emp,sizeof(tEmpleado),1,pf1);
//    fread(&alu,sizeof(tAlumno),1,pf2);
//    while(i!=cant)
//    {
//        if(alu.promedio>7)
//        {
//            emp.sueldo*=1.0728;
//            fprintf(pf1,"%08d%-29s%02.0f\n",alu[i].dni,alu[i].apyn,alu[i].promedio);
//            fseek(pf1,0,SEEK_CUR);
//            i++;
//        }
//        fread(&emp,sizeof(tEmpleado),1,pf1);
//        fread(&alu,sizeof(tAlumno),1,pf2);
//    }
//
//    fseek(pf1,0,SEEK_SET);

    while(leerArchivo1(pf1,&emp,cant))
    {
        printf("%9d%-29s%.2lf\n",emp.dni,emp.apyn,emp.sueldo);
    }

    while(leerArchivo2(pf2,&alu,cant))
    {
        printf("%9d%-29s%.2f\n",alu.dni,alu.apyn,alu.promedio);
    }

    fclose(pf1);
    fclose(pf2);



    printf("\n");
    return 0;
}
