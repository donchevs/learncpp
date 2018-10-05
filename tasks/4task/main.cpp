#include <iostream>

bool isPrime(int x)
{
	if ((x==2) || (x==3) || (x==5) || (x==7))
		return true;
	return false;
}

int main()
{
	std::cout << "Enter a single digit number: ";
	int x;
	std::cin >> x;

	if (isPrime(x))
		std::cout << "The digit is prime" << std::endl;
	else
		std::cout << "The digit is not prime" << std::endl;

	return 0;
}
