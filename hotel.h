#ifndef HOTEL_H
#define HOTEL_H

#include "room.h"
#include "reservation.h"
#include "userAuthentication.h"
#include <vector>

class Hotel {
public:
    Hotel();

    // Room management
    void addRoom(const Room& room);
    void removeRoom(int roomNumber);
    void findRoom(int roomNumber);
    int getNumberOfRooms();
    std::string getRoomType(int roomNumber);
    const Room* findRoom(int roomNumber) const; // Const version

    

    // Reservation management
    void makeReservation(int roomNumber);
    void cancelReservation(int reservationId);
    const std::vector<Room>& getRooms() const;
    

private:
    // initiation of vectors of Room and Reservation instances
    std::vector<Room> rooms;
    std::vector<Reservation> reservations;
    

    
};

#endif 
