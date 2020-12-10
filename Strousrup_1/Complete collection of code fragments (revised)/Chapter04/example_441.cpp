#include "std_lib_facilities.h"

int main()
{
    int a = 0;
    int b = 0;
    cout << "PLease, enter two counts";
    cin >> a >> b;
    if (a < b)
    {
        cout << "max(" << a << "," << b << ") equal " << b << '\n';
    }
    else
    {
        cout << "max(" << a << "," << b << ") equal " << a << '\b';
    }
    return 0;
}