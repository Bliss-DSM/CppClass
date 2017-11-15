#include "BitOperator.h"
#include <iostream>
using namespace std;

int main(void)
{
	unsigned short us = 0xff00;
	short s = (short)0xff00;

	unsigned short us_shift = us >> 4;
	short s_shift = s >> 4;

	cout << "us =  " << us << endl;
	cout << "s = " << s << endl;
	cout << "us_shift = " << us_shift << endl;
	cout << "s_shift = " << s_shift << endl;

	return 0;
}

BitOperator::BitOperator()
{
}


BitOperator::~BitOperator()
{
}
