#include <iostream>
#include <vector>
#include <string>

using namespace std;

#pragma once

// Player Class for Project, "Don't Be Late"

// ************ Item Key ***********
/*
	k = car keys
	c = coffee beans
	s = clothes
	p = phone
	w = wallet
*/

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

// Room class and construct
class Room
{
public:
	string item;
	string roomName;
	vector<string> connectedRooms;
	//Contructor
	Room(string &name, string itm, vector<string> &cRoom) :roomName(name), item(itm), connectedRooms(cRoom)
	{
		
	}
	
	int takeTurn()
	{
		int tempI = 0;
		int selection;
		for (int i = 0; i < connectedRooms.size; i++)
		{
			cout << i + 1 << ". Enter " << connectedRooms[i] << endl;
			tempI = i + 1;
		}
		if (item != "")
		{
			tempI++;
			cout << tempI << ". Collect " << item << endl;
		}
		do {
			cout << "Make Selection: ";
			cin >> selection;
		} while (selection > tempI || selection <= 0);
		if (item == "")
		{
			i
		}
	}
};
// End Room class and construct