#include "sim.h"
#include<iostream>
#include <iomanip>
using namespace std;

//void sim::setName(int N)
//{
//	cout << "Enter the name of the next sim: ";
//	name = N;
//}

 sim::sim() //Default c'tor
{
	 name = "Jone Doe";
	age = 0;
	Hunger = 50; Energy = 50;
}

 sim::sim(string j)// c'tor get only name
 {
	 name = j;
	 age = 0;
	 Hunger = 50; Energy = 50;
 }

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
		 Hunger= Hunger +15;
	 }
	 else
		 cout << "Error with the eat!"
	 ;
 }

void sim::AgeUp()
{
	if (age > -1 && age < 100)
	{
		age++;
	}
	else
		cout << "Error with the age!"
	;
}


void sim::sleep()
{
	if (Energy > -1 && Energy < 100)
	{
		Energy= Energy+15;
	}
	else
		cout << "Error with the Energy!"
		;
}






