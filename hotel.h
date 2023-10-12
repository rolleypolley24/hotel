#ifndef HOTEL_H
#define HOTEL_H

#include<iostream>
#include <string>
#include "room.h"
#include "reservation.h"

class Hotel {
    private:
    std::vector<Room> rooms;
    std::vector<Reservation> reservations;

    public:
    Hotel();
    void make_reservation(int reservation_id, int check_in, int check_out);
    void check_availability(int roomNumber, int check_in, int check_out);
    void remove_reservation(std::string name, int number, int roomNumber);

};

#endif