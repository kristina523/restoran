#include "Guest.h"
#include <iostream>
#include <wtypes.h>

Guest::Guest(const std::string& login, const std::string& password)
    : login(login), password(password) {}

std::string Guest::getLogin() const {
    return login;
}

void Guest::performRole() const {
    // Реализация метода выполнения роли гостя
    std::cout << "Гость " << login << " исполняет роль гостя." << std::endl;
    // Дополнительные действия, связанные с ролью гостя
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
}
