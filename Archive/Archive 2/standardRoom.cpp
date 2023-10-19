#include "standardRoom.h"
#include "room.h"
#include <iostream>
using namespace std;


// Constructor for StandardRoom class, initializing its attributes
StandardRoom::StandardRoom(int roomNumber, double price, bool availability)
    : Room(roomNumber, "Standard", price, availability) {
    
}
// Function to display information about a StandardRoom
void StandardRoom::displayRoomInfo() const { 
    Room::displayRoomInfo();
    std::cout << "The Standard Room offers a comfortable stay with basic amenities, making it a perfect choice for travelers looking for an affordable and pleasant experience." << std::endl;
}