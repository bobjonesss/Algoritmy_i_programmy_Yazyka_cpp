#include <stdio.h>
int main(void)
{
int n, Sum=0;
int i;
printf("\nВведите количество элементов ряда \n");
scanf("%d",&n);
for(i=1; i<=n; i++)
Sum+=i;
printf("Сумма членов натурального ряда=%d", Sum);
}

