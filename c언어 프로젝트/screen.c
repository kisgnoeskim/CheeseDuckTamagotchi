#include "tools.h"
#include "screen.h"
#include <time.h>

#define MAXSIZE 20
#define HUNGRYTIME 5000 // 줄어드는 시간 조절
#define TIREDTIME 5000
#define BOREDTIME 5000

time_t st;

int isend = 0;
void clearScreen() //o 누르면 화면 하얘지는거
{
	
	int Loop = 0;
	int Pass = 0;

	textcolor(BLACK, WHITE);
	for (Loop = 0; Loop < 37; Loop++)
	{
		if (Pass == 0 && Loop > 14)
		{
			Pass = 1;
			Loop = 22;
		}
		gotoxy(21, 3 + Loop);
		printf("                                              ");
	}
}

//이 upclear랑 downclear가 뭔지 모르겠네 그냥 닌텐도 위에 화면 아래 화면인것 같은데 이걸 호출을 안하는데?
void upClearScreen()
{
	int Loop = 0;

	for (Loop = 0; Loop < 15; Loop++)
	{
		gotoxy(23, 3 + Loop);
		printf("                                              ");
	}
}
void downClearScreen()
{
	int Loop = 0;
	for (Loop = 22; Loop < 36; Loop++)
	{
		gotoxy(23, 3 + Loop);
		printf("                                              ");
	}
}

int mainScreen()
{
	SetConsoleTitle(TEXT("치즈덕 다마고치!")); //콘솔창 이름 설정
	int Loop = 0;
	textcolor(WHITE, BLACK);
	system("mode con: cols=150 lines=90"); //콘솔창 크기 설정

	printf("┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓\n");
	printf("┃                                                                                        ┃\n");
	printf("┃                   ┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓                     ┃\n");
	printf("┃                   ┃                                              ┃                     ┃\n");
	printf("┃                   ┃                                              ┃                     ┃\n");
	printf("┃                   ┃                                              ┃                     ┃\n");
	printf("┃                   ┃                                              ┃                     ┃\n");
	printf("┃                   ┃                                              ┃                     ┃\n");
	printf("┃                   ┃                                              ┃                     ┃\n");
	printf("┃                   ┃                                              ┃                     ┃\n");
	printf("┃                   ┃                                              ┃                     ┃\n");
	printf("┃                   ┃                                              ┃                     ┃\n");
	printf("┃                   ┃                                              ┃                     ┃\n");
	printf("┃                   ┃                                              ┃                     ┃\n");
	printf("┃                   ┃                                              ┃                     ┃\n");
	printf("┃                   ┃                                              ┃                     ┃\n");
	printf("┃                   ┃                                              ┃                     ┃\n");
	printf("┃                   ┃                                              ┃                     ┃\n");
	printf("┃                   ┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛                     ┃\n");
	printf("┃                                                                                        ┃\n");
	printf("┣━━━━━━━━┳━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┳━━━━━━━━┫\n");
	printf("┃ ||||||                           (O를 눌러 전원켜기)                            |||||| ┃\n");
	printf("┣━━━━━━━━┻━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┻━━━━━━━━┫\n");
	printf("┃                                                                                        ┃\n");
	printf("┃                   ┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓                     ┃\n");
	printf("┃                   ┃                                              ┃                     ┃\n");
	printf("┃                   ┃                                              ┃                     ┃\n");
	printf("┃                   ┃                                              ┃                     ┃\n");
	printf("┃                   ┃                                              ┃                     ┃\n");
	printf("┃                   ┃                                              ┃                     ┃\n");
	printf("┃                   ┃                                              ┃                     ┃\n");
	printf("┃                   ┃                                              ┃                     ┃\n");
	printf("┃                   ┃                                              ┃                     ┃\n");
	printf("┃                   ┃                                              ┃                     ┃\n");
	printf("┃                   ┃                                              ┃                     ┃\n");
	printf("┃                   ┃                                              ┃                     ┃\n");
	printf("┃                   ┃                                              ┃                     ┃\n");
	printf("┃                   ┃                                              ┃                     ┃\n");
	printf("┃                   ┃                                              ┃                     ┃\n");
	printf("┃                   ┃                                              ┃                     ┃\n");
	printf("┃                   ┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛                     ┃\n");
	printf("┃                                                                                        ┃\n");
	printf("┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛\n");

	while (1) // "O"가 눌렸을때 게임 시작하기
	{
		if (GetAsyncKeyState(0x4F) && 0x0001 == TRUE)
		{
			textcolor(GRAY1, BLACK);
			gameOn();
		}
	}

	return 0;
}

int gameOn() // 게임 시작하는 함수
{
	int Loop = 0;

	clearScreen();
	Sleep(1000);

	Sleep(500);

	while (1)
	{
		if (GetAsyncKeyState(VK_RETURN) == TRUE)
		{
			break;
		}
		else
		{
			gotoxy(28, 32);
			printf("계속하려면 'ENTER' 를 눌러주세요");
			Sleep(500);
			gotoxy(28, 32);
			printf("                                   ");
			Sleep(500);
		}
	}

	clearScreen();
	Sleep(500);
	st = clock();
	inGameDisplay();
	return 0;
}

