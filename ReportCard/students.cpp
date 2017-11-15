#include <iostream>
#include <string>
using namespace std;

#include "students.h"

Student* findTail(Student* head)
{
	Student* tail = head;

	if (tail == NULL) return tail;

	while (tail->next == NULL)
	{
		tail = tail->next;
	}

	return tail;
}

void add(Student* head)
{
	string _name;
	int _kor, _eng, _math;
	Student* tail = findTail(head);

	cout << "�̸�<�������> ����, ����, ���� ������ �Է��ϼ��� : ";
	cin >> _name >> _kor >> _eng >> _math;
	const string __name = _name;

	Student* student = (Student*)malloc(sizeof(Student));
	student->name = "�����";
	cout << "aaa" << endl;
	student->sNo = 1;
	student->name = __name;
	cout << "aaa" << endl;
	student->kor = _kor;
	student->eng = _eng;
	student->math = _math;
	student->ave = (_kor + _eng + _math) / 3;
	student->next = NULL;
	if (head == tail) tail = student;
	else tail->next = student;
	

	cout << "�л� ������ �ùٸ��� �ԷµǾ����ϴ�." << endl;
}

void show(Student* head)
{
	cout << "		< ��ü ���� ���� >";
	cout << "  �й�  �̸�  ����  ����  ����    ���" << endl;

	Student* current = head;
	float average = 0;
	int count = 0;

	while (current != NULL)
	{
		cout << current->sNo << current->name << current->kor << current->eng << current->math << current->ave;
		count++;
		average += current->ave;
	}

	cout << "��ü ��� = " << average / count << endl;
}