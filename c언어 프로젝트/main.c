#include "tools.h"
#include "screen.h"

int main()
{
	system("mode con: cols=150 lines=90"); //�ܼ�â ũ�� ����

	removeCursor();
	mainScreen();
}

