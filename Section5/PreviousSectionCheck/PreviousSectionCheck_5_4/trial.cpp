/**
 * @file	trial.cpp
 * @brief	独習C++ 前章の理解度チェック 5 4
 */
#include <iostream>
using namespace std;

#define SIZE (10)

class samp
{
public:
	samp(int n){ x = n; }
	int getx(){ return x; }
private:
	int x;
};

int main()
{
	samp theObject[SIZE] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 , 10 };

	for(int theCnt=0; theCnt<SIZE; theCnt++)
	{
		cout << theObject[theCnt].getx() << endl;
	}

	return 0;
}
