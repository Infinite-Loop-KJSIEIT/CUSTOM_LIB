#include<iostream>
#include "complex.h"

using namespace std;

Complex::Complex(){}
Complex::Complex(double R, double I)
{
	this->R=R;
	this->I=I;
}
Complex Complex::operator + (Complex T)
{
	Complex C;
	C.R=R+T.R;
	C.I=I+T.I;
	return C;
}
Complex Complex::operator - (Complex T)
{
	Complex C;
	C.R=R-T.R;
	C.I=I-T.I;
	return C;
}
Complex Complex::operator * (Complex T)
{
	Complex C;
	C.R=R*T.R-I*T.I;
	C.I=I*T.R+R*T.I;
	return C;
}
Complex Complex::operator / (Complex T)
{
	Complex C;
	C.R=(R*T.R+I*T.I)/(T.R*T.R+T.I*T.I);
	C.I=(I*T.R+R*T.I)/(T.R*T.R+T.I*T.I);
	return C;
}
void Complex::print()
{
	cout<<R<<" + i("<<I<<")"<<endl;
}
