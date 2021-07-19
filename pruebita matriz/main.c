#include <stdio.h>
#include <stdlib.h>

void transponer(int *m,int fil,int col,int cant);
void mostrar(int m[][4],int fil,int col);

int main()
{

    int mat[10][10]={{1,2,3,4,5,6,7,8,9,0},
                 {5,6,7,8,1,2,3,4,5,1,1},
                 {9,10,11,12,2,3,4,5,4,3},
                 {14,15,16,17,7,4,1,8,2},
                 {1,2,3,4,5,6,7,8,9,0},
                 {1,2,3,4,5,6,7,8,9,0},
                 {1,2,3,4,5,6,7,8,9,0},
                 {1,2,3,4,5,6,7,8,9,0},
                 {1,2,3,4,5,6,7,8,9,0},
                 {1,2,3,4,5,6,7,8,9,0}};
    //int cant=sizeof(m)/sizeof(int);
   // transponer(*m,4,4,cant);

for(int i=0;i<10;i++)
    {
        printf("\n");
        printf("\n");

    for(int j=0;j<10;j++)
      {
        if(i==j || i<j)
         {
            printf("%3d  ",mat[i][j]);


         }
         else  printf("     ");
      }
    }


 //   printf("%*s\n",i,"  ");

    return 0;
}
/*
void transponer(int *m,int fil,int col,int cant)
{
    int aux=0;
    int *mF=m+cant-1;
     int*prim=mF;
     int*seg=m;


        for(int i=0;i<fil;i++)
        {
            printf("\n");
            for(int j=0;j<col;j++)
            {
                aux=*mF;
                *mF=*m;
                *m=aux;
                prim--;
                seg++;
            }
        }
        mostrar(m,4,4);
//
//        mF-=sizeof(int);
//        m+=sizeof(int);

}
//for(int i=0;i<fil;i++)
//{
//    for(int j=0;j<col;j++)
//    {
//        aux=*mF;
//        *mF=*m;
//        *m=aux;
//        prim--;
//        seg--;
//    }
//}
//    mostrar(retorno,4,4);
//}

void mostrar(int m[][4],int fil,int col)
{
    for(int i=0;i<fil;i++)
    {
        printf("\n");
        for(int j=0;j<col;j++)
        {
            printf("  %d   ",m[i][j]);
        }
    }
}
*/
