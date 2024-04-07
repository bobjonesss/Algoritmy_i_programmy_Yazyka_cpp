#include <stdio.h>
// библиотека стандартного ввода-вывода
#include <math.h>
// библиотека математических функций

// функция Swap1 с параметрами по значению
void Swap1(int x, int y)
{
int tmp;
tmp=x;
x=y;
y=tmp;
// переменные переменились своими значениями
}

// функция Swap2 с параметрами по ссылке
void Swap2(int &x, int &y)
{
int tmp;
tmp=x;
x=y;
y=tmp;
// переменные переменились своими значениями
}


int main(void)
{

printf("\n=======\n");	
    
int a=5, b=10;
printf("Исходные значения: a=%d b=%d\n", a, b);
Swap1(a, b);
printf("Передача по значению: a=%d b=%d\n", a, b);
Swap2(a, b);
printf("Передача по ссылке: a=%d b=%d\n", a, b);

printf("\n=======\n");

return 0;

}
			
