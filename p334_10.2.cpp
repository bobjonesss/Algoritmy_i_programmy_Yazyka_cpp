#include <stdio.h>
// библиотека стандартного ввода-вывода
#include <math.h>
// библиотека математических функций



int main(void)
{

printf("\n=======\n");

//Объявление и инициализации строк
char Str_1[10]; // выделено 10 байт, значения не присвоены
    char Str_2[]="cимвол";//={'с','и','м','в','о','л','\0'}
// выделено 7 байт, инициализация как массив символов
char Str_3[]="primer & primer";
// выделено 16 байт, инициализация как текстовой строки
    char *Str_4={"primer string"};
// выделено 14 байт, инициализация как указателя
char *Str_5; // указатель, память не выделена
//Варианты вывода строк.
//1. Как строка по формату %s
printf("%s\n", Str_2);
//2. Как последовательность символов по формату %c
int i=0;
while(Str_2[i]) // пока не встречен последний символ '\0'
printf("%c", Str_2[i++]);
printf("\n");
//3. Как строка без формата
puts(Str_3);
//Ввод строк.
//Для Str_1 можно вводить не более 9 символов.
scanf("%s",Str_1); // текст будет введен до пробела
printf("%s",Str_1);
gets(Str_4); // текст будет введен до нажатия
// клавиши [Enter]
puts(Str_4);

printf("\n=======\n");

}

