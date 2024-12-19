#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <thread>
#include <functional>
#include <sstream>
#include "MenuItem.h"
#include "Order.h"
#include "Customer.h"
#include "Restaurant.h"
#include "Admin.h"
#include "AdminManager.h"
using namespace std;



int MenuItem::drawMenu() {
    //🟥🟧🟨🟩🟦🟪🟫⬜️⬛️
    for (int i = 0; i < 4; i++) {
        cout << "\x1B[2J\x1B[H";
        cout << "\n";
        cout << "\n";
        cout << "\n";
        cout << "\n";
        cout << "\n";
        cout << "                     " << endl;
        cout << "                     " << endl;
        cout << "                     " << endl;
        cout << "                      \\u25A0               " << endl;
        cout << "                     " << endl;
        cout << "                     " << endl;
        cout << "                     " << endl;
        chrono::milliseconds search1(70);
        this_thread::sleep_for(search1);
        cout << "\x1B[2J\x1B[H";

        cout << "\x1B[2J\x1B[H";
        cout << "\n";
        cout << "\n";
        cout << "\n";
        cout << "\n";
        cout << "\n";
        cout << "                     " << endl;
        cout << "                     " << endl;
        cout << "                     " << endl;
        cout << "                       \\u25A0              " << endl;
        cout << "                     " << endl;
        cout << "                     " << endl;
        cout << "                     " << endl;
        this_thread::sleep_for(search1);
        cout << "\x1B[2J\x1B[H";

        cout << "\x1B[2J\x1B[H";
        cout << "\n";
        cout << "\n";
        cout << "\n";
        cout << "\n";
        cout << "\n";
        cout << "                     " << endl;
        cout << "                     " << endl;
        cout << "                     " << endl;
        cout << "                        \\u25A0             " << endl;
        cout << "                     " << endl;
        cout << "                     " << endl;
        cout << "                     " << endl;
        this_thread::sleep_for(search1);
        cout << "\x1B[2J\x1B[H";

        cout << "\x1B[2J\x1B[H";
        cout << "\n";
        cout << "\n";
        cout << "\n";
        cout << "\n";
        cout << "\n";
        cout << "                     " << endl;
        cout << "                     " << endl;
        cout << "                     " << endl;
        cout << "                         \\u25A0            " << endl;
        cout << "                     " << endl;
        cout << "                     " << endl;
        cout << "                     " << endl;
        this_thread::sleep_for(search1);
        cout << "\x1B[2J\x1B[H";

        cout << "\x1B[2J\x1B[H";
        cout << "\n";
        cout << "\n";
        cout << "\n";
        cout << "\n";
        cout << "\n";
        cout << "                     " << endl;
        cout << "                     " << endl;
        cout << "                     " << endl;
        cout << "                          \\u25A0           " << endl;
        cout << "                     " << endl;
        cout << "                     " << endl;
        cout << "                     " << endl;
        this_thread::sleep_for(search1);
        cout << "\x1B[2J\x1B[H";

        cout << "\x1B[2J\x1B[H";
        cout << "\n";
        cout << "\n";
        cout << "\n";
        cout << "\n";
        cout << "\n";
        cout << "                     " << endl;
        cout << "                     " << endl;
        cout << "                     " << endl;
        cout << "                           \\u25A0          " << endl;
        cout << "                     " << endl;
        cout << "                     " << endl;
        cout << "                     " << endl;
        this_thread::sleep_for(search1);
        cout << "\x1B[2J\x1B[H";

        cout << "\x1B[2J\x1B[H";
        cout << "\n";
        cout << "\n";
        cout << "\n";
        cout << "\n";
        cout << "\n";
        cout << "                     " << endl;
        cout << "                     " << endl;
        cout << "                     " << endl;
        cout << "                            \\u25A0         " << endl;
        cout << "                     " << endl;
        cout << "                     " << endl;
        cout << "                     " << endl;
        this_thread::sleep_for(search1);
        cout << "\x1B[2J\x1B[H";

        cout << "\x1B[2J\x1B[H";
        cout << "\n";
        cout << "\n";
        cout << "\n";
        cout << "\n";
        cout << "\n";
        cout << "                     " << endl;
        cout << "                     " << endl;
        cout << "                     " << endl;
        cout << "                             \\u25A0        " << endl;
        cout << "                     " << endl;
        cout << "                     " << endl;
        cout << "                     " << endl;
        this_thread::sleep_for(search1);

        cout << "\x1B[2J\x1B[H";
        cout << "\n";
        cout << "\n";
        cout << "\n";
        cout << "\n";
        cout << "\n";
        cout << "                     " << endl;
        cout << "                     " << endl;
        cout << "                     " << endl;
        cout << "                             \\u25A0        " << endl;
        cout << "                     " << endl;
        cout << "                     " << endl;
        cout << "                     " << endl;
        this_thread::sleep_for(search1);
        cout << "\x1B[2J\x1B[H";

        cout << "\x1B[2J\x1B[H";
        cout << "\n";
        cout << "\n";
        cout << "\n";
        cout << "\n";
        cout << "\n";
        cout << "                     " << endl;
        cout << "                     " << endl;
        cout << "                     " << endl;
        cout << "                              \\u25A0       " << endl;
        cout << "                     " << endl;
        cout << "                     " << endl;
        cout << "                     " << endl;
        this_thread::sleep_for(search1);
        cout << "\x1B[2J\x1B[H";

        cout << "\x1B[2J\x1B[H";
        cout << "\n";
        cout << "\n";
        cout << "\n";
        cout << "\n";
        cout << "\n";
        cout << "                     " << endl;
        cout << "                     " << endl;
        cout << "                     " << endl;
        cout << "                               \\u25A0      " << endl;
        cout << "                     " << endl;
        cout << "                     " << endl;
        cout << "                     " << endl;
        this_thread::sleep_for(search1);
        cout << "\x1B[2J\x1B[H";

        cout << "\x1B[2J\x1B[H";
        cout << "\n";
        cout << "\n";
        cout << "\n";
        cout << "\n";
        cout << "\n";
        cout << "                     " << endl;
        cout << "                     " << endl;
        cout << "                     " << endl;
        cout << "                                \\u25A0     " << endl;
        cout << "                     " << endl;
        cout << "                     " << endl;
        cout << "                     " << endl;
        this_thread::sleep_for(search1);
        cout << "\x1B[2J\x1B[H";

        cout << "\x1B[2J\x1B[H";
        cout << "\n";
        cout << "\n";
        cout << "\n";
        cout << "\n";
        cout << "\n";
        cout << "                     " << endl;
        cout << "                     " << endl;
        cout << "                     " << endl;
        cout << "                                 \\u25A0    " << endl;
        cout << "                     " << endl;
        cout << "                     " << endl;
        cout << "                     " << endl;
        this_thread::sleep_for(search1);
        cout << "\x1B[2J\x1B[H";

        cout << "\x1B[2J\x1B[H";
        cout << "\n";
        cout << "\n";
        cout << "\n";
        cout << "\n";
        cout << "\n";
        cout << "                     " << endl;
        cout << "                     " << endl;
        cout << "                     " << endl;
        cout << "                                  \\u25A0   " << endl;
        cout << "                     " << endl;
        cout << "                     " << endl;
        cout << "                     " << endl;
        this_thread::sleep_for(search1);
        cout << "\x1B[2J\x1B[H";

        cout << "\x1B[2J\x1B[H";
        cout << "\n";
        cout << "\n";
        cout << "\n";
        cout << "\n";
        cout << "\n";
        cout << "                     " << endl;
        cout << "                     " << endl;
        cout << "                     " << endl;
        cout << "                                   \\u25A0  " << endl;
        cout << "                     " << endl;
        cout << "                     " << endl;
        cout << "                     " << endl;
        this_thread::sleep_for(search1);
        cout << "\x1B[2J\x1B[H";

        cout << "\x1B[2J\x1B[H";
        cout << "\n";
        cout << "\n";
        cout << "\n";
        cout << "\n";
        cout << "\n";
        cout << "                     " << endl;
        cout << "                     " << endl;
        cout << "                     " << endl;
        cout << "                                    \\u25A0 " << endl;
        cout << "                     " << endl;
        cout << "                     " << endl;
        cout << "                     " << endl;
        this_thread::sleep_for(search1);
        cout << "\x1B[2J\x1B[H";

        cout << "\x1B[2J\x1B[H";
        cout << "\n";
        cout << "\n";
        cout << "\n";
        cout << "\n";
        cout << "\n";
        cout << "                     " << endl;
        cout << "                     " << endl;
        cout << "                     " << endl;
        cout << "                                     \\u25A0" << endl;
        cout << "                     " << endl;
        cout << "                     " << endl;
        cout << "                     " << endl;

        this_thread::sleep_for(search1);
        cout << "\x1B[2J\x1B[H";

        cout << "\x1B[2J\x1B[H";
        cout << "\n";
        cout << "\n";
        cout << "\n";
        cout << "\n";
        cout << "\n";
        cout << "                     " << endl;
        cout << "                     " << endl;
        cout << "                     " << endl;
        cout << "                                     \\u25A0" << endl;
        cout << "                     " << endl;
        cout << "                     " << endl;
        cout << "                     " << endl;
        this_thread::sleep_for(search1);
        cout << "\x1B[2J\x1B[H";

        cout << "\x1B[2J\x1B[H";
        cout << "\n";
        cout << "\n";
        cout << "\n";
        cout << "\n";
        cout << "\n";
        cout << "                     " << endl;
        cout << "                     " << endl;
        cout << "                     " << endl;
        cout << "                                    \\u25A0 " << endl;
        cout << "                     " << endl;
        cout << "                     " << endl;
        cout << "                     " << endl;
        this_thread::sleep_for(search1);
        cout << "\x1B[2J\x1B[H";

        cout << "\x1B[2J\x1B[H";
        cout << "\n";
        cout << "\n";
        cout << "\n";
        cout << "\n";
        cout << "\n";
        cout << "                     " << endl;
        cout << "                     " << endl;
        cout << "                     " << endl;
        cout << "                                   \\u25A0  " << endl;
        cout << "                     " << endl;
        cout << "                     " << endl;
        cout << "                     " << endl;
        this_thread::sleep_for(search1);
        cout << "\x1B[2J\x1B[H";

        cout << "\x1B[2J\x1B[H";
        cout << "\n";
        cout << "\n";
        cout << "\n";
        cout << "\n";
        cout << "\n";
        cout << "                     " << endl;
        cout << "                     " << endl;
        cout << "                     " << endl;
        cout << "                                  \\u25A0   " << endl;
        cout << "                     " << endl;
        cout << "                     " << endl;
        cout << "                     " << endl;
        this_thread::sleep_for(search1);
        cout << "\x1B[2J\x1B[H";

        cout << "\x1B[2J\x1B[H";
        cout << "\n";
        cout << "\n";
        cout << "\n";
        cout << "\n";
        cout << "\n";
        cout << "                     " << endl;
        cout << "                     " << endl;
        cout << "                     " << endl;
        cout << "                                 \\u25A0    " << endl;
        cout << "                     " << endl;
        cout << "                     " << endl;
        cout << "                     " << endl;
        this_thread::sleep_for(search1);
        cout << "\x1B[2J\x1B[H";

        cout << "\x1B[2J\x1B[H";
        cout << "\n";
        cout << "\n";
        cout << "\n";
        cout << "\n";
        cout << "\n";
        cout << "                     " << endl;
        cout << "                     " << endl;
        cout << "                     " << endl;
        cout << "                                \\u25A0     " << endl;
        cout << "                     " << endl;
        cout << "                     " << endl;
        cout << "                     " << endl;
        this_thread::sleep_for(search1);
        cout << "\x1B[2J\x1B[H";

        cout << "\x1B[2J\x1B[H";
        cout << "\n";
        cout << "\n";
        cout << "\n";
        cout << "\n";
        cout << "\n";
        cout << "                     " << endl;
        cout << "                     " << endl;
        cout << "                     " << endl;
        cout << "                               \\u25A0      " << endl;
        cout << "                     " << endl;
        cout << "                     " << endl;
        cout << "                     " << endl;
        this_thread::sleep_for(search1);
        cout << "\x1B[2J\x1B[H";

        cout << "\x1B[2J\x1B[H";
        cout << "\n";
        cout << "\n";
        cout << "\n";
        cout << "\n";
        cout << "\n";
        cout << "                     " << endl;
        cout << "                     " << endl;
        cout << "                     " << endl;
        cout << "                             \\u25A0        " << endl;
        cout << "                     " << endl;
        cout << "                     " << endl;
        cout << "                     " << endl;
        this_thread::sleep_for(search1);
        cout << "\x1B[2J\x1B[H";

        cout << "\x1B[2J\x1B[H";
        cout << "\n";
        cout << "\n";
        cout << "\n";
        cout << "\n";
        cout << "\n";
        cout << "                     " << endl;
        cout << "                     " << endl;
        cout << "                     " << endl;
        cout << "                            \\u25A0        " << endl;
        cout << "                     " << endl;
        cout << "                     " << endl;
        cout << "                     " << endl;
        this_thread::sleep_for(search1);
        cout << "\x1B[2J\x1B[H";

        cout << "\x1B[2J\x1B[H";
        cout << "\n";
        cout << "\n";
        cout << "\n";
        cout << "\n";
        cout << "\n";
        cout << "                     " << endl;
        cout << "                     " << endl;
        cout << "                     " << endl;
        cout << "                           \\u25A0         " << endl;
        cout << "                     " << endl;
        cout << "                     " << endl;
        cout << "                     " << endl;
        this_thread::sleep_for(search1);
        cout << "\x1B[2J\x1B[H";

        cout << "\x1B[2J\x1B[H";
        cout << "\n";
        cout << "\n";
        cout << "\n";
        cout << "\n";
        cout << "\n";
        cout << "                     " << endl;
        cout << "                     " << endl;
        cout << "                     " << endl;
        cout << "                          \\u25A0          " << endl;
        cout << "                     " << endl;
        cout << "                     " << endl;
        cout << "                     " << endl;
        this_thread::sleep_for(search1);
        cout << "\x1B[2J\x1B[H";

        cout << "\x1B[2J\x1B[H";
        cout << "\n";
        cout << "\n";
        cout << "\n";
        cout << "\n";
        cout << "\n";
        cout << "                     " << endl;
        cout << "                     " << endl;
        cout << "                     " << endl;
        cout << "                         \\u25A0            " << endl;
        cout << "                     " << endl;
        cout << "                     " << endl;
        cout << "                     " << endl;
        this_thread::sleep_for(search1);
        cout << "\x1B[2J\x1B[H";

        cout << "\x1B[2J\x1B[H";
        cout << "\n";
        cout << "\n";
        cout << "\n";
        cout << "\n";
        cout << "\n";
        cout << "                     " << endl;
        cout << "                     " << endl;
        cout << "                     " << endl;
        cout << "                        \\u25A0             " << endl;
        cout << "                     " << endl;
        cout << "                     " << endl;
        cout << "                     " << endl;

        this_thread::sleep_for(search1);
        cout << "\x1B[2J\x1B[H";

        cout << "\x1B[2J\x1B[H";
        cout << "\n";
        cout << "\n";
        cout << "\n";
        cout << "\n";
        cout << "\n";
        cout << "                     " << endl;
        cout << "                     " << endl;
        cout << "                     " << endl;
        cout << "                       \\u25A0              " << endl;
        cout << "                     " << endl;
        cout << "                     " << endl;
        cout << "                     " << endl;

        this_thread::sleep_for(search1);
        cout << "\x1B[2J\x1B[H";

        cout << "\x1B[2J\x1B[H";
        cout << "\n";
        cout << "\n";
        cout << "\n";
        cout << "\n";
        cout << "\n";
        cout << "                     " << endl;
        cout << "                     " << endl;
        cout << "                     " << endl;
        cout << "                      \\u25A0               " << endl;
        cout << "                     " << endl;
        cout << "                     " << endl;
        cout << "                     " << endl;
        this_thread::sleep_for(search1);
        cout << "\x1B[2J\x1B[H";
    }
    for (int i = 0; i < 1; i++) {

        cout << "\n";
        cout << "\n";
        cout << "\n";
        cout << "\n";
        cout << "\n";
        cout << "                      \\u25A0\\u25A0\\u25A0\\u25A0\\u25A0\\u25A0\\u25A0\\u25A0\\u25A0\\u25A0\\u25A0\\u25A0\\u25A0              " << endl;
        cout << "                     " << endl;
        cout << "                     " << endl;
        cout << "                     " << endl;
        cout << "                     " << endl;
        cout << "                      \\u25A0\\u25A0\\u25A0\\u25A0\\u25A0\\u25A0\\u25A0\\u25A0\\u25A0\\u25A0\\u25A0\\u25A0\\u25A0             " << endl;
        chrono::milliseconds search2(1000);
        this_thread::sleep_for(search2);
        cout << "\x1B[2J\x1B[H";

        cout << "\x1B[2J\x1B[H";
        cout << "\n";
        cout << "\n";
        cout << "\n";
        cout << "\n";
        cout << "\n";
        cout << "                      \\u25A0\\u25A0\\u25A0\\u25A0\\u25A0\\u25A0\\u25A0\\u25A0\\u25A0\\u25A0\\u25A0\\u25A0\\u25A0              " << endl;
        cout << "                     |=============|" << endl;
        cout << "                     " << endl;
        cout << "                     " << endl;
        cout << "                     " << endl;
        cout << "                      \\u25A0\\u25A0\\u25A0\\u25A0\\u25A0\\u25A0\\u25A0\\u25A0\\u25A0\\u25A0\\u25A0\\u25A0\\u25A0              " << endl;
        this_thread::sleep_for(search2);
        cout << "\x1B[2J\x1B[H";

        cout << "\n";
        cout << "\n";
        cout << "\n";
        cout << "\n";
        cout << "\n";
        cout << "                      \\u25A0\\u25A0\\u25A0\\u25A0\\u25A0\\u25A0\\u25A0\\u25A0\\u25A0\\u25A0\\u25A0\\u25A0\\u25A0              " << endl;
        cout << "                     |=============|" << endl;
        cout << "                    " << endl;
        cout << "                    " << endl;
        cout << "                     |=============|" << endl;
        cout << "                      \\u25A0\\u25A0\\u25A0\\u25A0\\u25A0\\u25A0\\u25A0\\u25A0\\u25A0\\u25A0\\u25A0\\u25A0\\u25A0              " << endl;
        this_thread::sleep_for(search2);
        cout << "\x1B[2J\x1B[H";

        cout << "\n";
        cout << "\n";
        cout << "\n";
        cout << "\n";
        cout << "\n";
        cout << "                      \\u25A0\\u25A0\\u25A0\\u25A0\\u25A0\\u25A0\\u25A0\\u25A0\\u25A0\\u25A0\\u25A0\\u25A0\\u25A0              " << endl;
        cout << "                     |=============|" << endl;
        cout << "                     |   запуск    |" << endl;
        cout << "                     |   системы   |" << endl;
        cout << "                     |=============|" << endl;
        cout << "                      \\u25A0\\u25A0\\u25A0\\u25A0\\u25A0\\u25A0\\u25A0\\u25A0\\u25A0\\u25A0\\u25A0\\u25A0\\u25A0                   " << endl;
        this_thread::sleep_for(search2);
        cout << "\x1B[2J\x1B[H";
    }
    for (int i = 0; i < 3; i++) {
        cout << "\n";
        cout << "\n";
        cout << "\n";
        cout << "\n";
        cout << "\n";
        cout << "      " << endl;
        cout << "                     |=============|" << endl;
        cout << "                     |   запуск    |" << endl;
        cout << "                     |   системы   |" << endl;
        cout << "                     |=============|" << endl;
        cout << "      " << endl;
        chrono::milliseconds serch(100);
        this_thread::sleep_for(serch);
        cout << "\x1B[2J\x1B[H";

        cout << "\n";
        cout << "\n";
        cout << "\n";
        cout << "\n";
        cout << "\n";
        cout << "                      \\u25A0\\u25A0  " << endl;
        cout << "                     |=============|" << endl;
        cout << "                     |   запуск    |" << endl;
        cout << "                     |   системы   |" << endl;
        cout << "                     |=============|" << endl;
        cout << "                      \\u25A0\\u25A0  " << endl;
        this_thread::sleep_for(serch);
        cout << "\x1B[2J\x1B[H";

        cout << "\n";
        cout << "\n";
        cout << "\n";
        cout << "\n";
        cout << "\n";
        cout << "                      \\u25A0\\u25A0\\u25A0\\u25A0  " << endl;
        cout << "                     |=============|" << endl;
        cout << "                     |   запуск    |" << endl;
        cout << "                     |   системы   |" << endl;
        cout << "                     |=============|" << endl;
        cout << "                      \\u25A0\\u25A0\\u25A0\\u25A0  " << endl;
        this_thread::sleep_for(serch);
        cout << "\x1B[2J\x1B[H";

        cout << "\n";
        cout << "\n";
        cout << "\n";
        cout << "\n";
        cout << "\n";
        cout << "                      \\u25A0\\u25A0\\u25A0\\u25A0\\u25A0\\u25A0  " << endl;
        cout << "                     |=============|" << endl;
        cout << "                     |   запуск    |" << endl;
        cout << "                     |   системы   |" << endl;
        cout << "                     |=============|" << endl;
        cout << "                      \\u25A0\\u25A0\\u25A0\\u25A0\\u25A0\\u25A0  " << endl;
        this_thread::sleep_for(serch);
        cout << "\x1B[2J\x1B[H";

        cout << "\n";
        cout << "\n";
        cout << "\n";
        cout << "\n";
        cout << "\n";
        cout << "                      \\u25A0\\u25A0\\u25A0\\u25A0\\u25A0\\u25A0\\u25A0\\u25A0  " << endl;
        cout << "                     |=============|" << endl;
        cout << "                     |   запуск    |" << endl;
        cout << "                     |   системы   |" << endl;
        cout << "                     |=============|" << endl;
        cout << "                      \\u25A0\\u25A0\\u25A0\\u25A0\\u25A0\\u25A0\\u25A0\\u25A0  " << endl;
        this_thread::sleep_for(serch);
        cout << "\x1B[2J\x1B[H";

        cout << "\n";
        cout << "\n";
        cout << "\n";
        cout << "\n";
        cout << "\n";
        cout << "                      \\u25A0\\u25A0\\u25A0\\u25A0\\u25A0\\u25A0\\u25A0\\u25A0\\u25A0\\u25A0  " << endl;
        cout << "                     |=============|" << endl;
        cout << "                     |   запуск    |" << endl;
        cout << "                     |   системы   |" << endl;
        cout << "                     |=============|" << endl;
        cout << "                      \\u25A0\\u25A0\\u25A0\\u25A0\\u25A0\\u25A0\\u25A0\\u25A0\\u25A0\\u25A0  " << endl;
        this_thread::sleep_for(serch);
        cout << "\x1B[2J\x1B[H";

        cout << "\n";
        cout << "\n";
        cout << "\n";
        cout << "\n";
        cout << "\n";
        cout << "                      \\u25A0\\u25A0\\u25A0\\u25A0\\u25A0\\u25A0\\u25A0\\u25A0\\u25A0\\u25A0\\u25A0\\u25A0\\u25A0  " << endl;
        cout << "                     |=============|" << endl;
        cout << "                     |   запуск    |" << endl;
        cout << "                     |   системы   |" << endl;
        cout << "                     |=============|" << endl;
        cout << "                      \\u25A0\\u25A0\\u25A0\\u25A0\\u25A0\\u25A0\\u25A0\\u25A0\\u25A0\\u25A0\\u25A0\\u25A0\\u25A0  " << endl;
        this_thread::sleep_for(serch);
        cout << "\x1B[2J\x1B[H";
    }
    return 0;
}


