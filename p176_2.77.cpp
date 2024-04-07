#include <stdio.h>
#include <iostream>
#include <algorithm>

#define N 40


int *func(int n)
{
int *a; // объявлен указатель
*a=n; // его значение равно значению параметра n
return a; // возвращается адрес
}

int *new_mas(int n)
{
int *mas;
// область оперативной памяти, связанная с указателем
int *ip;
// выделена память: mas – это реальный адрес массива
mas=new int[n];
printf("Введите %d элементов.", n);
for(ip=mas; ip<mas+n; ip++)
scanf("%d", ip);


int i;
printf("Массив:\n");
for(i=0;i<n; ++i)
	printf("%5d ", mas[i]);
printf("\n");

return mas; // вернуть объект
}

int main(void)
{
	
printf("=======\n");


int b;
b=*func(12); // простая переменная b получает значение
// возвращенного функцией адреса
printf("%d",b);


printf("\n=======\n");


int *d;
d=func(12); // указатель d получает значение адреса,
// который вернула функция
printf("%d",*d);

printf("\n=======\n");

int *My_Arr;
My_Arr=new_mas(5);



return 0;

}
