#include <stdio.h>
// библиотека стандартного ввода-вывода
#include <math.h>
// библиотека математических функций

#include <stdlib.h>
//#include <conio.h>
#include <string.h>

// only XCode

void Transform_1(char *Str, char *Ind, char Symbol)
{
char *pts; // рабочая переменная
pts=Str; // теперь pts – это исходная строка
char *pti; // рабочая переменная
pti=Ind; // теперь pti – это новая срока Ind
do
{
// циклом управляет pts
*pti=*pts; // символ приписывается к Ind(*pti)
// из Str(*pts)
pti++;
*pti=Symbol; // Symbol приписывается к Ind(*pti)
pti++;
}
while(*pts++!='\0'); // выход при достижении конца строки
// '\0' перенесен в строку назначения
}

char *Transform_2(char *Str, char Symbol)
{
int len;
len=strlen(Str); // длина строки Str
char *Ind;
Ind=new char[len*2]; // выделена память для новой
// строки
char *pts; // рабочая переменная
pts=Str; // теперь pts — это исходная строка
char *pti; // рабочая переменная
pti=Ind; // теперь pti — это новая срока Ind
// алгоритм тот же самый, но запись короче
do
{
*pti++=*pts;
*pti++=Symbol;
}
while(*pts++!='\0');
return Ind; // возвращается адрес новой строки
}	


int main(void)
{
system("clear");//clrscr();

printf("\n=======\n");

char *Str=new char[80];
char *Str_new_1=new char[160];
Str="Преобразование строки без изменения образца.";
puts(Str);
Transform_1(Str, Str_new_1, '!');
// для Str_new_1 память выделена
puts(Str_new_1);
char *Str_new_2; // просто адрес, память выделит
// функция
Str_new_2=Transform_2(Str, '*');
puts(Str_new_2);


printf("\n=======\n");
}
