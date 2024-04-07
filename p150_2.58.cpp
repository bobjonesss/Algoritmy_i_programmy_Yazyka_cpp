#include <stdio.h>
#include <iostream>
#include <algorithm>

int Negative(int a[],int Len)
{
int flag=0;
int i;
i=0;
while(i<Len&&flag==0)
if(a[i]<0)
flag=1;
else
i++;
return flag;
}

int main(void)
{
int a[14] = {243,23,23,4,24,5555,-44444,2,234,32,23,23,66,333}; 
int Len=14;

for(int i = 0; i<Len; i++)
	printf ("%d \t %d\n", i, a[i]);

printf("=======\n");

	printf ("%d \n", Negative(a, Len));

printf("=======\n");

}
