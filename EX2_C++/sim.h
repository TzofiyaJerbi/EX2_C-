#ifndef SIM__H
#define SIM__H
#include<iostream>
#include <iomanip>
#include <random>
#include <cstdlib>
using namespace std;


class sim
{
	string name;int age, Hunger, Energy;
public:
	
	sim(string = "Jone Doe", int a = 0, int h = 50, int e = 50);//Default c'tor
	sim(const sim& other); //copy c'tor

void AgeUp();
void eat();
void eatdown();
void sleep();
void sleepdown();
void print();
int rundnumber_15();
string getName()const;
int getAge()const;
int getHunger()const;
int getEnergy()const;
~sim() {}
	
	friend class Game;
};

#endif // !SIM_H