/**
 * @file	trial.cpp
 * @brief	独習C++ 練習問題 5.2 2
 */
#include <iostream>
using namespace std;

class myclass
{
public:
	myclass(int i)
	{
		p = new int;
		if(!p) exit(1);
		*p = i;
	}
	myclass(const myclass& ob)
	{
		p = new int;
		if(!p) exit(1);
		*p = *ob.p;
	}
	~myclass(){ delete p; }
	friend int getval(myclass o);
private:
	int* p;
};

int getval(myclass o)
{
	return *o.p;	//値を取得する.
}

int main()
{
	myclass a(1), b(2);

	cout << getval(a) << " " << getval(b);
	cout << endl;
	cout << getval(a) << " " << getval(b);
	cout << endl;
	return 0;
}

