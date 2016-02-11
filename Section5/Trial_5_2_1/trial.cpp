/**
 * @file	trial.cpp
 * @brief	独習C++ 練習問題 5.2 1
 * @note	関数からの戻り値がインスタンスの場合,
 *			コンパイラーによってはコピーコンストラクターが起動されない.
 *			■参考
 *			　コピーの省略 (Wikipedia)
 *			　https://ja.wikipedia.org/wiki/%E3%82%B3%E3%83%94%E3%83%BC%E3%81%AE%E7%9C%81%E7%95%A5
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

