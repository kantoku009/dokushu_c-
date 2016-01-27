/**
 * @file	trial.cpp
 * @brief	独習C++ 第2章 総合理解度チェック 2
 */
#include <iostream>
using namespace std;

/**
 * @brief	フィートをインチに単位変換する.
 */
class FeetToInch
{
public:
	FeetToInch(double i_Feet) { m_Feet = i_Feet; }
	~FeetToInch();
private:
	double conv(double i_Feet);	//単位変換.
	double m_Feet;				//フィート.
	double m_Inch;				//インチ.
};

/**
 * @brief	デストラクタ.
 */
FeetToInch::~FeetToInch()
{
	m_Inch = this->conv(m_Feet);	//単位変換実施.
	
	//実行結果を表示.
	cout << m_Feet << "[feet] -> " << m_Inch << "[inch]" << endl;
}

/**
 * @brief	フィートをインチへ単位変換.
 * @param	double i_Feet	フィート.
 * @return	インチ.
 */
double FeetToInch::conv(double i_Feet)
{
	return i_Feet * 12.0;
}

//メイン関数.
int main()
{
	FeetToInch theFeetToInch1(12.0);
	FeetToInch theFeetToInch2(99.0);
	return 0;
}

