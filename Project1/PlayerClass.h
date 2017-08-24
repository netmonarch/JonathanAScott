#include <iostream>
#include <string>

// pragma once
// Player Class for Project, "Don't Be Late"

// ************ Item Key ***********
/*
	k = car keys		
	c = coffee beans	
	s = clothes			
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
	string PlayerName; // What do you want the player to be called?
	char PlayerGender; // Gender of the player; "M" for male, "F" for female
	int PlayerLocation; // Where is the player in the house? (See Location key)
	char Inventory[10]; // See item key
};

Player(string Name, char Gender)
{
	PlayerName = Name;
	PlayerGender = Gender;
	PlayerLocation = 1;
	Inventory = {"", "", "", "", "", "", "", "", "", ""}
}
// End Player Class and Construct