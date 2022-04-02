#include "unity.h"
#include "function.h"
#define PROJECT_NAME  "XO-GAME"
void setUp(){}
void tearDown(){}
void test_CheckForWin(void)
{
    
}
int main(void){
    UNITY_BEGIN();
    RUN_TEST(test_Board);
    RUN_TEST(test_Decision);
    RUN_TEST(test_Display);
    RUN_TEST(test_CheckForWin);
    return UNITY_END;
} 
void test_Board(void)
{
    
	int ttt_plain[3][3]={{7,8,9},{4,5,6},{1,2,3}};
	
	for(int i=0;i<3;i++)
		{	
			for(int j=0;j<3;j++)
			{
				printf("    %d",ttt_plain[i][j]);
			}
			printf("\n");
			printf("\n");
		}
TEST_ASSERT_EQUAL_INT(ttt_plain[1][2],int);		
	
}

void Decision(int , char , int , int ,char ) 
{
	if(number == 7)
	{
		*x=0;
		*y=0;
	}
	else if(number == 8)
	{
		*x=0;
		*y=1;
	}
	else if(number == 9)
	{
		*x=0;
		*y=2;
	}
	else if(number == 4)
	{
		*x=1;
		*y=0;
	}
	else if(number == 5)
	{
		*x=1;
		*y=1;
	}
	else if(number == 6)
	{
		*x=1;
		*y=2;
	}
	else if(number == 1)
	{
		*x=2;
		*y=0;
	}
	else if(number == 2)
	{
		*x=2;
		*y=1;
	}
	else if(number == 3)
	{
		*x=2;
		*y=2;
	}
	else
	{
		printf("Invalid number ...");
	}	

TEST_ASSERT_EQUAL_INT(number=2,int);
	
}
void Display(char xox_move,int* x,int* y,char tictactoeboard[3][3]) 
{ 							
			tictactoeboard[*x][*y]=xox_move; 
	printf("_________________\n");	
	for(int i=0;i<3;i++)
		{	
			for(int j=0;j<3;j++)
			{
				printf("|  %c |",tictactoeboard[i][j]);
			}
			printf("\n");
			printf("|____||____||____|\n");
		}
TEST_ASSERT_EQUAL_CHAR(tictactoeboard[1][2],char);		
}
#include "fun.h"
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
TEST_ASSERT_EQUAL_INT(1,int);
TEST_ASSERT_EQUAL_INT(2,int);
TEST_ASSERT_EQUAL_INT(0,int);
TEST_ASSERT_EQUAL_CHAR(tictactoeboard[1][2],char);
}