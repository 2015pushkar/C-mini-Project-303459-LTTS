/**
 * @file main.c
 * @author Pushkar Pramod Wani (pushkarwani2015@gmail.com)
 * @brief  TIC-TAC-TOE Game
 * @version 0.1
 * @date 2021-07-07
 * 
 * @copyright Copyright (c) 2021
 * 
 */


#include<stdio.h>
#include<stdlib.h>
#include "Header_for_TIC.h"
char box[10]={'0','1','2','3','4','5','6','7','8','9'};

/*char X,O;

typedef struct 
{
  char choose;
  
}gamer;

int main()
{
  int num;
  
  srand(time(NULL));
  num = rand()%2;
  gamer player1 = {num};
  
  if(player1.choose == 1)
  {
    player1.choose = 'X';
  }
  else
  {
    player1.choose = 'O';
  }
  printf("%C", player1.choose);
  
} */

int main()
{
    int choice,player=1,i;
    char mark;
    do{
        Board_outline();
        player= (player % 2) ? 1: 2;

        printf("Player %d, enter a number: ",player);
        scanf("%d",&choice);

        mark = (player==1) ? 'X' : 'O';
        Values_board(choice,mark);

        i=Win_Lose_CHECK();
        player++;

    }while(i == -1);

    Board_outline();

    if(i==1)
        printf("Player %d  you have won the game",--player);
    else
        printf("Match Draw, Better luck next time\n");


    return 0;
}
