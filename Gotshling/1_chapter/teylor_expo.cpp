#include <iostream>
using namespace std;

int main()
{
    double x = 2.0, xn = 1.0, exp_x = 1.0;
    unsigned long fac = 1;
    for (unsigned long i = 1; i <= 10; ++i)
    {
        xn *= x;
        fac *= i;
        exp_x += xn / fac;
        cout << "e^x = " << exp_x << '\n';
    }
    return 0;
}