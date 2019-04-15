#include "Punkt.h"
#include<iostream>

using namespace std;
Punkt::Punkt()
{
	x = 0;
	y = 0;
}

Punkt::Punkt(double x=0, double y=0)
{
	this->x = x;
	this->y = y;
}

Punkt::~Punkt()
{
}


void Punkt::print()
{
	cout << "x: " << x << " y: " << y;
}