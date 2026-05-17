#include "Array.hpp"
#include <iostream>

int main(void)
{
	Array	list = Array<int>(5);

	std::cout << "List:" << std::endl;
	for (int i = 0; i < 5; i++)
		list[i] = i + 1;
	for (int i = 0; i < 5; i++)
		std::cout << list[i] << ", ";

	std::cout << "\nCopy the list:" << std::endl;
	Array	list2 = Array(list);
	for (int i = 0; i < 5; i++)
		std::cout << list2[i] << ", ";
	std::cout << std::endl;
	std::cout << "\nModify it and print both:" << std::endl;
	list[2] = 42;
	for (int i = 0; i < 5; i++)
		std::cout << list[i] << ", ";
	std::cout << std::endl;
	for (int i = 0; i < 5; i++)
		std::cout << list2[i] << ", ";
	std::cout << std::endl;
}
