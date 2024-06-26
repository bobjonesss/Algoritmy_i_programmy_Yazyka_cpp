#include <stdio.h>
#include <iostream>
#include <math.h>
#define PI 3.14 // константа тяготения
	      //
float Avg(float a, float b, float c)
{
float S; // локальная переменная
S=(a+b+c)/3.;
return S; // тип совпадает с типом функции
}
int main(void)
{
float x1=2.5, x2=7, x3=3.5;
float y;
// фактические параметры – переменные
y=Avg(x1, x2, x3);
// обращение в присваивании
printf("x1=%f, x2=%f, x3=%f y=%f\n", x1, x2, x3, y);
// фактические параметры – константы вещественного типа
y=Avg(2., 4., 7.);
printf("x1=%f, x2=%f, x3=%f y=%f\n", 2., 4., 7., y);
// фактические параметры – выражения
y=Avg(x1*2., x2+4., sin(PI/2.));
printf("x1=%f,x2=%f,x3=%f,y=%f\n",2*x1,x2+4.,sin(PI/2.),y);
// обращение в функции вывода, фактические параметры
// произвольные, то есть константы, переменные,
// выражения
printf("x1=%f,x2=%f,x3=%f,y=%f\n",
2.,x2,x3+0.7,Avg(2.,x3,0.7));
// оператор-обращение может входить в другие
// выражения
y=(Avg(0.5, 1.7, 2.9)+Avg(x1,x1+2,x1+2.))*0.5;
printf("y=%f\n",y);
}
