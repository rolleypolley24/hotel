#include "userAuthentication.h"
#include "room.h"

UserAuthentication::UserAuthentication(const std::string& _username, const std::string& _password)
    : username(_username), password(_password){
    // Constructor initializes user authentication attributes
}

bool UserAuthentication::authenticateUser(const std::string& inputUsername, const std::string& inputPassword) const {
    // Implement authentication logic here
    return username == inputUsername && password == inputPassword;
}

void UserAuthentication::changeUsername(const std::string& newUsername) {
    username = newUsername;
}

void UserAuthentication::changePassword(const std::string& newPassword) {
    password = newPassword;
}

void UserAuthentication::manageUserRoles() {
    // Implement user role management logic as needed
    // You can define roles, permissions, and access control here.
}

std::string UserAuthentication::getUsername() const {
    return username;
}


std::string UserAuthentication::getPassword() const {
    return password;
}


int UserAuthentication::getNumberOfCustomerLogins() {
    return customerLogins.size();
}