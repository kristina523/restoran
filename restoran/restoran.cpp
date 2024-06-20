#include <iostream>
#include "Guest.h"
#include "Administrator.h"
#include "Chef.h"
#include "Waiter.h"
#include "DataManager.h"
#include <wtypes.h>

int main() {
    // Создаем объекты различных ролей
    Guest guest("guest_login", "guest_password");
    Administrator admin("admin_login", "admin_password");
    Chef chef("chef_login", "chef_password");
    Waiter waiter("waiter_login", "waiter_password");

    // Демонстрация работы с ролями
    std::cout << "Гостевой вход: " << guest.getLogin() << std::endl;
    std::cout << "Логин администратора: " << admin.getLogin() << std::endl;
    std::cout << "Вход шеф-повара: " << chef.getLogin() << std::endl;
    std::cout << "Логин официанта: " << waiter.getLogin() << std::endl;

    // Выполнение роли для каждого работника
    std::cout << "\nИсполняющие роли:\n";
    guest.performRole();    
    admin.performRole();   
    chef.performRole(); 
    waiter.performRole(); 

    // Работа с данными
    DataManager dataManager;

    // Пример данных для сохранения
    std::vector<Order> orders = { Order("заказ1"), Order("заказ2") };
    std::vector<MenuItem> menu = { MenuItem("элемент1"), MenuItem("элемент2") };
    std::vector<Product> products = { Product("продукт1"), Product("продукт2") };

    // Сохранение данных
    std::cout << "\nСохранение данных...\n";
    dataManager.saveData(orders, menu, products);

    // Загрузка данных
    std::cout << "\nЗагрузка данных...\n";
    std::vector<Order> loadedOrders;
    std::vector<MenuItem> loadedMenu;
    std::vector<Product> loadedProducts;
    dataManager.loadData(loadedOrders, loadedMenu, loadedProducts);

    // Вывод загруженных данных (просто для демонстрации)
    std::cout << "\nЗагружено заказов:\n";
    for (const auto& order : loadedOrders) {
        std::cout << order.getOrderDetails() << std::endl;
    }

    std::cout << "\nЗагруженное меню:\n";
    for (const auto& item : loadedMenu) {
        std::cout << item.getItemDetails() << std::endl;
    }

    std::cout << "\nЗагруженные продукты:\n";
    for (const auto& product : loadedProducts) {
        std::cout << product.getProductDetails() << std::endl;
        SetConsoleCP(1251);
        SetConsoleOutputCP(1251);
    }

    return 0;
}
