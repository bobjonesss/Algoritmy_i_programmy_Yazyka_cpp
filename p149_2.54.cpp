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

int main(void)
{
int a[12] = {243,23,23,4,24,2,234,32,23,23,66,333}; 
int Len=12;
printf("a[%d] = %d\n",N_max(a,Len),a[N_max(a,Len)]);

for(int i = 0; i<Len; i++)
	printf ("%d \t %d\n", i, a[i]);

}
