#include "User.h"
#include <wtypes.h>

User::User(const std::string& login, const std::string& password)
    : login(login), password(password) {}

bool User::loginUser() {
    
    return (this->login == "kris" && this->password == "123");
    return true; 
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
}
