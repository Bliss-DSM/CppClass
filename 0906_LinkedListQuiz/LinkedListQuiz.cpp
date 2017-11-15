#include "LinkedListQuiz.h"
#include <iostream>
using namespace std;

int main(void)
{
	struct student
	{
		char name[10];
		int stdnum;
		char major[30];
		char gender[10];
		char phoneNum[20];
		char address[50];
		student *next;
	};

	student students[5] = {
		{ "�̸�1", 11, "����1", "����", "010-1111-1111", "�����", &students[1] },
		{ "�̸�2", 22, "����2", "����", "010-2222-2222", "��õ��", &students[2] },
		{ "�̸�3", 33, "����3", "����", "010-3333-3333", "�λ��", &students[3] },
		{ "�̸�4", 44, "����4", "����", "010-4444-4444", "������", &students[4] },
		{ "�̸�5", 55, "����5", "����", "010-4444-4444", "����", NULL }
	};

	student *sp = students;

	while (sp->next != NULL)
	{
		cout << sp->name << sp->stdnum << sp->major << sp->gender << sp->phoneNum << sp->address << endl;
		sp = sp->next;
	}
}

LinkedListQuiz::LinkedListQuiz()
{
}


LinkedListQuiz::~LinkedListQuiz()
{
}
