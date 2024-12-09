#ifndef MENUITEM_H
#define MENUITEM_H
#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <thread>
using namespace std;


class MenuItem {
private:
    string name;
    double price;
    string ingredients;

public:
    MenuItem(string n, double p, string ing);


    void displayInfo();


    double getPrice();


    string getName();
};

#endif
