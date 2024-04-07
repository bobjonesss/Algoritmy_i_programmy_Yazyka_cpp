#include <stdio.h>
#include <iostream>

#define N 10
// статический массив. Длина массива равна 10
// значение константы записано один раз

int main(void)
{	

int a[N];
int i;
printf("\nВведите %d значений\n", N);
for(i=0; i<N; i++)
	scanf("%d",&a[i]);

for(i=0; i<N; i++)
	printf("%5d",a[i]);

printf("\n");

}
