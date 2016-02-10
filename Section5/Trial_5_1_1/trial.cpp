/**
 * @file	trial.cpp
 * @brief	独習C++ 練習問題 5.1 1
 */
#include <iostream>
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
	 * @param	int i_size			文字列長の確保するメモリサイズ.
	 */
	strtype(const char* i_str, int i_size)
	{
		//指定されたサイズと文字列長の大きい方をメモリ確保として採用.
		len = strlen(i_str) + 1;
		if(len < i_size) len = i_size;

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
	char* getstring(){ return p; }
	int getlength(){ return len; }
private:
	char* p;	//文字列
	int len;	//文字列長の確保するメモリサイズ.
};

int main()
{
	//引数なしコンストラクタ.
	strtype theStrType;
	cout << theStrType.getlength() << ": " << theStrType.getstring() << endl;

	//引数ありコンストラクタ.(文字列長>割当てるバイト数).
	strtype theStrTypeArg1("Hello, World!", 10);
	cout << theStrTypeArg1.getlength() << ": " << theStrTypeArg1.getstring() << endl;
	
	//引数ありコンストラクタ.(文字列長<割当てるバイト数).
	strtype theStrTypeArg2("Hello, World!", 200);
	cout << theStrTypeArg2.getlength() << ": " << theStrTypeArg2.getstring() << endl;

	return 0;
}

