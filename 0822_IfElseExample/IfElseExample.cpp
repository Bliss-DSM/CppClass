#include "IfElseExample.h"
#include <iostream>
using namespace std;

int main(void)
{
	int input = 0;
	cin >> input;

	if (input > 100) return -1;
	else if (input > 90) cout << "A" << endl;
	else if (input > 80) cout << "B" << endl;
	else if (input > 70) cout << "C" << endl;
	else if (input > 60) cout << "D" << endl;
	else cout << "F" << endl;
	
	return 0;
}

IfElseExample::IfElseExample()
{
}


IfElseExample::~IfElseExample()
{
}
