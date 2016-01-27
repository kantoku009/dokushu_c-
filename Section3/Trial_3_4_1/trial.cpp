/**
 * @file	trial.cpp
 * @brief	独習C++ 練習問題 3.4 1
 */
#include <iostream>
using namespace std;

class pr1;
class pr2;

/**
 * @brief	プリンター1 クラス.
 */
class pr1
{
public:
	pr1(){ printing = false; }
	~pr1(){ }
	void set_print(bool status){ printing = status; }
	friend bool inuse(pr1 i_Printer1, pr2 i_Printer2);
private:
	bool printing;	//プリンター使用中？
};

/**
 * @brief	プリンター2 クラス.
 */
class pr2
{
public:
	pr2(){ printing = false; }
	~pr2(){ }
	void set_print(bool status){ printing = status; }
	friend bool inuse(pr1 i_Printer1, pr2 i_Printer2);
private:
	bool printing;	//プリンター使用中？
};

/**
 * @brief	プリンター1かプリンター2が使用中か否かを調べる.
 * @param	pr1 i_Printer1	プリンター1.
 * @param	pr2 i_Printer2	プリンター2.
 * @return	プリンター1かプリンター2が使用中か否かを返す.
 * @retval	true	プリンター1かプリンター2のどちらかが使用中.
 * @retval	false	プリンター1もプリンター2もどちらも未使用.
 */
bool inuse(pr1 i_Printer1, pr2 i_Printer2)
{
	bool isUse = false;
	if( (true==i_Printer1.printing) || (true==i_Printer2.printing) )
	{
		isUse = true;	//どちらかのプリンタが使用中.
	}
	else
	{
		isUse = false;	//どちらのプリンタも未使用.
	}
	return isUse;
}

int main()
{
	pr1 p1;
	pr2 p2;

	if(!inuse(p1, p2))
	{
		//初期値はどちらのプリンターも未使用.
		cout << "Printer idle" << endl;
	}

	cout << "Setting p1 to printing ..." << endl;
	p1.set_print(true);	//プリンター1を使用中に設定.
	if(inuse(p1, p2))
	{
		//プリンター1が使用中.
		cout << "Now, printer in use." << endl;
	}

	cout << "Turn off p1 ..." << endl;
	p1.set_print(false);	//プリンター1を未使用に設定.
	if(!inuse(p1, p2))
	{
		//どちらのプリンターも未使用.
		cout << "Printer idle" << endl;
	}

	cout << "Turn on p2 ..." << endl;
	p2.set_print(true);		//プリンター2を使用中に設定.
	if(inuse(p1, p2))
	{
		//プリンター2が使用中.
		cout << "Now, printer in use." <<endl;
	}

	return 0;
}

