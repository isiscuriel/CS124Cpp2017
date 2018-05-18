// CS124Assignment1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
/*
Author: Isis Curiel
Date:1/12/17
Assignment 1
Instructions:
Write a C++ program that allows the user to enter a time in seconds and then outputs
how far an object would drop if it were in free fall for that length of time.
Assume no friction or resistance from air and a constant acceleration of
32 feet per second due to gravity. Use the equation

Distance = ½ * acceleration * time^2

Sample output (bolded text denote input from user)

Enter a time in seconds: 13

An object in freefall for 13 seconds will fall 2704 feet.


CS12400


*/

#include <iostream>
#include <cmath>
#include<windows.h>
#include <string>
using namespace std;

int main()
{
	// initialize variables on declaration
	double time = 0;
	int acceleration = 32;

	cout << "Enter the time in seconds that a rock will fall: ";
	cin >> time;

	int feetFallen = (acceleration * pow(time, 2)) / 2;

	cout << "The rock fell " << feetFallen << " feet." << endl;
	Sleep(5000);

	return 0;
}
