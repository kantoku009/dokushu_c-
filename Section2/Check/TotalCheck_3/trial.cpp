/**
 * @file	trial.cpp
 * @brief	独習C++ 第2章 総合理解度チェック 3
 */
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

/**
 * @brief	サイコロ クラス.
 */
class dice
{
public:
	dice();
	~dice(){ }
	short roll();
private:
	short m_Num;
};

/**
 * @brief	コンストラクタ.
 */
dice::dice()
{
	m_Num = 0;
	srand((unsigned int)time(NULL));	//乱数の初期化.
}

/**
 * @brief	サイコロを振る.
 */
short dice::roll()
{
	m_Num = (short)(rand()%6 + 1);
	return m_Num;
}

int main()
{
	dice theDice;

	//10回サイコロを振る.
	for(short cnt=0; cnt<10; cnt++)
	{
		cout << theDice.roll() << endl;
	}

	return 0;
}

