#include "ChessGame.h"

ChessGame::ChessGame(AI* ai, Man* man, Chess* chess)
{
	this->man = man;
	this->ai = ai;
	this->chess = chess;

	man->Init(chess);
	ai->Init(chess);
}

void ChessGame::play()//start game
{
	chess->Init();
	//man first
	while (1) {
		man->go();
		if (chess->checkOver()) {
			chess->Init();
			continue;
		}
		Sleep(1000);
		ai->go();
		//then ai;
		if (chess->checkOver()) {
			chess->Init();
			continue;
		}
	}
}
