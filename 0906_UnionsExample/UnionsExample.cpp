#include "UnionsExample.h"
#include <iostream>
using namespace std;

int main(void)
{
	union MyUnion
	{
		int i;
		void *p;
	};

	MyUnion uni;
	cout << "&uni.i = " << &uni.i << endl;
	cout << "&uni.p = " << &uni.p << endl;

	uni.i = 0x12345678;
	cout << hex;
	cout << "uni.i = " << uni.i << endl;
	cout << "uni.p = " << uni.p << endl;

	uni.p = (void *)0x87654321;
	cout << "uni.i = " << uni.i << endl;
	cout << "uni.p = " << uni.p << endl;
}


UnionsExample::UnionsExample()
{
}


UnionsExample::~UnionsExample()
{
}
