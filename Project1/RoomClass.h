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
	int item;
	string roomName;
	vector<string> connectedRooms;
	//Contructor
	Room(string &name, char itm, vector<string> &cRoom) :roomName(name), item(itm), connectedRooms(cRoom)
	{
		cout << &connectedRooms;
	}
	
	int takeTurn()
	{

	}
};
// End Room class and construct