MenuItem::MenuItem(string n, double p, string ing) : name(n), price(p), ingredients(ing) {}


void MenuItem::displayInfo() {
    cout << name << " - " << price << " (Состав: " << ingredients << ")" << endl;
}


double MenuItem::getPrice() {
    return price;
}


string MenuItem::getName() {
    return name;
}


Order::Order(int id) : orderID(id), totalPrice(0.0) {}


void Order::addItem(MenuItem item) {
    items.push_back(item);
    totalPrice += item.getPrice();
}


void Order::removeItem(int index) {
    if (index >= 0 && index < items.size()) {
        totalPrice -= items[index].getPrice();
        items.erase(items.begin() + index);
    }
}


void Order::displayOrder() {
    cout << "Заказ ID: " << orderID << endl;
    cout << "Содержимое заказа:" << endl;
    for (int i = 0; i < items.size(); i++) {
        items[i].displayInfo();
    }
    cout << "Общая стоимость: " << totalPrice << endl;
}


size_t Order::getItemCount() {
    return items.size();
}


MenuItem Order::getItem(int index) {
    return items[index];
}



Customer::Customer(string n) : name(n) {}


void Customer::displayInfo() {
    cout << "Клиент: " << name << endl;
}


string Customer::getName() {
    return name;
}


void Restaurant::loadMenu(string filename) {
    fstream file(filename, ios::in);
    if (!file.is_open()) {
        cout << "Не удалось открыть файл: " << filename << endl;
        return;
    }

    string line;
    while (getline(file, line)) {
        size_t pos1 = line.find(','); 
        size_t pos2 = line.find(',', pos1 + 1);
        if (pos1 != string::npos && pos2 != string::npos) {
            string name = line.substr(0, pos1);
            double price = stod(line.substr(pos1 + 1, pos2 - pos1 - 1));
            string ingredients = line.substr(pos2 + 1);
            MenuItem item(name, price, ingredients);
            addMenuItem(item);
        }
    }
    file.close();
}


