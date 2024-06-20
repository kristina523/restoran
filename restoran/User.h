#pragma once
#include <string>

class User {
public:
    User(const std::string& login, const std::string& password);
    virtual ~User() = default;

    virtual bool loginUser() = 0;

protected:
    std::string login; 
    std::string password; 
};
