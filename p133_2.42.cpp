#include <stdio.h>
#include <iostream>
#include <math.h>
#define PI 3.14 // константа тяготения

int Triangle(float a, float b, float c, float &p, float &s)
{
// функция имеет два варианта выхода
// параметры a, b, c передаются по значению
// (только входные данные),
// параметры p, s, по ссылке
// (как входные данные, так и результат)
float pp; // полупериметр
if(a+b<=c||a+c<=b||b+c<=a) // треугольник не существует
	return 0;
else
{ // треугольник существует
	p=a+b+c;
	pp=0.5*p;
	s=sqrt(pp*(pp-a)*(pp-b)*(pp-c));
	return 1;
}
}

int main(void)
{	
	
float A, B, C;

// длины сторон – фактические параметры
float Perim, Square;

// периметр и площадь – фактические параметры
// пример обращения
printf("Введите длины сторон треугольника\n");
scanf("%f%f%f", &A, &B, &C);

if(Triangle(A, B, C, Perim, Square)==1)
	printf("Периметр = %6.2f, площадь = %6.2f\n", Perim, Square);
else
	printf("Треугольник не существует\n");

}


