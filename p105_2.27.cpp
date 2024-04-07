#include <stdio.h>
int main(void)
{
int N;
long long int F;

int R;
printf("Введи число\n");
scanf("%d",&N);
F=1; // начальное значение факториала
for(R=1; R<=N; R++) // здесь R – параметр цикла
F=F*R;
printf("Факториал %d равен %lld\n",N,F);
}
