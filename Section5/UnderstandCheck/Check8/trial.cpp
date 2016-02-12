/**
 * @file	trial.cpp
 * @brief	独習C++ この章の理解度チェック 5 8
 */
#include <iostream>
using namespace std;

void reverse(char* str, int count=-1)
{
	int length = strlen(str);
	if(-1 == count)
	{
		count = length;
	}
	else if(length < count)
	{
		count = length;
	}
	else
	{
		//何もしない.
	}

	for(int theI=0; theI<(count/2); theI++)
	{
		char ch = str[theI];
		str[theI] = str[count-1-theI];
		str[count-1-theI] = ch;
	}
}

int main()
{
	char theStr[] = "0123456789\0";
	cout << theStr << endl;
	reverse(theStr, 5);
	cout << theStr << endl;
	return 0;
}

