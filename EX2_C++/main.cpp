#include "sim.h"
#include<iostream>
#include <iomanip>
using namespace std;

void main()
{
	sim c;
	/*bool res;*/
	int age;
	cout << "Enter the age of the sim: ";
		cin >> age;
		cout << endl;
		c.setAge(age);

	system("pause");
	return;
}