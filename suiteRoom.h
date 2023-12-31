#ifndef SUITEROOM_H
#define SUITEROOM_H

#include "room.h"

class SuiteRoom : public Room {
public:
    SuiteRoom(int roomNumber, double price, bool availability);

    virtual void displayRoomInfo() const override;
};

#endif 
