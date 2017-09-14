#include <iostream>
#include <vector>
#include <string>
#include <windows.h>
#include "PlayerClass.h"
#include "RoomClass.h"

using namespace std;

string itemCheck(char);

#pragma once

/* Location Key
1. Bedroom
2. Upstairs Bathroom
3. Exercise Room
4. Hallway
5. Living Room
6. Downstairs Bathroom
7. Kitchen
8. Garage
*/

int main()
{	
	//Moves and resizes console window
	HWND wh = GetConsoleWindow();
	MoveWindow(wh, 0, 0, 800, 500, true);

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
	//Rooms
	const string roomList[9] = { NULL, "Bedroom", "Bathroom", "Exerise Room", "Hallway", "Living Room", "Downstairs Bathroom", "Kitchen", "Garage"};

	//Declaring constant variables for connected rooms
	const vector<string> bdroom = { "Bathroom", "Hallway" };
	const vector<string> upHall = { "Exercise Room", "Downstairs", "Bedroom" };
	const vector<string> upBR = { "Bedroom" };
	const vector<string> exRoom = { "Hallway" };
	const vector<string> lvRoom = { "Bathroom", "Kitchen", "Upstairs" };
	const vector<string> downBR = { "Living Room" };
	const vector<string> kitchen = { "Garage", "Living Room" };
	const vector<string> garage = { "Kitchen" };

	//Creates Rooms
	Room Bedroom( roomList[1], 's', bdroom);

	//Creates Player
	system("cls");
	cout << "Don't Be Late/n" << endl;
	cout << "Enter a name for your player: ";
	string pName;
	getline(cin, pName);
	Player player1(pName);
	player1.inventory[0] = 'k';

	//Main Game Loop
	do {
		//Prints Display
		switch (player1.floor)
		{
		case 1:
			//First Floor
			break;
		case 2:
			//Second Floor
			cout << "***********";//Output Line 1
			cout << "***********" << endl;
			cout << "           " << endl;
			if (player1.inventory[0] == NULL)
			{
				cout << "            " << endl;
			}
			else
			{
				string item = itemCheck(player1.inventory[0]);
				cout << item[0] << endl;
			}
			break;
		}

		//Text output
		cout << "You are in the " << roomList[player1.playerPosition] << "." << endl;
		switch (player1.playerPosition)
		{
		case 1:

		}
	} while (player1.timer < 200);
	return 0;
}


//Functions
string itemCheck(char item)
{
	if (item == 'k')
	{
		//return 
	}
	return NULL;
}