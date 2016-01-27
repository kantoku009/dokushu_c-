/**
 * @file	trial.cpp
 * @brief	独習C++ 練習問題 2.3 1
 */
#include <iostream>
using namespace std;

/**
 * @brief	面積 クラス.
 */
class area_c1
{
public:
	double height;	//高さ.
	double width;	//幅.
};

/**
 * @brief	四角形 クラス.
 */
class rectangle : area_c1
{
public:
	rectangle(double i_Height, double i_Width);
	~rectangle(){ }
	double area();
};

/**
 * @brief	二等辺三角形 クラス.
 */
class isosceles : area_c1
{
public:
	isosceles(double i_Height, double i_Width);
	~isosceles(){ }
	double area();
};

/**
 * @brief	四角形クラスのコンストラクタ.
 * @param	double i_Height	高さ.
 * @param	double i_Width	幅.
 */
rectangle::rectangle(double i_Height, double i_Width)
{
	height = i_Height;
	width = i_Width;
}

/**
 * @brief	四角形の面積を求める.
 * @return	四角形の面積.
 */
double rectangle::area()
{
	return (height*width);
}

/**
 * @brief	二等辺三角形クラスのコンストラクタ.
 * @param	double i_Height	高さ.
 * @param	double i_Width	幅.
 */
isosceles::isosceles(double i_Height, double i_Width)
{
	height = i_Height;
	width = i_Width;
}

/**
 * @brief	二等辺三角形の面積を求める.
 * @return	二等辺三角形の面積.
 */
double isosceles::area()
{
	return (width*height*0.5);
}

int main()
{
	rectangle theRectangle(10.0, 5.0);
	isosceles theIsosceles(4.0, 6.0);

	cout << "Rectangle: " << theRectangle.area() << endl;
	cout << "Isosceles: " << theIsosceles.area() << endl;
	return 0;
}

