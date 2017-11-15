#include "HTMLWriter.h"

HTMLWriter::HTMLWriter(string _fileName, string _content, int _fontSize, string _fontColor)
	: DocWriter(_fileName, _content), fontSize(_fontSize), fontColor(_fontColor)
{

}

void HTMLWriter::Write()
{
	ofstream outfile(fileName);

	outfile << "<html><head><title>Test</title></head><body>"
		<< "<font size='" << fontSize << "' color='" << fontColor << "'>"
		<< content << "</font></body></html>";

	outfile.close();
}