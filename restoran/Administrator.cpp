#include "Administrator.h"
#include <iostream>
#include <wtypes.h>

Administrator::Administrator(const std::string& login, const std::string& password)
    : Employee(login, password, "Администратор") {}

void Administrator::performRole() {
    std::cout << "Выполнение ролей администратора" << std::endl;
}

void Administrator::editMenu() {
    std::cout << "Редактирование меню" << std::endl;
    std::cout << "Добавление нового пункта меню: 'Мясная пицца'" << std::endl;
    std::cout << "Изменение цены пункта меню: 'Гавайская пицца' на 999 рублей" << std::endl;
    std::cout << "Удаление пункта меню: 'Сырная пицца'" << std::endl;
}

void Administrator::manageProducts() {
    std::cout << "Управление продуктами" << std::endl;
    std::cout << "Добавление нового продукта: 'Мясная пицца' по цене 1200 рублей" << std::endl;
    std::cout << "Изменение цены продукта: 'Гавайская пицца' на 1000 рублей" << std::endl;
    std::cout << "Удаление продукта: 'Сырная пицца'" << std::endl;
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
}