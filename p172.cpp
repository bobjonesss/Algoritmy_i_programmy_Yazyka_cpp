	#include <stdio.h>
#include <iostream>
#include <algorithm>


// передача параметра по адресу в стиле C++
void change_5(int &ptr)
// формальный параметр – адрес объекта
{
ptr+=5;
}

int main(void)
{
	
printf("=======\n");

int x=5;
printf("x=%d\n",x);
change_5(x);
printf("А теперь x=%d\n",x);

printf("\n=======\n");

return 0;

}
