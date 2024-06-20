#ifndef PRODUCT_H
#define PRODUCT_H

#include <string>

class Product {
private:
    std::string productName;

public:
    Product(const std::string& name);
    std::string getProductDetails() const;
};

#endif // PRODUCT_H
