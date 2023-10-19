#ifndef USERAUTHENTICATION_H
#define USERAUTHENTICATION_H

#include <string>

class UserAuthentication {
public:
    UserAuthentication(const std::string& _username, const std::string& _password);

    bool authenticateUser(const std::string& inputUsername, const std::string& inputPassword) const;
    void changeUsername(const std::string& newUsername);
    void changePassword(const std::string& newPassword);
    void manageUserRoles(); // You can implement role management as needed.
    std::string getUsername() const;
    std::string setUsername();
    std::string getPassword() const;
    std::string setPassword();
    int getNumberOfCustomerLogins();




private:
    std::string username;
    std::string password;
    std::vector<UserAuthentication> customerLogins;
    

    
};

#endif // USERAUTHENTICATION_H
