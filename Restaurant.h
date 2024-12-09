#ifndef STRUCTURES_H
#define STRUCTURES_H
#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <thread>
#include "draw.cpp"
#include "MenuItem.h"
#include "Order.h"
#include "Customer.h"
using namespace std;


class Restaurant {
private:
vector<MenuItem> menu;
vector<Order> orders;
int orderCount = 0;
public:


void loadMenu(string filename);


void addMenuItem(MenuItem item);


void createOrder(Customer customer);


void handleOrderModification(Order& order);



void displayMenu();
};
#endif
