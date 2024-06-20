#ifndef ORDER_H
#define ORDER_H

#include <string>

class Order {
private:
    std::string orderName;

public:
    Order(const std::string& name);
    std::string getOrderDetails() const;
    static Order createFromDetails(const std::string& details); // ����������� ����� ��� �������� �� ������
};

#endif // ORDER_H
