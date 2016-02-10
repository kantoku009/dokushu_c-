/**
 * @file	trial.cpp
 * @brief	独習C++ 練習問題 4.2 1
 */
#include <iostream>
using namespace std;

class samp
{
public:
	samp(int n, int m){ a = n; b = m; }
	int get_a(){ return a; }
	int get_b(){ return b; }
private:
	int a, b;
};

int main()
{
	samp ob[4] = {
		samp(1, 2),
		samp(3, 4),
		samp(5, 6),
		samp(7, 8)
	};
	int i;

	samp *p=&ob[3];
	for(i=0 ,p=&ob[3]; i<4; i++, p--)
	{
		cout << p->get_a() << ' ';
		cout << p->get_b() << endl;
	}

	cout << endl;

	return 0;
}
