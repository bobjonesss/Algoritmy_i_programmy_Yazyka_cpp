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
for(t=1.;V*t*sin(Alpha)-0.5*G*t*t>0.;t+=1.)
Sx=V*t*cos(Alpha);
printf("--Время--Дальность\n");
printf("%6.2f %6.2f \n",t,Sx);

// 2. Оператор while
t=1.;
while(V*t*sin(Alpha)-0.5*G*t*t>0.)
{
Sx=V*t*cos(Alpha);
t+=1.;
}
printf("--Время--Дальность\n");
printf("%6.2f %6.2f \n",t,Sx);

// 3. Оператор do
t=1.;
do
{
Sx=V*t*cos(Alpha);
t+=1.;
}
while(V*t*sin(Alpha)-0.5*G*t*t>0.);
printf("--Время--Дальность\n");
printf("%6.2f %6.2f \n",t,Sx);

float Sm, L;
printf("Введите координата центра мишени Sm, а ее линейный размер L,\n");
scanf("%f%f",&Sm,&L);


if(Sx<Sm+0.5*L&&Sx>Sm-0.5*L)
printf("Цель поражена\n");
else
if(Sx<Sm-0.5*L)
printf("Недолет\n");
else
printf("Перелет\n");
}
