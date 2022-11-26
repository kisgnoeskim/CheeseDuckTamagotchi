#include <stdio.h>
#include <Windows.h>
#include <conio.h>

#define CD_BOTTOM_Y 30



void SetConsoleView() {

	system("mode con:cols=100 lines = 25");


}

void GotoXY(int x, int y) {

	COORD Pos;
	Pos.X = 2 * x;
	Pos.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);

}


void CD(int CD_Y) {
	GotoXY(0, CD_Y);
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
	GotoXY(0, CD_Y);
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
	GotoXY(0, CD_Y);
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
	GotoXY(0, CD_Y);
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


int main(void)

{

	SetConsoleView();

	int CD_Y = CD_BOTTOM_Y;

	while (1) {
		//CD(CD_Y);

		CD_eat(CD_Y);

		//CD_sleep(CD_Y);

		//CD_play(CD_Y);
	}

	system("pause");

	return 0;

}
