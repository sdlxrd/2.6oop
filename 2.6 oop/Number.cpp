#include "Number.h"
#include <iostream>
#include <cmath>
#include <sstream>
#include <string>
#define PI 3.14159265

using namespace std;

Real::Real()
{
	num;
}
Real::Real(Number num)
{
	this->num = num;
}
Real::Real(	const Real& x)
{
	this->num = x.num;
}
Real::~Real()
{}


Real& Real::operator =(const Real& x)
{
	this->num = x.num;
	return *this;
}
Real::operator string() const
{
	stringstream ss;
	ss  << num.getNumber1() <<", " << num.getNumber2() << endl;
	
	return ss.str();
}

istream& operator >>(istream& in, Real& x)
{
	double numb1, numb2;
	cout << "Enter x number: ";in >> numb1;
	cout << "Enter y number: ";in >> numb2;
	x.num = { numb1, numb2 };
	return in;
}
ostream& operator<<(ostream& out, const Real& r)
{
	out	<< string(r);
	return out;
}

double Real::Square(int step, Real& a)
{
	cout << "root of x = " << pow(a.num.getNumber1(), (1. / step)) << endl;
	cout << "root of y = " << pow(a.num.getNumber2(), (1. / step)) << endl;
	return 0;
}
double Real::Step(int step)
{
	return pow(PI, step);
}


Real::Number::Number(double a, double b)
{
	setNumber1(a);
	setNumber2(b);
}

Real::Number::Number(const Real::Number& x)
{
	*this = x;
}
Real::Number::~Number()
{}
Real::Number& Real::Number::operator =(const Real::Number& x)
{
	number1 = x.number1;
	number2 = x.number2;
	return *this;
}

Real operator -(const Real& x, const Real& y)
{
	return Real({x.num.getNumber1() - y.num.getNumber1(), x.num.getNumber2() - y.num.getNumber2()});
}
Real operator *(const Real& x, const Real& y)
{
	return Real({x.num.getNumber1() * y.num.getNumber1(), x.num.getNumber2() * y.num.getNumber2()});
}
