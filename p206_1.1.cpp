#include <stdio.h>
// библиотека стандартного ввода-вывода
#include <math.h>
// библиотека математических функций
#define PI 3.1415926 // значение константы π

int main(void)
{
    
printf("=======\n");

float r; // объявление всех переменных
float l, s, v;

printf("\nВведите значение радиуса:\n");
// приглашение для ввода данных
scanf("%f", &r); // ввод исходного данного
// вычисления по формулам:
l=2.*PI*r;
s=PI*r*r;
v=4.*PI*r*r*r/3.;
    printf("\nДлина окружности, площадь круга и объем шара:\n");
    // вывод заголовка
// Вывод результатов
printf("r=%6.2f, l=%6.2f, s=%6.2f, v=%6.2f\n ", r, l, s, v);

printf("\n=======\n");

return 0;

}


