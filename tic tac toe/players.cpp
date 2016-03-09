#include "players.h"
#include "player1_2.h"
#include <iostream>
using namespace std;

players::players(int player_num)
{
	setplayers(player_num);
}
void players::setplayers(int player)
{
	if (player == 1)
	{
		player1 = 'X';
		player2 = 'O';
	}
	else
	{
		player2 = 'X';
		player1 = 'O';
	}
}
char players::getplayers(int player)
{
	if (player == 1)
	{
    return player1;
	}
	else
	{
		return player2;
	}
	
	
	
}



players::~players()
{
}
