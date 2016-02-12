/**
 * @file	trial.cpp
 * @brief	独習C++ 総合理解度チェック 5 4
 */
#include <iostream>
using namespace std;

class samp
{
public:
	samp(){ a = 0; }
	samp(int n){ a = n; }
	int get_a(){ return a; }
private:
	int a;
};

int main()
{
	samp ob(88);
	samp obarray[10];

	cout << ob.get_a() << endl;
	for(int cnt=0; cnt<10; cnt++) cout << obarray[cnt].get_a() << " ";
	cout << endl;
	return 0;
}

