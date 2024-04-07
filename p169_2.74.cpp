#include <stdio.h>
#include <iostream>
#include <algorithm>

int main(void)
{
	
printf("=======\n");

int **a; // адрес динамической памяти
int i,j,n,m;
printf("Введите количество строк и столбцов\n");
scanf("%d%d",&n,&m);
// первый этап: выделение памяти для массива указателей

// для строк матрицы нужно n элементов размером int
a=new int *[n];
if(a==NULL)
{
	printf("\n Нет памяти\n");
	return 0; // Выход из функции
}

// второй этап: выделение памяти для каждой строки
// матрицы
// выполняется n раз, выделяется по m элементов
for(i=0;i<n;i++)
{
	a[i]=new int[m];
if(a[i]==NULL)
{
	printf("\n Нет памяти");
	return 0; // выход из функции
}
}

printf("Введите матрицу размером %d строк и %d столбцов\n", n, m);
for(i=0;i<n;i++)
for(j=0;j<m;j++)
	scanf("%d", &a[i][j]);

printf("\nРезультат\n");

for(i=0;i<n;i++)
{
	for(j=0;j<m;j++)
		printf("%d \t",a[i][j]);
printf("\n");
}


for(i=0; i<n; i++)
	delete a[i]; // разрушаются строки

delete a; // высвобождается указатель на матрицу


printf("\n=======\n");

return 0;

}
