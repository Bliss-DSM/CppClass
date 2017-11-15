#pragma once
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class DocWriter
{
protected:
	string fileName;
	string content;

public:
	// 생성자
	DocWriter(string, string);

	// 쓰기
	void Write();
};

