#include <stdio.h>
// библиотека стандартного ввода-вывода
#include <math.h>
// библиотека математических функций


int Sum1(int *mas, int len)
{
int i;
int Sum=0;
for(i=0; i<len; i++)
{Sum+=mas[i];printf("%d ",Sum);}
return Sum;
}
int Sum2(int *mas, int len)
{
int *ip;
int Sum=0;
for(ip=mas; ip<mas+len; ip++)
Sum+=*ip;
return Sum;
}
int Sum3(int *mas, int len)
{
int i;
int Sum;
for(i=0, Sum=0; i<len; i++)
Sum+=*(mas+i);
return Sum;
}
void Out(int *mas, int len)
{
int i;
int *ip;
for(ip=mas, i=0; ip<mas+len; ip++, i++)
printf("Номер=%d Адрес=%p\n", i++, ip);
}

int main(void)
{

printf("\n=======\n");

int len = 111;
int *mas = new int [len];
for(int i=0; i<len; i++)
mas[i]=i*pow(i,2);
printf("\n %d",Sum1(mas,len));
printf("\n %d",Sum2(mas,len));
printf("\n %d",Sum3(mas,len));

Out(mas,len);


printf("\n=======\n");

return 0;

}
