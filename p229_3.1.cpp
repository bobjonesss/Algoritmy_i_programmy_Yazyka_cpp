#include <stdio.h>
// библиотека стандартного ввода-вывода
#include <math.h>
// библиотека математических функций

int F(int x) {
return x;
}

int main(void)
{
    
printf("\n=======\n");

// печать заголовка таблицы
int x, x0, dx, y, xn = 22;
x = x0; // подготовка цикла
while(x<=xn) // проверка условия завершения
{
	y=F(x); // алгоритм вычисления значения

	// вывод строки таблицы
	x+=dx; // приращение управляющей переменной
} // выход из цикла
//Общая схема этого алгоритма на основе цикла do... while выглядит так:

// печать заголовка таблицы
x = x0; // подготовка цикла
do
{
	y=F(x); // алгоритм вычисления значения
	// вывод строки таблицы
	x += dx; // приращение управляющей переменной
}
while(x<=xn); // проверка условия завершения

//Общая схема этого алгоритма на основе цикла for вы-глядит так:
// печать заголовка
for(x=x0; x<=xn; x+=dx)
// все составляющие цикла в заголовке
{
	y=F(x); // алгоритм вычисления значения
	// вывод строки таблицы
}

printf("\n=======\n");

return 0;

}


/*
 * printf("\n=======\n");

// печать заголовка таблицы
х = x0; // подготовка цикла
while(x<=xn) // проверка условия завершения
{
	y=F(x); // алгоритм вычисления значения

	// вывод строки таблицы
	x+=Δx; // приращение управляющей переменной
} // выход из цикла
//Общая схема этого алгоритма на основе цикла do... while выглядит так:

// печать заголовка таблицы
х = x0; // подготовка цикла
do
{
	y=F(x); // алгоритм вычисления значения
	// вывод строки таблицы
	х += Δx; // приращение управляющей переменной
}
while(x<=xn); // проверка условия завершения
§
//Общая схема этого алгоритма на основе цикла for вы-глядит так:
// печать заголовка
for(x=x0; x<=xn; x+=Δx)
// все составляющие цикла в заголовке
{
	y=F(x); // алгоритм вычисления значения
	// вывод строки таблицы
}

printf("\n=======\n");
*/
