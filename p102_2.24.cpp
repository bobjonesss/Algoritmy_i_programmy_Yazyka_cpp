#include <stdio.h>
int main(void)
{
int n, Sum=0;
int i;
printf("\nВведите количество элементов ряда \n");
scanf("%d", &n);
i=n;
do
Sum+=i--;
while(i); // пока i отлично от 0
printf("Сумма чисел натурального ряда=%d", Sum);
}

