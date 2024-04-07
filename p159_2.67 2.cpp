#include <stdio.h>
#include <iostream>
#include <algorithm>

int main(void)
{

printf("=======\n");

{

int *x;
int xx = 333;
x = &xx;
float *y;
float yy = 333.0f;
y = &yy;

x=(int *)y;

std::cout << x 	<< " " << &x << " " << y << " " << &y << "\n";
std::cout << *x << " " << &x << " " << *y << " " << &y << "\n";

}

int *x;
float *y;
float *yyy;

int xx = 333;
x = &xx;
float yy = 333;
y = &yy;

yyy=(float *)&x;
x=(int *)y;

std::cout << x 	<< " " << &xx << " " << yyy  << "\n";
std::cout << *x << " " << &yy << " " << *y << "\n";


printf("=======\n");


unsigned long L=0x12345678L; // длинное целое
char *c=(char *)&L;
int *i=(int *)&L;
long *l=(long *)&L;
printf("\nЗначение L=%#lx",L);
printf( "\nАдрес L (то, что &L)=%p",&L);
printf("\nАдрес с=%p *c=%#x",c,*c);
printf("\nАдрес i=%p *i=%#x",i,*i);
printf("\nАдрес l=%p *l=%#lx",l,*l);

}
