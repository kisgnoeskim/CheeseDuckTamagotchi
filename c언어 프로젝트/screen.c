#include "tools.h"
#include "screen.h"
#include <time.h>
#include <stdio.h> //움직이기에서 가져옴
#include <Windows.h>
#include <conio.h>


#define CD_BOTTOM_Y 30 //움직이기에서 가져옴
int CD_Y = CD_BOTTOM_Y; //움직이기에서 가져옴
#define MAXSIZE 20
#define HUNGRYTIME 5000 // 줄어드는 시간 조절
#define TIREDTIME 5000
#define BOREDTIME 5000

#define LEFT 75  //왼쪽 방향키
#define RIGHT 77 //오른쪽 방향키
#define UP 72   //위쪽 방향키
#define DOWN 80 //아래 방향키
#define ENTER 13 //아래 방향키

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

/*
움직이기 부분
*/
void CD(int CD_Y) {
	gotoxy(0, CD_Y);
	printf("	          #@!.=@$                   \n");
	printf("            #          @                \n");
	printf("          @              !              \n");
	printf("         @    '    '      !             \n");
	printf("        !                  @            \n");
	printf("              @-   @                    \n");
	printf("       .     @      .                   \n");
	printf("       @     @            @             \n");
	printf("              ! ;@  @      @@           \n");
	printf("                               @        \n");
	printf("                                 @      \n");
	printf("     @                            -     \n");
	printf("     =                              :   \n");
	printf("    @                                   \n");
	printf("   @                                 @  \n");
	printf("  ~                                   @ \n");
	printf("                                      @ \n");
	printf(" #                                    - \n");
	printf(" @                                    ; \n");
	printf(" :                                    @ \n");
	printf("                                      ; \n");
	printf("  @                                  @  \n");
	printf("   $                                @   \n");
	printf("   :=.@,                         @@.==  \n");
}

void CD_eat(int CD_Y) {
	gotoxy(0, CD_Y);
	int i;
	for (i = 0; i <= 2; i++) {
		switch (i)
		{
		case 0:
			printf("				;===;                  \n");
			printf("             -@@-     ,@@.              \n");
			printf("           ,@            -@             \n");
			printf("          #     ~          =.           \n");
			printf("         *      @     @     *.          \n");
			printf("      @@@~                   @@@*       \n");
			printf("    ,~                      !    @      \n");
			printf("   .,          #-   .@            @     \n");
			printf("   @          @       *#          -     \n");
			printf("  ,           @        #           :    \n");
			printf("  #           #;@@;@@;;@           :    \n");
			printf("  @                               -     \n");
			printf("  ~                               @     \n");
			printf("   @                             .;     \n");
			printf("    @@;@@  @@@@@@@;@@@@@        #$      \n");
			printf("        @@                @     .       \n");
			printf("        @                 ,     @       \n");
			printf("       @                   ~-   @       \n");
			printf("      .:                    #   #       \n");
			printf("       @!#@$#@@@@@@@@;;;--@@    ~       \n");
			printf("       @!~@!!@  @!!#  @!!* -     ,      \n");
			printf("       @!~@!!@  @!!#  @!!~~      ~      \n");
			printf("       @!=@!!@  @!!:  $!! @      @      \n");
			printf("       @!@@!!@  @!!:  =!@ @      @      \n");
			printf("       @!@@!!@  @!!:  !!@ ,      @      \n");
			printf("       $!@:!!#  @!!  -!!,=       @      \n");
			printf("       !!#~!!$  @!!  =!* @       @      \n");
			printf("        *$ !!$  @!!  @!@ ;       @      \n");
			printf(" ~===@@@@! #!$  @!!  @!#*::::::::@   ,  \n");
			printf("        @!-@!!  @!!  =! @               \n");
			printf("         @$@!!  @!*  *=..               \n");
			printf("                ;;;;@@*                 \n");
			Sleep(300);
			system("cls");
			break;

		case 1:
			//printf("									     \n");
			//printf("									     \n");
			//printf("									     \n");
			printf("           .-.*=======:---              \n");
			printf("          ;;;.         ~;;~             \n");
			printf("         *-,              -;-           \n");
			printf("                            =.          \n");
			printf("     -~~;.     :    -      ;**=!-       \n");
			printf("     =                         ,=-      \n");
			printf("    *,         =====*           .!      \n");
			printf("    #         #~:::--@;          =.     \n");
			printf("    ;         #.,--..~;          !.     \n");
			printf("    #        -! :;;::!=.         =.     \n");
			printf("    :-       -  ~,-~~~~.         =.     \n");
			printf("     -*   .#######-$####.       :~      \n");
			printf("        =#               .*    ~;       \n");
			printf("       ,!                 -;   :;-      \n");
			printf("      ,$-                 .;,   ,,      \n");
			printf("      -!                   :-    !.     \n");
			printf("       :#@@@@@@@@@@@@*   .@@-    *.     \n");
			printf("       :$.@=*,  ;**$  ~==#-;      -     \n");
			printf("       :=.@**, .@$$- ,!*=:-;      #     \n");
			printf("       ~*=@*=~ .@#$. -$*$.!.      #     \n");
			printf("       ;*@@*=@..@##. -#*@.=       #     \n");
			printf("       ;;@$*$@..@@@. -#*@.;       #     \n");
			printf("       ;;@-*$@..@@@. -#*;:        *     \n");
			printf("       ;!@ *$@..@@@. -$$.#        .     \n");
			printf("       ;*@.#=@..@#@..#=#.#       *.     \n");
			printf("      -!=*.#=#..@##..#=~!,...,,,,=-,,,, \n");
			printf("        *=;#*#..@$@..#$-#!;;;!!!!!!!!!! \n");
			printf("        -#@:*#..#*#..#$=~               \n");
			printf("         .. ..  . . :$-.                \n");
			Sleep(300);
			system("cls");
			break;

		case 2:
			//printf("									     \n");
			//printf("									     \n");
			//printf("									     \n");
			//printf("									     \n");
			//printf("									     \n");
			//printf("									     \n");
			//printf("									     \n");
			//printf("									     \n");
			printf("                .:.                     \n");
			printf("           ,==- .-.  :===               \n");
			printf("         *#              -@;            \n");
			printf("       .*.                 :$$-,.       \n");
			printf("      .;,                      !;.      \n");
			printf("     ;-;                        ,!      \n");
			printf("     =-;                         =.     \n");
			printf("    ;  ::.#=*#:-=!#! ...         =.     \n");
			printf("    ~~ ,!!           !**, ~,    ,!      \n");
			printf("     :!$-                 :;;;!!;;      \n");
			printf("     .=,                   ..#,,.!.     \n");
			printf("     .@#@@@@@@@@@@@@@* - =@@!     #     \n");
			printf("       :$.@@@- .@=*~  .-:$-;      $     \n");
			printf("       :#.@@@- .@$*  ,~-:-.-      -;    \n");
			printf("       :$~@@@- .@=*  -*~$.;        #    \n");
			printf("       ~==@##: .#=*  -=;@.=        #    \n");
			printf("       ;$@@$#@..#**  -$*=,;        #    \n");
			printf("       ;$@!$$@..#**  -#$.!         ;    \n");
			printf("       ;=@.**#..#*#. :##.#        *     \n");
			printf("       ;=@.$;$..#=@..@#@.#        #     \n");
			printf("     ~$$=*.$-$..@$@..@@-#.   ..,,*-,,,, \n");
			printf("        !;;=,=..@$@..@@-#;   ;;!!!!!!!! \n");
			printf("        -$@::$..@$@..@@=~               \n");
			printf("         ..  .  ... .=..				 \n");
			Sleep(300);
			system("cls");
			break;
		}
	}
}

