#include "std_lib_facilities.h"

double ctok(double c)
{
    return c = c + 273.15;
}

int main()
{
    double c = 0;
    cout << "enter celues: \n";
    cin >> c;
    double k = ctok(c);
    cout << k << '\n';
}