#include <iostream>
#include "add.h"
#include "multiply.h"
#include "power.h"

void areEquals(double excepted, double got)
{
	if (excepted != got)
	{
		std::cout << "Excepted =" << excepted << " but got value = " << got << "\n";
	}
	else
	{
		std::cout << "Test passed!\n";
	}
}

int main()
{
	areEquals(4, add(2,2));
	areEquals(4, multiply(2,2));
	areEquals(8, pow(2, 3));
	std::cout << "End of tests!" << std::endl;
	return 0;
}