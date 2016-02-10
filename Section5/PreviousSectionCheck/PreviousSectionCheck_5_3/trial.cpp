/**
 * @file	trial.cpp
 * @brief	独習C++ 前章の理解度チェック 5 3
 */
#include <iostream>
using namespace std;

class Integer
{
public:
	Integer(int i_Integer){ m_Integer = i_Integer; }
	~Integer(){ }
	int get(){ return m_Integer; }
private:
	int m_Integer;
};

int main()
{
	Integer* theInteger;
	theInteger = new Integer(10);

	cout << theInteger->get() << endl;

	return 0;
}
