/**
 * @file	trial.cpp
 * @brief	独習C++ 練習問題 4.2 2
 */
#include <iostream>
using namespace std;

class samp
{
public:
	samp(int n){ a = n; }
	int get_a(){ return a; }
private:
	int a;
};

int main()
{
	samp ob[4][2] = {
		1, 2,
		3, 4,
		5, 6,
		7, 8
	};
	int i;
	samp* p;

	p = &ob[0][0];
	for(i=0; i<4; i++)
	{
		cout << p->get_a() << " ";
		p++;
		cout << p->get_a() << endl;
		p++;
	}
	cout << endl;
	return 0;
}
