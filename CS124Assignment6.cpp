// CS124Assignment6.cpp : Defines the entry point for the console application.
//
/* 
Write a program to generate personalized junk mail. The program
takes input both from an input file and from the keyboard.
The input file contains the text of a letter, except that the
name of the recipient is indicated by the three characters #N#.
The program asks the user for a name an then writes the letter 
to a second file but with the three letters #N# replaces by the
name.The three-letter string #N# will occur multiple times in 
the letter. Only the first name of the recipient is required
You can ask the user to input  the file name, or hard code 
the file name.For your conveniences, attached is a letter body.

junkmail-body.txt
#N#
Dear #N#,
Now it the time for all good people to come to the aid of the University.
For if the good people do not come to the aid of the University the
thing may break up and go down the drain. Should this happen, #N#, the
drain could stop up. Once the Fall monsoons come, with the drains stopped
up, we could drown like rats.
Now, #N#, we know you are a good person. Shouldn't you contribute to
the aid of the country by contributing a large sum to your impoverished
professors' welfare?
Sincerely,
Bjorn Berger, Chairman,
The University Committee for Student Contributions to
the Betterment of Faculty Welfare.

*/

#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <windows.h>
using namespace std;

void add(ifstream& in_stream, ofstream& out_stream);

char NAME[20];

int main()
{

	ifstream in_stream;
	ofstream out_stream;


	cout << "Enter your name: ";
	cin >> NAME;

	in_stream.open("junkmail-body.txt"); //opens in_stream
	if (in_stream.fail()) // tells if in_stream fails
	{
		cout << "Input file opening failed.\n";
		Sleep(30000);
		exit(1);
	}

	out_stream.open("junkmail1-body.txt"); //opens out_stream
	if (out_stream.fail())  // tells if out_stream fails
	{
		cout << "Output file opening failed.\n";
		Sleep(30000);
		exit(1);
	}

	add(in_stream, out_stream);

	in_stream.close(); //closes in_stream
	out_stream.close(); //closes out_stream

	cout << "End of editiong files.\n";
	Sleep(30000);
	return 0;
}

void add(ifstream& in_stream, ofstream& out_stream)
{
	char next;

	in_stream.get(next);
	while (!in_stream.eof())
	{
		if (next == '#') {
			in_stream.get(next);
			if (next == 'N') {
				in_stream.get(next);
				if (next == '#') {
					out_stream << NAME;
				}
			}
		}

		else {
			out_stream << next;
		}
		in_stream.get(next);
		
	}
}
