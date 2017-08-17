#include <iostream>
#include <string>

using namespace std;

// ---------- PLAYER CLASS ---------
// What are the relevant attributes of the Player? (attributes)
// What can the player do? (methods)
// Examples include: movement, picking an item up, opening a door
class Player
{
private:
	string PlayerName; // What do you want the player to be called?
	char PlayerGender; // Gender of the player.

};

// ---------- ITEM CLASS ---------
// What is the item's name? (attribute)
// What is the item's purpose? (methods)
class Item
{
private:
	string ItemName;
};

// ---------- ROOM CLASS ---------
// What is in a room? (attributes)
// Keys are on a key rack in the kitchen
// Clothes are in a dresser in the bedroom
// Shower gel is in a cabinet in the bathroom
// What is the player capable of interacting with in this room? (methods)
// Examples include: what time penalties does this room impose?
// What interactions cost what amount of time?
class Room
{
private:
	Item items; // an array of interactable "pick-up" items in a room

};

// ---------- OBSTACLE CLASS--------
// Does an obstacle really need attributes outside of a name?
// They are meant to "be in the way" after all...
// How does the obstacle get in the way? (methods)
// The player may need an item from a Room
/* Deprecated class - no use at the moment
class Obstacle
{
private:
	string ObstacleName;
};
*/

// ---------- TIMER FUNCTION ---------
// What is the current time the player is at? (attributes)
// How does the timer interact with the player? (methods)
// for example, is it gameover after a certain time?
// Are certain penalties imposed if a time threshold is not met?
function Timer()
{
}


// ---------- MAIN PROGRAM STARTS HERE------
int main()
{
	return 0;
}
