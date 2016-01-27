/**
 * @file	trial.cpp
 * @brief	独習C++ 練習問題 2.2 3
 */
#include <iostream>
using namespace std;

/**
 * @brief	体積 クラス.
 */
class box
{
public:
	box(double i_Width, double i_Depth, double i_Height);
	~box(){ }
	double vol(){ return m_Volume; }
private:
	double m_Volume;
};

box::box(double i_Width, double i_Depth, double i_Height)
{
	//体積を求める.
	m_Volume = i_Width * i_Depth * i_Height;
}

int main()
{
	box box1(2.2, 3.97, 8.09);
	box box2(1.0, 2.0, 3.0);

	cout << "box1: " << box1.vol() << endl;
	cout << "box2: " << box2.vol() << endl;

	return 0;
}

