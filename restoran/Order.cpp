#include "Order.h"
#include <wtypes.h>

Order::Order(const std::string& name)
    : orderName(name) {}

std::string Order::getOrderDetails() const {
    return "Заказ: " + orderName; 
}
Order Order::createFromDetails(const std::string& details) {
    return Order(details); // Предполагается, что details содержит имя заказа
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
}