void Restaurant::addMenuItem(MenuItem item) {
    menu.push_back(item);
}


double Order::getTotalPrice() const {
    return totalPrice;
}


int Order::getOrderID() const {
    return orderID;
}


void Restaurant::saveOrderToFile(Order& order) {
    string filename = "order_" + to_string(order.getOrderID()) + ".txt";
    ofstream outFile(filename); 
    if (outFile.is_open()) {
        outFile << "Заказ ID: " << order.getOrderID() << endl;
        outFile << "Содержимое заказа:" << endl;
        for (size_t i = 0; i < order.getItemCount(); i++) {
            outFile << order.getItem(i).getName() << " - " << order.getItem(i).getPrice() << endl;
        }
        outFile << "Общая стоимость: " << order.getTotalPrice() << endl;
        outFile.close();
        cout << "Данные заказа сохранены в файл: " << filename << endl;
    }
    else {
        cout << "Не удалось открыть файл для записи заказа." << endl;
    }
}



void Restaurant::createOrder(Customer customer) {
    Order order(++orderCount);
    size_t itemIndex;

    while (true) {
        displayMenu();
        cout << "Выберите номер блюда для заказа (или -1 для завершения): ";
        cin >> itemIndex;
        if (itemIndex < menu.size()) {
            order.addItem(menu[itemIndex]);
            cout << "\x1B[2J\x1B[H"; 
        }
        else if (itemIndex == (size_t)-1) {
            break;
        }
        else {
            cout << "Неверный номер блюда. Попробуйте снова." << endl;
            cout << "\x1B[2J\x1B[H"; 
        }
    }

    order.displayOrder();
    handleOrderModification(order);
    saveOrderToFile(order); 
    orders.push_back(order);
}


