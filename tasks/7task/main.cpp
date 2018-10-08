#include <iostream>

bool isEven(int x);

int main()
{
	std::cout << "Choose a number";
	int nr;
	std::cin >> nr;
	if (isEven(nr) == true)
		std::cout << "The number is even\n";
	else
		std::cout << "The number is odd\n";
	return 0;
}

bool isEven(int x)
{
	if ((x%2) == 0) 
		return true;
	return false; 
}
