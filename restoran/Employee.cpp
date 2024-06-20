#include "Employee.h"
#include <wtypes.h>

Employee::Employee(const std::string& login, const std::string& password, const std::string& role)
    : login(login), password(password), role(role) {}

void Employee::performRole() {
}

std::string Employee::getLogin() const {
    return login;
}

std::string Employee::getPassword() const {
    return password;
}

std::string Employee::getRole() const {
    return role;
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
}
