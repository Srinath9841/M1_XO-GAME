#ifndef __FUN_H   
#define __FUN_H
#include<stdio.h>
void Board();
void Decision(int,char,int*,int*,char[3][3]);
void Display(char,int*,int*,char[3][3]);
void CheckForWin(int*,int*,int*,char[3][3]);
#endif
