#ifndef DELUXEROOM_H
#define DELUXEROOM_H

#include "room.h"

class DeluxeRoom : public Room {
public:
    // Constructor for DeluxeRoom.
    DeluxeRoom(int roomNumber, double price, bool availability);

    // Override the base class method to display DeluxeRoom-specific information shown in deluxeRoom.cpp.
    virtual void displayRoomInfo() const override;
};

#endif
