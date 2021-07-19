#include "header.h"
int main()
{
    FILE*pf1,*pf2;
    tEmpleado emp;
    tAlumno alu;

    if(!cargarArch1("archivo1.dat"))
    {
        printf("\nERROR AL CARGAR ARCHIVO1.");
        return 1;
    };
    if(!cargarArch2("archivo2.dat"))
    {
        printf("\nERROR AL CARGAR ARCHIVO2.");
        return 2;
    }

    pf1=fopen("archivo1.dat","r+b");
    if(!pf1)
    {
        printf("\nERROR EN LA APERTURA DEl PRIMER ARCHIVO.");
        return 3;
    }

    pf2=fopen("archivo2.dat","rb");
    if(!pf1)
    {
        printf("\nERROR EN LA APERTURA DEL SEGUNDO ARCHIVO.");
        return 4;
    }

    fread(&emp,sizeof(tEmpleado),1,pf1);
    fread(&alu,sizeof(tAlumno),1,pf2);
    while(!feof(pf1) && !feof(pf2))
    {
        if(alu.promedio>7)
        {
            emp.sueldo*=1.0728;
            fseek(pf1,-sizeof(tEmpleado),SEEK_CUR);
            fwrite(&emp,sizeof(tEmpleado),1,pf1);
            fseek(pf1,0,SEEK_CUR);
        }
        fread(&emp,sizeof(tEmpleado),1,pf1);
        fread(&alu,sizeof(tAlumno),1,pf2);
    }

    fclose(pf2);

    fseek(pf1,0,SEEK_SET); // o podia ser tambien rewind(pf1);

    fread(&emp,sizeof(tEmpleado),1,pf1);
    while(!feof(pf1))
    {
        printf("%d, %s, %s, %.2f\n",emp.dni,emp.ap,emp.nom,emp.sueldo);
        fread(&emp,sizeof(tEmpleado),1,pf1);
    }

    fclose(pf1);

    printf("\n");
    return 0;
}
