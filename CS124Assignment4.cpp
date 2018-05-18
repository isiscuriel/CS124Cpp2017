// CS124Assignment4.cpp : Defines the entry point for the console application.
//
/*
Author:Isis Curiel
Date:02/07/17
Instructions:
Write a program that asks for the user's height, weight, and age, and then computes clothing 
sizes according to the formulas:

Hat size = weight in pounds divided by height in inches and all that multiplied by 2.9.


Jacket size (chest in inches) = height times weight divided by 288 and then adjusted by adding 
1/8 of an inch for each 10 years over age 30. (note that the adjustment only takes place after a
full 10 years. So, there is no adjustment for ages 30 through 39, but 1/8 of an inch is added 
for age 40.)


Waist in inches = weight divided by 5.7 and then adjusted by adding 1/10 of an inch 
for each 2 years over age 28. (note that the adjustment only takes place after a full 2 years.
So, there is no adjustment for age 29, but 1/10 of an inch is added for age 30.)

Use functions for each calculation. Your program should allow the user to repeat this calculation as often as the user wishes.

//////////////////////// below is a possible output/////////////////////////////


Give me your height in inches, weight in pounds, and age in years
and I will give you your hat size, jacket size (inches at chest)
and your waist size in inches.
69 185 50
hat size = 7.78
jacket size = 44.57
waist size = 33.56

enter Y or y to repeat, any other character ends.
y

Give me your height in inches, weight in pounds, and age in years
and I will give you your hat size, jacket size (inches at chest)
and your waist size in inches.
67 200 58
hat size = 8.66
jacket size = 46.78
waist size = 36.59

enter Y or y to repeat, any other character ends.
y

Give me your height in inches, weight in pounds, and age in years
and I will give you your hat size, jacket  size(inches at chest)
and your waist size in inches.
60
100
14
hat size = 4.83
jacket size = 20.83
waist size = 17.54


enter Y or y to repeat, any other character ends.
y

Give me your height in inches, weight in pounds, and age in years
and I will give you your hat size, jacket  size(inches at chest)
and your waist size in inches.
70
120
50
hat size = 4.97
jacket size = 29.42
waist size = 22.15

enter Y or y to repeat, any other character ends.
y

Give me your height in inches, weight in pounds, and age in years
and I will give you your hat size, jacket  size(inches at chest)
and your waist size in inches.
50
40
6
hat size = 2.32
jacket size = 6.94
waist size = 7.02

enter Y or y to repeat, any other character ends.
n

*/

#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <windows.h>
using namespace std;

double calcHatSize(double weight, double height);
double calcJacketSize(double height, double weight, double age);
double calcWaistSize(double weight, double age);


int main()
{
	double height;
	double weight;
	double age;
	char ans;

	
	do {

		cout << "Give me your height in inches, weight in pounds, \n"
			<< "and age in years and I will give you your hat size,\n"
			<< "jacket size(inches at chest) and your waist size in \n"
			<< "inches.\n" << endl;

		cin >> height;
		cin >> weight;
		cin >> age;

		cout << "\n";

		calcHatSize(weight, height);
		calcJacketSize(height, weight, age);
		calcWaistSize(weight, age);

		cout << "enter Y or y to repeat, any other character ends.";
		cin >> ans;

	} while(ans == 'y' || ans == 'Y');


		return 0;
	///}
}

	double calcHatSize(double weight, double height) {

		double hatSize = ((weight/height) * 2.90);   ///Hat size = weight in pounds divided by height in inches and all that multiplied by 2.9.

		cout << "Hat Size = " << hatSize << fixed << setprecision(2) << "\n";
		return hatSize;
	}

	double calcJacketSize(double height, double weight, double age) {

		double jacketSize = (( weight*height ) / 288.0); ///Jacket size (chest in inches) = height times weight divided by 288 and then 

		if ( age >= 40) ///adjusted by adding 1/8 of an inch for each 10 years over age 30. only takes place after a full 10 years.
		{
			double numTimes = (age / 10) - 3;
			jacketSize += (numTimes * 0.125);
		}

		 ;

		cout << "Jacket size = " << jacketSize << fixed << setprecision(2) << "\n";
		return jacketSize;
	}

	double calcWaistSize(double weight, double age) {


		double waistSize = weight / 5.7;
		if (age >= 30)
		{
			double numTimes = (age / 2.0) - 14;
			waistSize += (numTimes * 0.1);
		}
		cout << "Waist size = "<< waistSize << fixed << setprecision(2) << "\n";
		return waistSize;


		///Waist in inches = weight divided by 5.7 and then adjusted by adding 1 / 10 of an inch for each 2 years over age 28.
		///(note that the adjustment only takes place after a full 2 years.So, there is no adjustment for age 29, but 1 / 10 of an inch is added for age 30.)

	}