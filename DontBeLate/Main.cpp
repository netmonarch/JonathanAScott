#include <iostream>
#include <vector>
#include <string>
#include <windows.h>
#include "PlayerClass.h"
#include "RoomClass.h"

using namespace std;

bool checkInput(Room, int);
int changeRoom(string, Player);

#pragma once

/* 
Location Key
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
	MoveWindow(wh, 0, 0, 800, 750, true);

	//ASCII Items
	// Item have 6 elements, elements are 14 characters long
	
	// Key
	string key[] =
	{
		"     ____    ",
		"    /    \\   ",
		"    \\  K /   ",
		"     | E|    ",
		"   #_| Y|    ",
		"   #____/    "
	};

	// Phone
	string phone[] =
	{ 
		"    _____    ",
		"   |P    |   ",
		"   | H   |   ",
		"   |  O  |   ",
		"   |   N |   ",
		"   |____E|   "
	};

	// Clothes
	string clothes[] =
	{ 
		"   __   __   ",
		"  / S`-'  \\  ",
		" /_| H   |_\\ ",
		"   |  I  |   ",
		"   |   R |   ",
		"   |____T|   "
	};

	// Wallet
	string wallet[] =
	{
		"    _______  ",
		" __/$____$/_ ",
		"(' WA     )`)",
		"|    LL   | |",
		"|      ET | |",
		"(_________)_)"
	};

	// Coffee
	string coffee[] =
	{
		"   .==%%==.  ",
		",-|`==%%=='| ",
		"| | CO     | ",
		"| |   FF   | ",
		"`-|     EE | ",
		"   `-____-'  "
	};

	// Person/Player 
	string pchar[] =
	{
		" 0 ",
		"/|\\",
		"/ \\"
	};

	//Rooms
	string roomList[9] = { "", "Bedroom", "Bathroom", "Exerise Room", "Hallway", "Living Room", "Downstairs Bathroom", "Kitchen", "Garage"};


	//Declaring variables for connected rooms
	vector<string> bdroom = { "Bathroom", "Hallway" };
	vector<string> upHall = { "Exercise Room", "Downstairs", "Bedroom" };
	vector<string> upBR = { "Bedroom" };
	vector<string> exRoom = { "Hallway" };
	vector<string> lvRoom = { "D. Bathroom", "Kitchen", "Upstairs" };
	vector<string> downBR = { "Living Room" };
	vector<string> kitchen = { "Garage", "Living Room" };
	vector<string> garage = { "Kitchen" };

	//Creates Rooms
	Room Bedroom(roomList[1], "Clothes", bdroom);
	Room UpBathroom(roomList[2], "", upBR);
	Room ExerciseRoom(roomList[3], "Phone", exRoom);
	Room UpHallway(roomList[4], "", upHall);
	Room LivingRoom(roomList[5], "Wallet", lvRoom);
	Room DownBathroom(roomList[6], "", downBR);
	Room Kitchen(roomList[7], "Coffe", kitchen);
	Room Garage(roomList[8], "Keys", garage);



	//Creates Player
	system("cls");
	cout << "Don't Be Late\n" << endl;
	cout << "Enter a name for your player: ";
	string pName;
	getline(cin, pName);
	Player playerP(pName);
	Player *player1;
	player1 = &playerP;

	// Main Game Loop
	do {
		system("cls");
		// Prints Display
		switch (player1->floor)
		{
		case 1:
			// First Floor
			cout << " *****************************************************************************" << endl;//Output Line 1
			cout << " *      Items      |                         Floor 1                         *" << endl;
			cout << " *  "; // Insert item  1st key line
			if (player1->inventory[0] == "k")
			{
				cout << key[0];
			}
			else
			{
				cout << "             ";
			}
			cout << "  |                               _________________________ *" << endl; 

			cout << " *  "; // Insert 2nd Key line
			if (player1->inventory[0] == "k")
			{
				cout << key[1];
			}
			else
			{
				cout << "             ";
			}
			cout << "  |                              |                         |*" << endl;
			cout << " *  ";// Insert 3rd Key line
			if (player1->inventory[0] == "k")
			{
				cout << key[2];
			}
			else
			{
				cout << "             ";
			}
			cout << "  |                              ||         Garage         |*" << endl;
			cout << " *  ";// Insert 4th Key line
			if (player1->inventory[0] == "k")
			{
				cout << key[3];
			}
			else
			{
				cout << "             ";
			}
			cout << "  |                               |                        |*" << endl;
			cout << " *  "; // Insert 5th Key line
			if (player1->inventory[0] == "k")
			{
				cout << key[4];
			}
			else
			{
				cout << "             ";
			}
			cout << "  |                               |           ";
			// Check/output player location for Garage
			if (player1->playerPosition == 8)
			{
				cout << pchar[0] << "          |*" << endl; // pchar 1st line
			}
			else
			{
				cout << "             |*" << endl;
			}
			cout << " *  "; // Insert 6th Key line
			if (player1->inventory[0] == "k")
			{
				cout << key[5];
			}
			else
			{
				cout << "             ";
			}
			cout << "  |                               |           "; 
			// Check/output player location for Garage
			if (player1->playerPosition == 8)
			{
				cout << pchar[1] << "          |*" << endl; // pchar 2nd line
			}
			else
			{
				cout << "             |*" << endl;
			}
			cout << " *  "; // Insert 1st phone line
			if (player1->inventory[0] == "p")
			{
				cout << phone[0];
			}
			else
			{
				cout << "             ";
			}
			cout << "  |                              ||           ";
			// Check/output player location for Garage
			if (player1->playerPosition == 8)
			{
				cout << pchar[2] << "          |*" << endl; // pchar 3rd line
			}
			else
			{
				cout << "             |*" << endl;
			}
			cout << " *"; // Insert 2nd phone line
			if (player1->inventory[0] == "p")
			{
				cout << phone[1];
			}
			else
			{
				cout << "               ";
			}
			cout << "  |  ____________________________|___| |___________________|*" << endl;
			cout << " *  "; // Insert 3rd phone line
			if (player1->inventory[0] == "p")
			{
				cout << phone[2];
			}
			else
			{
				cout << "             ";
			}
			cout << "  | |\\    |  |  |  |  |  |     /|                          |*" << endl;
			cout << " *  "; // Insert 4th phone line
			if (player1->inventory[0] == "p")
			{
				cout << phone[3];
			}
			else
			{
				cout << "             ";
			}
			cout << "  | |  \\  |  |  |  |  |  |   /  |                          |*" << endl;
			cout << " *  "; // Insert 5th phone line
			if (player1->inventory[0] == "p")
			{
				cout << phone[4];
			}
			else
			{
				cout << "             ";
			}
			cout << "  | |___ \\|__|__|__|__|__  /    |        Kitchen           |*" << endl;
			cout << " *  "; // Insert 6th phone line
			if (player1->inventory[0] == "p")
			{
				cout << phone[5];
			}
			else
			{
				cout << "             ";
			}
			cout << "  | |     |              |______|                          |*" << endl;
			cout << " *  "; // Insert 1st clothes line
			if (player1->inventory[0] == "s")
			{
				cout << clothes[0];
			}
			else
			{
				cout << "             ";
			}
			cout << "  | |_____|              |      |           ";
			// Check/output player location for Kitchen
			if (player1->playerPosition == 7)
			{
				cout << pchar[0] << "            |*" << endl; // pchar 1st line
			}
			else
			{
				cout << "               |*" << endl;
			}
				
			cout << " *  "; // Insert 2nd clothes line
			if (player1->inventory[0] == "s")
			{
				cout << clothes[1];
			}
			else
			{
				cout << "             ";
			}
			cout << "  | |     |              |______|           ";
			// Check/output player location for Kitchen
			if (player1->playerPosition == 7)
			{
				cout << pchar[1] << "            |*" << endl; // pchar 2nd line
			}
			else
			{
				cout << "               |*" << endl;
			}
				
			cout << " *  "; // Insert 3rd clothes line
			if (player1->inventory[0] == "s")
			{
				cout << clothes[2];
			}
			else
			{
				cout << "             ";
			}
			cout << "  | |_____|              |   ^  |           ";
			// Check/output player location for Kitchen
			if (player1->playerPosition == 7)
			{
				cout << pchar[2] << "            |*" << endl; // pchar 3rd line
			}
			else
			{
				cout << "               |*" << endl;
			}
				
			cout << " *  "; // Insert 4th clothes line
				if (player1->inventory[0] == "s")
				{
					cout << clothes[3];
				}
				else
				{
					cout << "             ";
				}
			cout << "  | |  |                     |                             |*" << endl;
			cout << " *  "; // Insert 5th clothes line
			if (player1->inventory[0] == "s")
			{
				cout << clothes[4];
			}
			else
			{
				cout << "             ";
			}
			cout << "  | |  v                                                   |*" << endl;
			cout << " *  "; // Insert 6th clothes line
			if (player1->inventory[0] == "s")
			{
				cout << clothes[5];
			}
			else
			{
				cout << "             ";
			}
			cout << "  | |                                                      |*" << endl;
			cout << " *  "; // Insert 1st coffee line
				if (player1->inventory[0] == "c")
				{
					cout << coffee[0];
				}
				else
				{
					cout << "             ";
				}
			cout << "  | |                                                      |*" << endl;
			cout << " *  "; // Insert 2nd coffee line
			if (player1->inventory[0] == "c")
			{
				cout << coffee[1];
			}
			else
			{
				cout << "             ";
			}
			cout << "  | |                                       ________   ____|*" << endl;
			cout << " *  "; // Insert 3rd coffee line
			if (player1->inventory[0] == "c")
			{
				cout << coffee[2];
			}
			else
			{
				cout << "             ";
			}
			cout << "  | |                                      |        | |    |*" << endl;
			cout << " *  "; // Insert 4th coffee line
			if (player1->inventory[0] == "c")
			{
				cout << coffee[3];
			}
			else
			{
				cout << "             ";
			}
			cout << "  | |       Living Room                    | Bathroom      |*" << endl;
			cout << " *  "; // Insert 5th coffee line
			if (player1->inventory[0] == "c")
			{
				cout << coffee[4];
			}
			else
			{
				cout << "             ";
			}
			cout << "  | |                   ";
			// Check/output player location for Livingroom
			if (player1->playerPosition == 5)
			{
				cout << pchar[0] << "                |     "; // pchar 1st line
			}
			else
			{
				cout << "                   |     ";
			}
			// Check/output player location for Downstairs Bathroom
			if (player1->playerPosition == 6)
			{
				cout << pchar[0] << "       |*" << endl; // pchar 1st line
			}
			else
			{
				cout << "          |*" << endl;
			}
			
			cout << " *  "; // Insert 6th coffee line
			if (player1->inventory[0] == "c")
			{
				cout << coffee[5];
			}
			else
			{
				cout << "             ";
			}
			cout << "  | |                   ";
			// Check/output player location for Livingroom
			if (player1->playerPosition == 5)
			{
				cout << pchar[1] << "                |     "; // pchar 2nd line
			}
			else
			{
				cout << "                   |     ";
			}
			// Check/output player location for Downstairs Bathroom
			if (player1->playerPosition == 6)
			{
				cout << pchar[1] << "       |*" << endl; // pchar 2nd line
			}
			else
			{
				cout << "          |*" << endl;
			}
				
			cout << " *  "; // Insert 1st wallet line
			if (player1->inventory[0] == "w")
			{
				cout << wallet[0];
			}
			else
			{
				cout << "             ";
			}
			cout << "  | |                   ";
			// Check/output player location for Livingroom
			if (player1->playerPosition == 5)
			{
				cout << pchar[2] << "                |     "; // pchar 3rd line
			}
			else
			{
				cout << "                   |     ";
			}
			// Check/output player location for Downstairs Bathroom
			if (player1->playerPosition == 6)
			{
				cout << pchar[2] << "       |*" << endl; // pchar 3rd line
			}
			else
			{
				cout << "          |*" << endl;
			}
			
			cout << " *  "; // Insert 2nd wallet line
			if (player1->inventory[0] == "c")
			{
				cout << wallet[1];
			}
			else
			{
				cout << "             ";
			}
			cout << "  | |______________________________________|_______________|*" << endl;
			cout << " *  "; // Insert 3rd wallet line
			if (player1->inventory[0] == "w")
			{
				cout << wallet[2];
			}
			else
			{
				cout << "             ";
			}
			cout << "  |                                                         *" << endl;
			cout << " *  "; // Insert 4th wallet line
			if (player1->inventory[0] == "w")
			{
				cout << wallet[3];
			}
			else
			{
				cout << "             ";
			}
			cout << "  |                                                         *" << endl;
			cout << " *  "; // Insert 5th wallet line
			if (player1->inventory[0] == "w")
			{
				cout << wallet[4];
			}
			else
			{
				cout << "             ";
			}
			cout << "  |                   ";
			// Display timer
			if (player1->timer >= 10)
			{
				cout << "Time gone by: " << player1->timer << " minutes              *" << endl;
			}
			else
			{
				cout << "Time gone by: " << player1->timer << " minutes               *" << endl;
			}
				
			cout << " *  "; // Insert 6th wallet line
			if (player1->inventory[0] == "w")
			{
				cout << wallet[5];
			}
			else
			{
				cout << "             ";
			}
			cout << "  |                                                         *" << endl;
			cout << " *****************************************************************************" << endl;
			break;
		case 2:
			// Second Floor
			cout << " *****************************************************************************" << endl;//Output Line 1
			cout << " *      Items      |                         Floor 2                         *" << endl;
			cout << " *  "; // Insert item  1st key line
			if (player1->inventory[0] == "k")
			{
				cout << key[0];
			}
			else
			{
				cout << "             ";
			}
			cout << "  |  ______________________________________________________ *" << endl;
			cout << " *  "; // Insert item  2nd key line
			if (player1->inventory[0] == "k")
			{
				cout << key[1];
			}
			else
			{
				cout << "             ";
			}
			cout << "  | |\\    |  |  |  |     /     |                           |*" << endl;
			cout << " *  "; // Insert item  3rd key line
			if (player1->inventory[0] == "k")
			{
				cout << key[2];
			}
			else
			{
				cout << "             ";
			}
			cout << "  | |  \\  |  |  |  |   /  |    |           Weight          |*" << endl;
			cout << " *  "; // Insert item  4th key line
			if (player1->inventory[0] == "k")
			{
				cout << key[3];
			}
			else
			{
				cout << "             ";
			}
			cout << "  | |___ \\|__|__|__|_/    |    |             Room          |*" << endl;
			cout << " *  "; // Insert item  5th key line
			if (player1->inventory[0] == "k")
			{
				cout << key[4];
			}
			else
			{
				cout << "             ";
			}
			cout << "  | |     |         |_____|    |        ";
			// Check/output player location for Weight Room
			if (player1->playerPosition == 3)
			{
				cout << pchar[0] << "                |*" << endl; // pchar 1st line
			}
			else
			{
				cout << "                   |*" << endl;
			}
				
			cout << " *  "; // Insert item  6th key line
			if (player1->inventory[0] == "k")
			{
				cout << key[5];
			}
			else
			{
				cout << "             ";
			}
			cout << "  | |_____|         |     |    |        ";
			// Check/output player location for Weight Room
			if (player1->playerPosition == 3)
			{
				cout << pchar[1] << "                |*" << endl; // pchar 2nd line
			}
			else
			{
				cout << "                   |*" << endl;
			}
				
			cout << " *  "; // Insert 1st phone line
			if (player1->inventory[0] == "p")
			{
				cout << phone[0];
			}
			else
			{
				cout << "             ";
			}
			cout << "  | |     |         |_____|    |        ";
			// Check/output player location for Weight Room
			if (player1->playerPosition == 3)
			{
				cout << pchar[2] << "                |*" << endl; // pchar 3rd line
			}
			else
			{
				cout << "                   |*" << endl;
			}
				
			cout << " *  "; // Insert 2nd phone line
			if (player1->inventory[0] == "p")
			{
				cout << phone[1];
			}
			else
			{
				cout << "             ";
			}
			cout << "  | |_____|         |  |  |    |                           |*" << endl;
			cout << " *  "; // Insert 3rd phone line
			if (player1->inventory[0] == "p")
			{
				cout << phone[2];
			}
			else
			{
				cout << "             ";
			}
			cout << "  | |     |            |       |                           |*" << endl;
			cout << " *  "; // Insert 4th phone line
			if (player1->inventory[0] == "p")
			{
				cout << phone[3];
			}
			else
			{
				cout << "             ";
			}
			cout << "  | |_____|            V       |_______|  |________________|*" << endl;
			cout << " *  "; // Insert 5th phone line
			if (player1->inventory[0] == "p")
			{
				cout << phone[4];
			}
			else
			{
				cout << "             ";
			}
			cout << "  | |  ^                                                   |*" << endl;
			cout << " *  "; // Insert 6th phone line
			if (player1->inventory[0] == "p")
			{
				cout << phone[5];
			}
			else
			{
				cout << "             ";
			}
			cout << "  | |  |                                                   |*" << endl;
			cout << " *  "; // Insert 1st clothes line
			if (player1->inventory[0] == "s")
			{
				cout << clothes[0];
			}
			else
			{
				cout << "             ";
			}
			cout << "  | |  |                    Hall    ";
			// Check/output player location for Hall
			if (player1->playerPosition == 4)
			{
				cout << pchar[0] << "                    |*" << endl; // pchar 1st line
			}
			else
			{
				cout << "                       |*" << endl;
			}
				
			cout << " *  "; // Insert 2nd clothes line
			if (player1->inventory[0] == "s")
			{
				cout << clothes[1];
			}
			else
			{
				cout << "             ";
			}
			cout << "  | |                               ";
			// Check/output player location for Hall
			if (player1->playerPosition == 4)
			{
				cout << pchar[1] << "                    |*" << endl; // pchar 2nd line
			}
			else
			{
				cout << "                       |*" << endl;
			}
				
			cout << " *  "; // Insert 3rd clothes line
			if (player1->inventory[0] == "s")
			{
				cout << clothes[2];
			}
			else
			{
				cout << "             ";
			}
			cout << "  | |                               ";
			// Check/output player location for Hall
			if (player1->playerPosition == 4)
			{
				cout << pchar[2] << "                    |*" << endl; // pchar 3rd line
			}
			else
			{
				cout << "                       |*" << endl;
			}
				
			cout << " *  "; // Insert 4th clothes line
			if (player1->inventory[0] == "s")
			{
				cout << clothes[3];
			}
			else
			{
				cout << "             ";
			}
			cout << "  | |________________________   ___________________________|*" << endl;
			cout << " *  "; // Insert 5th clothes line
			if (player1->inventory[0] == "s")
			{
				cout << clothes[4];
			}
			else
			{
				cout << "             ";
			}
			cout << "  | |                        | |      |                    |*" << endl;
			cout << " *  "; // Insert 6th clothes line
			if (player1->inventory[0] == "s")
			{
				cout << clothes[5];
			}
			else
			{
				cout << "             ";
			}
			cout << "  | |                                 |                    |*" << endl;
			cout << " *  "; // Insert 1st coffee line
			if (player1->inventory[0] == "c")
			{
				cout << coffee[0];
			}
			else
			{
				cout << "             ";
			}
			cout << "  | |    Bedroom                      |      Bathroom      |*" << endl;
			cout << " *  "; // Insert 2nd coffee line
			if (player1->inventory[0] == "c")
			{
				cout << coffee[1];
			}
			else
			{
				cout << "             ";
			}
			cout << "  | |               ";
			// Check/output player location for Bedroom
			if (player1->playerPosition == 1)
			{
				cout << pchar[0] << "               |                    |*" << endl; // pchar 1st line
			}
			else
			{
				cout << "                  |                    |*" << endl;
			}
				
			cout << " *  "; // Insert 3rd coffee line
			if (player1->inventory[0] == "c")
			{
				cout << coffee[2];
			}
			else
			{
				cout << "             ";
			}
			cout << "  | |               ";
			// Check/output player location for Bedroom
			if (player1->playerPosition == 1)
			{
				cout << pchar[1] << "               |   "; // pchar 2nd line
			}
			else
			{
				cout << "                  |   ";
			}
			// Check/output player location for Upper Bathroom
			if (player1->playerPosition == 2)
			{
				cout << pchar[0] << "              |*" << endl; // pchar 1st line
			}
			else
			{
				cout << "                 |*" << endl;
			}
				
			cout << " *  "; // Insert 4th coffee line
			if (player1->inventory[0] == "c")
			{
				cout << coffee[3];
			}
			else
			{
				cout << "             ";
			}
			cout << "  | |               ";
			// Check/output player location for Bedroom
			if (player1->playerPosition == 1)
			{
				cout << pchar[2] << "               |   "; // pchar 3rd line
			}
			else
			{
				cout << "                  |   ";
			}
			// Check/output player location for Upper Bathroom
			if (player1->playerPosition == 2)
			{
				cout << pchar[1] << "              |*" << endl; // pchar 2nd line
			}
			else
			{
				cout << "                 |*" << endl;
			}
				
			cout << " *  "; // Insert 5th coffee line
			if (player1->inventory[0] == "c")
			{
				cout << coffee[4];
			}
			else
			{
				cout << "             ";
			}
			cout << "  | |                                 |   ";
			// Check/output player location for Upper Bathroom
			if (player1->playerPosition == 2)
			{
				cout << pchar[2] << "              |*" << endl; // pchar 3rd line
			}
			else
			{
				cout << "                 |*" << endl;
			}
				
			cout << " *  "; // Insert 6th coffee line
			if (player1->inventory[0] == "c")
			{
				cout << coffee[5];
			}
			else
			{
				cout << "             ";
			}
			cout << "  | |                                 =                    |*" << endl;
			cout << " *  "; // Insert 1st wallet line
			if (player1->inventory[0] == "w")
			{
				cout << wallet[0];
			}
			else
			{
				cout << "             ";
			}
			cout << "  | |                                 =                    |*" << endl;
			cout << " *  "; // Insert 2nd wallet line
			if (player1->inventory[0] == "w")
			{
				cout << wallet[1];
			}
			else
			{
				cout << "             ";
			}
			cout << "  | |_________________________________|____________________|*" << endl;
			cout << " *  "; // Insert 3rd wallet line
			if (player1->inventory[0] == "w")
			{
				cout << wallet[2];
			}
			else
			{
				cout << "             ";
			}
			cout << "  |                                                         *" << endl;
			cout << " *  "; // Insert 4th wallet line
			if (player1->inventory[0] == "w")
			{
				cout << wallet[3];
			}
			else
			{
				cout << "             ";
			}
			cout << "  |                                                         *" << endl;
			cout << " *  "; // Insert 5th wallet line
			if (player1->inventory[0] == "w")
			{
				cout << wallet[4];
			}
			else
			{
				cout << "             ";
			}
			cout << "  |                   ";
			// Display timer
			if (player1->timer >= 10)
			{
				cout << "Time gone by: " << player1->timer << " minutes              *" << endl;
			}
			else
			{
				cout << "Time gone by: " << player1->timer << " minutes               *" << endl;
			}
			cout << " *  "; // Insert 6th wallet line
			if (player1->inventory[0] == "w")
			{
				cout << wallet[5];
			}
			else
			{
				cout << "             ";
			}
			cout << "  |                                                         *" << endl;
			cout << " *****************************************************************************" << endl;
			break;
		}


		//Text output
		cout << "You are in the " << roomList[player1->playerPosition] << "." << endl;
		switch (player1->playerPosition)
		{
			int selection;
		case 1:
			selection = Bedroom.takeTurn();
			if (checkInput(Bedroom, selection) == true)
			{
				if (selection > Bedroom.connectedRooms.size() && Bedroom.item != "")
				{
					player1->inventory[0] = 's';
					Bedroom.item = "";
					player1->timer += 5;
				}
				else
				{ 
					player1->playerPosition = changeRoom(Bedroom.connectedRooms[selection-1], *player1);
					if (player1->playerPosition != 1)
						player1->timer += 2;
				}
			}
			break;
		case 2:
			selection = UpBathroom.takeTurn();
			if (checkInput(UpBathroom, selection) == true)
			{
				
				player1->playerPosition = changeRoom(UpBathroom.connectedRooms[selection-1], *player1);
				if (player1->playerPosition != 2)
					player1->timer += 2;
			}
			break;//Add rest of rooms
		case 3:
			selection = ExerciseRoom.takeTurn();
			if (checkInput(ExerciseRoom, selection) == true)
			{
				if (selection > ExerciseRoom.connectedRooms.size() && ExerciseRoom.item != "")
				{
					player1->inventory[0] = 'p';
					ExerciseRoom.item = "";
					player1->timer += 5;
				}
				else
				{ 
					player1->playerPosition = changeRoom(ExerciseRoom.connectedRooms[selection-1], *player1);
					if (player1->playerPosition != 1)
						player1->timer += 2;
				}
			}
			break;
		case 4:
			selection = UpHallway.takeTurn();
			if (checkInput(UpHallway, selection) == true)
			{
				
				player1->playerPosition = changeRoom(UpHallway.connectedRooms[selection-1], *player1);
				if (player1->playerPosition != 2)
					player1->timer += 2;
			}
			break;
		case 5:
			selection = LivingRoom.takeTurn();
			if (checkInput(LivingRoom, selection) == true)
			{
				if (selection > LivingRoom.connectedRooms.size() && LivingRoom.item != "")
				{
					player1->inventory[0] = 'w';
					LivingRoom.item = "";
					player1->timer += 5;
				}
				else
				{ 
					player1->playerPosition = changeRoom(LivingRoom.connectedRooms[selection-1], *player1);
					if (player1->playerPosition != 1)
						player1->timer += 2;
				}
			}
			break;
		case 6:
			selection = DownBathroom.takeTurn();
			if (checkInput(DownBathroom, selection) == true)
			{
				
				player1->playerPosition = changeRoom(DownBathroom.connectedRooms[selection-1], *player1);
				if (player1->playerPosition != 2)
					player1->timer += 2;
			}
			break;
		case 7:
			selection = Kitchen.takeTurn();
			if (checkInput(Kitchen, selection) == true)
			{
				if (selection > Kitchen.connectedRooms.size() && Kitchen.item != "")
				{
					player1->inventory[0] = 'c';
					Kitchen.item = "";
					player1->timer += 5;
				}
				else
				{ 
					player1->playerPosition = changeRoom(Kitchen.connectedRooms[selection-1], *player1);
					if (player1->playerPosition != 1)
						player1->timer += 2;
				}
			}
			break;
		case 8:
			selection = Garage.takeTurn();
			if (checkInput(Garage, selection) == true)
			{
				if (selection > Garage.connectedRooms.size() && Garage.item != "")
				{
					player1->inventory[0] = 'k';
					Garage.item = "";
					player1->timer += 5;
				}
				else
				{ 
					player1->playerPosition = changeRoom(Garage.connectedRooms[selection-1], *player1);
					if (player1->playerPosition != 1)
						player1->timer += 2;
				}
			}
			break;

		}
	} while (player1->timer < 60);
	
	if (player1->timer > 60)
	{
		cout << "Game over! You ran out of time!";
		system("pause");
	}
	
	return 0;
}

//Functions

bool checkInput(Room current, int selection) 
{
	if (current.item == "")
	{
		if (selection > current.connectedRooms.size() || selection <= 0)
			return false;
		else
			return true;
	}
	else
	{
		if (selection > current.connectedRooms.size() + 1 || selection <= 0)
			return false;
		else
			return true;
	}
}

int changeRoom(string room, Player person)
{ 
	if (room.compare("Bedroom") == 0)
	{
		return 1;
	}
	else if (room.compare("Bathroom") == 0)
	{
		return 2;
	}
	else if (room.compare("Exercise Room") == 0)
	{
		return 3;
	}
	else if (room.compare("Upstairs") == 0)
	{
		return 4;
	}
	else if (room.compare("Living Room") == 0)
	{
		return 5;
	}
	else if (room.compare("D. Bathroom") == 0)
	{
		return 6;
	}
	else if (room.compare("Kitchen") == 0)
	{
		return 7;
	}
	else if (room.compare("Garage") == 0)
	{
		return 8;
	}
	return 0;
}
