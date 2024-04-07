#include <stdio.h>
// библиотека стандартного ввода-вывода
#include <math.h>
// библиотека математических функций
#define PI 3.1415926 // значение константы π

int main(void)
{
    
printf("=======\n");

int Grad, Min, Sec;
float Rad;
float GRAD;
printf("Введите значение угла в градусах, минутах и секундах\n");
scanf("%d%d%d", &Grad, &Min, &Sec);
// полное значение угла:
GRAD=(float)Grad+(float)Min/60.+(float)Sec/3600.;
// перевод в радианы
Rad=GRAD*M_PI/360;
printf("Значение угла в радианах=%12.6f\n",Rad);

printf("\n=======\n");

return 0;

}


