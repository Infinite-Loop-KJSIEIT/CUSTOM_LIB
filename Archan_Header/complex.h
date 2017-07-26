#ifndef COMPLEX_H
#define COMPLEX_H

class Complex
{
	double R, I;
public:
	Complex();
	Complex(double R, double I);
	Complex operator + (Complex T);
	Complex operator - (Complex T);
	Complex operator * (Complex T);
	Complex operator / (Complex T);
	void print();
};

#endif
