/**
 * @file	trial.cpp
 * @brief	独習C++ この章の理解度チェック 5 1
 */
#include <iostream>
#include <cstdio>		//sscanf()を使用する為.
#include <ctime>		//time(), localtime(), strftime()を使用する為.
using namespace std;

class date
{
public:
	/**
	 * @brief	コンストラクタ.
	 * @param	int m	日付(month).
	 * @param	int d	日付(day).
	 * @param	int y	日付(year).
	 */
	date(int m, int d, int y)
	{
		this->set_date(m, d, y);
	}

	/**
	 * @brief	コンストラクタ.
	 * @param	const char* str	日付(mm/dd/yy).
	 */
	date(const char* str)
	{
		this->set_date(str);
	}

	/**
	 * @brief	コンストラクタ.
	 * @param	time_t* time	日付(time()で返ってくる構造体).
	 */
	date(time_t* time)
	{
		char str[255];
		struct tm* strtim;
		strtim = localtime(time);
		strftime(str, sizeof(str), "%m/%d/%y", strtim);
		this->set_date((const char*)str);
	}

	/**
	 * @brief	日付を設定.
	 * @param	const char* str	日付(mm/dd/yy).
	 * @return	なし.
	 */
	void set_date(const char* str)
	{
		int m, d, y;
		sscanf(str, "%d%*c%d%*c%d", &m, &d, &y);
		this->set_date(m, d, y);
	}

	/**
	 * @brief	日付を設定.
	 * @param	int m	日付(month).
	 * @param	int d	日付(day).
	 * @param	int y	日付(year).
	 * @return	なし.
	 */
	void set_date(int m, int d, int y)
	{
		day = d;
		month = m;
		year = y;
	}

	/**
	 * @brief	日付を表示.
	 * @param	なし.
	 * @return	なし.
	 */
	void show()
	{
		cout << month << "/" << day << "/" << year << endl;
	}
private:
	int day;
	int month;
	int year;
};

int main()
{
	//文字列を使用してdateオブジェクトを作成する.
	date sdate("12/31/99");

	//整数を使用してdateオブジェクトを作成する.
	date idate(12, 31, 99);

	//time_tを使用してdateオブジェクトを作成する.
	time_t now = time(NULL);
	date ddate(&now);

	sdate.show();
	idate.show();
	ddate.show();
	return 0;
}

