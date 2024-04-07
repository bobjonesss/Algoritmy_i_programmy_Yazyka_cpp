#include <stdio.h>
// библиотека стандартного ввода-вывода
#include <math.h>
// библиотека математических функций


int Sum1(int *mas, int len)
{
int i;
int Sum=0;
for(i=0; i<len; i++)
{Sum+=mas[i];//printf("%d ",Sum);
}
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

int Max1(int mas[], int len)
{
int i;
int max; // наибольшее значение
// пусть первый элемент наибольший
max=mas[0];
for(i=0; i<len; i++)
if(mas[i]>max) max=mas[i];
// запоминаем наибольшее значение
return max; // возвращаем найденное значение
}

int Max2(int mas[], int len)
{
int *ip; // указатель на элемент массива
int *imax; // указатель на наибольшее значение
imax=mas; // запоминаем его адрес
for(ip=mas+1; ip<mas+len; ip++)
if(*ip>*imax) imax=ip; // запоминаем адрес наибольшего
return imax-mas; // возвращаем номер наибольшего
}


void Del(int mas[], int &len)
{
int i; // рабочая переменная для поиска
int j; // рабочая переменная для удаления
for(i=0; i<len; ) // приращение параметра изъято
{
//if(mas[i]<0) // элемент должен быть удален
if(i==39)
{
for(j=i; j<len-1; j++)
mas[j]=mas[j+1];
len--; // уменьшение длины по завершении цикла
}
else
i++; // переход к следующему поиску,
} // если не было удаления
}

void Cyrcle_Mas(int mas[], int len)
{
// переменная tmp запомнит значение последнего
// элемента
int tmp=mas[len-1];
// сдвиг массива вправо
for(int i=len-1; i>0; i--)
mas[i]=mas[i-1];
mas[0]=tmp;
// запомненный элемент записывается вперед
}

int main(void)
{

printf("\n=======\n");

int len = 111;
int *mas = new int [len];
for(int i=0; i<len; i++)
mas[i]=i*pow(i,2);

for(int i=0; i<len; i++)
printf("%d %d ",i, mas[i]);

printf("\n %d",Sum1(mas,len));
printf("\n %d",Sum2(mas,len));
printf("\n %d",Sum3(mas,len));

printf("\n=======\n");


Out(mas,len);

printf("\n %d",Max1(mas,len));
printf("\n %d",Max2(mas,len));

printf("\n=======\n");

Del(mas, len);

for(int i=0; i<len; i++)
printf("%d %d ",i, mas[i]);

printf("\n=======\n");

Cyrcle_Mas(mas,len);

for(int i=0; i<len; i++)
printf("%d %d ",i, mas[i]);

printf("\n=======\n");

return 0;

}
