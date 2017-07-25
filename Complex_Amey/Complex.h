#ifndef COMPLEX_H
#define COMPLEX_H


class Complex
{
private:
	double R, I;
public:
	Complex();
	
	Complex(double, double);
	
	Complex operator + (Complex);
	
	void print();	
};
#endif
