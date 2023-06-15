#include <iostream>
#include <windows.h>
int n = 0;
int a = 1;
int c = 150;
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	std::cout << "Введить скільки днів проповзла черепаха: \n";
	std::cin >> n;
	std::cout << "Настал " << a << " день,черепаха проповзла: " << c <<" см\n";
	while (n>a)
	{
		a = a + 1;
		c = c + 20;
		std::cout << "Настал " << a << " день,черепаха проповзла: " << c <<" см\n";
	}
	std::cout << "Всього за " << a << " днів,черепаха проповзла: " << c << " см!";
}
