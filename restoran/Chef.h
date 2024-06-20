#pragma once
#include "Employee.h"

class Chef : public Employee {
public:
    Chef(const std::string& login, const std::string& password);
    void performRole() override;
    void startCooking();
};