int num = 0; //이제 필요 없는것 같은데 혹시 모르니까 안지움

int inGameDisplay() { //ㄹㅇ 진또배기 게임

	/*
	오류 1. 하얀색 화면이 삐꾸임 (gotoxy 조절하면 될듯)
	오류 2. 화면이 깜빡이는데 더블 버퍼링을 쓰면 해결된대
	오류 3. 배고픔이 다 닳으면 5칸에서 갑자기 3칸이됨
	*/

	int hungry = 5; // 헝그리 스텟 5
	int hungryon = 0; // 뭔진 모르겠는데 암튼 필요함

	int tired = 0;
	int tiredon = 0;
	
	int bored = 0;
	int boredon = 0;

	while (isend == 0) {
	gotoxy(25, 27);
	textcolor(BLACK, WHITE);
	printf("배고픔 : ");
	
	stateprint(32, 27, hungry);
	time_t hungrytime = clock();
	if ((hungrytime - st) % HUNGRYTIME < 20 && hungryon) { //hungry time은 맨 위에 있음 이걸로 줄어드는 시간 조절하는거임
	hungry--;
	stateprint(32, 27, hungry);
	hungryon = 0;
	}
	if ((hungrytime - st) % HUNGRYTIME > 20) {
		hungryon = 1;
	}

	gotoxy(45, 27);
	textcolor(BLACK, WHITE);
	printf("피곤함 : ");

	stateprint(55, 27, tired);
	time_t tiredtime = clock();
	if ((tiredtime - st) % TIREDTIME < 20 && tiredon) {
		tired++;
		stateprint(55, 27, tired);
		tiredon = 0;
	}
	if ((tiredtime - st) % TIREDTIME > 20) {
		tiredon = 1;
	}

	gotoxy(25, 30);
	textcolor(BLACK, WHITE);
	printf("지루함 : ");
	
	stateprint(32, 30, bored);
	time_t boredtime = clock();
	if ((boredtime - st) % BOREDTIME < 20 && boredon) {
		bored++;
		stateprint(32, 30, bored);
		boredon = 0;
	}
	if ((boredtime - st) % BOREDTIME > 20) {
		boredon = 1;
	}

	gotoxy(45, 30);
	textcolor(BLACK, WHITE);
	printf("뭐쓰냐 : ");

	/*
	게임 버튼 ex) 밥주기, 놀아주기
	*/
	gameButton(25, 32);
	gotoxy(31, 33);
	textcolor(BLACK, WHITE);
	printf("밥주기");

	gameButton(44, 32);
	gotoxy(49, 33);
	textcolor(BLACK, WHITE);
	printf("놀아주기");

	gameButton(25, 36);
	gotoxy(31, 37);
	textcolor(BLACK, WHITE);
	printf("잠자기");

	gameButton(44, 36);
	gotoxy(31, 33);
	textcolor(BLACK, WHITE);
	printf("밥주기");

	}
	
	
}

int stateprint(int x, int y, int stat) {
	switch (stat)
	{

	case 0:
		gotoxy(x, y);
		textcolor(RED2, WHITE);
		printf("○○○○○");
		break;

	case 1:
		gotoxy(x, y); // y = 27
		textcolor(RED2, WHITE);
		printf("●○○○○");
		break;
	case 2:
		gotoxy(x, y);
		textcolor(RED2, WHITE);
		printf("●●○○○");
		break;
	case 3:
		gotoxy(x, y);
		textcolor(RED2, WHITE);
		printf("●●●○○");
		break;
	case 4:
		gotoxy(x, y);
		textcolor(RED2, WHITE);
		printf("●●●●○");
		break;
	case 5:
		gotoxy(x, y);
		textcolor(RED2, WHITE);
		printf("●●●●●");
		break;

	default:
		break;
		gameover();
	}
	return num;

}

int gameButton(int x, int y) {

	gotoxy(x, y);
	textcolor(GRAY2, WHITE);
	printf("┏━━━━━━━━━━━━━━━━┓");
	gotoxy(x, y + 1);
	textcolor(GRAY2, WHITE);
	printf("┃                ┃"); // 게임 버튼
	gotoxy(x, y + 2);
	textcolor(GRAY2, WHITE);
	printf("┗━━━━━━━━━━━━━━━━┛");

}

int gameover() { //게임끝
	system("cls");
	gotoxy(23, 3);
	printf("게임오버 ㅅㄱ");
	while (1) {
		printf("게임오버 ㅅㄱ!\n");
	}
	isend = 1;
}

/*
int num = 5; // ●●●●● 이게 5개 있다고
int bar() { // 배고픔 졸림 이런거 나타내기 위해서 
	while (1) {
		num--;
		Sleep(30000); //30초에 한칸씩 깎이게

		return num;

		if (num == 0) {
			break;
		}
	}
}
*/
