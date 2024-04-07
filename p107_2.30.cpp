#include <stdio.h>
#include <iostream>
int main(void)
{
double x,eps;
double c,S;
double F; // или long double, значение может быть
// большим.
int k;
printf("Введите точность вычислений.\n");
scanf("%lf",&eps);
printf("Введите x\n");
scanf("%lf",&x);
F=1;
S=0;
c=1;
k=1;
while(fabs(c/F)>eps) // итерационный цикл
{
S+=c/F;
k+=1;
c=c*x*0.5;
F*=k;
}
printf("Сумма равна %lf\n",S);
}
