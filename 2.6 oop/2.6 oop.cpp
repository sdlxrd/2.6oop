#include <iostream>
#include "Number.h"

using namespace std;

int	main()
{
	Real a, b;
	int n;
	cout << "First:" << endl;
	cin >> a;
	cout << endl << "Second:" << endl;
	cin >> b;
	cout << endl << "step = "; cin >> n;
	cout << endl << "first: " << endl;
	a.Square(n, a);
	cout << endl << "second: " << endl;
	b.Square(n, b);
	cout << endl << "step of PI = " << a.Step(n) << endl;


	cout << endl;
	cout << "substraction:" << endl << "x1-x2, y1-y2" << endl << a - b << endl;
	cout << "multiplying:" << endl << "x1*x2, y1*y2" << endl << a * b;
}