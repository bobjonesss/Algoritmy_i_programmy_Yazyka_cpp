#include <stdio.h>
int main(void)
{
int i,n;
double c,x,S;
printf("Введите число слагаемых.\n");
scanf("%d",&n);
printf("Введите x\n");
scanf("%lf",&x);
S=0;
c=1;
for(i=1; i<=n; i++)
{
c=c*x/i; // неявное приведение типов
S+=c;
}
printf("Сумма равна %8.3lf", S);
}
