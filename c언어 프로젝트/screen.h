#ifndef __SCREEN_H__
#define __SCREEN_H__

int mainScreen();		 //���� ȭ����(���ٵ�) ��� �Լ�
int gameOn();	    	 //ȭ���� ������ ȿ���� ����� �Լ�
/*
int playScreen();		 //����ȭ��
int selectMenu();		 //�޴� ����
int saveScreen();		 //���� ȭ��
int traningMenuScreen(); //�Ʒ� ȭ��
int storeScreen();       //���� ȭ��
*/
void clearScreen();      // ���� ȭ�� Ŭ����
void upClearScreen();    // ���� ȭ�� �� Ŭ����
void downClearScreen();  // �Ʒ� ���� ȭ�� Ŭ����
int inGameDisplay();
#endif

