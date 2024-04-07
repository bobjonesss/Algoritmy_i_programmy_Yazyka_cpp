#include <stdio.h>
#include <iostream>
#include <algorithm>

struct Date // тип "дата"
{
int day; // число
int month; // месяц
int year; // год
};

struct Student
{
char name[15]; // имя
char surname[20]; // фамилия
int group; // группа
} ;

int main(void)
{
    
printf("=======\n");

// конкретная структура
struct Student stud_1  = { "Павел", "Колесников", 145 };
printf("\n Введите группу:");
scanf("%d",&stud_1.group);
printf("Сведения о студенте:");
printf("\n Фамилия: %s", stud_1.surname);
printf("\n Имя:%s", stud_1.name);
printf("\n Группа: %d\n", stud_1.group);
printf("\n Д ата рождения: %d.%d.%d", stud_1.date.day, stud_1.date.month, stud_1.date.year);


printf("\n=======\n");

return 0;

}

