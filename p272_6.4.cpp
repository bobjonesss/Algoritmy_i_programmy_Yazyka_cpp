#include <stdio.h>
// библиотека стандартного ввода-вывода
#include <math.h>
// библиотека математических функций

void print(void) // функция типа void, не возвращает значения
{
int i; // внутренняя рабочая переменная
for(i=1;i<=50; i++)
printf("%c", '*'); // вывод символа "звездочка"
printf("\n");
}

void print2(int count) // печать строки "*" длиной count
{
int i;
for(i=1; i<=count; i++)
// count – количество символов в строке
printf("%c", '*');
printf("\n");
}


void print3(int count, char symbol)
// печать строки символов symbol длины count
{
int i;
for(i=1; i<=count; i++)
// count – количество символов в строке
printf("%c", symbol);
printf("\n");
}

int main(void)
{
    
printf("\n=======\n");

system("clear");
print(); // обращение к print()
printf("\tПример вызова функции.\n");
print();


int cou;
system("sleep 2");
system("clear");////clrscr();
for(cou=1; cou<=12; cou++)
print2(cou);
// здесь соu – количество символов при обращении
//getch();

{

system("sleep 2");
system("clear");////clrscr();


char ch;
ch='+';
int cou=25;
print3(80, '-'); // 80 символов тире ("–")
print3(cou, ch); // 25 символов плюс ("+")
//getch();
}

printf("\n=======\n");

return 0;

}
		
