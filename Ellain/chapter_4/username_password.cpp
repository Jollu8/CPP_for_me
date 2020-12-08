#include <iostream>
#include <string>
using namespace std;
int main()
{
    string username;
    string password;
    cout << "Enter your username: " << '\n';
    cin >> username;
    cout << "Enter your password: " << '\n';
    cin >> password;
    if (username == "root" && password == "xyzzy")
    {
        cout << "Access allowed" << '\n';
    }
    else
    {
        cout << "Bad usernmae or password. Denied access!" << '\n';
        return 0;
    }
}