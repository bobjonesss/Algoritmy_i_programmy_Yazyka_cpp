#include <stdio.h>
#include <iostream>
#include <algorithm>

#define LEN_MAX 10

void Input_mas(FILE *in,int *mas,int &len)
{
len=0;
do
{
scanf("%d", &mas[len]); // размер массива
len++;
}
// в цикле выполняется ввод пока не встречен конец файла,
// или длина массива < 10
while(!feof(stdin)&&len<LEN_MAX);
len--;

}


int main(void)
{
    
printf("=======\n");

FILE *in;

int N;
int *mas; // указатель на массив
printf("Введите количество элементов в массиве");
N = 3;
//scanf("%d",&N);
mas=new int[N]; // выделение памяти для массива


Input_mas(in, mas, N);

printf("\n=======\n");

return 0;

}
