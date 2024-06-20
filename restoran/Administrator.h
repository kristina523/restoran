#pragma once
#include "Employee.h"

class Administrator : public Employee {
public:
    Administrator(const std::string& login, const std::string& password);
    void performRole() override;
    void editMenu();
    void manageProducts();
};
