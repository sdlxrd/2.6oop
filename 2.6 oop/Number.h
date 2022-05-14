#include <iostream>
#include <string>
#pragma once

using namespace std;

class Real
{
private:
	class Number
	{
	private:
		double number1, number2;
	public:
		Number(double number1 = 0, double number2 = 0);
		Number(const Number&);
		~Number();
		double getNumber1() const { return number1; }
		double getNumber2()	const { return number2; }
		void setNumber1(double number) { number1 = number; }
		void setNumber2(double number) { number2 = number; }

		Number& operator=(const Number&);
	};
	Number num;
public:
	Real();
	Real(Number);
	Real(const Real&);
	~Real();
	Real& operator=(const Real&);

	operator string() const;
	friend Real operator -(const Real&, const Real&);
	friend Real operator *(const Real&, const Real&);

	friend ostream& operator<<(ostream& out, const Real&);
	friend istream& operator>>(istream& in, Real&);

	double Square(int step, Real& a);
	double Step(int step);
	Real::Number getNum() const { return num; }
	void setNum(Real::Number num) { this->num = num; }

};