void Restaurant::handleOrderModification(Order& order) {
    char choice;
    cout << "Хотите изменить заказ? (y/n): ";
    cin >> choice;
    if (choice == 'y') {
        int action;
        cout << "1. Добавить блюдо" << endl;
        cout << "2. Удалить блюдо" << endl;
        cout << "Выберите действие: ";
        cin >> action;
        if (action == 1) {
            displayMenu();
            int itemIndex;
            cout << "Выберите номер блюда для добавления: ";
            cin >> itemIndex;
            if (itemIndex >= 0 && itemIndex < menu.size()) {
                order.addItem(menu[itemIndex]);
            }
        }
        else if (action == 2) {
            if (order.getItemCount() > 0) {
                order.displayOrder();
                int removeIndex;
                cout << "Введите номер блюда для удаления: ";
                cin >> removeIndex;
                order.removeItem(removeIndex);
            }
            else {
                cout << "В заказе нет блюд для удаления." << endl;
            }
        }
        order.displayOrder();
    }
}


void Restaurant::displayMenu() {
    cout << "Меню:" << endl;
    for (size_t i = 0; i < menu.size(); i++) { 
        cout << i << ". ";
        menu[i].displayInfo();
    }
}


Admin::Admin(string user, string passHash) : username(user), passwordHash(passHash) {}

