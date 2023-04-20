#include "sim.h"
#include "Game.h"
#include<iostream>
#include <iomanip>

#include <cstdlib>
#include <random>
using namespace std;

void main()
{
	
	
	
	Game game;
	game.setNumOfSims(5);

	int numbercase;
	int n = 1;
		while (n!=0)
		{
			cout << "Enter one of the option:" << endl;
			cout << "1) Add sim" << endl << "2) Print status" << endl << "3) Pass game time" << endl << "4) Perform action on sim" <<
				endl << "-1) Exit..." << endl;
			cin >> numbercase;
		
	switch (numbercase)
	{
	case 1:
		game.addSim();
		break;
	case 2:
		game.printGameState();break;
	case 3:
		game.passtime();break;
	case 4:
		
		game.performAction();
		break;
		
	case -1:
		//game.deletesim();
		n=0;

	default:
		break;
	}
		}

	system("pause");
	
	return;
}



