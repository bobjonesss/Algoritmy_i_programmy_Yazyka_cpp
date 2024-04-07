#include <stdio.h>
// библиотека стандартного ввода-вывода
#include <math.h>
// библиотека математических функций


/*
синтаксис и механизм
передачи в функцию массива.
Пусть в вызывающей программе объявлен массив
int Array[10];
Имя Array — это адрес нулевого элемента массива.
В записи заголовка функции, которой передается це-
лочисленный массив (любой, не обязательно Array), фор-
мальный параметр должен быть указателем.

Синтаксиче-
ски это можно записать двумя способами.
*/

void Function1(int Array[], int len)
{
for(int i=0; i<len; i++)
// обращение к Array[i]
Array[i] = i*Array[i] ;
}

void Function2(int *Array, int len)
{
for(int i=0; i<len; i++)
// обращение к Array[i]
Array[i] = i;
}

/*
массив передается по адресу
Теперь поясним, как функция возвращает массив.
Первый способ возвращения массива из функции,
через список параметров,
Второй способ используется, когда массив возвращает-
ся через имя функции.
*/


int *Function3(int *Array, int len)
{
for(int i=0; i<len; i++)
// обращение к Array[i]
	Array[i] = i+Array[i] ;
return Array;
}


int *New_Arr(int len) // тип функции указатель
{
int *Array=new int[len];
// выделено len*sizeof(int) байт памяти,
// ее адрес присвоен переменной Array
for(int i=0; i<len; i++)
	*(Array+i)=i+1; // присвоены значения по возрастанию
return Array; // адрес необходимо вернуть
}


int *New_mas(int len) // тип функции указатель
{
int *Array=new int[len];
// выделено len*sizeof(int) байт памяти,
// ее адрес присвоен переменной Array
for(int i=0; i<len; i++)
	*(Array+i)=sqrt(i)/0.5+11*i/2.3; // присвоены значения по возрастанию
return Array; // адрес необходимо вернуть
}

void Print_mas(int mas[], int len) // len – длина массива
{
int i; // рабочая переменная
printf("Массив:\n"); // вывод заголовка
for(i=0; i<len; i++) {
	if ((i%9+1)==0) printf("\n");
	printf("%d=%d\t",i,mas[i]); // вывод элемента массива
			// в строку
}
printf("\n"); // переход на новую строку
}

//
//
void Input_mas(int *mas, int &len)
// длина массива изменяется, &len – ссылка
{
int *ip;
// для адресации используется указатель на элемент массива
printf("Введите количество элементов массива \n");
scanf("%d", &len);

printf("Введите элементы массива \n");
for(ip=mas; ip<mas+len; ip++)
	scanf("%5d", ip); // & не нужен
}

// формальные параметры – имя массива (указатель)
// и длина массива
void Transform_mas(int *mas, int len)
// длина не изменяется, len – ее значение
{
int i;
for(i=0; i<len; i++)
mas[i]=mas[i]*2;
}

int main(void)
{

printf("\n=======\n");

{
int len_A = 3;
int *ar1 = new int[len_A];// пустой указатель // теперь он получил адрес

Print_mas(ar1, len_A);	
Input_mas(ar1,len_A);
Print_mas(ar1, len_A);
Transform_mas(ar1, len_A);
Print_mas(ar1, len_A);

}


printf("\n=======\n");

return 0;

}
