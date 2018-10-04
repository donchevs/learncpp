#include <iostream>

long doubleNumber(int x)
{
	return x*2;
}

int main()
{
	int x;
	std::cout << "Choose a number ";
	std::cin >> x >> std::endl;
	std::cout << "Twice the number is " << doubleNumber(x) << std::endl;
}
