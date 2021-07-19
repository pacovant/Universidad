#include "header.h"

int isAlnum(char c)
{
       return (c>='a' && c<='z') || (c<='Z' && c>='A') || (c>='0' && c<='9');
}

int isAlpha(char c)
{
    return (c<='z' && c>='a') || (c>='A' && c<='Z');
}

int isAscii(int n)
{
    return n>=0 && n<=127; // necesita cambiar a entero
}

int isCntrl(int n)
{
    return (n>=0 && n<=31) || n<=127;
}

int isAdigit(int n)
{
    return (n>='0' && n<='9');
}

int isAgraph(int x)
{
    return ((x>=33 && x<=43) || (x>=45 && x<=126));
}

int isLower(char c)
{
    return (c>='a' && c<='z');
}

int isPrint(char c)
{
    return (c>=32 && c<=126);
}

int isPunct(char c)
{
    return ((c>=33 && c<=47) || (c>=58 && c<=64) || (c>=123 && c<=126));
}

int isSpace(char c)
{
    return ((c>=9 && c<=13)  || c==12);
}

int isUpper(char c)
{
    return (c>='A' && c<='Z');
}

int isXdigit(char c)
{
    return ((c>='0' && c<='9') || (c>='a' && c<='z') || (c>='A' && c<='Z'));
}
