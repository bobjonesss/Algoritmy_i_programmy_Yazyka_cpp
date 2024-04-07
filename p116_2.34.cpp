#include <stdio.h>
#include <math.h>
#define G 9.8 // константа тяготения
int main(void)
{
float Sum=0, x;
for(x=-1;x<=1.05; x+=0.1)
{
if(fabs(x)<0.0001) {
printf("Сумма = %8.2f\n", Sum);
	
continue; // если в знаменателе 0
	  //
printf("Сумма = %8.2f\n", Sum);

}
Sum+=1/x;
}
printf("Сумма = %8.2f\n", Sum);

{

	float Sum=0, x;
for(x=-11;x<=21.05; x+=0.1)
{
if(fabs(x)<0.0001) {
printf("Сумма1 = %8.2f\n", Sum);	
continue; // если в знаменателе 0
	  //
printf("Сумма2 = %8.2f\n", Sum);

}
Sum+=1/x;
}
printf("Сумма = %8.2f\n", Sum);

}

}
