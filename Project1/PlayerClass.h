#include <iostream>

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



// Player Class and Construct:
class Player
{
public:
	string playerName; // What do you want the player to be called?
	char playerGender; // Gender of the player; "M" for male, "F" for female
	char inventory[10]; // See item key
	int timer;
	Player(string name, char gender)
	{
		playerName = name;
		playerGender = gender;
		timer = 0;
		for (int i = 0; i < 10; i++)
			inventory[i] = 'x';
	}
	void increaseTimer(int timeWasted)
	{
		timer += timeWasted;
	}
	int returnTime()
	{
		return timer;
	}
};
// End Player Class and Construct