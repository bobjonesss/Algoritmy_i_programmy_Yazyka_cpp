#include <stdio.h>
#include <iostream>
#include <algorithm>

int main(void)
{
    
printf("=======\n");

FILE *my_file;
if((my_file=fopen("f.txt","wt"))==NULL)
// текстовый файл для записи
{
perror("Ошибка открытия файла");
// если есть ошибка, ее код = errno,
// // perror анализирует номер ошибки
// и выводит поясняющий текст
//exit();
}

printf("\n=======\n");

return 0;

}
