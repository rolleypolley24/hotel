#ifndef RESERVATION_H
#define RESERVATION_H



#include<iostream>
#include <string.h>
#include "room.h"

class Reservation {
    
    private:
        int reservationID;
        int checkInDate;
        int checkOutDate;
    
    public:
        Reservation(int id, int check_in, int check_out, Room* room);
        int get_reservationID();
        int get_checkInDate();
        int get_checkOutDate();

};


#endif