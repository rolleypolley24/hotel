#ifndef ROOM_H
#define ROOM_H
#include <iostream>
#include <string>

class Room {
public:
    Room(int roomNumber, const std::string& roomType, double price, bool availability);

    int getRoomNumber() const;
    std::string getRoomType() const;
    double getPrice() const;
    
    bool getRoomAvailability() const;
    void setRoomAvailability(bool request);

    virtual void displayRoomInfo() const;

    
private:
    int roomNumber;
    std::string roomType;
    double price;
    bool availability;
};

#endif