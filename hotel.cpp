#include "hotel.h"
#include "room.h"

// Constructor to initialize the Hotel with standard, deluxe, and suite rooms.
Hotel::Hotel() {
    // Initialize 5 standard rooms
    for (int i = 0; i < 5; i++) {
        rooms.push_back(Room(i, "Standard", 100.0, true));
    }

    // Initialize  5 deluxe rooms
    for (int i = 6; i < 11; i++) {
        rooms.push_back(Room(i, "Deluxe", 200.0, true));
    }

    // Initialize 5 suite rooms
    for (int i = 12; i < 17; i++) {
        rooms.push_back(Room(i, "Suite", 300.0, true));
    }
}

// Find a room by room number and return whether it exists.
void Hotel::findRoom(int roomNumber) {
    for (Room& room : rooms) {
        if (room.getRoomNumber() == roomNumber) {
            std::cout << "true" << std::endl;
            return;
        }
    }
    std::cout << "false" << std::endl;
}

// Find a room by room number and return a constant pointer to it.
const Room* Hotel::findRoom(int roomNumber) const {
    for (const Room& room : rooms) {
        if (room.getRoomNumber() == roomNumber) {
            return &room;
        }
    }
    return nullptr;
}



// sets a room as reserved.
void Hotel::makeReservation(int roomNumber) {
    rooms[roomNumber].setRoomAvailability(false);
}

// Cancel a reservation for a room (changes availbility).
void Hotel::cancelReservation(int reservationID) {
    rooms[reservationID].setRoomAvailability(true);
}



//  returns the 'rooms' vector.
const std::vector<Room>& Hotel::getRooms() const {
    return rooms;
}

// Get the total number of rooms in the hotel (in vector).
int Hotel::getNumberOfRooms() {
    return rooms.size();
}

// Get the room type for a given room number.
std::string Hotel::getRoomType(int roomNumber) {
    return rooms[roomNumber].getRoomType();
}
