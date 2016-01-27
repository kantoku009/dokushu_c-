/**
 * @file	trial.cpp
 * @brief	独習C++ 練習問題 2.5 2
 */
#include <iostream>
using namespace std;

/**
 * @brief	共用体.
 */
union IntegerUnion
{
public:
	IntegerUnion(){ m_Integer=0; }
	~IntegerUnion(){ }
	void set(short i_Integer){ m_Integer = i_Integer; }
	short get(){ return m_Integer; }
	short swap();
private:
	short m_Integer;
	char m_Bytes[2];
};

//1バイト目と2バイト目の値を入れ替える.
short IntegerUnion::swap()
{
	char tmp = m_Bytes[0];
	m_Bytes[0] = m_Bytes[1];
	m_Bytes[1] = tmp;
	return m_Integer;
}

int main()
{
	IntegerUnion theInteger;
	theInteger.set(0x0008);
	cout << hex << "swap[hex]: " << theInteger.get() << "->" << theInteger.swap() << endl;
	return 0;
}

