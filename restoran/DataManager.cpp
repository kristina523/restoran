#include "DataManager.h"
#include <fstream>
#include <iostream>
#include <wtypes.h>
void DataManager::saveData(const std::vector<Order>& orders, const std::vector<MenuItem>& menu, const std::vector<Product>& products) {
    std::ofstream outFile;

    // Сохранение заказов
    outFile.open("orders.txt");
    if (outFile.is_open()) {
        for (const auto& order : orders) {
            outFile << order.getOrderDetails() << "\n";
        }
        outFile.close();
    }
    else {
        std::cerr << "Невозможно открыть файл:orders.txt." << std::endl;
    }

    // Сохранение меню
    outFile.open("menu.txt");
    if (outFile.is_open()) {
        for (const auto& item : menu) {
            outFile << item.getItemDetails() << "\n";
        }
        outFile.close();
    }
    else {
        std::cerr << "Невозможно открыть файл: menu.txt." << std::endl;
    }

    // Сохранение продуктов
    outFile.open("products.txt");
    if (outFile.is_open()) {
        for (const auto& product : products) {
            outFile << product.getProductDetails() << "\n";
        }
        outFile.close();
    }
    else {
        std::cerr << "Невозможно открыть файл: products.txt." << std::endl;
    }
}

void DataManager::loadData(std::vector<Order>& orders, std::vector<MenuItem>& menu, std::vector<Product>& products) {
    std::ifstream inFile;
    std::string line;

    // Загрузка заказов
    inFile.open("orders.txt");
    if (inFile.is_open()) {
        orders.clear();
        while (std::getline(inFile, line)) {
            // Предположим, что конструктор Order принимает строку с деталями заказа
            Order order(line);
            orders.push_back(order);
        }
        inFile.close();
    }
    else {
        std::cerr << "Невозможно открыть файл: orders.txt" << std::endl;
    }

    // Загрузка меню
    inFile.open("menu.txt");
    if (inFile.is_open()) {
        menu.clear();
        while (std::getline(inFile, line)) {
            // Предположим, что конструктор MenuItem принимает строку с деталями пункта меню
            MenuItem item(line);
            menu.push_back(item);
        }
        inFile.close();
    }
    else {
        std::cerr << "Невозможно открыть файл: menu.txt" << std::endl;
    }

    // Загрузка продуктов
    inFile.open("products.txt");
    if (inFile.is_open()) {
        products.clear();
        while (std::getline(inFile, line)) {
            // Предположим, что конструктор Product принимает строку с деталями продукта
            Product product(line);
            products.push_back(product);
        }
        inFile.close();
    }
    else {
        std::cerr << "Невозможно открыть файл: products.txt" << std::endl;
    }
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
}