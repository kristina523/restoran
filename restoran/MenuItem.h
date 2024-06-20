#ifndef MENUITEM_H
#define MENUITEM_H

#include <string>

class MenuItem {
private:
    std::string itemName;

public:
    MenuItem(const std::string& name);
    std::string getItemDetails() const;
};

#endif // MENUITEM_H
