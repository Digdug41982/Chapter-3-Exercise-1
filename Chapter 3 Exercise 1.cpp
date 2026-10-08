// Chapter 3 Exercise 1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    int tmd;
    int ggc;
	cout << " Enter the number of gallons of gas the car can hold: ";
	cin >> ggc;
	cout << " Enter the number of miles the car can be driven on a full tank: ";
	cin >> tmd;
	int answer = tmd / ggc;
	cout << " your gass milage is: " << answer;
}


