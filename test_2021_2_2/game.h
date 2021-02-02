#pragma once
//头文件
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//宏定义

#define ROW 9
#define COL 9

#define ROWS ROW+2
#define COLS COL+2

#define EASY_COUNT 30
//自定义函数

void  menu();

void InitBoard(char board[ROWS][COLS], int rows, int cols, char set);

void DispalyBoard(char board[ROWS][COLS], int row, int col);

void SetMine(char main[ROWS][COLS], int row, int col, int count);

void FineMine(char main[ROWS][COLS], char show[ROWS][COLS], int row, int col);
