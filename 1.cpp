#include <iostream>

int main() {

int q, a;
a=2;
{
q=2*++a; // сначала а увеличивается на 1, т. е. а = 3,
// затем а умножается на 2 и результат
// присваивается q
std::cout << a << " " << q << "\n";
}

a = 2;
q=2*a++; // сначала а умножается на 2, результат
// присваивается
// q, затем а увеличивается на 1,
// после чего а = 5
std::cout << a << " " << q;


return 0;
}
