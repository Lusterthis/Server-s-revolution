#pragma once
#include "Man.h"
#include"AI.h"
#include"Chess.h"

class ChessGame {
public:
	ChessGame(AI* ai, Man* man, Chess* chess);
	void play();//start game;
	//add data members
private:
	Man* man;
	AI* ai;
	Chess* chess;
};

