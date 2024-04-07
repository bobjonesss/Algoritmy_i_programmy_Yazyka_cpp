#include <iostream>

#include <cstdio>
#include <math.h>
int main()
{
double rate = 11, pay = 33;
int hour = 22;

if(hour<40)
{
pay=rate*hour; // обычная оплата
printf("Оплачено %d часов, к оплате %6.2f руб.\n", hour, pay);
}
else
{
pay=rate*40+(hour-40)*rate*1.5; // повышенная оплата
printf("Оплачено %d часов, %d сверхурочно.\n", hour, hour);
printf("К оплате %6.2f руб.\n", pay);
}
	
	return 0;
}
