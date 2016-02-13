/**
 * @file	trial.cpp
 * @brief	独習C++ 練習問題 6.5 1
 * @note	friendを使用した演算子のオーバーロード.
 */
#include <iostream>
using namespace std;

class coord
{
public:
	/**
	 * @brief	コンストラクタ.
	 */
	coord(int n=0, int m=0){ x=n; y=m; }

	/**
	 * @brief	座標値xを取得.
	 */
	int get_x() const { return x; }

	/**
	 * @brief	座標値yを取得.
	 */
	int get_y() const { return y; }

	/**
	 * @brief	=演算子のオーバーロード.
	 */
	coord operator=(const coord& ob)
	{
		this->x = ob.x;
		this->y = ob.y;
		return *this;
	}

	/**
	 * @brief	+演算子のオーバーロード
	 */
	friend coord operator+(const coord& ob1, const coord& ob2);

	/**
	 * @brief	-演算子のオーバーロード.
	 */
	friend coord operator-(const coord& ob1, const coord& ob2);

	/**
	 * @brief	*演算子のオーバーロード.
	 */
	friend coord operator*(const coord& ob1, const coord& ob2);

	/**
	 * @brief	/演算子のオーバーロード.
	 * @note	0除算を考慮していない.
	 */
	friend coord operator/(const coord& ob1, const coord& ob2);
private:

	/**
	 * @brief	座標値 x.
	 */
	int x;

	/**
	 * @brief	座標値 y.
	 */
	int y;
};
coord operator+(const coord& ob1, const coord& ob2)
{
	coord temp;
	temp.x = ob1.x + ob2.x;
	temp.y = ob1.y + ob2.y;
	return temp;
}

coord operator-(const coord& ob1, const coord& ob2)
{
	coord temp;
	temp.x = ob1.x - ob2.x;
	temp.y = ob1.y - ob2.y;
	return temp;
}

coord operator*(const coord& ob1, const coord& ob2)
{
	coord temp;
	temp.x = ob1.x * ob2.x;
	temp.y = ob1.y * ob2.y;
	return temp;
}

coord operator/(const coord& ob1, const coord& ob2)
{
	coord temp;
	temp.x = ob1.x / ob2.x;
	temp.y = ob1.y / ob2.y;
	return temp;
}


void show(const coord& ob)
{
	cout << "(" << ob.get_x() << "," << ob.get_y() << ")" << endl;
}

int main()
{
	coord r1(100, 90), r2(2, 3);
	coord r3;

	cout << "r1 = ";
	show(r1);

	cout << "r2 = ";
	show(r2);

	r3 = r1 + r2;
	cout << "r1 + r2 = ";
	show(r3);

	r3 = r1 - r2;
	cout << "r1 - r2 = ";
	show(r3);

	r3 = r1 * r2;
	cout << "r1 * r2 = ";
	show(r3);

	r3 = r1 / r2;
	cout << "r1 / r2 = ";
	show(r3);

	r3 = r1;
	cout << "r3 = r1 = ";
	show(r3);

	return 0;
}

