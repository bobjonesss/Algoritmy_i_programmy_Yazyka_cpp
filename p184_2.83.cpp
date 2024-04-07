#include <stdio.h>
#include <iostream>
#include <algorithm>

void invert(char Str[])
{
char Buf;
int i,j,m,l;

for(m=0;Str[m]!='\0';m++)	// переменная m найдет положение '\0'
	for(i=0, j=m-l;i<j;i++,j--)
	{
		Buf=Str[i];
		Str[i]=Str[j];
		Str[j]=Buf;
	}
}

int main(void)
{
	
printf("=======\n");

char S[]="0123456789";
// вызов функции
invert(S);
puts(S);

printf("\n=======\n");

return 0;

}
