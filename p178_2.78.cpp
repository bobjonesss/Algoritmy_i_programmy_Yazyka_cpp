#include <stdio.h>
#include <iostream>
#include <algorithm>

#define N 40


//#include <conio.h> // для geth ()
//
//для  мас только getchar
//
#define ESC 0x11b
// шестнадцатеричный код клавиши [Esc]

int main(void)
{
	
printf("=======\n");


int key;
char p;
do
{
key =getchar(); // код символа
printf("%d\n", key);
} while(key!=27); // обрабатывается событие "Нажатие Esc"

printf("\n=======\n");

return 0;

}