string Admin::getUsername() const {
    return username;
    }

string Admin::getPasswordHash() const {
   return passwordHash;
}


string AdminManager::hashPassword(string& password) {
    string hash;
    for (char c : password) {
        hash += c ^ 0xAA;
    }
    return hash;
}

void AdminManager::loadAdmins() {
    ifstream file(adminFile);
    string username, passwordHash;
    while (file >> username >> passwordHash) {
        admins.emplace_back(username, passwordHash);
    }
    file.close();
    }


void AdminManager::saveAdmin(Admin& admin) {
    ofstream file(adminFile, ios::app);
    file << admin.getUsername() << " " << admin.getPasswordHash() << endl;
    file.close();
    }


AdminManager::AdminManager(string adminFile) : adminFile(adminFile) {
    loadAdmins();
}


void AdminManager::registerAdmin() {
    string username, password;
    string passwordAdmin = "vadim_yt2009";
    cout << "Введите пароль Админестратора : ";
    string coutpassword;
    cin >> coutpassword;
    if (coutpassword == passwordAdmin) {
        cout << "Введите имя пользователя: ";
        cin >> username;
        cout << "Введите пароль: ";
        cin >> password;
        for (const auto& admin : admins) {
            if (admin.getUsername() == username) {
                cout << "Имя пользователя уже занято. Попробуйте другое." << endl;
                return;
            }
        }
        string passwordHash = hashPassword(password);
        Admin newAdmin(username, passwordHash);
        admins.push_back(newAdmin);
        saveAdmin(newAdmin);
        cout << "Администратор зарегистрирован!" << endl;
    }
    else {
        cout << "не верный пароль";

    }
    
}


