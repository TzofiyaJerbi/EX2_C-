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

	//void setName(int N);
	
	/*void setHunger(int H);
	void setEnergy(int E);

	void getNname();
	void getAge();
	void getHunger();
	void getEnergy();
	
	void print();*/
	

};

#endif // !SIM_H