#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED

//#include <ctype.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int isAlnum(char c);
int isAlpha(char c);
int isAscii(int n);
int isCntrl(int n);
int isAdigit(int n);
int isAgraph(int x);
int isLower(char c);
int isPrint(char c);
int isPunct(char c);
int isSpace(char c);
int isUpper(char c);
int isXdigit(char c);

#endif // HEADER_H_INCLUDED
