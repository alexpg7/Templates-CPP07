#pragma once
#include <iostream>

template <typename T, typename Func> void iter(T* array, int len, Func function)
{
	for (int i = 0; i < len; i++)
	{
		function(array[i]);
	}
}

template <typename T> void printElement(const T& element)
{
	std::cout << "Element: " << element << std::endl;
}
