#include <iostream>
#include <vector>
#include <string>
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


    void displayOrder({
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

public:


    void loadMenu(string filename){
        //дописать позже 
    }


    void addMenuItem(MenuItem item) {
        menu.push_back(item);
    }


    void createOrder(Customer customer){
        //дописать позже 
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
    //дописать позже 
}
