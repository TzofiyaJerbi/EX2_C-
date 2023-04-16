#ifndef SIM_H
#define SIM_H
#include<iostream>
#include <iomanip>
using namespace std;


class sim
{
	string name;int age, Hunger, Energy;
public:
	sim();//Default c'tor
	sim(string j);// c'tor get only name
	sim(string j, int a, int h, int e);// c'tor get all parmeters
void AgeUp();
void eat();
void sleep();
void print();

	//void setName(int N);
	
	//void setHunger(int H);
	//void setEnergy(int E);

	string getNname()const;
	int getAge()const;
	int getHunger()const;
	int getEnergy()const;
	

	

};

#endif // !SIM_H