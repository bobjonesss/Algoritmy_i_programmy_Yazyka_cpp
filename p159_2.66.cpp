#include <stdio.h>
#include <iostream>
#include <algorithm>

int main(void)
{

printf("=======\n");

int x=3; // выделены 2 байта по какому-то адресу
// и присвоено значение
int *px; // выделены 2 байта для хранения адреса типа int
// операция &x получит адрес переменной х
px = &x; // адрес переменной x можно присвоить указателю

int new_x; // новая переменная new_x
new_x = *px;
std::cout << new_x << " " << &x << " " << *px << "\n";
}
