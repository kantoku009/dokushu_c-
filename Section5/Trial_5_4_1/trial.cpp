/**
 * @file	trial.cpp
 * @brief	独習C++ 練習問題 5.4 1
 */
#include <iostream>
#include <cstdlib>
using namespace std;

long mystrtol(const char* start, char** end, int base=10)
{
	return strtol(start, end, base);
}

int main()
{
	long theInteger=0;
	char* theChars;

	//10進数を変換.
	theInteger = mystrtol("10", &theChars);
	cout << "Dec(\"10\"): " << theInteger << endl;

	//2進数を変換.
	theInteger = mystrtol("1010", &theChars, 2);
	cout << "Bin(\"1010\"): " << theInteger << endl;

	//16進数を変換.
	theInteger = mystrtol("A", &theChars, 16);
	cout << "Hex(\"A\"): " << theInteger << endl;

	return 0;
}

