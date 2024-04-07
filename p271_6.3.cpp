#include <stdio.h>
// библиотека стандартного ввода-вывода
#include <math.h>
// библиотека математических функций

int Sum(int n)
{
int S=0; // переменная для накопления
// значения суммы
int i; // параметр цикла для суммирования
for(i=1; i<=n; i++) // цикл завершается при i>n
S+=i;
return S;
}

/*
int Sum(int n)
{
for(int S=0; n>0; n– –) // при n=0 цикл будет завершен
S+=n;
return S;
} // функция не изменит значения n
*/


/*
int Sum(int n)
{
int Sum=0;
int i;
for(i=1; i<=n; i++)
Sum+=i;
return Sum;
}
*/

int main(void)
{
    
printf("\n=======\n");

int s = 22;
printf("S=%d Sum=%d \n",s,Sum(s));

printf("\n=======\n");

return 0;

}
		
