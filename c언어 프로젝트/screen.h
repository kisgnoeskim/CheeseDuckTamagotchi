#ifndef __SCREEN_H__
#define __SCREEN_H__

int mainScreen();		 //메인 화면을(닌텐도) 찍는 함수
int gameOn();	    	 //화면이 켜지는 효과를 만든는 함수
/*
int playScreen();		 //게임화면
int selectMenu();		 //메뉴 선택
int saveScreen();		 //저장 화면
int traningMenuScreen(); //훈련 화면
int storeScreen();       //상점 화면
*/
void clearScreen();      // 게임 화면 클리어
void upClearScreen();    // 게임 화면 위 클리어
void downClearScreen();  // 아래 게임 화면 클리어
int inGameDisplay();
#endif

