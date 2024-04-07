#include <stdio.h>
#include <iostream>
#include <algorithm>

int main(void)
{
	
printf("=======\n");

int N;
int *mas; // указатель на массив
printf("Введите количество элементов в массиве");
scanf("%d",&N);
mas=new int[N]; // выделение памяти для массива
if(mas==NULL)
{
printf("\nНет памяти");
return 0;
}

printf("\n=======\n");


for(int i =0; i < N; ++i, mas[i]=i )
printf("%d ", mas[i]);


printf("\n=======\n");

int *pti;
pti=mas;

printf("%lu ", sizeof(*mas)/sizeof(int));
printf("%lu ", sizeof(*pti)/sizeof(int));


// массив существует, адресация массива
// выполняется через имя указателя
delete mas; // массив разрушен <D-§>Примечание. При выделении памяти


printf("\n=======\n");

return 0;

}
