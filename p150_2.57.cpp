#include <stdio.h>
#include <iostream>
#include <algorithm>

int Decrease(int a[],int Len)
{
int flag=1; // flag=1 – последовательность убывает
// flag=0 – последовательность не убывает
int i;
i=1;
while(i<Len&&flag==1)
if(a[i]>a[i+1])
i++;
else
flag=0;
return flag;
}

int main(void)
{
int a[14] = {243,23,23,4,24,5555,44444,2,234,32,23,23,66,333}; 
int Len=14;

for(int i = 0; i<Len; i++)
	printf ("%d \t %d\n", i, a[i]);

printf("=======\n");


for(int i = 0; i<Len; i++)
	printf ("%d \t %d\n", i, Decrease(a, Len));

printf("=======\n");

}
