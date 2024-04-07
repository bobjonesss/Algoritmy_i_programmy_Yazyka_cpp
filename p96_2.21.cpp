#include <iostream>

#include <cstdio>
#include <math.h>
int main(void)
{
float a,b,c;
float x,y;
printf("Введите параметры функции");
scanf("%f%f%f",&a,&b,&c);
printf("Введите аргумент функции");
scanf("%f",&x);
if(x<10)
y=x+a;
else
if(x<20)
y=x+b;
else
y=x+c;
printf("x=%6.2f,y=%6.2f\n",x,y);
//getch();

	return 0;
}
