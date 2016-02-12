/**
 * @file	trial.cpp
 * @brief	独習C++ 練習問題 5.6 1
 */
#include <iostream>
using namespace std;

int dif(int a, int b)
{
	return (a-b);
}

float dif(float a, float b)
{
	return (a-b);
}

int main()
{
	int (*fp1)(int, int);
	float (*fp2)(float, float);

	fp1 = dif;
	fp2 = dif;

	cout << "int dif(int,int): " << (void*)fp1 << endl;
	cout << "fp1(10,5) = " << fp1(10,5) << endl;

	cout << "float dif(float,float): " << (void*)fp2 << endl;
	cout << "fp2(10.9,0.9) = " << fp2(10.9,0.8) << endl;

	return 0;
}

