#include "Chef.h"
#include <iostream>
#include <wtypes.h>

Chef::Chef(const std::string& login, const std::string& password)
    : Employee(login, password, "���-�����") {}

void Chef::performRole() {
    std::cout << "���-����� " << getLogin() << " ��������� ���� ������." << std::endl;
}

void Chef::startCooking() {
    std::cout << "���-����� " << getLogin() << " ����� �������� �����." << std::endl;
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
}
