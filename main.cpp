#include <iostream>
#include <string>
#include "userAuthentication.h"
#include "hotel.h"
#include "room.h"
#include "reservation.h"
#include "suiteRoom.h"
#include "deluxeRoom.h"
#include "roomFeature.h" 
#include <vector>


int main() {

    // creates an instance of the Hotel class; names customer
    Hotel customer;

    // Populate the roomFeatures vector with various RoomFeature objects
    std::vector<RoomFeature> roomFeatures;
    roomFeatures.push_back(RoomFeature("Increased Wifi Speeds", 20.0));
    roomFeatures.push_back(RoomFeature("Pool and Gym Access", 30.0));
    roomFeatures.push_back(RoomFeature("Unlimited Snacks", 15.0));
    roomFeatures.push_back(RoomFeature("Movie Theatre Access", 25.0));
    roomFeatures.push_back(RoomFeature("24/7 Room Service", 35.0));
    roomFeatures.push_back(RoomFeature("None", 0.0));

    // vector that stores different UserAuthentication objects
    std::vector<UserAuthentication> customerLogins;

    // Populates the customerLogins vector with various UserAuthentication objects
    customerLogins.push_back(UserAuthentication("aaron", "123"));
    customerLogins.push_back(UserAuthentication("lleyton", "123"));

    //initiates loggedIn as false.
    bool loggedIn = false;


    while (!loggedIn) {


        // Display a welcome message
        std::cout << "---------------------" << std::endl;
        std::cout << "Welcome to the Hotel!" << std::endl;
        std::cout << "---------------------" << std::endl;

        //initiates username and password as string types
        std::string username;
        std::string password;

        // Prompt the user for their username and password
        std::cout << "Please enter your username: ";
        std::cin >> username;

        std::cout << "Please enter your password: ";
        std::cin >> password;

        std::cout << " " << std::endl;

        // Check if the inputted username and password match any instances in customerLogins
        for (const UserAuthentication& user : customerLogins) {
            if (user.getUsername() == username && user.getPassword() == password) {
                loggedIn = true;
                std::cout << "Login successful. Welcome, " << username << "!" << std::endl;
                break; 
            }
        }

        if (!loggedIn) {
            // Display login failure message and offer retry option
            std::cout << "Login failed. Please check your credentials and try again." << std::endl;
            char retry;
            std::cout << "Retry? (Y/N): ";
            std::cin >> retry;

            if (retry != 'Y' && retry != 'y') {
                
                // Exit the program if the user chooses not to retry
                std::cout << "Goodbye. Thankyou for visiting the hotel!" << std::endl;
                break; 
            }
        }
    }


    while (loggedIn) {
        
        while(true && loggedIn) {
        // Display menu options for the logged-in user 
        std::cout << " " << std::endl;
        std::cout << "Menu Options:" << std::endl;
        std::cout << "1. Make a Reservation" << std::endl;
        std::cout << "2. Cancel a Reservation" << std::endl;
        std::cout << "3. Check Room Availability" << std::endl;
        std::cout << "4. Logout" << std::endl;
        std::cout << "Please select an option by entering a number: ";

        //initiates choice as integer type
        int choice;
        
        // takes input from user and allocates it to 'choice'
        std::cin >> choice;
        std::cin.clear();
        std::cout << " " << std::endl;

        
        // switch case to determine different inputes to seperate methods
       switch (choice) {
    case 1:
        std::cout << "Please enter the room number you'd like to reserve: ";
        int roomNumber;
        std::cin >> roomNumber;
        std::cout << " " << std::endl;

        // Check if the selected room is already booked
        if (customer.getRooms()[roomNumber].getRoomAvailability() == 0) {
            std::cout << "This room has already been booked." << std::endl;
        } else {
            std::cout << "Room " << roomNumber << " Details" << std::endl;
            std::cout << "---------------" << std::endl;
            customer.getRooms()[roomNumber].displayRoomInfo();
            std::cout << "---------------" << std::endl;

            //Provides user to add additional room features
            std::cout << "WE ALSO PROVIDE ADDITIONAL ROOM FEATURES" << std::endl;
            std::cout << "TYPE 'add' TO VIEW: " << std::endl;
            std::cout << "Would you like to confirm booking? (Y/N): ";
        
        
            std::string confirm;
            std::cin >> confirm;
            std::cout << " " << std::endl;

            if (confirm == "Y" || confirm == "y") {
                // Make a reservation for the selected room using makeReservation function
                customer.makeReservation(roomNumber);
                std::cout << "------------------------" << std::endl;
                std::cout << "Room successfully booked." << std::endl;
                std::cout << "------------------------" << std::endl;
                std::cout << " " << std::endl;
                break; 

            } else if (confirm == "N" || confirm == "n") {
                
                std::cout << "Exiting the program." << std::endl;
                return 0;
            } else if (confirm == "add") {
                std::cout << "Available Room Features:" << std::endl;
                // Uses for loop to iterate through the roomFeatures vector, displaying each feature and its details (name and cost per night)
                for (int i = 0; i < roomFeatures.size(); i++) {
                    std::cout << i + 1 << ". " << roomFeatures[i].getName() << " - $" << roomFeatures[i].getCost() << " per night" << std::endl;
                    std::cout << " " << std::endl;
                }
                std::cout << "Enter number (1 - 5) to add to reservation: ";

                int featureSelection;
                std::cin >> featureSelection;

                // Switch case to display a message indicating the added features to the room reservation
                switch (featureSelection) {
                    case 1:
                        std::cout << "-----------------------------" << std::endl;
                        std::cout << "Added Features: " << roomFeatures[featureSelection - 1].getName() << std::endl;
                        std::cout << "------------------------" << std::endl;
                        std::cout << "Room successfully booked." << std::endl;
                        std::cout << "------------------------" << std::endl;
                        std::cout << "Enjoy!" << std::endl;
                        break;
                    case 2:
                        std::cout << "-----------------------------------" << std::endl;
                        std::cout << "Added Features: " << roomFeatures[featureSelection - 1].getName() << std::endl;
                        std::cout << "------------------------" << std::endl;
                        std::cout << "Room successfully booked." << std::endl;
                        std::cout << "------------------------" << std::endl;
                        std::cout << "Enjoy!" << std::endl;
                        break;
                    case 3:
                        std::cout << "-----------------------------------" << std::endl;
                        std::cout << "Added Features: " << roomFeatures[featureSelection - 1].getName() << std::endl;
                        std::cout << "------------------------" << std::endl;
                        std::cout << "Room successfully booked." << std::endl;
                        std::cout << "------------------------" << std::endl;
                        std::cout << "Enjoy!" << std::endl;
                        break;
                    case 4:
                        std::cout << "-----------------------------------" << std::endl;
                        std::cout << "Added Features: " << roomFeatures[featureSelection - 1].getName() << std::endl;
                        std::cout << "------------------------" << std::endl;
                        std::cout << "Room successfully booked." << std::endl;
                        std::cout << "------------------------" << std::endl;
                        std::cout << "Enjoy!" << std::endl;
                        break;
                    case 5:
                        std::cout << "-----------------------------------" << std::endl;
                        std::cout << "Added Features: " << roomFeatures[featureSelection - 1].getName() << std::endl;
                        std::cout << "------------------------" << std::endl;
                        std::cout << "Room successfully booked." << std::endl;
                        std::cout << "------------------------" << std::endl;
                        std::cout << "Enjoy!" << std::endl;
                        break;
                    default:
                        std::cout << "Added Features: None " << std::endl;
                }

            } else {
                std::cout << "Invalid input. Please enter Y/y or N/n." << std::endl;
                continue;
            }
        }
    break;

    case 2: // Cancel a Reservation
        std::cout << "You have selected to cancel a reservation." << std::endl;

        // Prompt for the room number to cancel
        std::cout << "Enter the room number you want to cancel: ";
        int reservationID;
        std::cin >> reservationID;
        //checks if the room number given has been booked, to then cancel
        if (customer.getRooms()[reservationID].getRoomAvailability() == 1) {
            std::cout << "This room does not have a booking. " << std::endl;
        } else {
            customer.cancelReservation(reservationID);
            std::cout << "Reservation with ID " << reservationID << " has been canceled." << std::endl;
        }
    break;
    case 3: // Check room avaliability
        std::cout << "You have selected to check room avaliability" << std::endl;
        
        // gives user option to check all, or specific room avaliability.
        std::cout << "1. Check all avaliable Rooms" << std::endl;
        std::cout << "2. Check avaliable 'Standard' Rooms" << std::endl;
        std::cout << "3. Check avaliable 'Deluxe' Rooms" << std::endl;
        std::cout << "4. Check avaliable 'Suite' Rooms" << std::endl;
        std::cout << " " << std::endl;
        std::cout << "5. Back to main menu" << std::endl;
        std::cout << " " << std::endl;

        std::cout << "Please select an option:";

        int option;
        std::cin >> option;

        // List of rooms, which are not reserved are displayed.
        switch (option) {
            // All rooms availabilty
            case 1:
                for (int i = 0; i < 15; i++) {
                    if (customer.getRooms()[i].getRoomAvailability() == true) {
                        customer.getRooms()[i].displayRoomInfo();
                        std::cout << "---------------------- "<< std::endl;
                        
                    }
                }
                break;
            // "Standard" rooms availabilty
            case 2:
                for (int i = 0; i < 5; i++) {
                    if (customer.getRooms()[i].getRoomAvailability() == true) {
                        customer.getRooms()[i].displayRoomInfo();
                        std::cout << "---------------------- "<< std::endl;
                    }
                }
                break;
            // "Deluxe" rooms availabilty
            case 3:
                for (int i = 5; i < 10 ; i++) {
                    if (customer.getRooms()[i].getRoomAvailability() == true) {
                        customer.getRooms()[i].displayRoomInfo();
                        std::cout << "---------------------- "<< std::endl;
                    }
                }

                break;
            // "Suite" rooms availabilty
            case 4:
                for (int i = 10; i < 15; i++) {
                    if (customer.getRooms()[i].getRoomAvailability() == true) {
                        customer.getRooms()[i].displayRoomInfo();
                        std::cout << "---------------------- "<< std::endl;
                    }
                }
                break;

            default: 
                std::cout << "Invalid Input" << std::endl;

            
        }
        break;

    case 4: // Logout
        loggedIn = false;
        std::cout << "Logged out. Thank you for using the hotel booking system." << std::endl;
        break; // Leaves loop

    default:
        std::cout << "Invalid choice. Please select a valid option (1-4)." << std::endl;
                // Clear the input buffer and ignore any invalid input to then reprompt the user
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
          
}   
    }   
}
return 0;
}
