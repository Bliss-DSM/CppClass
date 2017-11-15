#include "StructPointer.h"
#include <iostream>
using namespace std;

int main(void)
{
	struct Dizzy
	{
		int id;
		Dizzy *p;
	};

	Dizzy a, b, c;
	a.id = 1;
	b.id = 2;
	c.id = 3;
	a.p = &b;
	b.p = &c;
	c.p = &a;

	cout << a.id << endl;
	cout << a.p->id << endl;
	cout << a.p->p->id << endl;
	cout << a.p->p->p->id << endl;
}

StructPointer::StructPointer()
{
}


StructPointer::~StructPointer()
{
}
