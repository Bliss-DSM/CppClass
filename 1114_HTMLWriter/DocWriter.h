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
	// ������
	DocWriter(string, string);

	// ����
	void Write();
};

