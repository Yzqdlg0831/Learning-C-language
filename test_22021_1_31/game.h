#pragma once
//�⺯��
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//�궨��
#define ROW 3
#define COL 3

//��������
void meun();

void Initboard(char board[ROW][COL], int row, int col);//��ʼ����ά����

void Displayboard(char board[ROW][COL], int row, int col);//��ӡ����

void PlayerMove(char board[ROW][COL], int row, int col);//�������

void ComputerMove(char board[ROW][COL], int row, int col);//��������

char CheckWin(char board[ROW][COL], int row, int col);//�ж���Ӯ