#include <stdio.h>
// библиотека стандартного ввода-вывода
#include <math.h>
// библиотека математических функций

int main(void)
{
    
printf("\n=======\n");


int Max, Sum=0, k; // Max – наибольшее значение суммы
printf("\nВведите наибольшее значение\n");
scanf("%d", &Max);
for(k=1; ;k++) // бесконечный цикл
{
Sum+=k;
if(Sum>Max) // условие завершения цикла
break; // прерывание. При выходе известно k
}
printf("количество элементов %d", k);

printf("\n=======\n");

{
float Sum=0;
float x;
for(x=-11; x<=1.1; x+=0.1)
{
if(fabs(x)<0.0001)
continue; // если в знаменателе 0
Sum+=1/x;
}
printf("Сумма %6.2f", Sum);
}

printf("\n=======\n");

return 0;

}
		