void CD_sleep(int CD_Y) {
	gotoxy(0, CD_Y);
	int i;
	for (i = 0; i <= 2; i++) {
		switch (i)
		{
		case 0:
			printf("									     \n");
			printf("									     \n");
			printf("									     \n");
			printf("									     \n");
			printf("									     \n");
			printf("									     \n");
			printf("									     \n");
			printf("									     \n");
			printf("									     \n");
			printf("									     \n");
			printf("         ,,,,,.  .,     .,.             \n");
			printf("      ,.;!!!!-  :!     ~!;~:            \n");
			printf("     :,.-                 ,~*           \n");
			printf("    $. *~                   ..~         \n");
			printf("   ~   ....:-                 .         \n");
			printf("   # .;*=**,                  ,;.~~~.   \n");
			printf("    ~;-$,*,-*-                  ;=;;;~  \n");
			printf("     -=~ ,#$;             ,*$$$-;@#$;:  \n");
			printf("       ~#@#;                   -#~      \n");
			printf("            .!==;.----           =.     \n");
			printf("                 .:;;:.    ,;;;;-~      \n");
			printf("                           .,---.       \n");
			printf("									     \n");
			printf("									     \n");
			printf("									     \n");
			printf("									     \n");
			printf("									     \n");
			printf("									     \n");
			printf("									     \n");
			printf("									     \n");
			printf("									     \n");
			printf("									     \n");
			Sleep(300);
			system("cls");
			break;

		case 1:
			printf("									     \n");
			printf("									     \n");
			printf("									     \n");
			printf("									     \n");
			printf("									     \n");
			printf("									     \n");
			printf("									     \n");
			printf("									     \n");
			printf("									     \n");
			printf("									     \n");
			printf("               .::,;;   ~!:,,           \n");
			printf("      ,*-      .~~.        ,,!          \n");
			printf("     .*.                     .$,        \n");
			printf("    .$ :-                      ,,       \n");
			printf("    #  ,~  ,~                  ,;.~~.   \n");
			printf("    # ,;:,!:                    ;=!::-  \n");
			printf("   !- -#$.~,                    ;;$ ,-  \n");
			printf("    -@$-  #                 -#@@@~      \n");
			printf("         !===;. .-----.         .!      \n");
			printf("                ,;;;;:,  .;;;;;~,,      \n");
			printf("                          ,,--,.        \n");
			printf("									     \n");
			printf("									     \n");
			printf("									     \n");
			printf("									     \n");
			printf("									     \n");
			printf("									     \n");
			printf("									     \n");
			printf("									     \n");
			printf("									     \n");
			printf("									     \n");
			printf("									     \n");
			Sleep(300);
			system("cls");
			break;

		case 2:
			printf("									     \n");
			printf("									     \n");
			printf("									     \n");
			printf("									     \n");
			printf("									     \n");
			printf("									     \n");
			printf("									     \n");
			printf("									     \n");
			printf("									     \n");
			printf("									     \n");
			printf("									     \n");
			printf("									     \n");
			printf("           ,;$###########,              \n");
			printf("    ..-##~                 .=####-....  \n");
			printf(" .~.!!  -   ,.                    !=!*: \n");
			printf(" ;:.    =*!:,.                     ., - \n");
			printf(" ~~     ,--::                    .=~    \n");
			printf("  ;@-  :#@@@;                      #    \n");
			printf("     =!,       =*:*==*-   .-------,*    \n");
			printf("                          .;;;;;;:-     \n");
			printf("									     \n");
			printf("									     \n");
			printf("									     \n");
			printf("									     \n");
			printf("									     \n");
			printf("									     \n");
			printf("									     \n");
			printf("									     \n");
			printf("									     \n");
			printf("									     \n");
			printf("									     \n");
			printf("									     \n");
			Sleep(300);
			system("cls");
			break;
		}
	}
}

