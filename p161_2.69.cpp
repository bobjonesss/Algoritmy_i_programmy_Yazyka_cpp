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

// выводится то же, что и в трех предыдущих операторах вывода




printf("\nАдрес %p Значение %d",pb+1,*(pb+1));
// значение 10
printf("\nАдрес %p Значение %d",pb-1,*(pb-1));
// значение 30
printf("\nРасстояние между с и a=%ld",pc-pa);
// расстояние = 1


printf("=======\n");


int mas[]={10,20,30,40};


printf("\nАдрес %p Значение %d",mas, mas[1]);

int n=sizeof(mas)/sizeof(int);

printf("\nАдрес %p Значение %d %d",mas+1, mas[2], n);


printf("=======\n");


int i;

for(i=0;i<n;i++) // обращение к mas[i]
	printf("\nАдрес %p Значение %d",mas+i, mas[i]);

int *pti; // тип этого указателя, как у элементов массива
	// (синоним массива)

for(pti=mas; pti<mas+n;pti++)
	printf("\nАдрес %p Значение %p",pti+i, mas+i);

// обращение к *pti	

}
