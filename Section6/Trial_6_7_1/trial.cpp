/**
 * @file	trial.cpp
 * @brief	独習C++ 練習問題 6.7 1
 */
#include <iostream>
#include <cstdio>
using namespace std;

class strtype
{
public:
	/**
	 * @brief	コンストラクタ.
	 * @param	なし.
	 */
	strtype()
	{
		p = new char[255];
		p[0] = '\0';
		len = 255;
	}
	/**
	 * @brief	コンストラクタ.
	 * @param	const char* i_str	コピーする文字列.
	 */
	strtype(const char* i_str)
	{
		len = strlen(i_str) + 1;

		//メモリ確保.
		p = new char[len];

		//文字列をコピー.
		strncpy(p, i_str, len);
		p[len-1] = '\0';
	}

	/**
	 * @brief	デストラクタ.
	 */
	~strtype()
	{
		if(!p) delete [] p;
	}

	/**
	 * @brief	文字列を取得.
	 */
	char* get(){ return p; }

	/**
	 * @brief	文字列長を取得.
	 */
	int getlength(){ return len; }

	/**
	 * @brief	operator=
	 */
	strtype& operator=(strtype& ob)
	{
		//さらにメモリが必要か調べる.
		if(len < ob.len)
		{
			delete [] p;
		}
		//文字列長を更新.
		len = ob.len;
		//メモリ確保.
		p = new char [len];
		//文字列をコピー.
		strncpy(p, ob.p, len);
		return *this;
	}

	char& operator[](int i_Index)
	{
		//if(0<i_Index) return p[0];
		//else if(len>=i_Index) return p[i_Index-1];
		//else return p[i_Index];
		return p[i_Index];
	}
private:
	char* p;	//文字列
	int len;	//文字列長の確保するメモリサイズ.
};

int main()
{
	strtype a("Hello");

	cout << a.get() << endl;

	a[0] = 'h';
	cout << a.get() << endl;

	return 0;
}

