#include <stdio.h>
#include <iostream>
#include <algorithm>

#define N 5
#define M 5
int matr[N][M]; // описан двумерный массив

void input_matr(int a[][M],int &n,int &m);
// важно, что длина строки – это константа
void print_matr(int a[][M],int n,int m);
// n – число строк, m – число столбцов

int main(void)
{
// главная программа описывает входные данные
int n, m; // реальные размеры матрицы
input_matr(matr,n,m); // передан в функцию ввода
print_matr(matr,n,m); // передан в функцию вывода
}

// описание функции ввода
// параметры функции – имя и размеры массива
void input_matr(int a[][M],int &n,int &m)
// n, m возвращаются по ссылке
{
int i, j;
printf("Введите размер матрицы не более %d на %d\n", N,M);
scanf("%d%d", &n,&m);
printf("Введите матрицу.\n");
for(i=0;i<n;i++)
for(j=0;j<m;j++)
scanf("%d", &matr[i][j]);
}

// описание функции вывода
// параметры функции – имя и размеры массива
void print_matr(int a[][M],int n,int m)
{
int i, j;
//int mas[i][j];
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
printf("%5d",a[i][j]);
printf("\n"); // разбиение вывода на строки
}
}
