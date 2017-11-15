#include "DocWriter.h"

DocWriter::DocWriter(string _fileName, string _content)
	: fileName(_fileName), content(_content)
{

}

void DocWriter::Write()
{
	ofstream outfile(fileName);
	outfile << "# Content #" << endl;
	outfile << content << endl;
	outfile.close();
}