/**
 * @file	trial.cpp
 * @brief	独習C++ 練習問題 4.1 1
 */
#include <iostream>
using namespace std;

class letters
{
public:
	letters(char c){ ch = c; }
	char get_ch(){ return ch; }
private:
	char ch;
};

int main()
{
	letters theLetters[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J' };
	for(int cnt=0; cnt<10; cnt++) cout << theLetters[cnt].get_ch() << endl;
	return 0;
}
