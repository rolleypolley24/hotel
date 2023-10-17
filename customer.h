#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <string>

// Customer class 
class Customer {
public:
    // Constructor for initializing a customer with parameters of name, contact info, and customer IDD.
    Customer(const std::string& name, const std::string& contactInfo, int customerId);

    // Gets the name of the customer.
    std::string getName() const;


private:
    std::string name;        // Initiates name as a string type.
    std::string contactInfo; // Initiates contactInfo as a string type.
    int customerId;          // Initiates customerID as an integer type.
};

#endif
