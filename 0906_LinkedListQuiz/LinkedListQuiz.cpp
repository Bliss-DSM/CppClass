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
		{ "이름1", 11, "전공1", "남성", "010-1111-1111", "서울시", &students[1] },
		{ "이름2", 22, "전공2", "여성", "010-2222-2222", "인천시", &students[2] },
		{ "이름3", 33, "전공3", "남성", "010-3333-3333", "부산시", &students[3] },
		{ "이름4", 44, "전공4", "여성", "010-4444-4444", "대전시", &students[4] },
		{ "이름5", 55, "전공5", "남성", "010-4444-4444", "울산시", NULL }
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
