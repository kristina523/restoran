#include "MenuItem.h"
#include <wtypes.h>

MenuItem::MenuItem(const std::string& name)
    : itemName(name) {}

std::string MenuItem::getItemDetails() const {
    return "�������: " + itemName; // ������ ���������� ������
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
}
