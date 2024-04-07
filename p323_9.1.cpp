#include <stdio.h>
// библиотека стандартного ввода-вывода
#include <math.h>
// библиотека математических функций

#define N 10
#define M 10
void input_matr(int a[][M], int &n, int &m);
// важно, что длина строки – это константа
void print_matr(int a[][M], int n, int m);
// число строк можно не передавать



int main(void)
{

printf("\n=======\n");

int n, m; // реальные размеры матрицы
int matr[N][M]; // описан двумерный массив
input_matr(matr, n, m); // передан в функцию ввода
print_matr(matr, n, m); // предан в функцию вывода

printf("\n=======\n");

return 0;
}

// описание функции ввода
// параметры функции – имя и размеры массива
void input_matr(int matr[][M], int &n, int &m)
// n, m возвращаются по ссылке
{
int i, j;
printf("Введите размер матрицы не более %d на %d\n", N, M);
scanf("%d%d", &n, &m);
printf("Введите матрицу.\n");
for(i=0; i<n; i++)
for(j=0; j<m; j++)
scanf("%d", &matr[i][j]);
}

// описание функции вывода
// параметры функции – имя и размеры массива
void print_matr(int matr[][M], int n, int m)
{
int i, j;
for(i=0; i<n; i++)
{
for(j=0; j<m; j++)
printf("%5d", matr[i][j]);
printf("\n"); // разбиение вывода на строки
}
}

