#ifndef ROOM_H
#define ROOM_H
#include<iostream>
#include <string.h>

class Room {
private:
    int room_number;
    std::string room_type;
    double price;
    bool availability;

public:
    Room(int number, const std::string& type, double cost);
};


#endif