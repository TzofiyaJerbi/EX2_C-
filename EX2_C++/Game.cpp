#include "Game.h"
#include"sim.h"
int i = 0;
void Game::setNumOfSims(int n)
{
	NumOfSims = n;

}


void Game::addSim()
{
	
	if (i < getNumOfSims())
	{
		Sims[i] = new sim;
		CorrectNumOfSim = i + 1;
i++;
	}
}

int Game::getNumOfSims()const
{
	return NumOfSims;
}

int Game::getCorrectNumOfSim()const
{
	return CorrectNumOfSim;
}

void Game::print()const
{
	
	cout << "Number of sim in the game: " << getCorrectNumOfSim() << endl;
	cout<< "Details about the players: "<< endl;
	
	for (int i = 0; i < getCorrectNumOfSim(); i++)
	{

		
		cout << " " << Sims[i]->getName() << ", " << "Age: " << Sims[i]->getAge() << ", " << "Hunger: " << Sims[i]->getHunger() << ", " << "Energy: " << Sims[i]->getEnergy() << endl;
		

	}
	
	
	
	//cout << getCorrectNumOfSim()<<endl;
}