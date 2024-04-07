#include <stdio.h>
// библиотека стандартного ввода-вывода
#include <math.h>
// библиотека математических функций

#include <stdlib.h>
//#include <conio.h>
#include <string.h>
#include <ctype.h>

// only XCode

#define LEN 80 // наибольшая длина строки
#define SIZE 20 // наибольшее число строк
void SortStr(char *Srt[LEN], int num);



int main(void)
{
system("clear");//clrscr();

printf("\n=======\n");

char Text[SIZE][LEN]; // массив вводимых строк
char *Str[SIZE]; // массив указателей на строки
// массива
int i, num; // num – число вводимых строк
printf("Введи строки до пустой строки. \n");
num=0;
while((gets(Text[num])!=NULL) && num<=SIZE&&strcmp(Text[num],"")!=0)
// условие завершения ввода:
// 1) пока gets возвращает не пустое значение,
// 2) пока число введенных строк меньше, чем SIZE,
// 3) пока строка не пуста, и strcmp позволит сравнить
// значения символов, а не указатели
{
Str[num]=Text[num]; // указатель на очередную строку
num++;
}
printf("Вывод перед обращением к функции сортировки\n");
for(i=0; i< num; i++)
puts(Text[i]); // введенный массив строк
printf("\n");
SortStr(Str, num);
printf("Вывод после обращения к функции сортировки\n ");
for(i=0; i<num; i++)
puts(Text[i]); // отсортированный массив строк
printf("\n");
for(i=0; i<num; i++)
puts(Str[i]); // указатель на сортированные
// строки
printf("\n");
printf("\n=======\n");

}
void SortStr(char *Str[LEN], int num)
// массив строк, num – его длина
{
int i;
int flag;
char buf[LEN]; // для перестановки строк местами
// сортировка простым обменом
flag=1;
while(flag!=0)
for(i=0, flag=0; i<num-1; i++)
{
if(strcmp(Str[i], Str[i+1])>0)
//символ Str[i]>символа Str[i+1].
{
// перестановка строк
strcpy(buf, Str[i]);
strcpy(Str[i], Str[i+1]);
strcpy(Str[i+1], buf);
flag=1; // запоминает факт перестановки
}
}
}

