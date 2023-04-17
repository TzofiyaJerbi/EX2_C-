#include "sim.h"
#include "Game.h"
#include<iostream>
#include <iomanip>
using namespace std;

void main()
{
	Game game;
	game.setNumOfSims(5);
	/*for (int i = 0; i < 3; i++)
	{
game.addSim();
	}*/
	//game.getCorrectNumOfSim();
	//game.print();
	//game.findSim("Jone Doe");
	int numbercase;
	cout << "Enter one of the option:" << endl;
	cout << "1) Add sim" << endl << "2) Print status" << endl << "3) Pass game time" << endl << "4) Perform action on sim" <<
		endl << "-1) Exit..."<<endl;
		cin >> numbercase;
		int n = 1;
		while (n!=0)
		{

		
	switch (numbercase)
	{
	case 1:
		game.addSim();break;
	case 2:
		game.print();break;
	case 3:
		cout << "not exist yet!" << endl;break;
	case 4:
		cout << "not exist yet!"<<endl; break;
	case -1:

		n=0;

	default:
		break;
	}
		}

	system("pause");
	
	return;
}



