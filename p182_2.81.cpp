#include <stdio.h>
#include <iostream>
#include <algorithm>

int main(void)
{
	
printf("=======\n");

char Str1[80]="Первая строка.";
char *Str2=new char[80];
char *pts1, *pts2;
pts1=Str1;

// подготовка цикла, это настройка указателей
pts2=Str2;

do
*pts2++=*pts1; 		// сначала присваивание, затем смещение
while(*pts1++!='\0');

puts(Str2);
pts1=Str1;
pts2=Str2;
while((*pts2++=*pts1++));
puts(Str2);

printf("\n=======\n");

return 0;

}
