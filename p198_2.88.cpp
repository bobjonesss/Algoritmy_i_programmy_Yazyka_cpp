#include <stdio.h>
#include <iostream>
#include <algorithm>


// вывод массива на консоль
void Print_mas(int mas[],int len) // len – длина массива
{
int i;
printf("Массив:\n");
for(i=0; i<len;i++)
printf("%5d", mas[i]);
printf("\n");
}


// вывод массива в файл
void Print_mas(FILE *out,int mas[],int len)
{
int i;
fprintf(out, "Массив:\n");
for(i=0;i<len; i++)
fprintf(out, "%5d", mas[i]);
fprintf(out, "\n");
}

int main(void)
{
    
printf("=======\n");

FILE *out;

printf("\n=======\n");

return 0;

}
