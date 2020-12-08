#include <iostream>
using namespace std;

int main()
{
    const float r1 = 3.5, r2 = 7.3, pi = 3.1415926535;
    float areal = pi * r1 * r2;
    cout << r1 << " " << areal << " " << endl;
    cout << r1 << " " << r2 << " " << (r1 + r2) / 2 << endl;
    return 0;
}
