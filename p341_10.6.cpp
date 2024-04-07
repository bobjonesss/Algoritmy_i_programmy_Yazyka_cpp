#include <iostream>
#include <stdio.h>
// библиотека стандартного ввода-вывода
#include <math.h>
// библиотека математических функций

#include <string.h>

// only XCode

// прототип функции с прямой адресацией
void compress_1(char[]);
// прототип функции с косвенной адресацией
void compress_2(char*);

int main(void)
{
system("clear");//clrscr();
printf("\n=======\n");

char *Str=new char[80];
// указатель на строку и выделение памяти
printf("\nВведите строку символов с пробелами.\n");
gets(Str);
printf("Наша строка: \n");
puts(Str);
compress_1(Str); // обращение к функции
printf("Наша строка: \n");
puts(Str);
printf("\nВведите строку символов с пробелами.\n");
gets(Str);
printf("Наша строка: \n");
puts(Str);
compress_2(Str); // обращение к функции
printf("Наша строка: \n");
puts(Str);
getchar();//getch();

printf("\n=======\n");
}

void compress_1(char Str[])
{
int i, mid;
i=0; // внешний цикл поиска
// рядом стоящих пробелов
while(i<strlen(Str)-1)
if((Str[i]==' ')&&(Str[i+1]==' ')) // два пробела рядом
{
// внутренний цикл сдвига
for(mid=i; mid<strlen(Str); mid++)
Str[mid]=Str[mid+1]; // символ '\0'тоже сдвигается
}
else // движение по строке,
// если не было сдвига
i++;
}

void compress_2(char *Str)
{
char *ip, *mid;
ip=Str; // внешний цикл поиска рядом
// стоящих пробелов
while(*ip!='\0')
if(*ip==' '&&*(ip+1)==' ') // два пробела рядом
{
// внутренний цикл сдвига
mid=ip; // запомнили адрес
while(*mid!='\0')
{
*mid=*(mid+1); // копирование символа
mid++; // смещение указателя
}
}
else // движение по строке,
// если не было сдвига
ip++;
}
