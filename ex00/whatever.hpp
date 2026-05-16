#pragma once

template <typename T> void swap(T &x, T &y)
{
	T	z = x;
	x = y;
	y = z;
}

template <typename T>
T const &min(T const &a, T const &b){
	if (a < b)
		return (a);
	return (b);
}

template <typename T>
T const &max(T const &a, T const &b){
	if (a > b)
		return (a);
	return (b);
}
