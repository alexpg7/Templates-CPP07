#include "Array.hpp"
#include <iostream>

int main(void)
{
	Array	list = Array<int>(5);

	for (int i = 0; i < 5; i++)
	{
		list[i] = i + 1;
	}
	for (int i = 0; i < 5; i++)
	{
		std::cout << list[i] << std::endl;
	}
}
