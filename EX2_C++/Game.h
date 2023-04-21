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
	Game()=default;//Default c'tor
	Game(const Game& other);//copy c'tor
	void setNumOfSims(int n);
	void addSim();
	int getNumOfSims()const;
	int getCorrectNumOfSim()const;
	void printGameState()const;
	int findSim(string n);
	void performAction();
	void passtime();
	~Game(){}
};

#endif


