#pragma once
//库函数
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//宏定义
#define ROW 3
#define COL 3

//函数申明
void meun();

void Initboard(char board[ROW][COL], int row, int col);//初始化二维数组

void Displayboard(char board[ROW][COL], int row, int col);//打印棋盘

void PlayerMove(char board[ROW][COL], int row, int col);//玩家下棋

void ComputerMove(char board[ROW][COL], int row, int col);//电脑下棋

char CheckWin(char board[ROW][COL], int row, int col);//判断输赢