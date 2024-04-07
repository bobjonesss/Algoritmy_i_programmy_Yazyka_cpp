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

int main(void)
{

printf("\n=======\n");
    
int *Array; // пустой указатель
int len_A;
printf("Введите длину массива\n");
scanf("%d", &len_A);
Array=New_mas(len_A); // теперь он получил адрес
for(int i=0; i<len_A; i++)
printf ("%3d",Array[i]);
printf("\n");

Print_mas(Array, len_A);

{
int len_A = 11, ar1[11] = {111,51,11,31,2,2,3,4,4,43,4334};
Print_mas(ar1, len_A);	
Function1(ar1,len_A);
Print_mas(ar1, len_A);	
}

{
int len_A = 11, ar1[11] = {111,41,11,221,2,2,3,4,4,43,4334};
Print_mas(ar1, len_A);	
Function2(ar1,len_A);
Print_mas(ar1, len_A);	
}

{
int len_A = 11, ar1[11] = {111,21,21,41,2,2,3,4,4,43,4334};
Print_mas(ar1, len_A);	
Function3(ar1,len_A);
Print_mas(ar1, len_A);	
}



printf("\n=======\n");

return 0;

}
