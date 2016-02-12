/**
 * @file	trial.cpp
 * @brief	独習C++ 練習問題 5.5 1
 */
#include <iostream>
using namespace std;

float f(float i)
{
	return (i/2.0);
}

double f(double i)
{
	return (i/3.0);
}

int main()
{
	float x=10.09;
	double y=10.09;
	cout << f(x) << endl;	//あいまいではない. f(float)を使用する.
	cout << f(y) << endl;	//あいまいではない. f(double)を使用する.
	cout << f(10) << endl;	//あいまい. 10をdoubleとfloatのどちらにでも変換できる.

	return 0;
}

