#ifndef STANDARDROOM_H
#define STANDARDROOM_H

#include "room.h"

class StandardRoom : public Room {
public:
    StandardRoom(int roomNumber, double price, bool availability);

    virtual void displayRoomInfo() const override;
};

#endif