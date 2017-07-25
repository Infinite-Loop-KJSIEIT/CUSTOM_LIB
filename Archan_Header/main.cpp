#include "interface.h"
#include <iostream>

using namespace std;

int main()
{
	Complex A (1, 2);
	Complex B (2, 3);
	Complex C;
	cout<<"A = ";
	A.print();
	cout<<"B = ";
	B.print();
	cout<<"A + B = ";
	C=A+B;
	C.print();
	cout<<"A - B = ";
	C=A-B;
	C.print();
	cout<<"A * B = ";
	C=A*B;
	C.print();
	cout<<"A / B = ";
	C=A/B;
	C.print();
	return 0;
}
