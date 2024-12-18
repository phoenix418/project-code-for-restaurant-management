#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <thread>
#include "MenuItem.h"
#include "Order.h"
#include "Customer.h"  
#include "Restaurant.h"
#include "Admin.h"
#include "AdminManager.h"
using namespace std;


int main() {
    setlocale(LC_ALL, "rus");
    MenuItem::drawMenu();
    const string adminFile = "adminFile.txt";
    AdminManager adminManager(adminFile);
    int choice;
    do {
        cout << "1. Регистрация администратора" << endl;
        cout << "2. Вход администратора" << endl;
        cout << "3. Выход" << endl;
        cout << "Выберите действие: ";
        cin >> choice;
        switch (choice) {
        case 1:
            adminManager.registerAdmin();
            break;
        case 2:
            if (adminManager.loginAdmin()) {
            }
            break;
        case 3:
            adminManager.logoutAdmin();
            break;
        default:
            cout << "Неверный выбор, попробуйте снова." << endl;
        }
    } while (choice != 3);
    Restaurant restaurant;
    restaurant.loadMenu("menu.txt");
    string customerName;
    cout << "Введите имя клиента: ";
    getline(cin, customerName);
    cout << "\x1B[2J\x1B[H";
    Customer customer(customerName);
    restaurant.createOrder(customer);
    return 0;
}
