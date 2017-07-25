#include<iostream>
#include "Complex.h"
using namespace std;

Complex::Complex() {}
	
Complex::Complex(double R, double I)
{
	this-> R = R;
	this-> I = I;
}

Complex Complex::operator + (Complex RHS) //Operator Overloading.
{
	Complex Sum;
	Sum.R = R + RHS.R;
	Sum.I = I + RHS.I;
	return(Sum);
}
void Complex::print()
{
	cout << R << "+ i(" << I << ")" << endl;
}
