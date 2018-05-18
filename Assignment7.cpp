// Assignment7.cpp : Defines the entry point for the console application.
//
/*Based on program 8 of chapter 7:

Write a program that will read in user input of text  and 
output a list of all the letters that occur in the text, 
along with the number of times each letter occurs.
assume: the line consists of only letters, the line is ended 
with a a period that serves as a sentinel value. 

the letters may be upper case, may be lower case, but the 
counting is case insensitive

Output the letters appeared in the text in alphabetical order, 

 So if the user inputs 

Now is the time for all good men to come to the aid of the

country for if they do not the whole thing may break up and

go down the drain.

The output may look like the following:

Letter: Number of Occurrences.

a  6 
b  1 
c  2 
d  6 
e  11 
f   4 
g  3 
h  8 
i  6 
k  1 
l  3 
m  4 
n  8 
o  15 
p  1 
r  5 
s  1 
t  12 
u  2 
w  3 
y  3 
Bonus: if you print out the order sorted order,
you can get 3 extra points.*/

#include "stdafx.h"
#include <iostream>
#include <string>
#include <windows.h>
using namespace std;
void sortCounts(char alpha[], int letterCount[]);
void sortCountsI(char alpha[], int letterCount[]);

int main()
{
	string sentence; 
	char letter = ' ';
	int letterCount[26] = { 0 };
	char alpha[26] = {'a','b', 'c', 'd', 'e', 'f', 'g', 'h', 
		'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's',
		't','u', 'v', 'w', 'x', 'y', 'z'};
	char period = '.';

	cout << "Input a sentence \n";


	getline(cin, sentence, period);

	for (char letter : sentence) {
		switch (letter) {
		case 'A':
			letterCount[0] += 1;
			break;
		case 'a' :
			letterCount[0] += 1;
			break;
		case 'B':
			letterCount[1] += 1;
			break;
		case 'b':
			letterCount[1] += 1;
			break;
		case 'C':
			letterCount[2] += 1;
			break;
		case 'c':
			letterCount[2] += 1;
			break;
		case 'D':
			letterCount[3] += 1;
			break;
		case 'd':
			letterCount[3] += 1;
			break;
		case 'E':
			letterCount[4] += 1;
			break;
		case 'e':
			letterCount[4] += 1;
			break;
		case 'F':
			letterCount[5] += 1;
			break;
		case 'f':
			letterCount[5] += 1;
			break;
		case 'G':
			letterCount[6] += 1;
			break;
		case 'g':
			letterCount[6] += 1;
			break;
		case 'H':
			letterCount[7] += 1;
			break;
		case 'h':
			letterCount[7] += 1;
			break;
		case 'I':
			letterCount[8] += 1;
			break;
		case 'i':
			letterCount[8] += 1;
			break;
		case 'J':
			letterCount[9] += 1;
			break;
		case 'j':
			letterCount[9] += 1;
			break;
		case 'K':
			letterCount[10] += 1;
			break;
		case 'k':
			letterCount[10] += 1;
			break;
		case 'L':
			letterCount[11] += 1;
			break;
		case 'l':
			letterCount[11] += 1;
			break;
		case 'M':
			letterCount[12] += 1;
			break;
		case 'm':
			letterCount[12] += 1;
			break;
		case 'N':
			letterCount[13] += 1;
			break;
		case 'n':
			letterCount[13] += 1;
			break;
		case 'O':
			letterCount[14] += 1;
			break;
		case 'o':
			letterCount[14] += 1;
			break;
		case 'P':
			letterCount[15] += 1;
			break;
		case 'p':
			letterCount[15] += 1;
			break;
		case 'Q':
			letterCount[16] += 1;
			break;
		case 'q':
			letterCount[16] += 1;
			break;
		case 'R':
			letterCount[17] += 1;
			break;
		case 'r':
			letterCount[17] += 1;
			break;
		case 'S':
			letterCount[18] += 1;
			break;
		case 's':
			letterCount[18] += 1;
			break;
		case 'T':
			letterCount[19] += 1;
			break;
		case 't':
			letterCount[19] += 1;
			break;
		case 'U':
			letterCount[20] += 1;
			break;
		case 'u':
			letterCount[20] += 1;
			break;
		case 'V':
			letterCount[21] += 1;
			break;
		case 'v':
			letterCount[21] += 1;
			break;
		case 'W':
			letterCount[22] += 1;
			break;
		case 'w':
			letterCount[22] += 1;
			break;
		case 'X':
			letterCount[23] += 1;
			break;
		case 'x':
			letterCount[23] += 1;
			break;
		case 'Y':
			letterCount[24] += 1;
			break;
		case 'y':
			letterCount[24] += 1;
			break;
		case 'Z':
			letterCount[25] += 1;
			break;
		case 'z':
			letterCount[25] += 1;
			break;

		 }
	}

	cout << "Letter: Number of Occurrences.(alphabetical)"<< endl;
	for (int i = 0; i < 26; i++ ) {

		if (letterCount[i] > 0 )
		cout << alpha[i] << ":" << letterCount[i] << endl; 
		
	}
	cout << endl;
	sortCounts(alpha, letterCount);
	cout << "Letter: Number of Occurrences.(sorted least to greatest)" << endl;
	for (int i = 0; i < 26; i++) {
		//determine if the element value at i is not zero
		if (letterCount[i] != 0) {
			//display the count of the letter at i
			cout << alpha[i] << ": " << letterCount[i] << endl;
		} //end if
	} //end for
	
	Sleep(30000);

    return 0;
}
void sortCounts(char alpha[], int letterCount[]) {
	//declare variable
	int maxValueIndex = 0;
	int size = 26;

	//loop while size is not one
	while (size != 1) {
		//traverse letterCounts
		for (int i = 1; i < size; i++) {
			//determine if the element at i is greater than the element at maxValueIndex
			if (letterCount[i] > letterCount[maxValueIndex]) {
				//set maxValueIndex equal to i
				maxValueIndex = i;
			} //end if
		} //end for

		  //store the element at maxValueIndex in temp
		int temp = letterCount[maxValueIndex];
		char tempTwo = alpha[maxValueIndex];

		//set the element at maxValueIndex equal to the value of the element at size - 1
		letterCount[maxValueIndex] = letterCount[size - 1];
		alpha[maxValueIndex] = alpha[size - 1];

		//set the element at s - 1 equal to temp
		letterCount[size - 1] = temp;
		alpha[size - 1] = tempTwo;

		//reset maxValueIndex to zero
		maxValueIndex = 0;

		//decrement size
		size--;
	} //end while
} //sortCounts




