#include <iostream>
#include <cmath>;
using namespace std;
int main()
{
int a;
int b;
int m;
int n;
std::cout << "Введите число a\n";
std::cin >>a;
std::cout << "Введите число b\n";
std::cin >>b;
std::cout << "Введите число m\n";
std::cin >>m;
std::cout << "Введите число n\n";
std::cin >>n;
std::cout << "Произведение чисел равно " << a*b << "\n";
std::cout << "Сумма кубов чисел m и n равна " << pow(m,3) + pow(n,3)<< "\n";
return 0;
}