int AdminManager::writeOrder() {
    cout << "Вы вошли в аккаунт!" << endl;
    cout << "1. Написать заказ:" << endl;
    cout << "2. Вернуться в меню" << endl;

    int choice;
    cin >> choice;
    if (choice == 1) {
        Restaurant restaurant;
        restaurant.loadMenu("menu.txt");
        string customerName;
        cout << "Введите имя клиента: ";
        getline(cin, customerName);
        cout << "\x1B[2J\x1B[H";
        Customer customer(customerName);
        restaurant.createOrder(customer);
        return 1; 
    }
    else if (choice == 2) {
        return AdminManager::loginAdmin(); 
    }
    else {
        cout << "Неверный выбор, попробуйте снова." << endl;
        return writeOrder(); 
    }
}




bool AdminManager::loginAdmin() {
    string username, password;
    cout << "Введите имя пользователя: ";
    cin >> username;
    cout << "Введите пароль: ";
    cin >> password;
    string passwordHash = hashPassword(password);
    for (const auto& admin : admins) {
        if (admin.getUsername() == username && admin.getPasswordHash() == passwordHash) {
            cout << "Вход выполнен успешно!" << endl;
            AdminManager::writeOrder();
            return true;
        }
    }

    cout << "Неверное имя пользователя или пароль." << endl;
    return false;
}


void AdminManager::logoutAdmin() {
    cout << "Вы вышли из системы." << endl;

    }
