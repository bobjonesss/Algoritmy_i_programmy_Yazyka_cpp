#include <stdio.h>
#include <iostream>
#include <math.h>
#define G 9.8 // константа тяготения
int main(void)
{
сhar sign;
// здесь sign каким-то образом получает значение
sign = 'a';
int S=0, x = 1;
switch(sign)
{
case '+':
{
S+=x;
break;
}
case '-':
{
S-=x;
break;
}
default:
S=x;
}

}
