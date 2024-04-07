#include <stdio.h>
#include <iostream>
#include <algorithm>

struct Goods
{
char *name; // наименование
float price; // оптовая цена
float percent; // торговая наценка в %
int vol; // объем партии товара
char date[9]; // дата поставки партии товара
};

typedef struct
{
char *name; // наименование
float price; // оптовая цена
float percent; // торговая наценка в %
int vol; // объем партии товара
char date[9]; // дата поставки партии товара
} Goods2;

typedef struct Merchandise
{
char *name; // наименование
float price; // оптовая цена
float percent; // торговая наценка в %
int vol; // объем партии товара
char date[9]; // дата поставки партии товара
} Goods3;

int main(void)
{
	
printf("=======\n");

struct Goods food;
struct Goods *p_food;

Goods food1, food2, food3;

struct Goods coat=
{
"Черная шляпа",1000.00,15.0,100,"12.01.04"
};

std::cout << coat.name;

printf("\n=======\n");

return 0;

}
