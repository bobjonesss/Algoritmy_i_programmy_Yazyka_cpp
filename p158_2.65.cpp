#include <stdio.h>
#include <iostream>
#include <algorithm>



int main(void)
{

printf("=======\n");

int x=3; // выделены 2 байта по какому-то адресу
// и присвоено значение
int *px; // выделены 2 байта для хранения адреса типа int
//Операция &x получит адрес переменной х, который
//можно присвоить переменной, предназначенной для хра-
//нения адреса, это px.
px = &x; // , адрес можно присвоить указателю
printf("%d\n",*px);

printf("=======\n");

}
