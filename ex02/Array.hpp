#pragma once

template <typename T>	class Array
{
	private:
		T	*_array;
		unsigned int	_size;
	public:
		Array();
		Array(const Array &copy);
		Array(unsigned int n);
		~Array();
		Array<T>& operator=(const Array<T>& arr);
		T& operator[](unsigned int i);
		unsigned int	size(void);
};

#include "Array.tpp"
