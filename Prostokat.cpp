#include "Prostokat.h"
#include<iostream>
#include <cmath>
const double M_PI = 3.14159265358979323846;

using namespace std;


Prostokat::Prostokat()
{
}

Prostokat::Prostokat(Punkt ldl, Punkt ldp, Punkt pgp , Punkt lgl)
{
	this->p1 = ldl;
	this->p2 = ldp;
	this->p3 = pgp;
	this->p4 = lgl;
}

Prostokat::~Prostokat()
{
}

void Prostokat::print()
{
	cout << "Lewy gora Prawy gora\n";
	cout << "Lewy dol Prawy dol\n";
	cout << "(" << p4.x << "," << p4.y << ") (" << p3.x << "," << p3.y << ")\n";
	cout << "(" << p1.x << "," << p1.y << ") (" << p2.x << "," << p2.y << ")";

	//cout << "(" << p1.x << "," << p1.y << ") (" << p2.x << "," << p2.y << ") (" << p3.x << "," << p3.y << ") (" << p4.x << "," << p4.y << ")";
}

void Prostokat::move(Vec v)
{
	p1.x += v.x;
	p1.y += v.y;
	p2.x += v.x;
	p2.y += v.y;
	p3.x += v.x;
	p3.y += v.y;
	p4.x += v.x;
	p4.y += v.y;
}

void Prostokat::rotate(double alfa)
{
	double angle = alfa * M_PI /180;

	/*

	[x]'		[cos(z)	-sin(z)]		[x]
	| |    =	|			   |  *		| |
	[y]'		[sin(z)	 cos(z)]		[y]
	
	*/


	Punkt p;
	p = this->p1;
	p.x = this->p1.x*cos(angle) - this->p1.y*sin(angle);
	p.y = this->p1.x*sin(angle) + this->p1.y*cos(angle);
	this->p1 = p;

 	p = this->p2;
	p.x = (this->p2.x*cos(angle)) - (this->p2.y*sin(angle));
	p.y = (this->p2.x*sin(angle)) + (this->p2.y*cos(angle));
	this->p2 = p;

	p = this->p3;
	p.x = this->p3.x*cos(angle) - this->p3.y*sin(angle);
	p.y = this->p3.x*sin(angle) + this->p3.y*cos(angle);
	this->p3 = p;

	p = this->p4;
	p.x = this->p4.x*cos(angle) - this->p4.y*sin(angle);
	p.y = this->p4.x*sin(angle) + this->p4.y*cos(angle);
	this->p4 = p;
}
