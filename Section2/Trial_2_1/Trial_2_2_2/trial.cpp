/**
 * @file	trial.cpp
 * @brief	独習C++ 練習問題 2.2 2
 */
#include <iostream>
#include <ctime>
using namespace std;

/**
 * @brief	日時 クラス.
 */
class t_and_d
{
public:
	t_and_d(time_t i_system_time);
	~t_and_d(){ }
	void show();
private:
	time_t system_time;
};

t_and_d::t_and_d(time_t i_system_time)
{
	system_time = i_system_time;
}

void t_and_d::show()
{
	cout << ctime(&system_time);
}

int main()
{
	time_t theTime = time(NULL);
	t_and_d theDateTime(theTime);
	theDateTime.show();
	return 0;
}
