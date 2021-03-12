

#include"range_limit.hpp"
#include<iostream>
using std::cout;
using std::endl;

bool isRange(int input, int max, int min)
{
	if (input > max)
		return false;
	if (input < min)
		return false;

	return true;
}