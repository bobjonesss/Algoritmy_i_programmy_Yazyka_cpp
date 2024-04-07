#include <stdio.h>
#include <iostream>

int New_Arr(int x[],int n,int y[],int &k)
{
k=0;
for(int i=0;i<n;i++)
if(x[i]>0)
{
y[k]=x[i];
k++;
}
return k; // равенство нулю значения функции
// свидетельствует о неуспехе
}

int main(void)
{
int x[12] = {243,23,23,4,24,2,234,32,23,23,66,333}; 
int n=11;
int y[11];
int k=10;
printf("%d\n", New_Arr(x,n,y,k));

for(int i = 0; i<k; i++)
	printf ("%d \t %d\n", i, y[i]);
}
