#include "function.h"
#include<stdio.h>
void CheckForWin(int* x,int* y,int* flag1 ,char tictactoeboard[3][3])
{	
	if((tictactoeboard[0][0]=='X' && tictactoeboard[0][1]=='X' && tictactoeboard[0][2]=='X') || (tictactoeboard[1][0]=='X' && tictactoeboard[1][1]=='X' && tictactoeboard[1][2]=='X') || (tictactoeboard[2][0]=='X' && tictactoeboard[2][1]=='X' && tictactoeboard[2][2]=='X') || (tictactoeboard[0][0]=='X' && tictactoeboard[1][0]=='X' && tictactoeboard[2][0]=='X') || (tictactoeboard[0][1]=='X' && tictactoeboard[1][1]=='X' && tictactoeboard[2][1]=='X') || (tictactoeboard[0][2]=='X' && tictactoeboard[1][2]=='X' && tictactoeboard[2][2]=='X') || (tictactoeboard[0][0]=='X' && tictactoeboard[1][1]=='X' && tictactoeboard[2][2]=='X') || (tictactoeboard[0][2]=='X' && tictactoeboard[1][1]=='X' && tictactoeboard[2][0]=='X') )
	{		
		*flag1=0;
		printf("\n PLAYER 1 WON THE GAME ... \a");		
	}
	else if ((tictactoeboard[0][0]=='O' && tictactoeboard[0][1]=='O' && tictactoeboard[0][2]=='O') || (tictactoeboard[1][0]=='O' && tictactoeboard[1][1]=='O' && tictactoeboard[1][2]=='O') || (tictactoeboard[2][0]=='O' && tictactoeboard[2][1]=='O' && tictactoeboard[2][2]=='O') || (tictactoeboard[0][0]=='O' && tictactoeboard[1][0]=='O' && tictactoeboard[2][0]=='O') || (tictactoeboard[0][1]=='O' && tictactoeboard[1][1]=='O' && tictactoeboard[2][1]=='O') || (tictactoeboard[0][2]=='O' && tictactoeboard[1][2]=='O' && tictactoeboard[2][2]=='O') || (tictactoeboard[0][0]=='O' && tictactoeboard[1][1]=='O' && tictactoeboard[2][2]=='O') || (tictactoeboard[0][2]=='O' && tictactoeboard[1][1]=='O' && tictactoeboard[2][0]=='O') )
	{
		*flag1=0;
		printf("\n PLAYER 2 WON THE GAME ... \a");	
	}
}