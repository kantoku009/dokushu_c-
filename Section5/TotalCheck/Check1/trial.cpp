/**
 * @file	trial.cpp
 * @brief	独習C++ 総合理解度チェック 5 1
 */
#include <iostream>
using namespace std;

void order(int& x, int& y)
{
	if( x > y )
	{
		int tmp;
		tmp = y;
		y = x;
		x = tmp;
	}
	else
	{
		//何もしない.
	}
}

int main()
{
	int x = 1;
	int y = 0;
	order(x, y);

	cout << x << " " << y << endl;
	return 0;
}

