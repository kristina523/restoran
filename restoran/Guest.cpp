#include "Guest.h"
#include <iostream>
#include <wtypes.h>

Guest::Guest(const std::string& login, const std::string& password)
    : login(login), password(password) {}

std::string Guest::getLogin() const {
    return login;
}

void Guest::performRole() const {
    // ���������� ������ ���������� ���� �����
    std::cout << "����� " << login << " ��������� ���� �����." << std::endl;
    // �������������� ��������, ��������� � ����� �����
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
}
