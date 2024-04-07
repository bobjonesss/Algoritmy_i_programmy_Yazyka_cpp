#include <stdio.h>
int main(void)
{
float x=1./3.;
float y;
y=x+x+x;
if(y==3*x)
printf("Равны\n");
else
printf("Не равны\n");
}
