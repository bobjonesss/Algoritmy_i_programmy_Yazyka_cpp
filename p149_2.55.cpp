#include <stdio.h>
#include <iostream>

int N_max(int a[],int Len)
{
int K=0; // номер наибольшего элемента
for(int i=1;i<Len;i++)
if(a[i]>a[K])
K=i;
return K;
}

void Del_max(int a[],int &Len)
{
// номер наибольшего элемента находит функция N_max,
// к ней нужно обратиться
int k;
k=N_max(a,Len);
// сдвиг от k-го элемента до конца массива
for(int i=k;i<Len-1;i++)
a[i]=a[i+1];
Len--; // параметр передается по адресу,
// длина массива изменится
}

int main(void)
{
int a[14] = {243,23,23,4,24,5555,44444,2,234,32,23,23,66,333}; 
int Len=14;

for(int i = 0; i<Len; i++)
	printf ("%d \t %d\n", i, a[i]);

printf("=======\n");

Del_max(a,Len);
//printf("a[%d] = %d\n",,a[N_max(a,Len)]);

for(int i = 0; i<Len; i++)
	printf ("%d \t %d\n", i, a[i]);

}
