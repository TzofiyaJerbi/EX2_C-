#ifndef SIM_H
#define SIM_H
#include<iostream>
#include <iomanip>
using namespace std;


class sim
{
	string name;int age, Hunger, Energy;
public:
	sim();
	sim(string j);
	//sim(char* j, int a, int h, int e);//default
	//void setName(int N);
	void setAge(int A);
	/*void setHunger(int H);
	void setEnergy(int E);

	void getNname();
	void getAge();
	void getHunger();
	void getEnergy();

	void ageUp();
	void eat();
	void sleep();
	void print();*/
	

};

#endif // !SIM_H