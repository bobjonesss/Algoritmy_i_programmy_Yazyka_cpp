#include <stdio.h>
#include <iostream>

int Sum(int a[],int Len)
{
int S=0;
for(int i=0;i<Len;i++)
{
S+=a[i];
printf ("%d \t %d \t %d \n", i, a[i], S);
}
return S;
}

int main(void)
{
int a[12] = {243,23,23,4,24,2,234,32,23,23,66,333}; 
int Len=12;
printf("%d\n", Sum(a,Len));

for(int i = 0; i<Len; i++)
	printf ("%d \t %d\n", i, a[i]);
}
