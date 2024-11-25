#include <iostream>
#include <vector>
#include <string>
#include <fstream>
using namespace std;


class MenuItem{
private:
    string name;
    double price;
    string ingredients;

public:
    MenuItem(string n, double p, string ing) {
        name = n;
        price = p;
        ingredients = ing;
    }


    void displayInfo() {
        cout << name << " - " << price << " (Состав: " << ingredients << ")"<< endl;
    }


    double getPrice() {
        return price;
    }
};


class Order {
private:
    int orderID;
    vector<MenuItem> items;
    double totalPrice;

public:
    Order(int id) {
        orderID = id;
        totalPrice = 0.0;
    }
    

    void addItem(MenuItem item) {
        items.push_back(item);
        totalPrice += item.getPrice();
    }


    void displayOrder(){
        cout << "Заказ ID: " << orderID << endl;
        cout << "Содержимое заказа:" << endl;
        for (int i = 0; i < items.size(); i++) {
            items[i].displayInfo();
        }
        cout << "Общая стоимость: " << totalPrice << endl;
    }
};


class Customer {
private:
    string name;

public:
    Customer(string n){
        name = n;
    }


    void displayInfo(){
        cout << "Клиент: " << name << endl;
    }
};


class Restaurant{
private:
    vector<MenuItem> menu;
    vector<Order> orders;
    int orderCount = 0;

public:


    void loadMenu(string filename) {
        ifstream file(filename);
        if (!file.is_open()) {
            cout << "Не удалось открыть файл: " << filename << endl;
            return;
        }
        string line;
        while (getline(file, line)) {
            int pos1 = line.find(',');
            int pos2 = line.find(',', pos1 + 1);
            if (pos1 != -1 && pos2 != -1) {
                string name = line.substr(0, pos1);
                double price = stod(line.substr(pos1 + 1, pos2 - pos1 - 1));
                string ingredients = line.substr(pos2 + 1);
                MenuItem item(name, price, ingredients);
                addMenuItem(item);
            }
        }
        file.close();
    }


    void addMenuItem(MenuItem item) {
        menu.push_back(item);
    }


    void createOrder(Customer customer) {
        Order order(++orderCount);
        int itemIndex;
        do {
            displayMenu();
            cout << "Выберите номер блюда для заказа (или -1 для завершения): ";
            cin >> itemIndex;
            if (itemIndex >= 0 && itemIndex < menu.size()) {
                order.addItem(menu[itemIndex]);
            } 
            else if (itemIndex != -1) {
                cout << "Неверный номер блюда. Попробуйте снова." << endl;
            }
        } 
        while (itemIndex != -1);
        orders.push_back(order);
        order.displayOrder();
    }


    void displayMenu(){
        cout << "Меню:" << endl;
        for (int i= 0; i < menu.size(); i++){
            cout << i << ". ";
            menu[i].displayInfo();
        }
    }
};


int main() {
    Restaurant restaurant;
    restaurant.loadMenu("menu.txt");
    string customerName;
    cout << "Введите имя клиента: ";
    getline(cin, customerName);
    Customer customer(customerName);
    restaurant.createOrder(customer);
    return 0;
}
