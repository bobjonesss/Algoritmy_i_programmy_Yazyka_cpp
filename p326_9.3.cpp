#include <stdio.h>
// библиотека стандартного ввода-вывода
#include <math.h>
// библиотека математических функций

#define N 5
#define M 5
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
// функция преобразования одномерного массива

// описание функции ввода
// параметры функции – имя и размеры массива
void input_matr(int mas[][M],int &n,int &m)
// n, m возвращаются по ссылке
{
int i, j;
printf("Введите размер матрицы не более %d на %d\n", N,M);
scanf("%d%d", &n,&m);
printf("Введите матрицу.\n");
for(i=0;i<n;i++)
for(j=0;j<m;j++)
scanf("%d", &mas[i][j]);
}

// по заданному условию
void Change(int mas[], int len)
{
// найдем наименьший элемент
int *ip;
int *min=mas;
for(ip=mas; ip<mas+len; ip++)
if(*ip<*min)
min=ip;
// перестановка при завершении поиска
*ip=*min;
*min=*mas;
*mas=*ip;
}
// main объявляет матрицу и управляет вызовами функций
//
//
// 
int main(void)
{

printf("\n=======\n");

int n, m;
int matr[N][M]; // матрица объявлена размером 10×10
int i;


input_matr(matr, n, m); // ввод матрицы

print_matr(matr, n, m);

printf("\n=======\n");


int Tmp[M]; // временный массив, длина равна
// длине столбца
for(int j=0; j<m; j++) // цикл по номерам столбцов
{
//Копирование перед каждым обращением.
for(int i=0; i<n; i++) // цикл по номеру элемента в строке
Tmp[i]=matr[i][j]; // Tmp получил копию j-го столбца
Change(Tmp,m); // изменение в Tmp
// копирование после каждого обращения
for(int i=0; i<n; i++)
matr[i][j]=Tmp[i];
//Возвращаем значение j-му столбцу
}
// вывод обычный.
print_matr(matr, n, m);

printf("\n=======\n");

}
