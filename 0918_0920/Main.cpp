//#define _CRT_SECURE_NO_WARNINGS
#include "Main.h"
#include <iostream>
#include <cmath>
//#include <cstring>
#include <string>
using namespace std;

struct Point
{
	double x, y;
};

void UsingArray(char arr[]);
void Code0918_1();
int MidValue(const int arr[], int len);
double Distance(Point& p1, Point& p2);
void Convert2Bin(int dec);
void Code0919_1();
void Code0919_2();
char* ReverseString(const char* src, int len);
char* ShiftLeftString(const char* src, int len);
void Code0920_1();
void Code0920_2();
void Code0925_1();
string FindExtention(string path);
string FindFileName(string path);
string FindDirectory(string path);
void Code0925_2();

int main(void)
{
	Code0925_2();
}

void UsingArray(char arr[])
{
	cout << "In UsingArray() : " << arr << endl;
	arr[12] = '?';
}

void Code0918_1()
{
	char array[20] = "Hello, World!";
	UsingArray(array);
	cout << "In Main() : " << array << endl;
}

int MidValue(const int arr[], int len)
{
	int array[100];

	for (int i = 0; i < len; i++)
	{
		array[i] = arr[i];
	}

	for (int i = 0; i < len - 1; i++)
	{
		for (int j = 0; j < len - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				int temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
			}
		}
	}

	return array[(len - 1) / 2];
}

double Distance(Point& p1, Point& p2)
{
	return sqrt(pow(p1.x - p2.x, 2) + pow(p1.y - p2.y, 2));
}

void Convert2Bin(int dec)
{
	if (dec <= 0) return;
	Convert2Bin(dec / 2);
	cout << dec % 2;
}

void Code0919_1()
{
	int size;
	cout << "몇 개의 정수를 입력하시겠습니까? ";
	cin >> size;

	int* arr = new int[size];
	cout << "정수를 입력하시오.\n";
	for (int i = 0; i < size; ++i)
	{
		cin >> arr[i];
	}

	int sum = 0;
	for (int i = 0; i < size; ++i)
	{
		sum += arr[i];
	}
	
	float ave = (float)sum / (float)size;
	cout << "합 = " << sum << ", 평균 = " << ave << "\n";

	delete[] arr;
}

void Code0919_2()
{
	int size;
	cout << "몇 개의 실수를 입력하시겠습니까? ";
	cin >> size;

	float* arr = new float[size];
	cout << "실수를 입력하시오.\n";
	for (int i = 0; i < size; ++i)
	{
		cin >> arr[i];
	}

	float sum = 0;
	for (int i = 0; i < size; ++i)
	{
		sum += arr[i];
	}

	float ave = sum / size;

	cout << endl;
	for (int i = 0; i < size; i++)
	{
		if (arr[i] > ave) cout << arr[i] << endl;
	}

	delete[] arr;

	short* p = new short[100];
	delete[] p;
	delete[] p;
}

char* ReverseString(const char* src, int len)
{
	char* reverse = new char[len + 1];

	for (int i = 0; i < len; i++)
	{
		reverse[i] = src[len - i - 1];
	}

	reverse[len] = NULL;
	return reverse;
}

char* ShiftLeftString(const char* src, int len)
{
	char* shift = new char[len + 1];

	for (int i = 0; i < len - 1; i++)
	{
		shift[i] = src[i + 1];
	}

	shift[len - 1] = src[0];
	shift[len] = NULL;
	return shift;
}

void Code0920_1()
{
	char src[] = "Hanbit-Media";

	int len = strlen(src);
	char* dest = new char[len + 1];
	//strcpy(dest, src);

	cout << "src = " << src << endl;
	cout << "dest = " << dest << endl;

	delete[] dest;

	char str1[20] = "abcde";
	char str2[] = "fghij";

	//strcat(str1, str2);

	if (strcmp(str1, "abcdefghij") == 0) cout << "str1 and \"abcdefghij\" are identical." << endl;
	if (strcmp("123456", str1) != 0) cout << "\"123456\" and str1 are NOT identical." << endl;
}

void Code0920_2()
{
	string s = "C++ Style~";
	cout << s << endl;

	string src = "Hanbit-Media";
	string desc;

	desc = src;

	cout << "src = " << src << endl;
	cout << "desc = " << desc << endl;

	string s1;
	string s2 = "123";
	string s3 = "abcdefg";

	cout << "s1 = " << s1.size() << endl;
	cout << "s2 = " << s2.size() << endl;
	cout << "s3 = " << s3.size() << endl;
}

void Code0925_1()
{
	string text = "Napster's pay-to-play "
		"service is officially out, "
		"and we have a review.";

	cout << "Offset of 'official' = " << text.find("official") << endl;

	string path = "c:\\My Document\\Pictures\\33.jpg";
	int len = path.size();
	string ext = path.substr(len - 3, 3);

	cout << "extention = " << ext << endl;

	cout << FindExtention(path) << endl;
	cout << FindFileName(path) << endl;
	cout << FindDirectory(path) << endl;
}

string FindExtention(string path)
{
	int offset = path.find_last_of(".");
	return path.substr(offset + 1);
}

string FindFileName(string path)
{
	int length = path.size();
	int offset = path.find_last_of("\\");
	return path.substr(offset + 1);
}

string FindDirectory(string path)
{
	int length = path.size();
	int offset = path.find_last_of("\\");
	return path.substr(0, offset);
}

void Code0925_2()
{
	//char chAddress[100];
	//cout << "주소 입력? ";
	//cin >> chAddress;

	string strAddress;
	cout << "주소 입력? ";
	//cin >> strAddress;
	getline(cin, strAddress);
	cout << strAddress << endl;
}

Main::Main()
{
}


Main::~Main()
{
}
