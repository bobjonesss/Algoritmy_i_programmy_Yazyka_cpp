#include <stdio.h>
// библиотека стандартного ввода-вывода
#include <math.h>
// библиотека математических функций

// в алгоритме этой функции три варианта выхода
float pow_1(float x, int n) // основание float, степень int
{
float S; // локальная переменная
if(n>0) // положительная степень
{
for(S=1.0; n>0; n--)
	S*=x;
return S; // решение найдено при n>0
}
else
if(n<0) // отрицательная степень
{
for(S=.0; n<0; n++)
	S*=x;
return 1./S; // решение найдено при n<0
}
else
return 1.0; // решение найдено при n=0
printf("Кому нужны эти функции?");
// оператор вне всех ветвей
// он никогда не будет выполнен
}


int main(void)
{

printf("\n=======\n");	
    
int n;
float x;
printf("Введите вещественное основание и целую степень\n");
scanf("%f%d", &x, &n);
printf("\n Данные и решение: %6.2f %4d %6.2f\n", x, n, pow_1(x,n));

printf("\n=======\n");

return 0;

}
			