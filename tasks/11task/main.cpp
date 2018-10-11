#include <iostream>

int main()
{
	int outer = 1;
	while (outer <= 5)
	{
		int inner = 6;

		while (inner)
		{
			if (--inner > outer)
				std::cout << "  ";
			else if (inner)
				std::cout << inner << " ";
		}

		std::cout << '\n';
		++outer;
	}

	return 0;
}
