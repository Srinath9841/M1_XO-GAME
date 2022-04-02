#include "function.h"
int main()
{   
	int flag1=1;
	int count=0;
	int model_of_game;
start:
	printf("\n---------------------------------->   READY TO PLAY XO - GAME   <------------------------------------------------------------- \n\a");
	printf("\n                                      Press 1 to STTART \n");
	printf("\n                                      To Exit Press 2 \n");
	scanf("%d",&model_of_game);
 if(model_of_game==1)
	{
			int check[9]={1,2,3,4,5,6,7,8,9};
			int number,playernum=1,x,y;
			char xox_move='X';
			char tictactoeboard[3][3]={};
			void Board();
			while(flag1) 
			{
				invalid:
   	 			printf("\n----------------------->   GAME   <------------------------\n\n");
       			printf("\n\n");
        		printf("  1 |  2 | 3\n");
        		printf("    |    |    \n");
        		printf("____|____|____\n");
        		printf("    |    |    \n");
        		printf("  4 |  5 | 6  \n");
        		printf("    |    |    \n");
        		printf("____|____|____\n");
        		printf("  7 |  8 | 9  \n");
        		printf("    |    |    \n");
				printf("Player %d's Turn ... \n",playernum);
				printf("Select the number that you want to put X or O ...\n");
				scanf("%d",&number);
				if(check[number-1]==0){
					printf("Already taken-----> Choose any other slot");
					goto invalid;
				}
			    Decision(number,xox_move,&x,&y,tictactoeboard);
				Display(xox_move,&x,&y,tictactoeboard);
				CheckForWin(&x,&y,&flag1,tictactoeboard);
				check[number-1]=0;
				count++;
				if(count==9){
					printf("-----------------------------------------------DRAW -----------------------------------------\n ----------------------------------------------WELL PLAYED-------------------------------------");
					break;
				}
				
				if(xox_move =='X')
				{
					xox_move='O'; 
					playernum=2;	
				}
				else
				{
					xox_move='X';
					playernum=1;
				}
			}
printf("\n Enter 2 to EXIT");
scanf("%d",&model_of_game);		
	}
	else if(model_of_game==2)
	{
		flag1=0;
	}
	else
	{
		printf("\n You entered invalid number...");
		printf("\n <<    Enter 1 or 2    >>");
		goto start;
	}
	return 0;
}