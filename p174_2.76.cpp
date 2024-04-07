#include <stdio.h>
#include <iostream>
#include <algorithm>

#define N 40


// функция вывода массива произвольной длины
void print_mas(int mas[],int len) // параметры – имя и длина
{
int i;
printf("Массив:\n");
for(i=0;i<len; ++i)
	printf("%5d ", mas[i]);
printf("\n");
}
// функция ввода массива произвольной длины
void input_mas(int *mas,int &len) // параметры – имя и длина
// длина передается по ссылке
{
int *ip;
printf("Введите количество элементов массива %d\n",N);
// N – наибольшая длина
scanf("%d",&len);
printf("Введите элементы массива\n");
for(ip=mas;ip<mas+len;ip++)
	scanf("%5d",ip); // признак & не нужен
}
// функция преобразования массива
void transform_mas(int *mas,int len)
// параметры – имя и длина
{
int i;
for(i=0;i<len;i++)
	mas[i]=mas[i]*2;
}


int main(void)
{
	
printf("=======\n");


int a1[N],a2[N]; 	// объявлены два массива
int n1,n2;		// их длины
			// каждый массив введен, 
			// преобразован, распечатан
input_mas(a1,n1);
transform_mas(a1,n1);
print_mas(a1,n1);
input_mas(a2, n2);
transform_mas(a2,n2);
print_mas(a2,n2);


printf("\n=======\n");

return 0;

}
