/**
 * @file	trial.cpp
 * @brief	独習C++ 練習問題 6.7 2
 */
#include <iostream>
using namespace std;

class dynarray
{
public:
	dynarray(int s)						//配列のサイズをsに渡す.
	{
		this->size = s;
		this->p = new int[s];
	}
	~dynarray()
	{
		delete [] p;
	}
	int& put(int i) { return p[i]; }	//要素iへの参照を返す.
	int get(int i) { return p[i]; }		//要素iの値を返す.
	dynarray& operator=(dynarray& ob)
	{
		this->size = ob.size;
		if(0!=p) delete [] p;
		this->p = new int[ob.size];
		for(int cnt=0; cnt<this->size; cnt++) this->p[cnt] = ob.p[cnt];
		return *this;
	}
	int& operator[](int i_Index){ return p[i_Index]; }
private:
	int* p;
	int size;
};

int main()
{
	dynarray ob(10);

	//obへ値を設定する.
	for(int i=0; i<10; i++)
	{
		ob[i] = i;
	}

	dynarray cp(1);
	//obをcpへ代入し（operator=でオブジェクト中の値もコピーしている)
	cp = ob;

	//cpの値を確認.
	for(int i=0; i<10; i++)
	{
		cout << cp[i] << endl;
	}

	return 0;
}

