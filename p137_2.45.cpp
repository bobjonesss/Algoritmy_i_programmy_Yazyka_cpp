#include <stdio.h>
#include <iostream>
#include <conio.h>
// глобальные данные программы
int a,n=1;
void f1(void); // объявление функций глобально
void f2(void);
void f3(int);


int main(void)
{	
int n = 10;	
int x[10] = {11,3,3,3,2,2,2,323,232,223};
printf("%d", max(x, n) );

{
int i; // локальная переменная функции main
a=10; // функция main изменяет глобальную
// переменную
// все функции имеют одинаковые права на
// изменение глобального данного
for(i=1;i<=3;i++)
{
n++; // main изменяет значение n, нумеруя
// последовательность вызовов функции f1
printf("\nMain. Вход № %d", n);
f1(); // f1 тоже меняет значение n, потому что main
} // и f1 имеют одинаковые права на изменение n
for(i=1;i<=3;i++)
{
a++; // main изменяет значение переменной a
printf("\nMain. Глобальная а=%d",a);
f2(); // в функции f2 значение переменной а свое
}
// как передача данного в функцию защищает
// его от изменения?
f3(a);
printf("\nГлобальное а после обращения к f3=%d",a);
}
// f1 печатает номер обращения
void f1()
{
n++; // функция меняет глобальную переменную n
printf("\nФункция f1. Вход %d",n);
}
// f2 печатает значение локальной переменной
void f2()
{
int a=90; // а — локальное данное функции f2
printf("\nФункция f2. Локальная а=%d", a);
}
// f3 печатает значение локальной переменнойi


void f3(int a) // глобальная переменная передается
{ // как параметр, защищена от изменения
a++; // локальное данное функции f3
printf("\nФункция f3. Н е меняет глобальное а=%d", a);
	

}
