#include "CinExample.h"
#include <iostream>
using namespace std;

int main(void)
{
	int num1, num2;

	cout << "ù��° �� �Է�?: ";
	cin >> num1;
	cout << "�ι�° �� �Է�?: ";
	cin >> num2;
	cout << num1 << "/" << num2 << "�� ����� " << num1 / num2 << "�Դϴ�." << endl;

	return 0;
}

CinExample::CinExample()
{
}


CinExample::~CinExample()
{
}
