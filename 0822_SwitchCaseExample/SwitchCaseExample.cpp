#include "SwitchCaseExample.h"
#include <iostream>
using namespace std;

int main(void)
{
	char key;
	cin >> key;

	switch (key)
	{
	case 'w': cout << "전진" << endl; break;
	case 'a': cout << "좌회전" << endl; break;
	case 's': cout << "후진" << endl; break;
	case 'd': cout << "우회전" << endl; break;
	default: cout << "알 수 없는 키" << endl;
	}

	return 0;
}


SwitchCaseExample::SwitchCaseExample()
{
}


SwitchCaseExample::~SwitchCaseExample()
{
}
