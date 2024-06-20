#include "Administrator.h"
#include <iostream>
#include <wtypes.h>

Administrator::Administrator(const std::string& login, const std::string& password)
    : Employee(login, password, "�������������") {}

void Administrator::performRole() {
    std::cout << "���������� ����� ��������������" << std::endl;
}

void Administrator::editMenu() {
    std::cout << "�������������� ����" << std::endl;
    std::cout << "���������� ������ ������ ����: '������ �����'" << std::endl;
    std::cout << "��������� ���� ������ ����: '��������� �����' �� 999 ������" << std::endl;
    std::cout << "�������� ������ ����: '������ �����'" << std::endl;
}

void Administrator::manageProducts() {
    std::cout << "���������� ����������" << std::endl;
    std::cout << "���������� ������ ��������: '������ �����' �� ���� 1200 ������" << std::endl;
    std::cout << "��������� ���� ��������: '��������� �����' �� 1000 ������" << std::endl;
    std::cout << "�������� ��������: '������ �����'" << std::endl;
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
}