#include <stdio.h>
#include <iostream>

void f_auto(void)
{
// переменная K по умолчанию имеет класс auto
int K=1; // локальный объект автоматической памяти
printf("K1=%3d ",K);
K++;
return;
}

void ff_stat(void)
{
// переменная K статическая
static int K; // локальный объект статической памяти
printf("K2=%3d ",K);
K++;
return;
}

int main(void)
{	
for(int i=1;i<=3;i++)
	f_auto();

printf("\n");


for(int i=1;i<=3;i++)
	ff_stat();



}
