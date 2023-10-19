#include "deluxeRoom.h"

// Constructor for DeluxeRoom, taking parameters of roomNumber, price and availbility
DeluxeRoom::DeluxeRoom(int roomNumber, double price, bool availability)
    : Room(roomNumber, "Deluxe", price, availability) {
    
}

// Display information about the DeluxeRoom.
void DeluxeRoom::displayRoomInfo() const {
    Room::displayRoomInfo(); // Call the base class method to display common room information.
    std::cout << "The Deluxe Room is one of our most popular rooms, fulfilling any stayers with a satisfying experience, guaranteed." << std::endl;
}
