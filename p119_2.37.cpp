#include <stdio.h>
#include <iostream>
#include <math.h>
#define G 9.8 // константа тяготения
int main(void)
{
int n= 4, N=18, x  = 33;
float S;
for(n=1,S=0; n<=N; n++)
{
	bool aaa = n%2==0;
switch((int)aaa)
{
case 0:
S+=sin(x); // при n=2, 4 и т.д. S=S+sin(x)+cos(x)
case 1:
S+=cos(x); // при n=1, 3 и т.д. S=S+cos(x)
}
printf("S = cos(x) + sin(x) + cos(x) + cos(x) + sin(x) + cos(x)...\n %f \n", S);
}
}
