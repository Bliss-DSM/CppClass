#include "ConstPointer.h"
#include <iostream>
using namespace std;

int main(void)
{
	int i1 = 10;
	int i2 = 20;

	const int *p1 = &i1;
	p1 = &i2;
	//*p1 = 30;

	int *const p2 = &i1;
	//p2 = &i2;
	*p2 = 30;

	const int* const p3 = &i1;
	//p3 = &i2;
	//*p3 = 30;

	return 0;
}

ConstPointer::ConstPointer()
{
}


ConstPointer::~ConstPointer()
{
}
