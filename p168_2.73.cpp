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
return 0;//return NULL; // Выход из функции
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
return 0;//return NULL; // выход из функции
}
}

printf("\n=======\n");

return 0;

}
