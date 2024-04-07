#include <stdio.h>
#include <iostream>

#define N 20 // наибольшая длина массива равна 20

int main(void)
{
int a[N]; // память выделена для 20-ти элементов
int i;
int Len; // фактическая длина массива меньше 20
printf("\nВведите длину массива < %d\n",N);
// ограничение длины
scanf("%d", &Len);
printf("\nВведите %d значений\n", Len);
// переменная Len управляет циклами
for(i=0;i<Len;i++)
scanf("%d", &a[i]);
for(i=0;i<Len;i++)
printf("%5d", a[i]);
printf ("\n");
}
