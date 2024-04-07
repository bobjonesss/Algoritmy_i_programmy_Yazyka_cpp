#include <stdio.h>
int main(void)
{
int N;
long int F;
int R;
printf("Введите число\n");
scanf("%d",&N);
F=R=1; // присваивание начальных значений
 
while (R<=N)
{
F=F*R;
R++;
}
printf("Факториал %d равен %ld\n",N,F);
}
