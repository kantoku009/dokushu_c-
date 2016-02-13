/**
 * @file	trial.cpp
 * @brief	独習C++ 前章の理解度チェック 6 1
 */
#include <iostream>
using namespace std;

class myclass
{
public:
	myclass(){ x=0; y=0; }
	myclass(int n, int m){ x=n; y=m; }
	int get_x() const { return x; }
	int get_y() const { return y; }
private:
	int x;
	int y;
};

void show(const myclass& ob)
{
	cout << ob.get_x() << " " << ob.get_y() << endl;
}

int main()
{
	myclass ob1;
	myclass ob2(2, 3);

	show(ob1);
	show(ob2);
	
	return 0;
}
