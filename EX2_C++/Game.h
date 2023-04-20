#ifndef GAME__H
#define GAME__H
#include<iostream>
#include <iomanip>
#include"sim.h"
#include <random>
#include <cstdlib>
using namespace std;

class Game
{
	int NumOfSims, CorrectNumOfSim;
	sim** Sims = new sim*[NumOfSims];
public:

	void setNumOfSims(int n);
	//void HowMuchSimsNow();
	void addSim();
	int getNumOfSims()const;
	int getCorrectNumOfSim()const;
	void printGameState()const;
	int findSim(string n);
	void performAction();
	void passtime();
	

};

#endif


