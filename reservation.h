#ifndef RESERVATION_H
#define RESERVATION_H

#include "room.h"
#include "roomFeature.h" // Include the room feature header
#include <string>
#include <vector>

class Reservation {
public:
    Reservation(int reservationId, const std::string& checkInDate, const std::string& checkOutDate, Room* associatedRoom, const std::vector<RoomFeature>& selectedFeatures); // Add the selectedFeatures parameter

    int getReservationId() const;
    std::string getCheckInDate() const;
    std::string getCheckOutDate() const;
    Room* getAssociatedRoom() const;
    const std::vector<RoomFeature>& getSelectedFeatures() const; 

    double calculateTotalPrice() const;

private:
    int reservationId;
    std::string checkInDate;
    std::string checkOutDate;
    Room* room;
    std::vector<RoomFeature> selectedFeatures; 

    
};

#endif 
