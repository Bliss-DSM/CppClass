#pragma once
#include "DocWriter.h"

class HTMLWriter : public DocWriter
{
private:
	int fontSize;
	string fontColor;
	
public:
	// 생성자
	HTMLWriter(string, string, int, string);

	// 쓰기
	void Write();
};

