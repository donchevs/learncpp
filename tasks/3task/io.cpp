#include <iostream>

int readNumber()
{
	int x;
	std::cout << "Enter a number ";
	std::cin >> x;
	return x;
}

void writeAnswer(int x)
{
	std::cout << "The sum is " << x << std::endl;
}
