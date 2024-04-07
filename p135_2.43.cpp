#include <stdio.h>
#include <iostream>
#include <math.h>
#define PI 3.14 // константа тяготения

int max(int x,int y)
{
return x>y?x:y;
}

int max(int x,int y,int z)
{
return x>y?(x>z?x:z):(y>z?y:z);
}

int main(void)
{	
	
int Angle1, Angle2, Angle3;
// вызов функции с двумя параметрами
int Angle_max=max(Angle1, Angle2);
// вызов функции с тремя параметрами
Angle_max=max(Angle1, Angle2, Angle3);

printf("angle %d% d\n", max(Angle1, Angle2), max(Angle1, Angle2, Angle3));

}


