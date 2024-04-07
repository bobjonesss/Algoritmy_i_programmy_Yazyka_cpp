#include <stdio.h>
// библиотека стандартного ввода-вывода
#include <math.h>
// библиотека математических функций

int Chet(int num) // функция возвращает логическое
// значение
{
return num%2==0; // остаток от деления на два
}

int Easy(int num) // функция возвращает логическое значение
{
int mod; // делитель числа, управляющая переменная
// управление по возможным значениям делителей числа
for(mod=2; mod<=num/2; mod++)
if(num%mod==0)
return 0; // прерывание поиска, делитель найден
return 1; // поиск завершен по управлению
}


int main(void)
{
    
int Number;
do
{
printf("Введите число\n");
scanf("%d", &Number);
if(!Chet(Number)&&Easy(Number))
	printf("Число простое\n");
else
	printf("Число не простое\n");
	printf("Продолжение – любая клавиша, выход – Esc\n");
} while(getchar()!=27);

/*
if(Chet(Number)!=0) // число нечетно
{
if(Easy(Number)==1) // число простое
printf("Число простое\n");
}
else
printf("Число не простое\n");
*/

printf("\n=======\n");

return 0;

}
			
