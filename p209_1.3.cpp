#include <stdio.h>
// библиотека стандартного ввода-вывода
#include <math.h>
// библиотека математических функций
#define PI 3.1415926 // значение константы π

int main(void)
{
    
printf("=======\n");

int Sum; // выделена сумма денег
int Cost; // стоит один подарок
int Cou; // количество, которое можно купить на эту сумму
int N; // количество, которое хочется купить
int Rest; // останется денег
printf("Введите сумму и цену одного подарка\n");
scanf("%d%d", &Sum, &Cost);
// найдем количество и остаток:
Cou=Sum/Cost; // целочисленное деление
Rest=Sum%Cost; // остаток от деления
printf("Можно купить %d подарков, останется %d рублей. \n",Cou,Rest);
// найдем стоимость и остаток
// printf("Сколько подарков хочется купить?\n");
scanf("%d", &N);
Cost=Sum/N;
Rest=Sum % N;
printf("Наибольшая стоимость подарка %d\n",Cost);
printf("Останется %d рублей.\n", Rest);

printf("\n=======\n");

return 0;

}

