#include <stdio.h>
#include <iostream>
#include <math.h>
#define PI 3.14 // константа тяготения

// функции без параметров,
// описание опережает обращение
void f1(void) // описание функции f1
{
printf("Функция 1\n");
}

void f2(void) // описание функции f2
{
printf("Функция 2\n");
}

int main(void)
{	// функции известны до момента обращения
printf("\nГлавная функция main\n");
f1(); // обращение к функции f1
f2(); // обращение к функции f2
}

