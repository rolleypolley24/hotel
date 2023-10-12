#include "room.h"

Room::Room(int number, const std::string& type, double cost)
    : room_number(number), room_type(type), price(cost), availability(true) {
}

