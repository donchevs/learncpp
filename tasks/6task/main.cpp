#include <iostream>
#include "constants.h"

double getHeight()
{
	std::cout << "Enter the tower height in meters: ";
	int height;
	std::cin >> height;
	return height;
}

double fallDistance(int sec)
{
	return myConst::gravity*sec*sec/2;
}


void printHeight(int sec, double height)
{
	std::cout << "At " << sec << " seconds, the ball is ";
	if (height > 0)
		std::cout << "at height: " << height << " meters\n";
	else std::cout << " on the ground\n";
}

int main()
{
	double h {getHeight()};
	for (int i = 0; i<=5; i++) 
	{
		printHeight(i, h - fallDistance(i));
	}
	return 0;
}
