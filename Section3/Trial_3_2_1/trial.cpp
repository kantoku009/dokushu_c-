/**
 * @file	trial.cpp
 * @brief	独習C++ 練習問題 3.2 1
 */
#include <iostream>
using namespace std;

/**
 * @brief	スタック クラス.
 */
class stack
{
public:
	stack(char c, size_t size);
	~stack();
	void push(char ch);
	char pop();
private:
	char *stck;
	int tos;
	char who;
	size_t size;
};

stack::stack(char c, size_t size)
{
	who = c;
	tos = 0;
	this->size = size;
	stck = new char[size];
}

stack::~stack()
{
	delete [] stck;
}

void stack::push(char ch)
{
	if(size == tos)
	{
		cout << "error:Stack " << who << " is full" << endl;
		return;
	}
	stck[tos] = ch;
	tos++;
}

char stack::pop()
{
	if(0==tos)
	{
		cout << "error:Stack " << who << " is empty" << endl;
		return '\0';
	}
	tos--;
	return stck[tos];
}

void showstack(stack& ob)
{
	char ch;
	while( '\0'!=(ch=ob.pop()) )
	{
		cout << ch << endl;
	}
}

int main()
{
	stack s1('A',10), s2('B',10);
	
	s1.push('a');
	s2.push('x');
	s1.push('b');
	s2.push('y');
	s1.push('c');
	s2.push('z');

	cout << "Show s1:" << endl;
	showstack(s1);
	cout << "Show s2:" << endl;
	showstack(s2);
	return 0;
}

