#include <stdio.h>
#include <iostream>
#include <algorithm>

#define _CRT_SECURE_NO_WARNINGS

// чтение матрицы из файла
// в первой строке файла первые два числа
// обозначают размер матрицы
void Read_matr(FILE *in,int matr[][10],int &n,int &m)
{
fscanf(in,"%d",&n); // К оличество строк
fscanf(in,"%d",&m); // К оличество столбцов
int i, j;
for(i=0;i<n;i++)
for(j=0;j<m;j++)
fscanf(in,"%d",&matr[i][j]);
}
// вывод матрицы в файл
void Print_matr(FILE *out,int matr[][10],int n,int m)
{
int i, j;
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
fprintf(out,"%6d", matr[i][j]);
fprintf(out,"\n");
}
}

int main(void)
{
    
printf("=======\n");

FILE *out;
int matr[10][10];
int n=10;
int m=10;

FILE *in;

in=fopen("input.txt","r");
out=fopen("output.txt","wb");

Read_matr(in, matr, n, m);

Print_matr(out, matr, n, m);



printf("\n=======\n");

return 0;

}
