#include "tools.h"
#include "screen.h"

int main()
{
	system("mode con: cols=150 lines=90"); //콘솔창 크기 설정

	removeCursor();
	mainScreen();
}

