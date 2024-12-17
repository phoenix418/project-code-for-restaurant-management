#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <thread>
#include "MenuItem.h"
#include "Order.h"
#include "Customer.h"
#include "Restaurant.h"

using namespace std;


MenuItem::MenuItem(string n, double p, string ing) : name(n), price(p), ingredients(ing) {}


void MenuItem::displayInfo() {
    cout << name << " - " << price << " (Состав: " << ingredients << ")" << endl;
}


double MenuItem::getPrice() {
    return price;
}


string MenuItem::getName() {
    return name;
}


Order::Order(int id) : orderID(id), totalPrice(0.0) {}


void Order::addItem(MenuItem item) {
    items.push_back(item);
    totalPrice += item.getPrice();
}


void Order::removeItem(int index) {
    if (index >= 0 && index < items.size()) {
        totalPrice -= items[index].getPrice();
        items.erase(items.begin() + index);
    }
}


void Order::displayOrder() {
    cout << "Заказ ID: " << orderID << endl;
    cout << "Содержимое заказа:" << endl;
    for (int i = 0; i < items.size(); i++) {
        items[i].displayInfo();
    }
    cout << "Общая стоимость: " << totalPrice << endl;
}


size_t Order::getItemCount() {
    return items.size();
}


MenuItem Order::getItem(int index) {
    return items[index];
}



Customer::Customer(string n) : name(n) {}


void Customer::displayInfo() {
    cout << "Клиент: " << name << endl;
}


string Customer::getName() {
    return name;
}


void Restaurant::loadMenu(string filename) {
    fstream file(filename, ios::in);
    if (!file.is_open()) {
        cout << "Не удалось открыть файл: " << filename << endl;
        return;
    }

    string line;
    while (getline(file, line)) {
        size_t pos1 = line.find(','); 
        size_t pos2 = line.find(',', pos1 + 1);
        if (pos1 != string::npos && pos2 != string::npos) {
            string name = line.substr(0, pos1);
            double price = stod(line.substr(pos1 + 1, pos2 - pos1 - 1));
            string ingredients = line.substr(pos2 + 1);
            MenuItem item(name, price, ingredients);
            addMenuItem(item);
        }
    }
    file.close();
}


void Restaurant::addMenuItem(MenuItem item) {
    menu.push_back(item);
}


void Restaurant::createOrder(Customer customer) {
    Order order(++orderCount);
    size_t itemIndex; 
    displayMenu();
    cout << "Выберите номер блюда для заказа (или -1 для завершения): ";
    cin >> itemIndex;

    if (itemIndex < menu.size()) { 
        order.addItem(menu[itemIndex]);
        cout << "\x1B[2J\x1B[H";
    }
    else if (itemIndex != (size_t)-1) { 
        cout << "Неверный номер блюда. Попробуйте снова." << endl;
        cout << "\x1B[2J\x1B[H";
    }
    order.displayOrder();
    handleOrderModification(order);
    orders.push_back(order);
}


void Restaurant::handleOrderModification(Order& order) {
    char choice;
    cout << "Хотите изменить заказ? (y/n): ";
    cin >> choice;
    if (choice == 'y') {
        int action;
        cout << "1. Добавить блюдо" << endl;
        cout << "2. Удалить блюдо" << endl;
        cout << "Выберите действие: ";
        cin >> action;
        if (action == 1) {
            displayMenu();
            int itemIndex;
            cout << "Выберите номер блюда для добавления: ";
            cin >> itemIndex;
            if (itemIndex >= 0 && itemIndex < menu.size()) {
                order.addItem(menu[itemIndex]);
            }
        }
        else if (action == 2) {
            if (order.getItemCount() > 0) {
                order.displayOrder();
                int removeIndex;
                cout << "Введите номер блюда для удаления: ";
                cin >> removeIndex;
                order.removeItem(removeIndex);
            }
            else {
                cout << "В заказе нет блюд для удаления." << endl;
            }
        }
        order.displayOrder();
    }
}



void Restaurant::displayMenu() {
    cout << "Меню:" << endl;
    for (size_t i = 0; i < menu.size(); i++) { 
        cout << i << ". ";
        menu[i].displayInfo();
    }
}
