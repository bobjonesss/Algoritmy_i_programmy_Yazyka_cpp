#include <stdio.h>
#include <iostream>
#include <algorithm>

#define N 40


int main(void)
{
	
printf("=======\n");


char Str1[80]="Первая строка.";
char *Str2;
Str2=new char[80];
// оператор do выполняет посимвольное копирование,
// перенесет нулевой байт в новую строку
//
int i=0;
do
Str2[i]=Str1[i];
while(Str1[i++]!='\0'); // проверка достижения конца строки
puts(Str2);

printf("\n=======\n");

return 0;

}
