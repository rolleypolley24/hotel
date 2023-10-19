#include "suiteRoom.h"

// Constructor for SuiteRoom class, initializing its attributes
SuiteRoom::SuiteRoom(int roomNumber, double price, bool availability)
    : Room(roomNumber, "Suite", price, availability) {
    
}
// Function to display information about a SuiteRoom
void SuiteRoom::displayRoomInfo() const {
    Room::displayRoomInfo();
    std::cout << "The Suite Room offers a wide range of benefits that can accompany and familys' dream stay! Including greater dining space, inbuilt activities and included room service, the suite room will ensure a luxurious experience." << std::endl;
}
