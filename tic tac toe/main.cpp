#include <iostream>
#include "players.h"
#include "player1_2.h"
using namespace std;

int main()
{
	players a;
	player1_2 b;
	int n,r,c;
	int d = 0;
	b.playcount = 0;
	cout << "chose which placer to use player1 if you want to use X enter one else enter 2 to use O" << endl;
	cin >> n;
	a.setplayers(n);
	b.print();
	do{
		cout << "make a  move player1" << endl;
		cin >> r >> c;
		b.playcount += 1;
		b.move(r, c);
		b.print();
		d += 1;
		cout << "make a  move player2" << endl;
		cin >> r >> c;
		b.playcount += 1;
		b.move(r, c);
		b.print();
		d+=1;
		b.playcount = 0;
	} while (d < 9);
	b.over();
}