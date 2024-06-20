#include "Waiter.h"
#include <iostream>
#include <wtypes.h>

Waiter::Waiter(const std::string& login, const std::string& password)
    : Employee(login, password, "Официант") {}

void Waiter::performRole() {
    std::cout << "Официант " << getLogin() << " выполняет роль официанта." << std::endl;
    // Реализация специфических действий официанта
}

void Waiter::completeOrder() {
    std::cout << "Официант " << getLogin() << " выполнил заказ." << std::endl;
    // Реализация завершения заказа
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
}
