#include <stdio.h>
// библиотека стандартного ввода-вывода
#include <math.h>
// библиотека математических функций

#define N 5
#define M 5

// функция ввода матрицы
void input_matr(int mas[], int &n, int &m)
{
int i, j;
printf("Введи размер матрицы\n");
scanf("%d%d", &n, &m);
printf("Введи матрицу\n");
for(i=0; i<n; i++)
for(j=0; j<m; j++)
scanf("%d", mas+i*m+j);
}
// функция вывода матрицы
void print_matr(int mas[], int n, int m)
{
int i, j;
for(i=0; i<n; i++)
{
for(j=0; j<m; j++)
printf("%5d", *(mas+i*m+j));
printf("\n");
}
}
// функция нахождения суммы элементов матрицы
int Sum(int mas[], int n, int m)
{
int i, j;
int S=0;
for(i=0; i<n; i++)
for(j=0; j<m; j++)
S+=*(mas+i*m+j);
return S;
}

// функция вывода одномерного массива
void print_mas(int mas[], int len)
{
for(int i=0; i<len; i++)
printf("%5d", mas[i]);
printf("\n");
}
// функция вывода матрицы как совокупности
// одномерных массивов
void print_matr(int mas[][M], int n, int m)
{
printf("Матрица:\n");
for(int i=0; i<n; i++)
print_mas(mas[i],m);
}


// в главной программе объявлен одномерный массив
// он передается во все функции
int main(void)
{

printf("\n=======\n");

int matr[25];
int n, m;
input_matr(matr, n, m);
printf("Сумма элементов равна %d\n", Sum(matr, n, m));
print_matr(matr, n, m);

printf("\n=======\n");

}
