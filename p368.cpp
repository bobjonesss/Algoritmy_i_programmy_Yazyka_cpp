#include <stdio.h>
// библиотека стандартного ввода-вывода
#include <math.h>
// библиотека математических функций

#include <stdlib.h>
//#include <conio.h>
#include <string.h>
#include <ctype.h>
//#include <io.h>
#include <stdio.h>

// only XCode

typedef struct
{
char Name[10];
// поле "Имя", статический символьный массив
char *Surname;
// поле "Фамилия", динамический символьный массив
// для него нужно выделить динамическую память
// перед присваиванием значения
int Data[5]; // поле "Показатели", статический массив
int Sum; // поле "Сумма" накапливает и сохраняет
// сумму баллов
float Var; // поле "Среднее" вычисляет и сохраняет
// средний показатель
} Person; // имя типа данного "Person"

//Функция ввода данных об одном объекте возвращает <D-§>объект.

void In(Person & Man)
// одно данное типа Person возвращается по ссылке
{
puts("Введите имя: ");
scanf("%s", &Man.Name);
puts("Введите фамилию: ");
// обязательно выделить память
// число символов фамилии не более 10
Man.Surname=new char[10];
scanf("%s", Man.Surname);
//& при вводе значения указателя не пишем
puts("Введите данные: ");
Man.Sum=0;
// будет накоплена сумма показателей при вводе
for(int i=0; i<5; i++)
{
scanf("%4d", &Man.Data [i]);
Man.Sum+=Man.Data[i];
}
Man.Var=(float)Man.Sum/5.; // вычислен средний
// показатель
}


//Функция вывода полных данных об одном объекте.
void Out(Person Man) // передается данное типа Person
{
printf("%s ", Man.Name);
printf("%s ", Man.Surname);
for(int i=0; i<5; i++)
printf("%4d",Man.Data[i]);
// показатели выводятся одной строкой
printf("\nСумма баллов=%d ", Man.Sum);
printf("Среднее= %6.2f\n", Man.Var);
}

//Функция вывода данных обо всех объектах в форм таблицы.
void Out_All(Person Man [], int n)
// передается n данных типа Person
{
printf("=========================================\n");
printf("ИМ Я \t ФАМИЛИ Я \t ДАННЫЕ \t CУММ А СРЕДНЕЕ \n");
printf("=========================================\n");
for(int k= 0;k<n; k++)
{
printf("% –10s ", Man[k].Name);
printf("% –10s ", Man[k].Surname);
for(int i=0; i<5; i++)
printf("%4d", Man[k].Data[i]);
printf("%4d ",Man[k].Sum);
printf("%6.2f \n",Man[k].Var);
}
printf("=========================================\n");
}

//Функция вычисляет средний показатель по всем объ- ектам, суммируя данные полей Var по всему массиву Man.
float Sred(Person Man [], int n)
// передается n данных типа Person
{
float Var=0; // переменная Var не имеет
// отношения к полю структуры
// с именем Var

for(int i= 0; i<n; i++)
Var+= Man[i].Var;
return Var/(float)n; // среднее по всем средним
}


//Функция вычисляет средний показатель по k-му пара- метру. Номер показателя (от 0 до 5) — это один из параме- тров функции.
float Sred_k(Person Man[], int n, int k)
// передается n данных типа Person и номер показателя k
{
float Var_k=0; // Var_k – средний по одному
// показателю
for(int i=0; i<n; i++)
Var_k+=(float)Man[i].Data[k];
// складывает один k-й показатель по всем объектам
return Var_k/(float) n; // среднее по k-му показателю
}

//Функция Sred_Stat определяет номер среднестатистического объекта в массиве. Ей передается весь массив структур.
int Sred_Stat(Person Man [], int n)
// передается n данных типа Person
{
float Var_All=Sred(Man,n);
// средний показатель по всем объектам.
float Var_min=fabs(Var_All-Man[0].Var);
int Nom=0; // наименьший имеет номер 0
for(int i=0; i<n; i++)
if(fabs(Var_All-Man[i].Var)<Var_min)
Nom=i; // запоминаем номер самого среднего
return Nom;
}


//Функция Sred_Stat_k определяет объект, среднестати-
//стический по k-му показателю. Ей передается весь массив
//структур, функция возвращает указатель на найденный объект.
Person *Sred_Stat_k(Person Man[], int n, int k)
// передается n данных типа Person и номер показателя
{
float Var_k=Sred_k(Man, n, k);
// находим среднее значение k-го показателя
// по всем объектам
float Var_min=fabs(Var_k-Man[0].Data[k]);
Person *Nom=Man;
// указатель Nom запоминает адрес объекта
for(int i=0; i<n; i++)
if(fabs(Var_k-Man[i].Data[k])<Var_min)
Nom = Man+i;
// запоминаем адрес самого среднего
return Nom;
}

//Функция поиска объекта по фамилии. Передается n дан-
//ных типа Person, и Who — строка, содержащая фамилию ис-
//комого объекта. Выполняется прямой поиск по всей группе
//объектов путем последовательного сравнения искомой стро-
//ки с полем Surname каждого элемента массива Man. Функ-
//ция возвращает указатель на найденный объект или NULL.
Person *Found_Fam(char *Who, Person Man[], int n)
{
for(int i=0; i<n; i++)
if(strcmp (Who ,Man[i].Surname)==0) // если найдено
return Man+i; // возвращает адрес
return NULL;
// возвращает NULL, если поиск неудачен
}

int main(void)
{
system("clear");//clrscr();

printf("\n=======\n");



int n;
// объявлен массив структур
Person All_Person[20];
printf("Введите количество\n");
// реальное количество данных n
scanf("%d", &n);
// ввод данных выполняется в цикле вызова функции In
//
for(int i=0; i<n; i++)
{
In(All_Person[i]);
}
// Вывод на экран полной таблицы.
Out_All(All_Person,n);
// поиск номера среднестатистического объекта
int Found=Sred_Stat(All_Person, n);
printf("Самый средний имеет номер: %d\n", Found);
printf("Его данные: \n");
Out(All_Person [Found]);
for(int i=0; i<n; i++)
{
In(All_Person[i]);
}
// Вывод на экран полной таблицы.
Out_All(All_Person,n);
// поиск номера среднестатистического объекта
 Found=Sred_Stat(All_Person, n);
printf("Самый средний имеет номер: %d\n", Found);
printf("Его данные: \n");
Out(All_Person [Found]);
// снова выведем таблицу на экран
Out_All(All_Person,n);
// поиск значения объекта, среднестатистического
// по k-му показателю
Person *Found_k;
for(int k=0;k<5;k++)
{
printf("Средний по %d -му показателю\n", k);
Found_k=Sred_Stat_k(All_Person, n, k);
Out(*Found_k);
}
// поиск объекта по фамилии
char Surname[10];
// тоже фамилия, но не та, что в Person
puts("Введите строку для поиска\n");
scanf("%s", Surname);
Person *Who; // хранит адрес, возвращенный функцией
Who=Found_Fam(Surname, All_Person, n);
if(Who!=NULL) // проверяем, найден объект или нет
Out(*Who);
else
puts("Такого нет.\n");
 // End of main

printf("\n=======\n");

}


