/**
 * @file	trial.cpp
 * @brief	独習C++ 練習問題 3.2 1
 */
#include <iostream>
using namespace std;

#define SIZE ('Z'-'A'+1)

/**
 * @brief	スタック クラス.
 */
class stack
{
public:
	stack(size_t size);
	~stack();
	void push(char ch);
	char pop();
private:
	char *stck;
	int tos;
	size_t size;
};

stack::stack(size_t size)
{
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
		cout << "error:Stack is full" << endl;
		return;
	}
	stck[tos] = ch;
	tos++;
}

char stack::pop()
{
	if(0==tos)
	{
		cout << "error:Stack is empty" << endl;
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

stack loadstack()
{
	stack theStack(SIZE);
	for(char ch='A'; ch<='Z'; ch++)
	{
		theStack.push(ch);
	}
	return theStack;
}

int main()
{
	stack s1 = loadstack();
	
	cout << "Show stack:" << endl;
	showstack(s1);
	return 0;
}

