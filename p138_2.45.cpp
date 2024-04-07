#include <stdio.h>
#include <iostream>
#include <math.h>
#define PI 3.14 // константа тяготения

int A=90;
void F(int x)
{
int A=0; // каким же будет значение А в теле функции?
printf("\n A=%d A+x= %d",A,  A+x );
//return A;
}

void FF(int x)
{
//int A=0; // каким же будет значение А в теле функции?
printf("\n A=%d A+x= %d",A,  A+x );
//return A;
}


int main(void)
{	
F(33);
FF(44);
//printf("\n%d", F(66) );

}

