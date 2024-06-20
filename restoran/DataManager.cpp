#include "DataManager.h"
#include <fstream>
#include <iostream>
#include <wtypes.h>
void DataManager::saveData(const std::vector<Order>& orders, const std::vector<MenuItem>& menu, const std::vector<Product>& products) {
    std::ofstream outFile;

    // ���������� �������
    outFile.open("orders.txt");
    if (outFile.is_open()) {
        for (const auto& order : orders) {
            outFile << order.getOrderDetails() << "\n";
        }
        outFile.close();
    }
    else {
        std::cerr << "���������� ������� ����:orders.txt." << std::endl;
    }

    // ���������� ����
    outFile.open("menu.txt");
    if (outFile.is_open()) {
        for (const auto& item : menu) {
            outFile << item.getItemDetails() << "\n";
        }
        outFile.close();
    }
    else {
        std::cerr << "���������� ������� ����: menu.txt." << std::endl;
    }

    // ���������� ���������
    outFile.open("products.txt");
    if (outFile.is_open()) {
        for (const auto& product : products) {
            outFile << product.getProductDetails() << "\n";
        }
        outFile.close();
    }
    else {
        std::cerr << "���������� ������� ����: products.txt." << std::endl;
    }
}

void DataManager::loadData(std::vector<Order>& orders, std::vector<MenuItem>& menu, std::vector<Product>& products) {
    std::ifstream inFile;
    std::string line;

    // �������� �������
    inFile.open("orders.txt");
    if (inFile.is_open()) {
        orders.clear();
        while (std::getline(inFile, line)) {
            // �����������, ��� ����������� Order ��������� ������ � �������� ������
            Order order(line);
            orders.push_back(order);
        }
        inFile.close();
    }
    else {
        std::cerr << "���������� ������� ����: orders.txt" << std::endl;
    }

    // �������� ����
    inFile.open("menu.txt");
    if (inFile.is_open()) {
        menu.clear();
        while (std::getline(inFile, line)) {
            // �����������, ��� ����������� MenuItem ��������� ������ � �������� ������ ����
            MenuItem item(line);
            menu.push_back(item);
        }
        inFile.close();
    }
    else {
        std::cerr << "���������� ������� ����: menu.txt" << std::endl;
    }

    // �������� ���������
    inFile.open("products.txt");
    if (inFile.is_open()) {
        products.clear();
        while (std::getline(inFile, line)) {
            // �����������, ��� ����������� Product ��������� ������ � �������� ��������
            Product product(line);
            products.push_back(product);
        }
        inFile.close();
    }
    else {
        std::cerr << "���������� ������� ����: products.txt" << std::endl;
    }
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
}