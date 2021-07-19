#include "header.h"

int dectoBin(int i)
{
  int r[10],k=0,j;

      while(i>=1)
     {
       r[k]=i%2;
       i=i/2;
        k++;
     }

    for(j=k-1;j>=0;j--)
            printf("%d",r[j]);
        //return R[j];
}
