#include "sim.h"
#include<iostream>
#include <iomanip>
using namespace std;

void main()
{
	sim c;
	sim c1("stav");
	sim c2("gil", 50, 50, 60);
	c1.print();
	sim* Sims = new sim[2];
	
	
	system("pause");
	delete[]Sims;
	return;
}



//string n = "stav";
//string temp = c1.getNname();
//int j = 0;
//if (n == temp)
//{
//	j = 10;
//}