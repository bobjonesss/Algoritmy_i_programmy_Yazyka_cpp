#include <stdio.h>
#include <iostream>
#include <algorithm>
#define N 5

int main(void)
{
	
printf("=======\n");

int *ptr; // здесь name любой тип, кроме функции
if(!(ptr=new int)) // может оказаться равным NULL
{
printf("Нет места в памяти.\n");
//exit(); 
return 0;// bnreak;
}
else 
printf("есть места в памяти.\n");


// использование объекта по назначению
delete ptr; // разрушение объекта


printf("\n=======\n");

return 0;

}
