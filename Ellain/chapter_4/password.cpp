#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    string password;
    cout << "Enter your password: "
         << "\n";
    getline(cin, password, "\n");
    if (password == "xyzzy")
    {
        cout << "Access allowed";
    }
    else
    {
        cout << "Bad password. Denied access!"
             << "\n";
        return 0;
    }
}