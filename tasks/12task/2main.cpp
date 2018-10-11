#include <iostream>

int sumTo(int x)
{
	int sum(0);
	for (x; x; x--) {
		sum = sum + x;
		std::cout << x << " + ";
	}
	std::cout << " = ";
	return sum;
}

int main()
{
	std::cout << sumTo(5) << '\n';
	return 0;
}
