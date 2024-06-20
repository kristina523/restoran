#include "Waiter.h"
#include <iostream>
#include <wtypes.h>

Waiter::Waiter(const std::string& login, const std::string& password)
    : Employee(login, password, "��������") {}

void Waiter::performRole() {
    std::cout << "�������� " << getLogin() << " ��������� ���� ���������." << std::endl;
    // ���������� ������������� �������� ���������
}

void Waiter::completeOrder() {
    std::cout << "�������� " << getLogin() << " �������� �����." << std::endl;
    // ���������� ���������� ������
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
}
