#include <stdio.h>
// библиотека стандартного ввода-вывода
#include <math.h>
// библиотека математических функций

int main(void)
{
    
printf("\n=======\n");

int n; // управляющая переменная
int S; // сумма ряда
int N; // число слагаемых, включенное в сумму
printf("Вычисление суммы чисел натурального ряда.\n");
printf("Введите число слагаемых>\n ");
scanf("%d", &N);
S=0; // инициализация переменной S нулем обязательна
n=1; // к нулю готовимся прибавить первое слагаемое
do
{
S+=n; // тело цикла
n++; // приращение параметра цикла
} while(n<=N);
// печать результата вне цикла
printf("При %d слагаемых сумма = %d", N, S);

printf("\n=======\n");

return 0;

}
		