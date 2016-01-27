/**
 * @file	trial.cpp
 * @brief	独習C++ 練習問題 2.1 2
 */
#include <iostream>
#include <sstream>
#include <ctime>
#include <string>
using namespace std;

/**
 * @brief	ストップウォッチ クラス.
 */
class stopwatch
{
public:
	stopwatch();	//コンストラクタ.
	~stopwatch();	//デストラクタ.
	void start();	//ストップウォッチ 計測開始.
	void stop();	//ストップウォッチ 計測終了.
	string show();	//経過時間を表示.
private:
	double m_start;	//計測を開始した時間.
	double m_stop;	//計測を終了した時間.
};

/**
 * @brief ストップウォッチクラス コンストラクタ.
 */
stopwatch::stopwatch()
{
	this->m_start = 0.0;
}

/**
 * @brief ストップウォッチクラス デストラクタ.
 */
stopwatch::~stopwatch()
{
	cout << "Destractor: " << this->show() << "[sec]"<< endl;
}

/**
 * @brief ストップウォッチ 計測開始.
 */
void stopwatch::start()
{
	this->m_start = (double)clock() / CLOCKS_PER_SEC;
}

/**
 * @brief ストップウォッチ 計測終了.
 */
void stopwatch::stop()
{
	this->m_stop = (double)clock() / CLOCKS_PER_SEC;
}

/**
 * @brief ストップウォッチで計測した時間を取得.
 */
string stopwatch::show()
{
	ostringstream stream;
	stream << (this->m_stop - this->m_start);
	return stream.str();
}


/**
 * メイン関数.
 */
int main()
{
	stopwatch cStopWatch;	//ストップウォッチクラス生成.
	cStopWatch.start();		//ストップウォッチ 計測開始.

	for(long cnt=0; cnt<1000000; cnt++)
	{
		//時間を遅延させる為のループ.
	}

	cStopWatch.stop();		//ストップウォッチ 計測終了.

	//ストップウォッチ 計測した時間を表示.
	cout << "time: " << cStopWatch.show() << "[sec]"<< endl;

	return 0;
}

