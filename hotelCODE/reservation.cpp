#include "reservation.h"

// Constructor to initialize a Reservation with specific parameters of checkInDate, checkOutDate and Room Number
Reservation::Reservation(int _reservationId, const std::string& _checkInDate, const std::string& _checkOutDate, Room* _associatedRoom, const std::vector<RoomFeature>& _selectedFeatures)
    : reservationId(_reservationId), checkInDate(_checkInDate), checkOutDate(_checkOutDate), room(_associatedRoom), selectedFeatures(_selectedFeatures) {
    
}

// returns reservationID
int Reservation::getReservationId() const {
    return reservationId;
}

// returns checkInDate
std::string Reservation::getCheckInDate() const {
    return checkInDate;
}

//returns checkOutDate
std::string Reservation::getCheckOutDate() const {
    return checkOutDate;
}

//returns selectedFeatures
const std::vector<RoomFeature>& Reservation::getSelectedFeatures() const {
    return selectedFeatures;
}

