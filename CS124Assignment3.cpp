// CS124Assignment3.cpp : Defines the entry point for the console application.
//
/*
Author: Isis Curiel  
Date:02/02/17
Write a program that scores a blackjack hand. In blackjack, a player receives from two to five cards. (The player decides how many, but that has no effect on this exercise.)
The cards 2 through 10 are scored as 2 through 10 points each. The face cards, jack, queen, and king are  scored as 10 points. The goal is to come as close to a score of 21 
as possible without goingover 21. Hence, any score over 21 is called "busted." The ace can count as either 1 or 11,  whichever is better for the user. For example, an ace 
and a 10 can be scored as either 11 or 21. Since 21 is a better score, this hand is scored as 21. An ace and two 8' s can be scored as  either 17 or 27. Since 27 is a "busted" 
score, this hand is scored as 17.The user is asked how many cards she or he has, and the user responds with one of the  integers 2, 3, 4, or 5. The user is then asked for 
the card values.Card values are 2 through 10, jack, queen, king, and ace. A good way to handle input is to  use the type char so that the card input 2, for example, is read 
as the character '2', rather than as the number 2. Input the values 2 through 9 as the characters '2' through '9'. Input the values  10, jack, queen, king, and ace as the 
characters 't ', 'j', 'q', 'k', and 'a'. An ace can also be entered as a '1'. (Of course, the user does not type in the single quotes.) Be sure to allow  upper as well as
lowercase letters as input.  After reading in the values, the program should convert them from character values to  numeric card scores, taking special care for aces. 
The output is either a number between 2  and 21 (inclusive) or the word Busted.

Your program should include a loop that  lets the user repeat this calculation until the user says she or he is done.

You may want to a switch  statement to determine the correct value for a card.

Please remember to test your code :

Following is a sample output of a sample program:

Enter a number of cards you have to enter

5

Now enter the value of the cards, 2-9, t, j, q, k, a

2 3 4 5 6

The value of your hand = 20

Y/y repeats, any other character quits



Enter a number of cards you have to enter

5

Now enter the value of the cards, 2-9, t, j, q, k, a

4 5 6 7 8

The value of your hand = 30 = Busted



Y/y repeats, any other character quits



Enter a number of cards you have to enter

4

Now enter the value of the cards, 2-9, t, j, q, k, a

t a a q

The value of your hand = 22 = Busted



Y/y repeats, any other character quits



Enter a number of cards you have to enter

3

Now enter the value of the cards, 2-9, t, j, q, k, a

a t q

The value of your hand = 21

Y/y repeats, any other character quits


Enter a number of cards you have to enter

2

Now enter the value of the cards, 2-9, t, j, q, k, a

a t

The value of your hand = 21

Y/y repeats, any other character quits
*/


#include "stdafx.h"
#include <iostream>
//#iclude <iomanip>
using namespace std;

int main()
{

	int numofcards = 0;
	int value, totalValue = 0;
	char cardValue;
	char ans;

	do {
		totalValue = 0;
		cout << "\n This program scores blackjack hand. Enter a number of cards you have to enter: \n";
		cin >> numofcards;
		
		cout << "enter the value of cards . for card 2 - 9 enter 2 - 9\n"
			<< " and for jack, queen and king enter t, j, q, k\n"
			<< "respectivly. IF YOU HAVE AN ACE ENTER IT AS  YOUR LAST CARD: \n";
		

		for (int n = 1; n <= numofcards; n++)
		{
			cin >> cardValue;

			switch (cardValue)
			{
			case'2':
				value = 2;
				totalValue = value + totalValue;
				break;
			case '3':
				value = 3;
				totalValue = value + totalValue;
				break;
			case '4':
				value = 4;
				totalValue = value + totalValue;
				break;
			case '5':
				value = 5;
				totalValue = value + totalValue;
				break;
			case '6':
				value = 6;
				totalValue = value + totalValue;
				break;
			case '7':
				value = 7;
				totalValue = value + totalValue;
				break;
			case '8':
				value = 8;
				totalValue = value + totalValue;
				break;
			case '9':
				value = 9;
				totalValue = value + totalValue;
				break;
			case 'j':
				value = 10;
				totalValue = value + totalValue;
				break;
			case 'J':
				value = 10;
				totalValue = value + totalValue;
				break;
			case 'q':
				value = 10;
				totalValue = value + totalValue;
				break;
			case 'Q':
				value = 10;
				totalValue = value + totalValue;
				break;
			case 'k':
				value = 10;
				totalValue = value + totalValue;
				break;
			case 'K':
				value = 10;
				totalValue = value + totalValue;
				break;
			case 't':
				value = 10;
				totalValue = value + totalValue;
				break;
			case 'T':
				value = 10;
				totalValue = value + totalValue;
				break;
			case 'a':
				if (totalValue <= 10)
				{
					value = 11;
				}
				else
				{
					value = 1;
				}
				totalValue = totalValue + value;
				break;
			case 'A':
				if (totalValue <= 10)
				{
					value = 11;

				}
				else
				{
					value = 1;
				}
				totalValue = totalValue + value;
				break;
				n++;

			default:
				cout << "Error: not valid entry.\n";
			}
		}
		
		if (totalValue <= 21)
		{
			cout << "total value of cards is: " << totalValue << endl;
		}
		else {
			
			cout << "total value of cards is: " << totalValue << " = Busted \n" << endl;
		}
		cout << "Try again, press any another key to continue or y to exit: \n";
		cin >> ans;

		if (ans == 'y' || ans == 'Y') {
			return 0;
		}
		else
			continue;
		
	} while (true);
	
	}
