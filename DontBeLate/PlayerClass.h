#include <iostream>
#include <string>

using namespace std;

//#pragma once

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



// Player Class and Construct:
class Player
{
public:
	string playerName; // What do you want the player to be called?
	string inventory[5]; // See item key
	int timer;
	int playerPosition;
	int floor;
	Player(string &name) :playerName(name)
	{
		timer = 0;
		floor = 1;
		playerPosition = 8;
		for (int i = 0; i < 5; i++)
			inventory[i] = "";
	}
	
};
// End Player Class and Construct