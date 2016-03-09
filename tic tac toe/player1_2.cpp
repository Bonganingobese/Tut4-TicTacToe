#include "player1_2.h"
#include <vector>
#include <iostream>
using namespace std;

player1_2::player1_2( )
{
	grid.resize(3);
		for (int i = 0; i < 3; ++i)
		{
			grid[i].resize(3);
		}
}
void player1_2::over()
{
	for (int i = 0; i < 3; ++i)
	{

		if (grid[i][0] == player1 && grid[i][1] == player1 && grid[i][2] == player1)
		{
			cout << "player1 has won" << endl;
			break;
		}
		else if (grid[0][i] == player1 && grid[1][i] == player1 && grid[2][i] == player1)
		{
			cout << "player1 has won" << endl;
			break;
		}

		else if (grid[0][0] == player1 && grid[1][1] == player1 && grid[2][2] == player1 || grid[0][2] == player1 && grid[1][1] == player1 && grid[2][0] == player1)
		{
			cout << "player1 has won" << endl;
			break;

		}

		if (grid[i][0] == player2 && grid[i][1] == player2 && grid[i][2] == player2)
		{
			cout << "player2 has won" << endl;
			break;
		}
		else if (grid[0][i] == player2 && grid[1][i] == player2 && grid[2][i] == player2)
		{
			cout << "player2 has won" << endl;
			break;
		}

		else if (grid[0][0] == player2 && grid[1][1] == player2 && grid[2][2] == player2 || grid[0][2] == player2 && grid[1][1] == player2 && grid[2][0] == player2)
		{
			cout << "player2 has won" << endl;
			break;

		}
		else
		{
			cout << "its a tie" << endl;
		}


	}

}

player1_2::~player1_2()
{
}

void player1_2::move(int row, int col)
{
	if (row<=3 && col <=3 && playcount!=0)
	{
		grid[row][col] = players::getplayers(playcount);
	}
	
}
void player1_2::print()
{
	for (int i = 0; i < 3; ++i)
	{
		for (int j = 0; j < 3; ++j)
		{
			if (grid[i][j] == 0)
			{
				cout << "[ ]" << " ";
			}
			else
			{
				cout << "[" << grid[i][j] << "]" << " ";
			}
		}
		cout << endl;
	}
}

void player1_2::reset()
{
	grid.clear();
}

