#include "Game.h"
#include"sim.h"
#include <random>
#include <cstdlib>
#include <string>
int i = 0;
Game::Game(const Game& other)
{
	*Sims = new sim;
	NumOfSims = other.NumOfSims;
	NumOfSims = other.CorrectNumOfSim;
}
	
void Game::setNumOfSims(int n)
{
	NumOfSims = n;

}

void Game::addSim()
{
	
	if (i < getNumOfSims())
	{
		string n;
		cout << "Enter a name: ";
		cin >> n;
		Sims[i] = new sim(n);	
	
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

void Game::printGameState()const
{
	
	cout << "Number of sim in the game: " << getCorrectNumOfSim() << " out of: "<< getNumOfSims()<< endl;
	cout<< "Details about the players: "<< endl;
	
	for (int i = 0; i < getCorrectNumOfSim(); i++)
	{
		cout << " " << Sims[i]->getName() << ", " << "Age: " << Sims[i]->getAge() << ", " << "Hunger: " << Sims[i]->getHunger() << ", " << "Energy: " << Sims[i]->getEnergy() << endl;
	}
}

int Game::findSim(string n)
{
	int num = getCorrectNumOfSim();
	for (int i = 0; i < num; i++)
	{
		if (Sims[i]->getName() == n)
		{
			cout << Sims[i]->getName()<<" His found!"<<endl;
			return i;
		}
	}
			cout << "Sim not fuond!" << endl;
}

void Game::performAction()
{
	int cho=5;
	string NameToFind;
	cout << "Write down the name on which you want to perform the operation: ";
	cin >> NameToFind;
	cout << endl;
	int i;
	i = findSim(NameToFind);
	cout << "Choose action (0 - eat , 1 - sleep, 2 - age up): ";
	cout << endl;
	cin >> cho;
	switch (cho)
	{
		case 0:
			 Sims[i]->eat();
			break;

		case 1:
			Sims[i]->sleep();
			break;

		case 2:
			Sims[i]->AgeUp();
			break;
	}
}

void Game::passtime()
{
	for (int i = 0; i < getCorrectNumOfSim(); i++)
	{
		Sims[i]->eatdown(); Sims[i]->sleepdown();
	}

}






