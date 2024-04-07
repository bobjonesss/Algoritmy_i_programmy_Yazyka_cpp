#include <stdio.h>
#include <iostream>

void Counts(int a[], int Len, int &K1, int &K2)
{
K1=K2=0;
for(int i=0;i<Len;i++)
{
if(a[i]>0)
K1++;
else
if(a[i]<0)
K2++;
}
}

int main(void)
{
int a[12] = {243,23,23,4,24,2,234,32,23,23,66,333}; 
int Len=12 ,K1, K2;
Counts(a,Len,K1,K2);
printf("%d %d\n",K1,K2);

for(int i = 0; i<Len; i++)
	printf ("%d \t %d\n", i, a[i]);

}
