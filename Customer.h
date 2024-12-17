#ifndef CUSTOMER_H
#define CUSTOMER_H
#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <thread>
using namespace std;


class Customer {
private:
    string name;

public:
    Customer(string n);


    void displayInfo();


    string getName();
};

#endif
