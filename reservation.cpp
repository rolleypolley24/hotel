
#include "reservation.h"
#include "room.h"

Reservation::Reservation(int id, int check_in, int check_out, Room* room)
    : reservation_id(id), check_in_date(check_in), check_out_date(check_out), reserved_room(room) {
}

