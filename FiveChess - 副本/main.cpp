#include<stdio.h>
#include"ChessGame.h"
int main(void) {
	Man man;
	AI ai;
	Chess chess(13,44,43,67.3);

	ChessGame game(&ai,&man, &chess); 
	game.play();
}