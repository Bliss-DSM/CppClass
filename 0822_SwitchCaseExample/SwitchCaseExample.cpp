#include "SwitchCaseExample.h"
#include <iostream>
using namespace std;

int main(void)
{
	char key;
	cin >> key;

	switch (key)
	{
	case 'w': cout << "����" << endl; break;
	case 'a': cout << "��ȸ��" << endl; break;
	case 's': cout << "����" << endl; break;
	case 'd': cout << "��ȸ��" << endl; break;
	default: cout << "�� �� ���� Ű" << endl;
	}

	return 0;
}


SwitchCaseExample::SwitchCaseExample()
{
}


SwitchCaseExample::~SwitchCaseExample()
{
}
