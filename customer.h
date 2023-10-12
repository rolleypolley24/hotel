#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <iostream>
#include <string>

class Customer {
    private:
        string name;
        int phoneNumber;
        string address;

    public:
        string get_name();
        int get_phoneNumber();
        string get_address();

};

#endif