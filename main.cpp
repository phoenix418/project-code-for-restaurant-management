#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <thread>
#include "draw.cpp" 
#include "MenuItem.h"
#include "Order.h"
#include "Customer.h"  
#include "Restaurant.h" 
using namespace std;



#endif main() {
    drawMenu();
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
