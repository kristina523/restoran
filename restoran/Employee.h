#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>

class Employee {
private:
    std::string login;
    std::string password;
    std::string role;

public:
    Employee(const std::string& login, const std::string& password, const std::string& role);
    virtual void performRole(); 
    std::string getLogin() const;
    std::string getPassword() const;
    std::string getRole() const;
};

#endif 
