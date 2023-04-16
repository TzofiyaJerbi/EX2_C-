#include "sim.h"
#include<iostream>
#include <iomanip>
using namespace std;

//void sim::setName(int N)
//{
//	cout << "Enter the name of the next sim: ";
//	name = N;
//}

sim::sim(string j)
{
	name= j;
	age = 0;
	Hunger = 50; Energy = 50;
}


 sim::sim()
{
	 name = "Jone Doe";
	age = 0;
	Hunger = 50; Energy = 50;
}

void sim::setAge(int newage)
{
	if (newage > -1 && newage < 100)
	{
		age = newage;
	};
}






