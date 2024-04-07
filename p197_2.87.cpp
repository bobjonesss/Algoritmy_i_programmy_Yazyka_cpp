#include <stdio.h>
#include <iostream>
#include <algorithm>


int main(void)
{
    
printf("=======\n");

FILE *in, *out; // файл in для ввода, out для вывода
FILE *my_file, *my_other_file;

in=fopen("input.txt","r");
out=fopen("output.txt","wb");

fclose(in);

char *name_of_file=new char[50];
puts("Введите имя файла\n");
gets(name_of_file);
fopen(name_of_file,"wt"); // запишет в файл, который укажет
// пользователь при работе

printf("\n=======\n");

return 0;

}

