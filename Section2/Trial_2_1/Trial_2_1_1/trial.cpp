/**
 * @file	trial.cpp
 * @brief	独習C++ 練習問題 2.1 1
 */
#include <iostream>
using namespace std;

#define SIZE 100


/**
 * @brief	キュー クラス.
 */
class q_type
{
public:
	q_type();				//コンストラクタ.
	bool q(int num);		//設定.
	bool deq(int &num);		//取得.
private:
	int queue[SIZE];		//キューを保持する.
	int head;				//キューの先頭索引.
	int tail;				//キューの末尾索引.
};

q_type::q_type()
{
	head = tail = 0;
}

/**
 * @brief		キューに値を入れる.
 * @param[in]	int num	キューに入れる値.
 * @return		成功 / 失敗.
 */
bool q_type::q(int num)
{
	if(tail+1==head)
	{
		//先頭データを読み出していないので, データの追加不可.
		return false;
	}
	if( (tail+1==SIZE) && (0==head) )
	{
		//先頭データを読み出していないので, データの追加不可.
		return false;
	}

	tail++;
	if(SIZE==tail) tail=0;
	queue[tail] = num;
	return true;
}

/**
 * @brief		キューから値を取得.
 * @param[out]	int &num	取得した値.
 * @return		成功 / 失敗.
 */
bool q_type::deq(int &num)
{
	if(head == tail)
	{
		//キューが空.
		return false;
	}

	head++;
	if(SIZE==head) head=0;
	num = queue[head];
	return true;
}

int main()
{
	q_type q1, q2;

	//キューに値を入れる.
	for(int cnt=0; cnt<10; cnt++)
	{
		q1.q(cnt);
		q2.q(cnt*cnt);
	}

	for(int cnt=0; cnt<10; cnt++)
	{
		int num1, num2;
		q1.deq(num1);
		q2.deq(num2);
		cout << "Dequeue 1: " << num1 << endl;
		cout << "Dequeue 2: " << num2 << endl;
	}

	return 0;
}	