void CD_play(int CD_Y) {
	gotoxy(0, CD_Y);
	int i;
	for (i = 0; i <= 3; i++) {
		switch (i)
		{
		case 0:
			printf("									     \n");
			printf("									     \n");
			printf("									     \n");
			printf("									     \n");
			printf("									     \n");
			printf("                .*$==$*.                \n");
			printf("                *=.  ;=;                \n");
			printf("               .=.   ,-$.               \n");
			printf("              !@= =##= =@               \n");
			printf("              ##  , .,,=@               \n");
			printf("              ;#  ~ ,, *!               \n");
			printf("               ~       ,                \n");
			printf("               !                        \n");
			printf("               #                        \n");
			printf("     :,   ,   #        ;               \n");
			printf("     :;~- !,   *        $               \n");
			printf("      -#~ .    ,        .        ~$:    \n");
			printf("    .,#: $ ;             .      ;~$.!   \n");
			printf(" ., !!     ~             !    ~,-;@~    \n");
			printf(" .;-~;     ;-  ;          :   ~   ~::   \n");
			printf("  . .-!     .  ,          ~:        .   \n");
			printf("            ;--            ;~           \n");
			printf(" -----;*----!-  ;@@@@@@@@#  ;$:~---~---.\n");
			printf(".@@@@@@@@@@@=. .@@@@@@@@@@~  :@@@@@@@@@~\n");
			printf(".@@@@@@@@@@@; .$@@@@@@@@@@@=- @@@@@@@@@~\n");
			printf(".@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@~\n");
			printf(".@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@~\n");
			printf(".@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@~\n");
			printf(".@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@~\n");
			printf(".@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@~\n");
			printf(".@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@~\n");
			printf(" !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!,\n");
			Sleep(300);
			system("cls");
			break;

		case 1:

			printf("									     \n");
			printf("									     \n");
			printf("									     \n");
			printf("									     \n");
			printf("									     \n");
			printf("									     \n");
			printf("                   ;*=*@;,              \n");
			printf("                   *#-. ,-#~            \n");
			printf("                 =@  ~,  -;             \n");
			printf("                 ;@. .!-. -*            \n");
			printf("                 -$. .;.,:-@;           \n");
			printf("                  ,  .-. --@:           \n");
			printf("                           .            \n");
			printf("                 :-                     \n");
			printf("                 .                      \n");
			printf("                ,~        ;             \n");
			printf("                .,       .*             \n");
			printf("          .,=## .        .!             \n");
			printf("      :-- !., , :         .  ~~~,       \n");
			printf("    ~!- ~  .-  ;            ~:::,:.     \n");
			printf("   !,,       ; ,          -:*..$:.  .   \n");
			printf("     #       ,#            ;~           \n");
			printf("------------*@= -@@@@@@@@# ~#@@@=~:@@=; \n");
			printf("*@@@@@@@@@@@@*  -@@@@@@@@#  =@@@@@@@@@@.\n");
			printf("-@@@@@@@@@@@@~  $@@@@@@@@#  ,#@@@@@@@@@.\n");
			printf("-@@@@@@@@@@@@; @@@@@@@@@@@=  #@@@@@@@@@.\n");
			printf("-@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@.\n");
			printf("-@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@.\n");
			printf("-@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@.\n");
			printf("-@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@.\n");
			printf("-@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@.\n");
			printf(",!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!! \n");
			Sleep(300);
			system("cls");
			break;


		case 2:
			printf("									     \n");
			printf("									     \n");
			printf("									     \n");
			printf("									     \n");
			printf("									     \n");
			printf("									     \n");
			printf("									     \n");
			printf("									     \n");
			printf("			    	.@@@@#              \n");
			printf("                  ,~=;  ,$=.            \n");
			printf("                 -$!    ; *;            \n");
			printf("               ,#@. ;  * -#,            \n");
			printf("               -@~  =@!@ -@-            \n");
			printf("         ,      ~,       -$~  .         \n");
			printf("      -,.,;      ;-         : :;        \n");
			printf("     **,!$       ,.          ;#         \n");
			printf("     #,!~=.*                 ..         \n");
			printf("    -$-:        -:             -:       \n");
			printf("  ~,            -         .,            \n");
			printf("  -!  :    --  !-         -;;           \n");
			printf("  .,  .     . =,           .=.   ;      \n");
			printf("            ;@.            ;@.          \n");
			printf(" -----;*----;,  =@@@@@@@@@, ;@@;;;;@:-- \n");
			printf(".@@@@@@@@@@@;  !@@@@@@@@@@#- :;@@@@@@@@.\n");
			printf(".@@@@@@@@@@=. *@@@@@@@@@@@@#-  ;@@@@@@@.\n");
			printf(".@@@@@@@@@@@=$@@@@@@@@@@@@@@@..@@@@@@@@.\n");
			printf(".@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@.\n");
			printf(".@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@.\n");
			printf(".@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@.\n");
			printf(".@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@.\n");
			printf(".@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@.\n");
			printf(" !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!! \n");
			Sleep(300);
			system("cls");
			break;

		case 3:
			printf("									     \n");
			printf("									     \n");
			printf("									     \n");
			printf("									     \n");
			printf("									     \n");
			printf("									     \n");
			printf("									     \n");
			printf("                *==.                    \n");
			printf("               @#$@@#                   \n");
			printf("            .#*    $@*                 \n");
			printf("   ~ :  ~;   != ~    *@-                \n");
			printf("   , ~; ~~  ~#, ,~=  -*.                \n");
			printf("    #:~;     =.                         \n");
			printf("   .=  .. #           .           ,.$;  \n");
			printf("   :   -! #           -,         -!~,;, \n");
			printf("    !   =.#            :        ~: ~.;, \n");
			printf("    .   . #   $        =.      -;    .  \n");
			printf("  :~      .   #                         \n");
			printf("   :      !   ~         ~~    ~     ,~  \n");
			printf("           :  -          ::   ~     :   \n");
			printf("     .!    --!,           ~: =      .   \n");
			printf("                            *.     #    \n");
			printf(" -----;*---    -----------,   *.------- \n");
			printf(".@@@@@@@@@#   ;@@@@@@@@@@@#-   -@@@@@@@.\n");
			printf(".@@@@@@@@@# ~=@@@@@@@@@@@@@#===$@@@@@@@.\n");
			printf(".@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@.\n");
			printf(".@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@.\n");
			printf(".@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@.\n");
			printf(".@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@.\n");
			printf(".@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@.\n");
			printf(".@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@.\n");
			printf(" !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!! \n");
			Sleep(300);
			system("cls");
			break;
		}
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
	오류 4. 왜 눌러도 밥먹기 화면으로 안넘어가는거야
	*/

	int hungry = 5; // 헝그리 스텟 5
	int hungryon = 0; // 뭔진 모르겠는데 암튼 필요함

	int tired = 0;
	int tiredon = 0;

	int bored = 0;
	int boredon = 0;

	int sel = 1; //왼쪽 위 부터 1,2,3,4

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
		char key = _kbhit();
		if (_kbhit()) {
			char key = _getch();
			switch (key) //화면내 선택이동
			{
			case LEFT:
				if (sel == 1) sel = 1;
				else if (sel == 2) sel = 1;
				else if (sel == 3) sel = 3;
				else if (sel = 4) sel = 3;
				key = NULL;
				break;
			case RIGHT:
				if (sel == 1) sel = 2;
				else if (sel == 2) sel = 2;
				else if (sel == 3) sel = 4;
				else if (sel = 4) sel = 4;
				key = NULL;
				break;
			case UP:
				if (sel == 1) sel = 1;
				else if (sel == 2) sel = 2;
				else if (sel == 3) sel = 1;
				else if (sel = 4) sel = 2;
				key = NULL;
				break;
			case DOWN:
				if (sel == 1) sel = 3;
				else if (sel == 2) sel = 4;
				else if (sel == 3) sel = 3;
				else if (sel = 4) sel = 4;
				key = NULL;
				break;
			case ENTER:
				//엔터키 입력시 이벤트 추가
				break;
			default:
				break;
			}
		}

		gameButton(25, 32);
		gotoxy(31, 33);
		textcolor(BLACK, WHITE);
		if (sel == 1)
			textcolor(WHITE, BLACK);
		printf("밥주기");

		gameButton(44, 32);
		gotoxy(49, 33);
		textcolor(BLACK, WHITE);
		if (sel == 2)
			textcolor(WHITE, BLACK);
		printf("놀아주기");

		gameButton(25, 36);
		gotoxy(31, 37);
		textcolor(BLACK, WHITE);
		if (sel == 3)
			textcolor(WHITE, BLACK);
		printf("잠자기");

		gameButton(44, 36);
		gotoxy(50, 37);
		textcolor(BLACK, WHITE);
		if (sel == 4)
			textcolor(WHITE, BLACK);
		printf("임시");

		/*
		if (GetAsyncKeyState(VK_RETURN) == TRUE) { //vk_return이 엔터임 저거 그대로 구글링하면 가상키보드 뭐시기 뜨는데 거기 여러가지 있음
			system("cls");
			for (int i = 0; i <= 3; i++)
				CD_eat(CD_Y);
		}
		else {
			continue;
		}
		*/
		textcolor(BLACK, WHITE);
	} //while 닫기
} //ingame 함수 닫기

