#include <stdio.h>
#include <iostream>
#include <algorithm>

#define N 5
#define M 7
int a[N][M];

int main(void)
{
	
//Для матрицы условно переменной длины следует описать
//размер по максимуму и ввести переменные, реально опре-
//деляющие размер матрицы.
int a[25][25];

// максимальное число строк, столбцов
int n, m; // реальное число строк, столбцов
printf("Введите размер матрицы (строк, столбцов <25)\n");
scanf("%d%d",&n,&m); // теперь это наибольшие значения
// параметров циклов управления
//
for(int j=0;j<m;j++)
for(int i=0;i<n; i++)
scanf("%d",&a[i][j]);


//Для обращения к элементам матрицы по строкам цикл записывается так:
for(int i=0;i<n;i++) {
for(int j=0;j<m;j++)
{
// в теле цикла обращение к переменной a[i][j]
printf("%d\t",a[i][j]);
}
printf("\n");
}
printf("\n");


//Если переменить эти циклы местами, просмотр будет происходить по столбцам:
for(int j=0;j<m;j++){
for(int i=0;i<n; i++)
{
// в теле цикла обращение к переменной a[i][j]
printf("%d\t",a[i][j]);
}
printf("\n");
}
{
// в теле цикла обращение к переменной a[i][j]
}


}


