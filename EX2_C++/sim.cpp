#include "sim.h"
#include<iostream>
#include <iomanip>
using namespace std;

//void sim::setName(int N)
//{
//	cout << "Enter the name of the next sim: ";
//	name = N;
//}

void sim::setAge(int newage)
{
	if (newage > -1 && newage < 100)
	{
		age = newage;
	};
}
//
//void sim::setAge(int A)
//{
//}
//
//void sim::setHunger(int H)
//{
//}
//
//void sim::setEnergy(int E)
//{
//}
//
//void sim::getNname()
//{
//}


