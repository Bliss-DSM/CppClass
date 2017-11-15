#include "StudentStruct.h"
#include <iostream>
using namespace std;

struct Student
{
	char bloodType;
	int stdNumber;
	float grade;
};

int main(void)
{
	Student s1 = { 'A', 337, 4.5f };
	Student s2 = s1;

	cout << s1.bloodType << " " << s1.stdNumber << " " << s1.grade << endl;
	cout << s2.bloodType << " " << s2.stdNumber << " " << s2.grade << endl;

	return 0;
}

StudentStruct::StudentStruct()
{
}


StudentStruct::~StudentStruct()
{
}
