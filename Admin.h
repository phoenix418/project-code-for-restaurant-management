#ifndef ADMIN_H
#define ADMIN_H
#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <thread>
using namespace std;
class Admin {
private:
    string username;
    string passwordHash;

public:
    Admin(string user, string passHash);

    string getUsername() const;

    string getPasswordHash() const;
};
#endif
