#include <stdio.h>
#include <iostream>
#include <algorithm>

int main(void)
{

printf("=======\n");

int a=0;
int b=20;
int c=30;
int *pa=&a;
int *pb=&b;
int *pc=&c;

printf("\nАдрес %d Значение %d", a, *pa);
// FFF4, значение 10
printf("\nАдрес %d Значение %d", pb, *pb);
// FFF2, значение 20
printf ("\nАдрес %d Значение %d", pc, *pc);
// FFF0, значение 30
// операция смещения указателя приведет к просмотру объектов
// a, b, c, если использовать pa –– или pc++
for(int k=1; a<=3;k++)
	printf("\nАдрес %d Значение %d",pa--, *pa);
// выводится то же, что и в трех предыдущих операторах вывода


printf("=======\n");


}
