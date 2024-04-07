#include <stdio.h>
// библиотека стандартного ввода-вывода
#include <math.h>
// библиотека математических функций

// only XCode

int main(void)
{
system("clear");//clrscr();
printf("\n=======\n");

char *Str1={"Первая строка."};
char *pts; // рабочая переменная
char *Str2; // новая строка – динамическая
puts(Str1); // вывод исходной строки

int len=0;
pts=Str1; // рабочая переменная указывает на начало строки
do
len++;
while(*(pts++)!='\0');
// поиск нулевого байта и смещение указателя
printf("Длина строки %d\n", len);
//Выделим память для строки Str2 динамически столь-
//ко же, сколько выделено для строки Str1.
Str2=new char[len];

int i=0; // начиная с нулевого символа строки
while(Str1[i]!='\0') // пока не встречен нулевой байт
{
Str2[i]=Str1[i]; // посимвольное присваивание
i++; // и переход к следующему символу
}

Str2[i]='\0'; // формируется конец строки
puts(Str2);

{
*Str2='\0'; // очистка строки от содержимого
i=0;
do
Str2[i]=Str1[i]; // посимвольное присваивание
while(Str1[i++]!='\0'); // проверка достижения конца строки
// нулевой символ переносится в новую строку
puts(Str2);
}

{
// очистка строки
*Str2='\0';
// управляет циклом переменная Str1, адресующая
// исходную строку
pts=Str2; // pts – указатель на новую строку
}      //

{
while(*Str1!='\0')
*pts++=*Str1++; // Str1 изменяется
//Адрес, выделенный ранее для переменной *pts, из-
//менен операцией ++, поэтому строка потеряна. Признак
//конца строки нужно перенести в строку-копию.
*pts='\0'; // получена вторая строка
puts(Str2);
}

char *Str3={"Новая строка"}; // ее длина не больше,
// чем у копии
char *pts_2; // для работы со второй строкой
char *pts_3; // для работы с третьей строкой
pts_2=Str2; // знает адрес строки
pts_3=Str3; // знает адрес строки
*Str2='\0'; // очистка строки
do
*pts_2++=*pts_3; // оба указателя смещаютс одинаково
while(*pts_3++!='\0');
puts(Str2);

    *Str2='\0';
    pts_2=Str2;
    pts_3=Str3;
    while((*pts_2++=*pts_3++)!='\0');
    puts(Str2);

printf("\n=======\n");
}

