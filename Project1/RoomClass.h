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
// *********************************


// ************ Location Key *******
/*
1 - Bedroom		 2 - Bathroom		 3 - Hallway
4 - Stairs		 5 - Living Area	 6 - Weight Room
7 - Kitchen		 8 - D. Bathroom	 9 - Garage
*/
// *********************************

// Room class and construct
class Room
{
public:
	string roomName;
	char itemInRoom;
	bool occupied;
	string connectedRooms;

	//Contructor
	Room(string name, char item, string rooms)
	{
		roomName = name;
		itemInRoom = item;
		connectedRooms = rooms;
		occupied = 0;
	}
	void optionSelect()
	{
		cout << "1. " << connectedRooms[0];
	}
};
// End Room class and construct