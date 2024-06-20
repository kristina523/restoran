#include "Order.h"
#include <wtypes.h>

Order::Order(const std::string& name)
    : orderName(name) {}

std::string Order::getOrderDetails() const {
    return "�����: " + orderName; 
}
Order Order::createFromDetails(const std::string& details) {
    return Order(details); // ��������������, ��� details �������� ��� ������
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
}
