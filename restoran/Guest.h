#ifndef GUEST_H
#define GUEST_H

#include <string>

class Guest {
private:
    std::string login;
    std::string password;

public:
    Guest(const std::string& login, const std::string& password);
    std::string getLogin() const;
    void performRole() const; // ������ ������ ��� ���������� ���� �����
};

#endif // GUEST_H
