#include <iostream>

double getDouble()
{
	std::cout << "Enter a double value: ";
	double x;
	std::cin >> x;
	return x;
}

char getOperator()
{
	std::cout << "Enter one of the following: +, -, * or /: ";
	char c;
	std::cin >> c;
	return c;
}

void printResult(double x, char op, double y)
{
	if (op == '+')
		std::cout << x << op << y << " = " << x + y << '\n';
	else if (op == '-')
		std::cout << x << op << y << " = " << x - y << '\n';
	else if (op == '*')
		std::cout << x << op << y << " = " << x * y << '\n';
	else if (op == '/')
		std::cout << x << op << y << "  = " << x / y << '\n';
}

int main()
{
	printResult(getDouble(), getOperator(), getDouble());
	return 0;
}
