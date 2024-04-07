	#include <stdio.h>
#include <iostream>
#include <algorithm>

#define N 10

int main(void)
{
	
printf("=======\n");

int Data[6]; // массив целочисленных значений
int *pD[6]; // массив указателей
int *pI[]={&Data[0],&Data[1],&Data[2]}; // с инициализацией



int A[N]={10,1,3,2,6,5,4,8,7,9};
int *pA[N];
int *buf; // буфер для перемены адресов
int i,j;
for(i=0;i<N;i++)
	pA[i]=&A[i]; // копирование адресов (см. рис. 2.12а)

for(i=0;i<N-1;i++)
for(j=i+1;j<N;j++)
{
	if(*pA[i]>*pA[j])
{
// перестановка в массиве адресов (см. рис. 2.12б)
buf=pA[i];
pA[i]=pA[j] ;
pA[j]=buf;
}
}

printf("\n Массив, отсортированный по возрастанию:\n");
for(i=0;i<N;i++)
	printf("%d ",*pA[i]); // вывод по возрастанию
	printf("\n Массив в исходном порядке:\n");
for(i=0;i<N;i++)
	printf("%d", A[i]); // вывод в исходном порядке	

printf("\n=======\n");

return 0;

}
