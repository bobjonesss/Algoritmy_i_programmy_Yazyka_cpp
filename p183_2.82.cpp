#include <stdio.h>
#include <iostream>
#include <algorithm>

#define N 40


int main(void)
{
	
printf("=======\n");

// объявлен массив строк,
// каждое слово – название цвета радуги
// память выделена при инициализации
char *Rainbow[]={"Красный","Оранжевый","Желтый", "Зеленый", "Голубой","Синий","Фиолетовый"};
int i, len;
len=sizeof(Rainbow)/sizeof(Rainbow[0]);

// определена длина массива строк
for(i=0;i<len;i++)
puts(Rainbow[i]);

printf("\n=======\n");

return 0;

}
