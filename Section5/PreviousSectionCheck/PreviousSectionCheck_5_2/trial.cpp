/**
 * @file	trial.cpp
 * @brief	独習C++ 前章の理解度チェック 5 2
 */
#include <iostream>
using namespace std;

int main()
{
	float* theFloat;
	int* theInteger;

	theFloat = new float;
	theInteger = new int;

	*theFloat = 2.5;
	*theInteger = 12;

	cout << "float:" << *theFloat << endl;
	cout << "int: " << *theInteger << endl;

	delete theFloat;
	delete theInteger;

	return 0;
}
