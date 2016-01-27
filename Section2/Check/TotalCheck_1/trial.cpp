/**
 * @file	trial.cpp
 * @brief	独習C++ 第2章 総合理解度チェック 1
 */
#include <iostream>
using namespace std;

class prompto
{
public:
	prompto(char* i_str);
	~prompto();
private:
	short count;
};

prompto::prompto(char* i_str)
{
	count = 0;
	cout << i_str << endl;
	cin >> count;
}

prompto::~prompto()
{
	for(short loop=0; loop<count; loop++)
	{
		cout << '\a';
		for(short i=0; i<32000; i++) ;
	}
}

int main()
{
	prompto thePrompto("input integer");
	return 0;
}

