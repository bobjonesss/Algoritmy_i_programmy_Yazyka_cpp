#include <stdio.h>
int main(void)
{
int n, Sum=0;
int i;
printf("\nВведите количество элементов ряда\n");
scanf("%d", &n);
i=1;
while(i<=n)
{
Sum+=i; // очередное сложение
i++; // увеличение слагаемого
}
printf("Сумма чисел натурального ряда=%d", Sum);
}
