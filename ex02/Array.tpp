#include "Array.hpp"
#include <stdexcept>

template <typename T> Array<T>::Array()
{
	_array = nullptr;
	_size = 0;
}

template <typename T> Array<T>::Array(unsigned int n): _array(new T[n]()), _size(n)
{

}

template <typename T> Array<T>::~Array()
{
	if (_array)
		delete[] _array;
}

template <typename T> Array<T>::Array(const Array &copy): _array(nullptr), _size(copy._size)
{
	*this = copy;
}

template <typename T> Array<T>& Array<T>::operator=(const Array<T>& arr)
{
	if (this == &arr)
		return (*this);
	if (this->_array)
		delete[] _array;
	_array = new T[arr._size]();
	_size = arr._size;
	for (unsigned int i = 0; i < _size; i++)
		_array[i] = arr._array[i];
	return (*this);
}

template <typename T> T& Array<T>::operator[](unsigned int i)
{
	if (i >= _size)
		throw std::out_of_range("Array index out of bounds");
	return (_array[i]);
}

template <typename T> unsigned int Array<T>::size(void)
{
	return (_size);
}