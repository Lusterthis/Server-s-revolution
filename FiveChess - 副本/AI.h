#pragma once
#include "Chess.h"
#include<vector>
class AI
{
public:
	void Init(Chess* chess);
	void go();
private:
	Chess *chess;
	vector<vector<int>> scoreMap;
private:
	void calculateScore();
	ChessPos think();
};

