#include <iostream>

int main()
{
	char c('a');
	while (c <= 122)
	{
		std::cout << "char = " << c << " integer = " <<
			static_cast<int>(c) << '\n';
		c++;
	}
	return 0;
}
