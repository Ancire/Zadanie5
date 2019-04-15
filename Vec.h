#pragma once
class Vec
{
public:
	double x, y;
	Vec();
	Vec(double a,double b);

	~Vec();

	void print();


	Vec operator +(Vec &d)
	{
		Vec ret;
		ret.x = this->x + d.x;
		ret.y = this->y + d.y;
		return ret;
	}

	Vec operator -(Vec &d)
	{
		Vec ret;
		ret.x = this->x - d.x;
		ret.y = this->y - d.y;
		return ret;
	}

	Vec operator *(const double &d)
	{
		Vec ret;
		ret.x = this->x * d;
		ret.y = this->y * d;
		return ret;
	}
};

