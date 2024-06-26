#include <stdio.h>
#include <math.h>
#define G 9.8 // константа тяготения
int main(void)
{
// переменные, которые являются начальными значениями

float V; // скорость
int A_Grad; // угол в градусах
// переменные, участвующие в вычислениях
float Alpha; // угол в радианах
float t; // время полета
float Sy, Sx; // высота и дальность
printf("Введите скорость и угол в градусах\n");
scanf("%f%d",&V,&A_Grad);
Alpha=(float)A_Grad*M_PI/360.;
// арифметический цикл. Управляющая переменная t=[1.0; 10.0], Δt=1.
// 1. Оператор for
printf("--------------------------------------\n");
printf("Время Высота Дальность\n");
printf("--------------------------------------\n");
for(t=1.;V*t*sin(Alpha)-0.5*G*t*t>0.;t+=1.)
{
Sx=V*t*cos(Alpha);
Sy=V*t*sin(Alpha)-0.5*G*t*t;
printf("%6.2f %6.2f %6.2f\n",t,Sy,Sx);
}
// 2. Оператор while
printf("--------------------------------------\n");
printf("Время Высота Дальность\n");
printf("--------------------------------------\n");
t=1.;
while(V*t*sin(Alpha)-0.5*G*t*t>0.)
{
Sx=V*t*cos(Alpha);
Sy=V*t*sin(Alpha)-0.5*G*t*t;
printf("%6.2f %6.2f %6.2f\n",t,Sy,Sx);
t+=1.;
}
// 3. Оператор do
printf("--------------------------------------\n");
printf("Время Высота Дальность\n");
printf("--------------------------------------\n");
t=1.;
do
{
Sx=V*t*cos(Alpha);
Sy=V*t*sin(Alpha)-0.5*G*t*t;
printf("%6.2f %6.2f %6.2f\n",t,Sy,Sx);
t+=1.;
}
while(V*t*sin(Alpha)-0.5*G*t*t>0.);
}
