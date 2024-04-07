#include <stdio.h>
#include <iostream>
#include <math.h>
#define G 9.8 // константа тяготения
int main(void)
{
int n= 4, S, N=18, x  = 33;
for(n=1,S=0; n<=N; n++)
{
	bool aaa = n%2==0;
switch((int)aaa)
{
case 0:
{ S+=sin(x); printf("true\n"); break; }
case 1:
{ S+=cos(x); printf("false\n");  break; }
}
}
}
