/**
 * @file	trial.cpp
 * @brief	独習C++ 練習問題 5.4 3
 * @note	カーソル位置を制御するライブラリとしてcursesを利用した.
 *			■参考サイト
 *			http://www.kis-lab.com/serikashiki/man/ncurses.html
 */
#include <iostream>
#include <curses.h>
using namespace std;

/**
 * @brief   cursesのウィンドウ.
 */
WINDOW* m_pWindow;


/***************************
 * curses初期化.
 ***************************/
void initDisplay()
{
    m_pWindow = initscr();      // cursesライブラリの初期化.
    nodelay(m_pWindow, true);   // 非ブロッキングモード.
    cbreak();                   // 行バッファリングをやめ，DeleteやBackSpaceを無効にする.
    noecho();                   // 入力された文字のエコーバックをしない.
}

/***************************
 * 文字を描画.
 ***************************/
void fillDisplay()
{
	for(int a_Row=0; a_Row<10; a_Row++)
	{
		for(int a_Col=0; a_Col<10; a_Col++)
		{
			mvaddch(a_Row, a_Col, '0'+a_Col);
		}
	}

}

/***************************
 * cursesを終了.
 ***************************/
void finalDisplay()
{
	endwin();
}

/***************************
 * 文字を消去.
 ***************************/
void myclreol(int i_Pos=-1)
{
	int a_Row;	//カーソル 列.
	int a_Col;	//カーソル 行.
	
	//現在のカーソルの位置を取得.
	getyx(m_pWindow, a_Row, a_Col);

	if(-1 == i_Pos)
	{
		a_Col = 0;
		//カーソルを移動.
		move(a_Row, a_Col);
		//カーソル位置から行の終わりまでを削除.
		clrtoeol();
	}
	else
	{
		a_Col = i_Pos;
		//カーソルを移動.
		move(a_Row, a_Col);
		//カーソル位置の文字を削除.
		delch();
	}

}

int main()
{
	//cursesを初期化.
	initDisplay();
	
	//文字を描画.
	fillDisplay();

	//カーソルを移動.
	move(3,4);

	//文字を消去.
	myclreol();

	//'q'が入力されるまで待ち続ける.(表示を保ち続ける).
	while('q'!=getch())
	{
		;
	}
	
	//cursesを終了.
	finalDisplay();

	return 0;
}

