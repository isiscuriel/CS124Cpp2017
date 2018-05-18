// Assignment5.cpp : Defines the entry point for the console application.

/*
Name:Isis Curiel
Date:02/15/17
Assignment 5
Instructions:
Write a program that inputs a date (for example: July 4, 2008) and outputs
the day of the week that corresponds to that date.
The implementation will require several functions.


void get_input(int &month, int &day, int &year)
// keeps asking  the user to input until the input is a valid month, day, year

int dayOfWeek(int month, int day, int year)
// assuming the input is always valid

// return the day of the week of the given date

bool isLeapYear(int year);

// returns true if year is a leap year

int getCenturyValue(int year);  // see textbook for detail

int getYearValue(int year); / / see textbook for detail
int getMonthValue(int month, int year) // see textbook for detail
main method:
call getInput method
call dayOfWeek
print out the date and the day
Since we are dealing month, days of week, you may want to use enum type
to simplify your code.

Sample output:

============
Please enter a month, day, and year, separated by
spaces (e.g., '7 4 2008' ): 02  15    2017

The date 2/15/2017 is a Wednesday
*/

#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <string>
#include <windows.h>
using namespace std;

void get_input(int &month, int &day, int &year);
int dayOfWeek(int month, int day, int year);
bool isLeapYear(int year);
int getCenturyValue(int year);
int getYearValue(int year); 
int getMonthValue(int month, int year);


int main()
{
	cout << "Please enter a month, day, and year, separated by " <<
		"spaces(e.g., '7 4 2008') :  ";
	int month;
	int day;
	int year;
	///string dayW;

	cin >> month;
	cin >> day;
	cin >> year;

	get_input(month, day, year);
	

	


	Sleep(30000);

	return 0;
}

void get_input(int &month, int &day, int &year) {

		if (month > 12 || month < 1) {
			cout << "Try again Please enter a month, day, and year, separated by " <<
				"spaces(e.g., '7 4 2008') :  ";
			get_input(month, day, year);
			cin >> month;
			cin >> day;
			cin >> year;

		}
		else if (month == 2 && day == 29 && isLeapYear == false)
		{
			cout << "Try again Please enter a month, day, and year, separated by " <<
				"spaces(e.g., '7 4 2008') :  ";
			get_input(month, day, year);
			cin >> month;
			cin >> day;
			cin >> year;
		}
		else if (day > 31 || day < 1) {
			cout << "Try again Please enter a month, day, and year, separated by " <<
				"spaces(e.g., '7 4 2008') :  ";
			get_input(month, day, year);
			cin >> month;
			cin >> day;
			cin >> year;
		}
		else if (month == 4 || month == 7 || month == 9 || month == 11 && day > 30) {
			cout << "Try again Please enter a month, day, and year, separated by " <<
				"spaces(e.g., '7 4 2008') :  ";
			get_input(month, day, year);
			cin >> month;
			cin >> day;
			cin >> year;
		}
		else {
			string dayW;
			if (dayOfWeek(month, day, year) == 0)
				dayW = "Sunday";
			else if (dayOfWeek(month, day, year) == 1)
				dayW = "Monday";
			else if (dayOfWeek(month, day, year) == 2)
				dayW = "Tuesday";
			else if (dayOfWeek(month, day, year) == 3)
				dayW = "Wednesday";
			else if (dayOfWeek(month, day, year) == 4)
				dayW = "Thursday";
			else if (dayOfWeek(month, day, year) == 5)
				dayW = "Friday";
			else if (dayOfWeek(month, day, year) == 6)
				dayW = "Saturday";
			else
				dayW = "INVALID";

			cout << "The date " << month << "/" << day << "/" << year << " is a " << dayW << "\n";
				}
	
	 }

int dayOfWeek(int month, int day, int year) {
	int x;
	x = ((day + getMonthValue(month, year) + getYearValue(year) + getCenturyValue(year)) % 7);
	///((getMonthValue + getYearValue + getCenturyValue)%7)
	return x;


};
bool isLeapYear(int year) {
	if (((year % 4 == 0) && (!(year % 100 == 0))) || ((year % 400 == 0)))
	{
		////isLeapYear = true;
		return true;
	}
	else
		return false;
};
int getCenturyValue(int year) {

	int centValue;
	year = year / 100;
	year = year % 4;
	year = 3 - year;
	year = year * 2;
	centValue = year;
	return centValue;

}  ;
int getYearValue(int year) {

	int y1;
	int yearVal;
	year = year % 100;
	y1 = year / 4;
	yearVal = y1 + year;
	return yearVal;

};
int getMonthValue(int month, int year) {

	if (month == 1 && isLeapYear(year) == false)
		return 0; ///but doesnt returning 0 cause issues ?
	else if (month == 1 && isLeapYear(year))
		return 6;
	else if (month == 2 && isLeapYear(year) == false)
		return 3;
	else if (month == 2 && isLeapYear(year))
		return 2;
	else if (month == 3)
		return 3;
	else if (month == 4)
		return 6;
	else if (month == 5)
		return 1;
	else if (month == 6)
		return 4;
	else if (month == 7)
		return 6;
	else if (month == 8)
		return 2;
	else if (month == 9)
		return 5;
	else if (month == 10)
		return 0; ///but doesnt returning 0 cause issues ?
	else if (month == 11)
		return 3;
	else if (month == 12)
		return 5;
	else
		return 6;

};