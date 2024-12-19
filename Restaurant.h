
#ifndef RESTAURANT_H
#define RESTAURANT_H
#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <thread>
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


	void saveOrderToFile(Order& order);


	void createOrder(Customer customer);


	void handleOrderModification(Order& order);



	void displayMenu();
};
#endif
