#include <iostream>
using namespace std;

#include "menu.h"

int selectMenu()
{
	int result;

	cout << "------ �޴� ------" << endl;
	cout << "1. �л� ���� �߰�" << endl;
	cout << "2. ��ü ���� ����" << endl;
	cout << "0. ���α׷� ����" << endl;
	cout << endl;
	cout << "���ϴ� �۾��� ��ȣ�� �Է��ϼ��� : ";

	cin >> result;

	return result;
}