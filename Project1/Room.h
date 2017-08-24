#pragma once
#include <iostream>
#include <string>
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
	char ItemInRoom;
	bool Occupied;
	vector ConnectedRooms[];
};
// End Room class and construct