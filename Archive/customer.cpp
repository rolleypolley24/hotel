#include "customer.h"

// Customer Constructor
Customer::Customer(const std::string& _name, const std::string& _contactInfo, int _customerId)
    : name(_name), contactInfo(_contactInfo), customerId(_customerId) {
    // Initialize the member variables of the Customer object with the provided values.
}

// Get the name of the customer
std::string Customer::getName() const {
    // returns the name of the customer.
    return name;
}
