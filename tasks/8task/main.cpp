#include <iostream>

int enterValue();
void printValues(int x, int y);

int main()
{
	int min, max;
	min = enterValue();
	max = enterValue();
	
	if (min > max)
	{
		std::cout << "Swapping the values\n";
		int temp = min;
		min = max;
		max = temp;
	}

	printValues(min,max);
	return 0;
}

int enterValue()
{
	std::cout << "Enter an integer ";
	int x;
	std::cin >> x;
	return x;
}

void printValues(int x, int y)
{
	std::cout << "The smaller value is " << x << '\n';
	std::cout << "The larger value is " << y << '\n';
}
