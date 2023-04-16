#include "sim.h"
#include "Game.h"
#include<iostream>
#include <iomanip>
using namespace std;

void main()
{
	Game game;
	game.setNumOfSims(5);
	for (int i = 0; i < 3; i++)
	{
game.addSim();
	}
	game.getCorrectNumOfSim();
	game.print();

	system("pause");
	
	return;
}



