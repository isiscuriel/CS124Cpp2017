// CS124Assignment2.cpp : Defines the entry point for the console application.
//
/*
Author: Isis Curiel
Date:1/16/17
Assignment 2
Instructions:
Based on Project 8 on page 107.

Write a program to calculate how many months it takes 
to pay off a debt.

(1) asks the user to input the amount of debt.

(2) ask the user the interest rate per month

(3) ask the user the monthly payment amount

(4) calculate and print out payment distribution of each month: how much for interest, how many for debt

Please give your variables meaningful names,  
format your code nicely,  format the  output, 
test your code with several cases.

==============================

Following is an example illustrating how to calculate

debt: $1000

interest rate 1.5% per month

monthly pay: $50

The first month you pay 1.5% of $1000 in interest. That is $15 in interest.
So, the remaining $35 is deducted from your debt which leaves you with
a debt of $965.00. The next month you pay interest of 1.5% of $965.00,
which is $14.48. Hence, you can deduct $35.52 (which is $50 - $14.48) 
from the amount you owe. Note the last payment may be less than 50. 
Do not forget the interest on the last payment. Below is the output 
for the example



month	starting/balance  interest-paid	principal-paid	end balance
1	   1,000.00				15.00		35.00			965.00
2		965.00				14.48		35.52			929.48
3		929.48				13.94		36.06			893.42
4		893.42				13.40		36.60			856.82
5		856.82				12.85		37.15			819.67
6		819.67				12.30		37.70			781.97
7		781.97				11.73		38.27			743.70
8		743.70				11.16		38.84			704.85
9		704.85				10.57		39.43			665.42
10		665.42				9.98		40.02			625.40
11		625.40				9.38		40.62			584.79
12		584.79				8.77		41.23			543.56
13		543.56				8.15		41.85			501.71
14		501.71				7.53		42.47			459.24
15		459.24				6.89		43.11			416.13
16		416.13				6.24		43.76			372.37
17		372.37				5.59		44.41			327.95
18		327.95				4.92		45.08			282.87
19		282.87				4.24		45.76			237.11
20		237.11				3.56		46.44			190.67
21		190.67				2.86		47.14			143.53
22		143.53				2.15		47.85			95.68
23		95.68				1.44		48.56			47.12
24		47.12				0.71		47.12			0.00
*/

#include "stdafx.h"
#include <iostream>
#include <cmath>
#include <windows.h>
#include <string>
#include <iomanip>
using namespace std;


int main()
{
	
	double debt = 0;
	double interestr = 0;
	int monthlypay = 0;
	int month = 0;
	int i = 1;
	

	cout << "debt: $"; ///asks for amount 
	cin >> debt;

	cout << "interest rate(percent):"; 
	cin >> interestr;

	cout << "monthly pay:";
	cin >> monthlypay;

	cout << "\nmonth   " << "starting/balance   " << fixed << setprecision(2) << " interest-paid   " << fixed << setprecision(2) << "   principal-paid  " << fixed << setprecision(2) << " end balance" << fixed << setprecision(2) << endl;

	do {

		
		double intpaid = debt * interestr * 0.01;
		double prinpaid = monthlypay - intpaid;
		double end = debt - (monthlypay - intpaid);

		if (debt < monthlypay) {
			prinpaid = debt;
			end = 0;
		}
		cout <<i<<"        "<< debt <<"              "<<intpaid<<"               "<<prinpaid<<"               "<<end << endl;

		 /// add prinpaid instead of (monthlypay - intpaid)

		i ++;
		
		

		debt = debt - (monthlypay - intpaid);
		
		if (debt < 0) {
			end = 0; 
		}
		
		
	} while (debt >  0);

	Sleep(50000);



    return 0;
}