//업다운 게임
int UpDownGame()
{
	int com, user;
	int cnt = 0;
	int play = 1;

	srand(time(NULL));
	com = rand() % 100 + 1;

	while (play == 1)
	{
		printf("1~100사이의 수를 입력해 주셈\n");
		scanf("%d", &user);


		while (user > 100 || user < 1)
		{
			printf("\n다시 입력해주셈\n");
			scanf("%d", &user);
		}
		if (user < 100 && user>1)
		{
			if (user > com)
			{
				printf("다운이셈\n\n");
				cnt++; //시도 횟수 카운트
			}
			else if (user < com)
			{
				printf("업이셈\n\n");
				cnt++;

			}
			else if (com == user)
			{
				cnt++;
				printf("정답이잖슴\n%d번째에 맞췄음", cnt);
				play = 0;
			}
		}
	}
}

//숫자야구 게임
int NumberBaseballGame() {

	int computerBall[3]; // 컴퓨터의 볼 체크

	int temp; // 난수 중복 체크를 위한 변수 

	int userBall[3]; // 사용자의 볼 체크

	int count = 1; // 회차를 확인할 변수 9회까지 가능 

	int strike; // 스트라이크의 수를 세기 위한 변수 

	int ball; // 볼의 수를 세기 위한 변수 

	// 난수 생성 및 중복 체크 

	srand((unsigned)time(NULL));

	for (int i = 0; i < 3; i++)

	{

		temp = (rand() % 9) + 1; // temp변수에 현재 랜덤 값을 저장 

		computerBall[i] = temp; // temp값을 컴퓨터의 볼에 저장 

		for (int j = 0; j < i; j++) // 현재 추가된 만큼 반복하며 

			if (temp == computerBall[j] && i != j) // 만약 현재 temp값과 이전에 넣은 값 중 동일한 게 있다면 

				i--; // i의 값을 줄여 다시 이전으로 돌아가도록 

	}



	while (1) { // 게임시작

		printf("[%d회차 숫자야구]\n", count);

		while (1) // 정상적인 숫자만 입력받기 위한 반복 

		{

			printf("1부터 9까지의 숫자를 입력하세요 : ");

			scanf("%d %d %d", &userBall[0], &userBall[1], &userBall[2]);

			if (userBall[0] < 1 || userBall[0] > 9 || userBall[1] < 1 || userBall[1] > 9 || userBall[2] < 1 || userBall[2] > 9)

			{ // 입력한 숫자가 1 ~ 9 숫자가 아니면 다시 입력받도록 

				printf("범위 외의 숫자를 입력하시면 안됩니다.\n");

				continue;

			}

			else if (userBall[0] == userBall[1] || userBall[0] == userBall[2] || userBall[1] == userBall[2])

			{ // 입력한 숫자 중에 중복된 게 있으면 다시 입력받도록 

				printf("중복된 숫자를 입력하시면 안됩니다.\n");

				continue;

			}

			break; // 아무 문제 없을 경우 반복 종료 

		}

		ball = 0;

		strike = 0;

		for (int i = 0; i < 3; i++) // computerBall 1~3번째에 따라 각 userBall 1~3번째를 확인하기 위한 반복 

			for (int j = 0; j < 3; j++)

				if (computerBall[i] == userBall[j]) // computerBall과 userBall의 값이 같다면 

					if (i == j) // 같은 위치일 경우 

						strike++; // 스트라이크 개수 증가 

					else // 다른 위치일 경우 

						ball++; // 볼 개수 증가 

		// 확인한 결과를 출력 

		printf("[결과]스트라이크 : %d, 볼 : %d\n\n", strike, ball);

		if (strike == 3) // 만약 스트라이크 개수가 3개이면 승리 

		{

			printf("***** 승리했습니다. *****\n\n");

			break;

		}

		else if (count == 9) // 만약 9회차인데도 승리하지 못하면 패배 

		{

			printf("***** 패배했습니다.. 정답 : %d %d %d *****\n\n", computerBall[0], computerBall[1], computerBall[2]);

			break;

		}

		count++;

	}

	return 0;

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


/*
움직이기 부분

void CD(int CD_Y) {
	gotoxy(0, CD_Y);
	printf("	          #@!.=@$                   \n");
	printf("            #          @                \n");
	printf("          @              !              \n");
	printf("         @    '    '      !             \n");
	printf("        !                  @            \n");
	printf("              @-   @                    \n");
	printf("       .     @      .                   \n");
	printf("       @     @            @             \n");
	printf("              ! ;@  @      @@           \n");
	printf("                               @        \n");
	printf("                                 @      \n");
	printf("     @                            -     \n");
	printf("     =                              :   \n");
	printf("    @                                   \n");
	printf("   @                                 @  \n");
	printf("  ~                                   @ \n");
	printf("                                      @ \n");
	printf(" #                                    - \n");
	printf(" @                                    ; \n");
	printf(" :                                    @ \n");
	printf("                                      ; \n");
	printf("  @                                  @  \n");
	printf("   $                                @   \n");
	printf("   :=.@,                         @@.==  \n");
}

void CD_eat(int CD_Y) {
	gotoxy(0, CD_Y);
	int i;
	for (i = 0; i <= 2; i++) {
		switch (i)
		{
		case 0:
			printf("				;===;                  \n");
			printf("             -@@-     ,@@.              \n");
			printf("           ,@            -@             \n");
			printf("          #     ~          =.           \n");
			printf("         *      @     @     *.          \n");
			printf("      @@@~                   @@@*       \n");
			printf("    ,~                      !    @      \n");
			printf("   .,          #-   .@            @     \n");
			printf("   @          @       *#          -     \n");
			printf("  ,           @        #           :    \n");
			printf("  #           #;@@;@@;;@           :    \n");
			printf("  @                               -     \n");
			printf("  ~                               @     \n");
			printf("   @                             .;     \n");
			printf("    @@;@@  @@@@@@@;@@@@@        #$      \n");
			printf("        @@                @     .       \n");
			printf("        @                 ,     @       \n");
			printf("       @                   ~-   @       \n");
			printf("      .:                    #   #       \n");
			printf("       @!#@$#@@@@@@@@;;;--@@    ~       \n");
			printf("       @!~@!!@  @!!#  @!!* -     ,      \n");
			printf("       @!~@!!@  @!!#  @!!~~      ~      \n");
			printf("       @!=@!!@  @!!:  $!! @      @      \n");
			printf("       @!@@!!@  @!!:  =!@ @      @      \n");
			printf("       @!@@!!@  @!!:  !!@ ,      @      \n");
			printf("       $!@:!!#  @!!  -!!,=       @      \n");
			printf("       !!#~!!$  @!!  =!* @       @      \n");
			printf("        *$ !!$  @!!  @!@ ;       @      \n");
			printf(" ~===@@@@! #!$  @!!  @!#*::::::::@   ,  \n");
			printf("        @!-@!!  @!!  =! @               \n");
			printf("         @$@!!  @!*  *=..               \n");
			printf("                ;;;;@@*                 \n");
			Sleep(300);
			system("cls");
			break;

		case 1:
			//printf("									     \n");
			//printf("									     \n");
			//printf("									     \n");
			printf("           .-.*=======:---              \n");
			printf("          ;;;.         ~;;~             \n");
			printf("         *-,              -;-           \n");
			printf("                            =.          \n");
			printf("     -~~;.     :    -      ;**=!-       \n");
			printf("     =                         ,=-      \n");
			printf("    *,         =====*           .!      \n");
			printf("    #         #~:::--@;          =.     \n");
			printf("    ;         #.,--..~;          !.     \n");
			printf("    #        -! :;;::!=.         =.     \n");
			printf("    :-       -  ~,-~~~~.         =.     \n");
			printf("     -*   .#######-$####.       :~      \n");
			printf("        =#               .*    ~;       \n");
			printf("       ,!                 -;   :;-      \n");
			printf("      ,$-                 .;,   ,,      \n");
			printf("      -!                   :-    !.     \n");
			printf("       :#@@@@@@@@@@@@*   .@@-    *.     \n");
			printf("       :$.@=*,  ;**$  ~==#-;      -     \n");
			printf("       :=.@**, .@$$- ,!*=:-;      #     \n");
			printf("       ~*=@*=~ .@#$. -$*$.!.      #     \n");
			printf("       ;*@@*=@..@##. -#*@.=       #     \n");
			printf("       ;;@$*$@..@@@. -#*@.;       #     \n");
			printf("       ;;@-*$@..@@@. -#*;:        *     \n");
			printf("       ;!@ *$@..@@@. -$$.#        .     \n");
			printf("       ;*@.#=@..@#@..#=#.#       *.     \n");
			printf("      -!=*.#=#..@##..#=~!,...,,,,=-,,,, \n");
			printf("        *=;#*#..@$@..#$-#!;;;!!!!!!!!!! \n");
			printf("        -#@:*#..#*#..#$=~               \n");
			printf("         .. ..  . . :$-.                \n");
			Sleep(300);
			system("cls");
			break;

		case 2:
			//printf("									     \n");
			//printf("									     \n");
			//printf("									     \n");
			//printf("									     \n");
			//printf("									     \n");
			//printf("									     \n");
			//printf("									     \n");
			//printf("									     \n");
			printf("                .:.                     \n");
			printf("           ,==- .-.  :===               \n");
			printf("         *#              -@;            \n");
			printf("       .*.                 :$$-,.       \n");
			printf("      .;,                      !;.      \n");
			printf("     ;-;                        ,!      \n");
			printf("     =-;                         =.     \n");
			printf("    ;  ::.#=*#:-=!#! ...         =.     \n");
			printf("    ~~ ,!!           !**, ~,    ,!      \n");
			printf("     :!$-                 :;;;!!;;      \n");
			printf("     .=,                   ..#,,.!.     \n");
			printf("     .@#@@@@@@@@@@@@@* - =@@!     #     \n");
			printf("       :$.@@@- .@=*~  .-:$-;      $     \n");
			printf("       :#.@@@- .@$*  ,~-:-.-      -;    \n");
			printf("       :$~@@@- .@=*  -*~$.;        #    \n");
			printf("       ~==@##: .#=*  -=;@.=        #    \n");
			printf("       ;$@@$#@..#**  -$*=,;        #    \n");
			printf("       ;$@!$$@..#**  -#$.!         ;    \n");
			printf("       ;=@.**#..#*#. :##.#        *     \n");
			printf("       ;=@.$;$..#=@..@#@.#        #     \n");
			printf("     ~$$=*.$-$..@$@..@@-#.   ..,,*-,,,, \n");
			printf("        !;;=,=..@$@..@@-#;   ;;!!!!!!!! \n");
			printf("        -$@::$..@$@..@@=~               \n");
			printf("         ..  .  ... .=..				 \n");
			Sleep(300);
			system("cls");
			break;
		}
	}
}

void CD_sleep(int CD_Y) {
	gotoxy(0, CD_Y);
	int i;
	for (i = 0; i <= 2; i++) {
		switch (i)
		{
		case 0:
			printf("									     \n");
			printf("									     \n");
			printf("									     \n");
			printf("									     \n");
			printf("									     \n");
			printf("									     \n");
			printf("									     \n");
			printf("									     \n");
			printf("									     \n");
			printf("									     \n");
			printf("         ,,,,,.  .,     .,.             \n");
			printf("      ,.;!!!!-  :!     ~!;~:            \n");
			printf("     :,.-                 ,~*           \n");
			printf("    $. *~                   ..~         \n");
			printf("   ~   ....:-                 .         \n");
			printf("   # .;*=**,                  ,;.~~~.   \n");
			printf("    ~;-$,*,-*-                  ;=;;;~  \n");
			printf("     -=~ ,#$;             ,*$$$-;@#$;:  \n");
			printf("       ~#@#;                   -#~      \n");
			printf("            .!==;.----           =.     \n");
			printf("                 .:;;:.    ,;;;;-~      \n");
			printf("                           .,---.       \n");
			printf("									     \n");
			printf("									     \n");
			printf("									     \n");
			printf("									     \n");
			printf("									     \n");
			printf("									     \n");
			printf("									     \n");
			printf("									     \n");
			printf("									     \n");
			printf("									     \n");
			Sleep(300);
			system("cls");
			break;

		case 1:
			printf("									     \n");
			printf("									     \n");
			printf("									     \n");
			printf("									     \n");
			printf("									     \n");
			printf("									     \n");
			printf("									     \n");
			printf("									     \n");
			printf("									     \n");
			printf("									     \n");
			printf("               .::,;;   ~!:,,           \n");
			printf("      ,*-      .~~.        ,,!          \n");
			printf("     .*.                     .$,        \n");
			printf("    .$ :-                      ,,       \n");
			printf("    #  ,~  ,~                  ,;.~~.   \n");
			printf("    # ,;:,!:                    ;=!::-  \n");
			printf("   !- -#$.~,                    ;;$ ,-  \n");
			printf("    -@$-  #                 -#@@@~      \n");
			printf("         !===;. .-----.         .!      \n");
			printf("                ,;;;;:,  .;;;;;~,,      \n");
			printf("                          ,,--,.        \n");
			printf("									     \n");
			printf("									     \n");
			printf("									     \n");
			printf("									     \n");
			printf("									     \n");
			printf("									     \n");
			printf("									     \n");
			printf("									     \n");
			printf("									     \n");
			printf("									     \n");
			printf("									     \n");
			Sleep(300);
			system("cls");
			break;

		case 2:
			printf("									     \n");
			printf("									     \n");
			printf("									     \n");
			printf("									     \n");
			printf("									     \n");
			printf("									     \n");
			printf("									     \n");
			printf("									     \n");
			printf("									     \n");
			printf("									     \n");
			printf("									     \n");
			printf("									     \n");
			printf("           ,;$###########,              \n");
			printf("    ..-##~                 .=####-....  \n");
			printf(" .~.!!  -   ,.                    !=!*: \n");
			printf(" ;:.    =*!:,.                     ., - \n");
			printf(" ~~     ,--::                    .=~    \n");
			printf("  ;@-  :#@@@;                      #    \n");
			printf("     =!,       =*:*==*-   .-------,*    \n");
			printf("                          .;;;;;;:-     \n");
			printf("									     \n");
			printf("									     \n");
			printf("									     \n");
			printf("									     \n");
			printf("									     \n");
			printf("									     \n");
			printf("									     \n");
			printf("									     \n");
			printf("									     \n");
			printf("									     \n");
			printf("									     \n");
			printf("									     \n");
			Sleep(300);
			system("cls");
			break;
		}
	}
}

void CD_play(int CD_Y) {
	gotoxy(0, CD_Y);
	int i;
	for (i = 0; i <= 3; i++) {
		switch (i)
		{
		case 0:
			printf("									     \n");
			printf("									     \n");
			printf("									     \n");
			printf("									     \n");
			printf("									     \n");
			printf("                .*$==$*.                \n");
			printf("                *=.  ;=;                \n");
			printf("               .=.   ,-$.               \n");
			printf("              !@= =##= =@               \n");
			printf("              ##  , .,,=@               \n");
			printf("              ;#  ~ ,, *!               \n");
			printf("               ~       ,                \n");
			printf("               !                        \n");
			printf("               #                        \n");
			printf("     :,   ,   #        ;               \n");
			printf("     :;~- !,   *        $               \n");
			printf("      -#~ .    ,        .        ~$:    \n");
			printf("    .,#: $ ;             .      ;~$.!   \n");
			printf(" ., !!     ~             !    ~,-;@~    \n");
			printf(" .;-~;     ;-  ;          :   ~   ~::   \n");
			printf("  . .-!     .  ,          ~:        .   \n");
			printf("            ;--            ;~           \n");
			printf(" -----;*----!-  ;@@@@@@@@#  ;$:~---~---.\n");
			printf(".@@@@@@@@@@@=. .@@@@@@@@@@~  :@@@@@@@@@~\n");
			printf(".@@@@@@@@@@@; .$@@@@@@@@@@@=- @@@@@@@@@~\n");
			printf(".@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@~\n");
			printf(".@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@~\n");
			printf(".@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@~\n");
			printf(".@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@~\n");
			printf(".@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@~\n");
			printf(".@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@~\n");
			printf(" !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!,\n");
			Sleep(300);
			system("cls");
			break;

		case 1:

			printf("									     \n");
			printf("									     \n");
			printf("									     \n");
			printf("									     \n");
			printf("									     \n");
			printf("									     \n");
			printf("                   ;*=*@;,              \n");
			printf("                   *#-. ,-#~            \n");
			printf("                 =@  ~,  -;             \n");
			printf("                 ;@. .!-. -*            \n");
			printf("                 -$. .;.,:-@;           \n");
			printf("                  ,  .-. --@:           \n");
			printf("                           .            \n");
			printf("                 :-                     \n");
			printf("                 .                      \n");
			printf("                ,~        ;             \n");
			printf("                .,       .*             \n");
			printf("          .,=## .        .!             \n");
			printf("      :-- !., , :         .  ~~~,       \n");
			printf("    ~!- ~  .-  ;            ~:::,:.     \n");
			printf("   !,,       ; ,          -:*..$:.  .   \n");
			printf("     #       ,#            ;~           \n");
			printf("------------*@= -@@@@@@@@# ~#@@@=~:@@=; \n");
			printf("*@@@@@@@@@@@@*  -@@@@@@@@#  =@@@@@@@@@@.\n");
			printf("-@@@@@@@@@@@@~  $@@@@@@@@#  ,#@@@@@@@@@.\n");
			printf("-@@@@@@@@@@@@; @@@@@@@@@@@=  #@@@@@@@@@.\n");
			printf("-@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@.\n");
			printf("-@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@.\n");
			printf("-@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@.\n");
			printf("-@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@.\n");
			printf("-@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@.\n");
			printf(",!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!! \n");
			Sleep(300);
			system("cls");
			break;


		case 2:
			printf("									     \n");
			printf("									     \n");
			printf("									     \n");
			printf("									     \n");
			printf("									     \n");
			printf("									     \n");
			printf("									     \n");
			printf("									     \n");
			printf("			    	.@@@@#              \n");
			printf("                  ,~=;  ,$=.            \n");
			printf("                 -$!    ; *;            \n");
			printf("               ,#@. ;  * -#,            \n");
			printf("               -@~  =@!@ -@-            \n");
			printf("         ,      ~,       -$~  .         \n");
			printf("      -,.,;      ;-         : :;        \n");
			printf("     **,!$       ,.          ;#         \n");
			printf("     #,!~=.*                 ..         \n");
			printf("    -$-:        -:             -:       \n");
			printf("  ~,            -         .,            \n");
			printf("  -!  :    --  !-         -;;           \n");
			printf("  .,  .     . =,           .=.   ;      \n");
			printf("            ;@.            ;@.          \n");
			printf(" -----;*----;,  =@@@@@@@@@, ;@@;;;;@:-- \n");
			printf(".@@@@@@@@@@@;  !@@@@@@@@@@#- :;@@@@@@@@.\n");
			printf(".@@@@@@@@@@=. *@@@@@@@@@@@@#-  ;@@@@@@@.\n");
			printf(".@@@@@@@@@@@=$@@@@@@@@@@@@@@@..@@@@@@@@.\n");
			printf(".@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@.\n");
			printf(".@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@.\n");
			printf(".@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@.\n");
			printf(".@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@.\n");
			printf(".@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@.\n");
			printf(" !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!! \n");
			Sleep(300);
			system("cls");
			break;

		case 3:
			printf("									     \n");
			printf("									     \n");
			printf("									     \n");
			printf("									     \n");
			printf("									     \n");
			printf("									     \n");
			printf("									     \n");
			printf("                *==.                    \n");
			printf("               @#$@@#                   \n");
			printf("            .#*    $@*                 \n");
			printf("   ~ :  ~;   != ~    *@-                \n");
			printf("   , ~; ~~  ~#, ,~=  -*.                \n");
			printf("    #:~;     =.                         \n");
			printf("   .=  .. #           .           ,.$;  \n");
			printf("   :   -! #           -,         -!~,;, \n");
			printf("    !   =.#            :        ~: ~.;, \n");
			printf("    .   . #   $        =.      -;    .  \n");
			printf("  :~      .   #                         \n");
			printf("   :      !   ~         ~~    ~     ,~  \n");
			printf("           :  -          ::   ~     :   \n");
			printf("     .!    --!,           ~: =      .   \n");
			printf("                            *.     #    \n");
			printf(" -----;*---    -----------,   *.------- \n");
			printf(".@@@@@@@@@#   ;@@@@@@@@@@@#-   -@@@@@@@.\n");
			printf(".@@@@@@@@@# ~=@@@@@@@@@@@@@#===$@@@@@@@.\n");
			printf(".@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@.\n");
			printf(".@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@.\n");
			printf(".@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@.\n");
			printf(".@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@.\n");
			printf(".@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@.\n");
			printf(".@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@.\n");
			printf(" !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!! \n");
			Sleep(300);
			system("cls");
			break;
		}
	}
}
*/


/* 이것도 움직이기에서 가져옴

int main(void)

{

	SetConsoleView(); 콘솔 크기 바꾸는거

	int CD_Y = CD_BOTTOM_Y; 이건 뭘까 기본 좌표 같긴함

	while (1) { 계속 돌아가게 보이는거지 밥먹기 하면 for문 써서 한 3번정도 보여주면 될것 같음
		//CD(CD_Y); 함수 호출하게

		//CD_eat(CD_Y);

		//CD_sleep(CD_Y);

		//CD_play(CD_Y);
	}

	system("pause"); 왜 멈춘거지

	return 0;

}

*/
