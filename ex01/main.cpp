#include "iter.hpp"
#include <iostream>

void	ft_print(int n)
{
	std::cout << n << std::endl;
}

int main(void)
{
	int array[3] = {1, 2, 3};

	iter(array, 3, printElement<int>);
	iter(array, 3, ft_print);
}
