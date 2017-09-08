#include <iostream>
#include <vector>
#include <string>
#include "PlayerClass.h"
//#include "RoomClass.h"

using namespace std;

string itemCheck(char);

#pragma once

int main()
{
	//ASCII Items
	const string key[6] =
	{
		"   ____   ",
		"  /    \\  ",
		"  \\    /  ",
		"   |  |   ",
		" #_|  |   ",
		" #____/   "
	};
	//Declaring constant variables for connected rooms
	const vector<string> bedroom = { "Bathroom", "Hallway" };
	const string upHall[3] = { "Exercise Room", "Downstairs", "Bedroom" };
	const string upBR[1] = { "Bedroom" };
	const string exRoom[1] = { "Hallway" };
	const string livingRoom[3] = { "Bathroom", "Kitchen", "Upstairs" };
	const string downBR[1] = { "Living Room" };
	const string kitchen[2] = { "Garage", "Living Room" };

	//Creates Player
	system("cls");
	cout << "Don't Be Late/n" << endl;
	cout << "Enter a name for your player: ";
	string name;
	getline(cin, name);
	Player player1(name);
	player1.inventory[0] = 'k';

	//Main Game Loop
		//Prints Display
	cout << "***********";
	cout << "***********" << endl;
		cout << "           " << endl;
		if (player1.inventory[0] == NULL)
		{
			cout << "            " << endl;
		}
		else
		{
			//cout << key[0] << endl;
			string item = itemCheck(player1.inventory[0]);
			cout << item[0] << endl;
		}

	//functions
	string itemCheck(char item)
	{
		if (item == 'k')
		{

		}
		return NULL;
	}
	return 0;
}