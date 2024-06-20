#include "Chef.h"
#include <iostream>
#include <wtypes.h>

Chef::Chef(const std::string& login, const std::string& password)
    : Employee(login, password, "Шеф-повар") {}

void Chef::performRole() {
    std::cout << "Шеф-повар " << getLogin() << " исполняет роль повара." << std::endl;
}

void Chef::startCooking() {
    std::cout << "Шеф-повар " << getLogin() << " начал готовить заказ." << std::endl;
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
}
