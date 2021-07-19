#include <stdio.h>
#include <stdlib.h>
#include <wchar.h>


int ValorAscii(unsigned char c);


int main()
{
 unsigned char c;

    printf("Digite caracter: ");
    scanf("%c",&c);

    printf("%d", ValorAscii(c));

    return 0;

}

int ValorAscii(unsigned char c)
{
    int valor[]={160,130,161,162,163,181,144,214,224,233,164,165,154,129};
    int*p=valor;
    int cant=sizeof(valor)/sizeof(int);
    while(cant!=0)
    {
        if(c==*p)
        {
            return 1;
        }
        p++;
        cant--;
    }
    return 0;
}


