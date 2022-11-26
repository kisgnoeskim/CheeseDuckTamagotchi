#ifndef __TOOL_H__
#define __TOOL_H__


#include <stdio.h>
#include <conio.h>
#include <Windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <MMSystem.h>
#include <time.h>
#pragma comment(lib,"Winmm.lib")

// ���� ����
#define BLACK	0
#define BLUE1	1
#define GREEN1	2
#define CYAN1	3
#define RED1	4
#define MAGENTA1 5
#define YELLOW1	6
#define GRAY1	7
#define GRAY2	8
#define BLUE2	9
#define GREEN2	10
#define CYAN2	11
#define RED2	12
#define MAGENTA2 13
#define YELLOW2	14
#define WHITE	15


void removeCursor(void);                    // Ŀ���� �Ⱥ��̰� �Ѵ�
void gotoxy(int x, int y);                  //���� ���ϴ� ��ġ�� Ŀ�� �̵�
void textcolor(int fg_color, int bg_color); //���ϴ� �����̶� ���ڼ��� �ٲ� �� �ִ�.
void cls(int bg_color, int text_color);     // ȭ�� ������ ���ϴ� �������� �����Ѵ�.
COORD getxy();                               //Ŀ����ġ �������Լ�
void clearReadBuffer();                    //����Ŭ���� �Լ�

#endif
