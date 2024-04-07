#include <stdio.h>
// библиотека стандартного ввода-вывода
#include <math.h>
// библиотека математических функций

int Triangle(float a,float b,float c,float &p,float &s)
{
// переменные p и s – внешние данные, могут быть
// входными и выходными
float pp;
// полупериметр, локальная переменная
if(a+b<=c || a+c<=b || b+c<=a)
return 0; // треугольник не существует
else
{
p=a+b+c;
pp=p/2.;
s=sqrt(pp*(pp-a)*(pp-b)*(pp-c));
return 1; // треугольник существует
}
}

int main(void)
{

printf("\n=======\n");	
    
float A,B,C; // длины сторон фактические
float Perim, Square; // периметр и площадь фактические
printf("Введите длины сторон треугольника\n");
scanf("%f%f%f", &A,&B,&C);
if(Triangle(A,B,C,Perim,Square)==1) // проверка условия
printf("Периметр=%6.2f, площадь=%6.2f\n", Perim, Square);
else
printf("Треугольник не существует\n");

printf("\n=======\n");

return 0;

}
			
