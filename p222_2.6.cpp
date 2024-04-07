#include <stdio.h>
// библиотека стандартного ввода-вывода
#include <math.h>
// библиотека математических функций

int main(void)
{
    
printf("=======\n");

int key;
do
{
printf("Выберите действие\n");
key=getch(); //key=getch();

if(key==0) // нажата управляющая клавиша
{
key=getch(); //key=getch();
	// ввод не повторяется, символ получен
	// из буфера ввода
switch (key) // значение key управляет ветвлением
{
	case 77: {printf("Стрелка вправо\n"); break;}
	case 75: {printf("Стрелка влево\n"); break;}
	case 72: {printf("Стрелка вверх\n"); break;}
	case 80: {printf("Стрелка вниз\n"); break;}
	case 27: {printf("Esc\n"); break; }
	default: {printf("Не стрелка\n"); }
}
}
} while(key!=27); // выход из цикла по нажатию Esc.

printf("\n=======\n");

return 0;

}


