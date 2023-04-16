#include "sim.h"
#include<iostream>
#include <iomanip>
using namespace std;

void main()
{
	sim c;
	sim c1("gil");
	sim c2("stav",2,35,40);
	//sim c2(, 50, 50, 60);
	c2.AgeUp();
	c1.eat();
	c1.print();
	///*bool res;*/
	//int age;
	//cout << "Enter the age of the sim: ";
	//	cin >> age;
	//	cout << endl;
	//	c.setAge(age);

	system("pause");
	return;
}