#pragma once

template <typename T>	class Array
{
	private:
		T	*_array;
		unsigned int	_size;
	public:
		Array();
		Array(Array &copy);
		Array(unsigned int n);
		Array<T>& operator=(const Array<T>& arr);
		T& operator[](unsigned int i);
};

#include "Array.tpp"
