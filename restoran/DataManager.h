#ifndef DATAMANAGER_H
#define DATAMANAGER_H

#include <vector>
#include "Order.h"      
#include "MenuItem.h"   
#include "Product.h"

class DataManager {
public:
    void saveData(const std::vector<Order>& orders, const std::vector<MenuItem>& menu, const std::vector<Product>& products);
    void loadData(std::vector<Order>& orders, std::vector<MenuItem>& menu, std::vector<Product>& products);
};

#endif // DATAMANAGER_H
