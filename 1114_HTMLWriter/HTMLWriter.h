#pragma once
#include "DocWriter.h"

class HTMLWriter : public DocWriter
{
private:
	int fontSize;
	string fontColor;
	
public:
	// ������
	HTMLWriter(string, string, int, string);

	// ����
	void Write();
};

