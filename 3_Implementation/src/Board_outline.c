/**
 * @file Board_outline.c
 * @author Pushkar Pramod Wani (pushkarwani2015@gmail.com)
 * @brief  To print the board outline when executed
 * @version 0.1
 * @date 2021-07-07
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "Header_for_TIC.h"

void Board_outline()
{
	printf("\n\n\tTic Tac Toe\n\n");
    printf("Player 1 (X) --V/s-- Player 2 (O)\n\n");
    printf(" _____ _____ _____\n");
    printf("|     |     |     |\n");
    printf("| %c   | %c   | %c   | \n",box[1],box[2],box[3]);
    printf("|_____|_____|_____|\n");
    printf("|     |     |     | \n");
    printf("| %c   | %c   | %c   |  \n",box[4],box[5],box[6]);
    printf("|_____|_____|_____|\n");
    printf("|     |     |     | \n");
    printf("| %c   | %c   | %c   |   \n",box[7],box[8],box[9]);
    printf("|_____|_____|_____|\n");
    


}

  