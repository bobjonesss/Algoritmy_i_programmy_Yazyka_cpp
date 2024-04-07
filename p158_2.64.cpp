#include <stdio.h>
#include <iostream>
#include <algorithm>

int *ip; // указатель на ячейку, содержащую целое число
float *fp;
// указатель на ячейку, содержащую действительное число
char *cp; // указатель на ячейку, содержащую символ
void *pp; // указатель на ячейку неизвестного типа

char *pa;
int *pb;
double *pc;

int main(void)
{

printf("=======\n");

int aaa = 555;

float a = 55;

fp = &a;

int *fpp;

fpp = (float*)fp;
 
ip = &aaa;

printf ("*fpp=%d *ip=%d\n", *fpp, *ip);

std::cout << *ip << " "  << "\n";

printf("=======\n");

}
