#ifndef SIM__H
#define SIM__H
#include<iostream>
#include <iomanip>
using namespace std;


class sim
{
	string name;int age, Hunger, Energy;
public:
	
	sim(string = "Jone Doe", int a = 0, int h = 50, int e = 50);//Default c'tor
//	sim(string j);// c'tor get only name
	
void AgeUp();
void eat();
void sleep();
void print();

	//void setName(int N);
	
	//void setHunger(int H);
	//void setEnergy(int E);

	string getName()const;
	int getAge()const;
	int getHunger()const;
	int getEnergy()const;
	

	

};

#endif // !SIM_H