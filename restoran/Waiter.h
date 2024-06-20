#ifndef WAITER_H
#define WAITER_H

#include "Employee.h"

class Waiter : public Employee {
public:
    Waiter(const std::string& login, const std::string& password);
    void performRole() override; // ��������������� ����������� �������
    void completeOrder();
};

#endif // WAITER_H
