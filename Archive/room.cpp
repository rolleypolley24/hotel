#include "room.h"
#include <iostream>

Room::Room(int _roomNumber, const std::string& _roomType, double _price, bool _availability)
    : roomNumber(_roomNumber), roomType(_roomType), price(_price), availability(_availability) {
    // Constructor initializes common attributes
}

//returns roomNumber
int Room::getRoomNumber() const {
    return roomNumber;
}
//returns roomType
std::string Room::getRoomType() const {
    return roomType;
}
//returns price
double Room::getPrice() const {
    return price;
}
//returns availbility
bool Room::getRoomAvailability() const {
    return availability;
}
//returns sets room avilbility
void Room::setRoomAvailability(bool request) {
    availability = request;
}
// displays the room info, inclduing room number, room type, availability and price per night
void Room::displayRoomInfo() const {
    std::cout << "Room Number: " << roomNumber << std::endl;
    std::cout << "Room Type: " << roomType << std::endl;
    std::cout << "Availability: " << (availability ? "Available" : "Occupied") << std::endl;
    std::cout << "Price: "<< "$" << price << " per night"<<std::endl; 
}


