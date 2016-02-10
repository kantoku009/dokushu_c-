/**
 * @file	trial.cpp
 * @brief	独習C++ 前章の理解度チェック 5 7
 */
#include <iostream>
#include <cmath>
using namespace std;

void mag(long &num, long order)
{
	num = num * (long)pow(10, order);
}

int main()
{

	long theNum = 4;
	long theOrder = 2;
	cout << "mag(" << theNum << ", " << theOrder << ")";
	mag(theNum, theOrder);
	cout << "  ->  " << theNum << endl;

	return 0;
}
