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

	cout << "이름<공백없이> 국어, 영어, 수학 점수를 입력하세요 : ";
	cin >> _name >> _kor >> _eng >> _math;
	const string __name = _name;

	Student* student = (Student*)malloc(sizeof(Student));
	student->name = "조경욱";
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
	

	cout << "학생 성적이 올바르게 입력되었습니다." << endl;
}

void show(Student* head)
{
	cout << "		< 전체 성적 보기 >";
	cout << "  학번  이름  국어  영어  수학    평균" << endl;

	Student* current = head;
	float average = 0;
	int count = 0;

	while (current != NULL)
	{
		cout << current->sNo << current->name << current->kor << current->eng << current->math << current->ave;
		count++;
		average += current->ave;
	}

	cout << "전체 평균 = " << average / count << endl;
}