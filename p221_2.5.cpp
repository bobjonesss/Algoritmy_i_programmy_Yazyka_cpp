#include <stdio.h>
// библиотека стандартного ввода-вывода
#include <math.h>
// библиотека математических функций

int main(void)
{
    
printf("=======\n");

int x, y;
scanf("%d %d", &x, &y);

int R,L;
{
int x, y;
scanf("%d %d", &x, &y);
R = x; L = y;
}

//x*x+y*y>=R*R && fabs(x)<0.5*L && fabs(y)<0.5*L
if(x*x+y*y>=R*R && fabs(x)<0.5*L && fabs(y)<0.5*L)
	printf("Точка принадлежит области \n");
else
	printf("Точка не принадлежит области \n");

printf("\n=======\n");

return 0;

}


