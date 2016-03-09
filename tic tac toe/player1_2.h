#pragma once
#include <vector>
#include "players.h"
using namespace std;
class player1_2 :
	public players
{
public:
	player1_2();
    void move(int, int);
	void print();
	void reset();
	void over();
	~player1_2();
    int playcount; 
private:
vector<vector<char>>grid;
	 
	
	             //array
};

