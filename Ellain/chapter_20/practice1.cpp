#include <iostream>
using namespace std;
int exponent(int base, int exp)
{
    int running_value; // error here! int running_value = 1
    for (int i = 0; i < exp; i++)
    {
        running_value *= base;
    }
    return base;
}

int main()
{
    int base;
    int exp;

    cout << "Enter a base value: ";
    cin >> base;
    cout << "Enter an Exponent: ";
    cin >> exp;
    exponent(exp, base);
}