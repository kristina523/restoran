#include "Product.h"
#include <wtypes.h>

Product::Product(const std::string& name)
    : productName(name) {}

std::string Product::getProductDetails() const {
    return "�������: " + productName; // ������ ���������� ������
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
}
