#include <vector>
#include <string>
#include <fstream>
#include <thread>
#include "Admin.h"
using namespace std;


class AdminManager {
private:
    vector<Admin> admins;
    const string adminFile = "admins.txt";
    string hashPassword(string& password);

    void loadAdmins();
       

    void saveAdmin(Admin& admin);

public:
    AdminManager(string adminFile);

    void registerAdmin();

    bool loginAdmin();

    void logoutAdmin();
};
#endif
