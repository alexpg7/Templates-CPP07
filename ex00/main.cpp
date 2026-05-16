#include "whatever.hpp"
#include <iostream>

int main(void)
{
	int	n1 = 1;
	int	n2 = 2;

	std::cout << "Before swapping:" << std::endl;
	std::cout << "n1: " << n1 << std:: endl;
	std::cout << "n2: " << n2 << std:: endl;

	swap(n1, n2);
	std::cout << "\nAfter swapping:" << std::endl;
	std::cout << "n1: " << n1 << std:: endl;
	std::cout << "n2: " << n2 << std:: endl;

	std::cout << "\nComparison" << std::endl;
	std::cout << max(n1, n2) << " > " << min(n1, n2) << std:: endl;
}
