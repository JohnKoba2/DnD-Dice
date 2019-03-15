#include "pch.h"
#include <iostream>
#include <time.h>
#include "DnDDice.h"
using namespace std;

int main()
{
	srand(time(NULL));
	while (true)
	{
		Dice();
	}
	
}



void Dice()
{
	int sides, side= false, die, roll, total = 0, count = 1;
	cout << "How many sides?" << endl;
	cin >> sides;

			while (side == false)
			{
				if (sides == 2 || sides == 4 || sides == 6 || sides == 8 || sides == 10 || sides == 12 || sides == 20 || sides == 100) {
					side = true;
				}
				else {
					side = false;
					cout << "Please enter a valid die size! (2,4,6,8,10,12,20,100)\nHow many sides? \n";
					cin >> sides;
				}
			}
	cout << "How many die?" << endl;
	cin >> die;
	cout << "Your rolls are : \n";

	while (count <= die) {
		roll = (rand() % sides) + 1;
		total += roll;
		cout << roll << " ";
		count++;
	}
	cout << "\nThe total is :" << total << endl;	   
}


