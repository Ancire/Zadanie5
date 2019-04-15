#include "Vec.h"
#include <iostream>


Vec::Vec()
{
	x = 0;
	y = 0;
}
Vec::Vec(double a,double b)
{
	x = a;
	y = b;
}

Vec::~Vec()
{
}

void Vec::print()
{
	std::cout << "(" << x << "," << y << ")";
}
