// p 93 Пример 2.16.
// вычислить высоты треугольника со сторонами a, b, c
#include <iostream>

#include <cstdio>
#include <conio.h>
#include <math.h>
int main()
{
double a,b,c;
//printf("Введите стороны треугольника");
scanf("%lf%lf%lf", &a, &b, &c);
double p,t;
// объявить переменные можно там, где они
// понадобились
double Ha,Hb,Hc;
p=0.5*(a+b+c);
// нет проверки условия существования треугольника
t=2*sqrt(p*(p-a)*(p-b)*(p-c));
Ha=t/a;
Hb=t/b;
Hc=t/c;
printf("Значения высот треугольника:\n
Ha=%6.2lf,Hb=%6.2lf, Hc=%6.2lf\n",Ha, Hb, Hc);
return 0;
}
