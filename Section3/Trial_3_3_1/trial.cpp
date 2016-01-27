/**
 * @file	trial.cpp
 * @brief	独習C++ 練習問題 3.3 1
 */
#include <iostream>
using namespace std;

class who
{
public:
	who(char id);
	~who();
private:
	char id;
};

who::who(char id)
{
	this->id = id;
	cout << "Constructing who #" << this->id << endl;
}

who::~who()
{
	cout << "Destroying who #" << this->id << endl;
}

who makewho()
{
	who theWho('m');
	return theWho;
}

int main()
{
	who theWho1('1');
	makewho();
	who thwWho2('2');
	return 0;
}
