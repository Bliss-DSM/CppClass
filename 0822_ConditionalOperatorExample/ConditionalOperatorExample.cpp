#include "ConditionalOperatorExample.h"
#include <iostream>
using namespace std;

int main(void)
{
	bool largefile = false;
	unsigned int filesize = 0;
	cin >> largefile;

	if (filesize > 1024 * 1024) largefile = true;
	else largefile = false;

	if (largefile == true) cout << "true" << endl;
	else cout << "false" << endl;

	return 0;
}

ConditionalOperatorExample::ConditionalOperatorExample()
{
}


ConditionalOperatorExample::~ConditionalOperatorExample()
{
}
