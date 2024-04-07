#include <stdio.h>
#include <iostream>
#include <algorithm>

#define N 40


int main(void)
{
	
printf("=======\n");

char *gets(char *Str); // вернет NULL при ошибке
int puts(const char *Str); // вернет EOF при ошибке
char Str[80];
printf("Введите строку\n");
gets(Str);
printf("Введена строка:\n");
puts(Str);

printf("\n=======\n");

return 0;

}
