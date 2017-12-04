#include "HTMLWriter.h"

int main(void)
{
	HTMLWriter htmlWriter("C:\\Users\\BLISS\\Desktop\\cpp\\test.html", "This is a test: HTMLWriter", 15, "blue");
	htmlWriter.Write();

	DocWriter docWriter("C:\\Users\\BLISS\\Desktop\\cpp\\test.txt", "This is a test: DocWriter");
	docWriter.Write();

	DocWriter* pDW = &docWriter;
	pDW->Write();

	pDW = &htmlWriter;
	pDW->Write();
}