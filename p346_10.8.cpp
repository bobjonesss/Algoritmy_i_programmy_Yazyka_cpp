#include <stdio.h>
// библиотека стандартного ввода-вывода
#include <math.h>
// библиотека математических функций

#include <stdlib.h>
//#include <conio.h>
#include <string.h>
#include <ctype.h>

// only XCode

int cou_dig(char *str)
{
int count=0;
while(*str!='\0')
{
if(isdigit(*str)!=0) count++;
str++;
}
return count;
}

//Пример совместного использования функции cou_dig
//и библиотечных функций strcpy, strcat, strstr.
int main(void)
{
system("clear");//clrscr();

printf("\n=======\n");

char *my_str="1 2 3 4 5.";
printf("Цифр=%d",cou_dig(my_str));
char *Old_str="Cтрока текста";
char New_str[80];
// для копирования строки Old_str по адресу New_str
// используем функцию strcpy
strcpy(New_str, Old_str); // New_str="Cтрока текста"
puts(New_str);
// для слияния строк (конкатенации) используем функцию strcat
strcat(New_str, Old_str);
// New_str="Cтрока текста Cтрока текста"
puts(New_str);
// для поиска вхождения подстроки в строку
// используем функцию strstr.
char *found="ока"; // строка поиска "ока"
char *Yes;
Yes=strstr(Old_str, found); // Yes="ока" текста
if(Yes==NULL) //Если бы вхождения не было
printf("Нет");
else
printf("Есть '%s'\n", Yes);

printf("\n=======\n");
}

