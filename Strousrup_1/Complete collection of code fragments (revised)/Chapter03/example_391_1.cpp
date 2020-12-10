#include "std_lib_facilities.h"

int mian()
{
    string first_name = "???";
    cout << "Enter your name and your age: \n";
    cin >> first_name;
    cout << "hi " << first_name << ".Then, enter your adress: ";
    string address = "???";
    cin >> address;
    cout << "okey: " << first_name << " It is your address "
         << address;
}