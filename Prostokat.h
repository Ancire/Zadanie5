#pragma once
#include "Punkt.h"
#include "Vec.h"

class Prostokat
{
public:
	Punkt p1, p2, p3, p4;

	Prostokat();
	Prostokat(Punkt ldl, Punkt ldp, Punkt lgl, Punkt pgp);
	~Prostokat();

	void print();

	void move(Vec v);

	void rotate(double alfa);
};

