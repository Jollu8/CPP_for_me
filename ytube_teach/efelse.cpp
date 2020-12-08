#include <iostream>
using namespace std;

int main()
{
    int age;
    cin >> age;

    if (age > 20)
    {
        cout << "age > 20";
    }
    else if (age < 20)
    {
        cout << "age < 20";
    }
    else
    {
        cout << "Error";
    }
}