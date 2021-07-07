/**
 * @file Header_for_TIC.h
 * @author Pushkar Pramod Wani (pushkarwani2015@gmail.com)
 * @brief  Header file for TIC-TAC-TOE game
 * @version 0.1
 * @date 2021-07-07
 * 
 * @copyright Copyright (c) 2021
 * 
 */


#include <stdio.h>
#include<stdlib.h>

#ifndef __HEADER_H
#define __HEADER_H


char box[10];
void Board_outline();
void Values_board(int, char);
int Win_Lose_CHECK();

#endif
