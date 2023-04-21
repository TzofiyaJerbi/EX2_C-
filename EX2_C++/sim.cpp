#include "sim.h"
#include<iostream>
#include <iomanip>
#include <random>
#include <cstdlib>
using namespace std;

 sim::sim(string j, int a, int h, int e) 
 {
	 name = j;
	 age = a;
	 Hunger = h;
	 Energy = e;
 }

 void sim::eat()
 {
	 if (Hunger > -1 && Hunger < 100)
	 {
		 Hunger = Hunger + 15;
	 }
	 else
		 cout << "Error with the " << getName() << " eat!" << endl;
	 ;
 }

 void sim::eatdown()
 {
	 if (Hunger > 14 && Hunger < 75)
	 {
		 Hunger = Hunger - rundnumber_15();
	 }
	 else
		 cout << "Error with the " <<getName()<< " eat!" << endl;
		 ;
 }

void sim::AgeUp()
{
	if (age > -1 && age < 100)
	{
		age++;
	}
	else
		cout << "Error with the " << getName() << " ge!" << endl;
	;
}

void sim::sleep()
{
	if (Energy > -1 && Energy < 100)
	{
		int n;
		n = rand();
		Energy = Energy + 15;
	}
	else
		cout << "Error with the " << getName() << " energy!" << endl;
		;
}

void sim::sleepdown()
{
	if (Energy > 14 && Energy < 75)
	{
		Energy = Energy - rundnumber_15();
	}
	else
		cout << "Error with the " << getName() << " energy!"<<endl;
		;
}

string sim::getName()const
{
	return name;
}

int sim::getAge()const
{
	return age;

}
int sim::getHunger()const
{
	return Hunger;

}

int sim::getEnergy()const
{
	return Energy;

}


void sim::print()
{
	cout << " " << getName() << ", " << "Age: " << getAge() << ", " << "Hunger: " << getHunger()<< ", " << "Energy: " << getEnergy() << endl;
	 //cout << " " << name << ", " << "Age: " << this->age << ", " << "Hunger: " << this->Hunger << ", " << "Energy: " << this->Energy << endl;
	 //cout << " " << this->name << ", " << "Age: " << this->age << ", " << "Hunger: " << this->Hunger << ", " << "Energy: " << this->Energy << endl;

}

int sim::rundnumber_15()
{
	srand(time(NULL));
	int N = 16;
	int	numberrandom = rand() % N;
    return numberrandom;
		
	
}

