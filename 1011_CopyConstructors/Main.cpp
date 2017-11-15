#include <iostream>
#include <string>
using namespace std;

class Point
{
public:
	Point();
	Point(int initialX, int initialY);
	Point(const Point& pt);
	void Print();
	void SetX(int x);
	void SetY(int y);
	int GetX();
	int GetY();

private:
	int x, y;
};

Point::Point()
{
}

Point::Point(int initialX, int initialY)
{
	x = initialX;
	y = initialY;
}

Point::Point(const Point& pt)
{
	cout << "복사 생성자 호출됨!!" << endl;
	x = pt.x;
	y = pt.y;
}

void Point::Print()
{
	cout << "x: " << x << " y: " << y << endl;
}

void Point::SetX(int x)
{
	if (x < 0) x = 0;
	else if (x > 100) x = 100;

	this->x = x;
}

void Point::SetY(int y)
{
	if (y < 0) y = 0;
	else if (y > 100) y = 100;

	this->y = y;
}

int Point::GetX()
{
	return this->x;
}

int Point::GetY()
{
	return this->y;
}

class NeedConstructor
{
public:
	const int maxCount;
	int& ref;
	int sample;

	NeedConstructor();
};

NeedConstructor::NeedConstructor() : maxCount(100), ref(sample)
{
	sample = 200;
}

class DynamicArray
{
public:
	int* arr;

	DynamicArray(int arraySize);
	~DynamicArray();
};

DynamicArray::DynamicArray(int arraySize)
{
	arr = new int[arraySize];
}

DynamicArray::~DynamicArray()
{
	cout << "소멸자 호출" << endl;
	delete[] arr;
	arr = NULL;
}

class AccessControl
{
public:
	char publicData;
	void publicFunc() {};

protected:
	int protectedData;
	void protectedFunc() {};

private:
	float privateData;
	void privateFunc() {};
};

class Student
{
public:
	string name;
	int sNo;
	Student(const string& name_arg, int stdNumber);
	~Student();

	static int student_count;
	static void PrintStdCount();
};

int Student::student_count = 0;

void Student::PrintStdCount()
{
	cout << "Student 객체 수 = " << student_count << endl;
}

Student::Student(const string& name_arg, int stdNumber)
{
	student_count++;

	name = name_arg;
	sNo = stdNumber;
}

Student::~Student()
{
	student_count--;
}

void Func()
{
	Student std1("Bill", 342);
	Student std2("James", 214);
	
	Student::PrintStdCount();
}

class WhoAmI
{
public:
	int id;

	WhoAmI(int id_arg);
	void ShowYourself() const;
};

WhoAmI::WhoAmI(int id_arg)
{
	id = id_arg;
}

void WhoAmI::ShowYourself() const
{
	cout << "{ ID = " << id << ", this = " << this << " }\n";
}

// -------------------- 객체 배열 시작 --------------------

class Player
{
private:
	int posX;
	int posY;
	string weapon;

public:
	Player();
	Player(int, int);
	Player(int, int, string);

	void Print() const;
};

Player::Player() : posX(0), posY(0), weapon("Sword")
{

}

Player::Player(int _posX, int _posY) : weapon("Sword")
{
	posX = _posX;
	posY = _posY;
}

Player::Player(int _posX, int _posY, string _weapon)
{
	posX = _posX;
	posY = _posY;
	weapon = _weapon;
}

void Player::Print() const
{
	cout << "X: " << posX << ", Y: " << posY << ", Weapon: " << weapon << endl;
}

// -------------------- 객체 배열 끝   --------------------

class Same
{
private:
	int num1;
	int num2;
public:
	Same(int, int);
	void Equal1(int, int);
	void Equal2(int, int);
	void Show();
};

Same::Same(int a, int b) : num1(a), num2(b)
{

}

void Same::Show()
{
	cout << "num1: " << num1 << ", num2: " << num2 << endl;
}

void Same::Equal1(int num1, int num2)
{
	this->num1 = num1;
	this->num2 = num2;
}

void Same::Equal2(int num1, int num2)
{
	num1 = num1;
	num2 = num2;
}

class Date
{
private:
	int year;
	int month;
	int day;
public:
	Date();
	Date(int, int, int);

	int GetYear();
	int GetMonth();
	int GetDay();

	void SetYear(int);
	void SetMonth(int);
	void SetDay(int);
};

Date::Date() : year(2017), month(1), day(1)
{

}

Date::Date(int _year, int _month, int _day)
{
	year = _year;
	month = _month;
	day = _day;
}

int Date::GetYear()
{
	return year;
}

int Date::GetMonth()
{
	return month;
}

int Date::GetDay()
{
	return day;
}

void Date::SetYear(int _year)
{
	year = _year;
}

void Date::SetMonth(int _month)
{
	month = _month;
}

void Date::SetDay(int _day)
{
	day = _day;
}

void Print(Date date)
{
	cout << date.GetYear() << "년 " << date.GetMonth() << "월 " << date.GetDay() << "일" << endl;
}

int PlayerMain()
{
	// 스택에 할당

	Player player1[3];

	cout << "[ player1 ]" << endl;

	for (int i = 0; i < 3; i++)
	{
		player1[i].Print();
	}

	cout << endl;

	Player player2[3] = { Player(), Player(1, 1), Player(3, 3, "Dagger") };

	cout << "[ player2 ]" << endl;

	for (int i = 0; i < 3; i++)
	{
		player2[i].Print();
	}

	// 힙에 할당

	Player* player3 = new Player[3];

	cout << "[ player3 ]" << endl;

	for (int i = 0; i < 3; i++)
	{
		player3[i].Print();
	}

	cout << endl;

	Player* player4

	delete[] player3;

	return 0;
}

int main(void)
{
	return PlayerMain();
}