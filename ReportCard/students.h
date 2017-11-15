struct Student
{
	int sNo;
	string name;
	int kor, eng, math;
	float ave;
	Student* next = NULL;
};

void add(Student* head);
void show(Student* head);