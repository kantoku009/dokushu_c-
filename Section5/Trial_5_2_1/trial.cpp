/**
 * @file	trial.cpp
 * @brief	独習C++ 練習問題 5.2 1
 */
#include <iostream>
using namespace std;

class myclass
{
public:
	myclass()
	{
		cout << "Constructing normally" << endl;
	}
	myclass(const myclass &o)
	{
		cout << "Constructing copy" << endl;
	}
	myclass f()
	{
		cout << "myclass::f()" << endl;
		myclass temp;
		return temp;
	}
};

int main()
{
	myclass obj;
	obj = obj.f();
	cout << "exit" << endl;
	return 0;
}

