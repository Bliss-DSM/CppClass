#include "HTMLWriter.h"

int main(void)
{
	HTMLWriter htmlWriter("C:\\Users\\BLISS\\Desktop\\cpp\\test.html", "This is a test: HTMLWriter", 15, "blue");
	htmlWriter.Write();

	DocWriter docWirter("C:\\Users\\BLISS\\Desktop\\cpp\\test.txt", "This is a test: DocWriter");
	docWirter.Write();
}