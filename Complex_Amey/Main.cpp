#include<iostream>
#include "Interface.h"

using namespace std;

int main()
{
	Complex A(1.5, 3.6);
	Complex B(3.3, 7.5);
	Complex C = A + B;
	cout<< "A = ";
	A.print();
	cout<< "B = ";
	B.print();
	cout<< "C = A + B\nC = ";
	C.print();
	return 0;
}
