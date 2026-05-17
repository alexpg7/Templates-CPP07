#include "Array.hpp"
#include <iostream>

template <typename T> void	ft_printarr(Array<T> &arr)
{
	for (int i = 0; i < arr.size(); i++)
		std::cout << arr[i] << ", ";
	std::cout << std::endl;
}

int main(void)
{
	Array	list = Array<int>(5);

	std::cout << "List:" << std::endl;
	for (int i = 0; i < list.size(); i++)
		list[i] = i + 1;
	ft_printarr(list);

	std::cout << "Copy the list:" << std::endl;
	Array	list2 = Array(list);
	ft_printarr(list2);
	std::cout << "\nModify it and print both:" << std::endl;
	list[2] = 42;
	ft_printarr(list);
	ft_printarr(list2);
	std::cout << "\nTry to acess out of bounds:" << std::endl;
	try
	{
		list[42];
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

}
