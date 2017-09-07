#include <iostream>
#include "PlayerClass.h"
#include "RoomClass.h"

using namespace std;

#pragma once

int main()
{
	//Connected Rooms
	const string roomBR[2] = {"Bathroom", "Hallway"};
	Room bedRoom("bedroom", 'k', &roomBR);
	return 0;

}