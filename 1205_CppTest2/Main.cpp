#include <iostream>
using namespace std;

class Organism
{
public:
	virtual void Breath()
	{
		cout << "Organism Breathing" << endl;
	}
};

class Animal : public Organism
{
public:
	void Breath()
	{
		cout << "Animal Breathing" << endl;
	}

	virtual void Eat()
	{
		cout << "Animal Eating" << endl;
	}
};

class Plant : public Organism
{

};

class Human : public Animal
{
public:
	void Eat()
	{
		cout << "Human Eating" << endl;
	}

	virtual void Write()
	{
		cout << "Human Writing" << endl;
	}
};

class Student : public Human
{
public:
	void Write()
	{
		cout << "Student Writing" << endl;
	}

	virtual void Study()
	{
		cout << "Student Studying" << endl;
	}
};

class BusinessMan : public Human
{
public:
	void Write()
	{
		cout << "BusinessMan Writing" << endl;
	}

	virtual void Work() = 0;
};

namespace HighSchool
{
	class HighStudent : public Student
	{
	private:
		int grade = 1;

	public:
		void Study()
		{
			cout << "HighStudent Studying" << endl;
		}

		int getGrade()
		{
			return grade;
		}
	};
}

class MiddleStudent : public Student
{
public:
	void Study()
	{
		cout << "MiddleStudent Studying" << endl;
	}
};

class ElementaryStudent : public Student
{
public:
	void Study()
	{
		cout << "ElementaryStudent Studying" << endl;
	}
};

int main(void)
{
	Organism organism;
	Animal animal;
	Plant plant;
	Human human;
	Student student;
	//BusinessMan businessMan;
	HighSchool::HighStudent highStudent;
	MiddleStudent middleStudent;
	ElementaryStudent elementaryStudent;

	organism.Breath();
	animal.Breath();
	cout << endl;

	animal.Eat();
	human.Eat();
	cout << endl;

	human.Write();
	student.Write();
	cout << endl;

	student.Study();
	highStudent.Study();
	middleStudent.Study();
	elementaryStudent.Study();
	cout << endl;

	highStudent.getGrade();

	return 0;
}