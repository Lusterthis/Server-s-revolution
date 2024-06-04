#include "Man.h"
#include<cmath>
#include<iostream>
#include<graphics.h>
//#include"Chess.h"
void Man::Init(Chess *chess)
{
	this->chess = chess;
}

void Man::go()
{
	MOUSEMSG msg;
	ChessPos  pos;
	//get information of mouse
	

	while (1) {
		msg = GetMouseMsg();
		if(msg.uMsg == WM_LBUTTONDOWN && chess->chessClick(msg.x, msg.y, &pos)) 
		{
			break;
		}
	}
	chess->chessPlace(&pos, CHESS_BLACK);
	//chess->chessPlace(&pos, CHESS_BLACK);
}
