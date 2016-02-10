/**
 * @file	trial.cpp
 * @brief	独習C++ 練習問題 4.1 2
 */
#include <iostream>
using namespace std;

class squares
{
public:
	squares(int a, int b){ num=a; sqr=b; }
	void show(){ cout << num << ' ' << sqr << endl; }
private:
	int num;
	int sqr;
};

int main()
{
	squares theSqr[10] = {
		squares(1, 1*1),
		squares(2, 2*2),
		squares(3, 3*3),
		squares(4, 4*4),
		squares(5, 5*5),
		squares(6, 6*6),
		squares(7, 7*7),
		squares(8, 8*8),
		squares(9, 9*9),
		squares(10, 10*10)
	};
	for(int cnt=0; cnt<10; cnt++) { theSqr[cnt].show(); }
	return 0;
}
