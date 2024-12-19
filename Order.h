#ifndef ORDER_H
#define ORDER_H 
#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <thread>
#include "MenuItem.h"
using namespace std;

class Order {
private:
    int orderID;
    vector<MenuItem> items;
    double totalPrice;

public:
    Order(int id);


    void addItem(MenuItem item);


    void removeItem(int index);


    void displayOrder();


    size_t getItemCount();


    MenuItem getItem(int index);

    double getTotalPrice() const;


    int getOrderID() const;
};
#endif

    
    
    
    
   
   
   
    
