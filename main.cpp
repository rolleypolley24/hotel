#include <iostream>
#include "hotel.h"


int main() {

    Hotel cust;

    std::cout << "Welcome to the Hilton Hotel! How could I help you?\n"
          << "option 1:\n"
          << "option 2:\n"
          << "option 3:\n"
          << "option 4:" << std::endl;
    
    while (true) {
        std::cout << "Enter 1 to make a reservation, 0 to exit: ";
        int choice;
        std::cin >> choice;
        if (choice == 0) {
            break;
        }

        int reservation_id;
        int check_in_date;
        int check_out_date;

        std::cout << "Enter reservation ID: ";
        std::cin >> reservation_id;
        std::cout << "Enter check-in date (yyyymmdd): ";
        std::cin >> check_in_date;
        std::cout << "Enter check-out date (yyyymmdd): ";
        std::cin >> check_out_date;

        cust.make_reservation(reservation_id, check_in_date, check_out_date);
    }

    return 0;
}
