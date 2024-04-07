#include <stdio.h>
#include <iostream>

void Insert(int a[],int &Len,int k,int m)
{
// сдвиг от конца массива до k+1-го элемента
for(int i=Len-1;i>=k;i--)
a[i+1]=a[i];
// место свободно
a[k]=m;
Len++; // параметр передается по адресу, длина массива изменится
}

int main(void)
{
int a[14] = {243,23,23,4,24,5555,44444,2,234,32,23,23,66,333}; 
int Len=14;

for(int i = 0; i<Len; i++)
	printf ("%d \t %d\n", i, a[i]);

printf("=======\n");

int k=5;
int m = 7777;
Insert(a,Len,k,m);
//printf("a[%d] = %d\n",,a[N_max(a,Len)]);

for(int i = 0; i<Len; i++)
	printf ("%d \t %d\n", i, a[i]);

printf("=======\n");

int i = Len;
printf ("%d \t %d\n", i, a[i-1]);


}
