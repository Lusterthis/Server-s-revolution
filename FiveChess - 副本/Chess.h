#pragma once
#include<graphics.h>
#include<vector>
using namespace std;
struct ChessPos {//the place where chess is 
	int row, col;
	ChessPos(int r = 0, int c = 0) :row(r), col(c){}
};
typedef enum {
	CHESS_WHITE = 1,
	CHESS_BLACK = -1,
	CHESS_EMPTY = 0
}chess_kind_t;
class Chess
{
public:
	Chess(int gradeSize, int marginX, int marginY, float chessSize);
	void Init();
	bool chessClick(int x, int y, ChessPos* pos);
	void chessPlace(ChessPos* pos, chess_kind_t kind);
	int getGradeSize();//the size of the chess

	int getChessData(ChessPos* pos);
	int getChessData(int x, int y);

	bool checkOver();//check if a game is over;

private:
	IMAGE chessBlackImg;
	IMAGE chessWhiteImg;
	//
	int gradeSize;//棋盘大小13,15,17,19
	int margin_x;
	int margin_y;
	float chessSize;
	vector<vector<int>>  chessMap;//
	ChessPos lastPos;
	//该谁下棋了？
	bool playerFlag=1;//true:black,false:white;
	void updateGameMap(ChessPos* pos);
	bool checkWin();
};

