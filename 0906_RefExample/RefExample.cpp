#include "RefExample.h"
#include <iostream>
using namespace std;

int main(void)
{
	int target = 20;
	int& ref = target;

	cout << "ref	= " << ref << endl;
	cout << "target	= " << target << endl;
	cout << "&ref	= " << &ref << endl;
	cout << "&target= " << &target << endl;

	ref = 100;

	cout << "ref	= " << ref << endl;
	cout << "target	= " << target << endl;
}

RefExample::RefExample()
{
}


RefExample::~RefExample()
{
}
